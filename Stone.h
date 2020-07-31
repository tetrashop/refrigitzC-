#pragma once
#include "Board.h"


//
//www.IranProject.Ir
//

#include "stdafx.h"



	class IStone
	{
	public:
		virtual int move(Board *b, int x2, int y2) = 0;
		virtual int playable(Board *b, int x2, int y2) = 0;
	};

	class Stone 
	{
	public:
		Stone();
		int color;
		int x;
		int y;

	private:
		void InitializeInstanceFields();
	};

	class Pawn : public Stone, public IStone
	{
	public:
		Pawn(int c, int i, int j);
		int move(Board *brd, int x2, int y2);
		int playable(Board *brd, int x2, int y2);
	};

	class Knight : public Stone, public IStone
	{
	public:
		Knight(int c, int i, int j);
		int move(Board *brd, int x2, int y2);
		int playable(Board *brd, int x2, int y2);
	};

	class Castle : public Stone, public IStone
	{
	public:
		Castle(int c, int i, int j);
		int move(Board *brd, int x2, int y2);

		int playable(Board *brd, int x2, int y2);
	};


	class Bishop : public Stone, public IStone
	{
	public:
		Bishop(int c, int i, int j);

		int move(Board *brd, int x2, int y2);

		int playable(Board *brd, int x2, int y2);
	};

	class Queen : public Stone, public IStone
	{
	public:
		Queen(int c, int i, int j);

		int move(Board *brd, int x2, int y2);

		int playable(Board *brd, int x2, int y2);
	};

	class King : public Stone, public IStone
	{
	public:
		King(int c, int i, int j);

		int move(Board *brd, int x2, int y2);

		int isChecked(Board *brd2);

		int playable(Board *brd, int x2, int y2);
	};

