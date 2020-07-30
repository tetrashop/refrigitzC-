#pragma once
#include "stdafx.h"

#include <string>
#include "Point.h"
//
//www.IranProject.Ir
//


	/// <summary>
	/// Summary description for Board.
	/// </summary>
	class Board 
	{
	public:
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] square;
		int **square;

		Board();
		void Setsqure(int** Table);
		int **GetTable();
		int **GetSqure(int** Table);
		int getInfo(int i, int j);

		int getbcolor(int i, int j);

		void setSquare(int value, int i, int j);
		Point *searchKing(int color);
		int isMated(int color);

		int canDefend(int color);
	};

