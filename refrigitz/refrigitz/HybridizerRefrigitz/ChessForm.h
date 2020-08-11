#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include "HybridizerRefrigitzGeneticAlgorithm.h"
#include "AllDraw.h"
//
//www.IranProject.Ir
//



//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class HybridizerRefrigitzForm
	class HybridizerRefrigitzForm
	{
	public:
		bool LoadP;
	private:
		static const bool UsePenaltyRegardMechnisam = false;
		static const bool AStarGreedyHeuristic = false;
		int AllDrawKind;
		bool NotFoundBegin;
		bool Deeperthandeeper;
		const std::wstring path3;
		std::wstring AllDrawReplacement;

	public:
		static int MovmentsNumber;
		static std::wstring Root;
		static std::wstring AllDrawKindString;
		//public static int OrderPlate = 1;
	private:
		bool CoPermit;
		int ConClick;
		bool WaitOnplay;
	public:
		HybridizerRefrigitzGeneticAlgorithm *R;
	private:
		bool Person;
	public:
		AllDraw Draw;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public static int[,] Table = nullptr;
		static int **Table;
	private:
		bool FOUND;
  int cl;
	public:
		int order;
	private:
		int x1;
		int y1;
	public:
		Board *brd;
			 /// <summary>
		/// Required designer variable.
		/// </summary>

	public:
		HybridizerRefrigitzForm();
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

	private:
		void Initiate(int a, int Order);
		void AliceAction(int Order);

		void Init2();

		void ClearTableInitiationPreventionOfMultipleMove();
	public:
		void Form1_Load();
	private:
		void ClickedSimAtClOne(int i, int j);
		static void Log(std::exception &ex);
		int **CloneATable(int** Tab);
		void WaitCon();
		void WaitOnly();
	public:
		int Play(int i, int j);
	private:
		void Wait();
		  public:
		  AllDraw RootFound();
		void SetDrawFounding(bool &FOUNDI, AllDraw &THISI, bool FirstI);
	private:
		bool DrawManagement();
		void SetAllDrawKindString();
		void SetAllDrawKind();
		void SetDrawFound();

	private:
		void InitializeInstanceFields();
	};

