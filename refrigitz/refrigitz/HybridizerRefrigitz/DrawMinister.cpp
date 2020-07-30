﻿#include "DrawMinister.h"



long long DrawMinister::MaxHeuristicxM = -20000000000000000;

	

	DrawMinister::~DrawMinister()
	{

		InitializeInstanceFields();
		ValuableSelfSupported.clear();

	}
	DrawMinister::DrawMinister(){}
	bool DrawMinister::MaxFound(bool &MaxNotFound)
	{

		int a = ReturnHeuristic();
		if (MaxHeuristicxM < a)
		{
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				MaxNotFound = false;
				if (ThinkingHybridizerRefrigitz::MaxHeuristicx < MaxHeuristicxM)
				{
					ThinkingHybridizerRefrigitz::MaxHeuristicx = a;
				}
				MaxHeuristicxM = a;
			}

			return true;
		}

		MaxNotFound = true;

		return false;
	}

	int DrawMinister::ReturnHeuristic()
	{
		int HaveKilled = 0;

		int a = 0;
		
			a += MinisterThinking.ReturnHeuristic(-1, -1, Order, false,HaveKilled);
		

		return a;
	}

	DrawMinister::DrawMinister(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur)
	{

		InitializeInstanceFields();
		//auto balance//lock = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (balance//lock)
		{

			CurrentAStarGredyMax = CurrentAStarGredy;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			ArrangmentsChanged = Arrangments;
			//Initiate Global Variables.
			*Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  ii = 0; ii < 8; ii++)
			{
				for (int  jj = 0; jj < 8; jj++)
				{
					Table[ii][jj] = Tab[ii][jj];
				}
			}
			
				MinisterThinking = ThinkingHybridizerRefrigitz(0,5,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(i), static_cast<int>(j), a, CloneATable(Tab), 32, Ord, TB, Cur, 2, 5);
		
			Row = i;
			Column = j;
			color = a;
			Current = Cur;
			Order = Ord;
		}

	}

	int **DrawMinister::CloneATable(int** Tab)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Create and new an Object.
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			//Assigne Parameter To New Objects.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			//Return New Object.

			return Table;
		}

	}

	bool **DrawMinister::CloneATableb(bool** Tab)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Create and new an Object.
			bool **Table; *Table = new bool[8]; for (int b = 0; b < 8; b++)Table[b] = new bool[8];

			//Assigne Parameter To New Objects.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			//Return New Object.

			return Table;
		}

	}

	/*void DrawMinister::Clone(DrawMinister *&AA)
	{

		int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				Tab[i][j] = this->Table[i][j];
			}
		}
		//Initiate an Object and Clone a Construction Objectve.
		AA =new DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, this->color, this->CloneATable(Table), this->Order, false, this->Current);
		AA.ArrangmentsChanged = ArrangmentsChanged;
		for (int  i = 0; i < AllDraw::MinisterMovments; i++)
		{

			AA.MinisterThinking = ThinkingHybridizerRefrigitz(i,5,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(this->[So2].), static_cast<int>(this->Column));
			this->MinisterThinking.Clone(AA.MinisterThinking);


		}
		*AA.Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
		for (int  ii = 0; ii < 8; ii++)
		{
			for (int  jj = 0; jj < 8; jj++)
			{
				AA.Table[ii][jj] = Tab[ii][jj];
			}
		}
		AA.[So2]. = Row;
		AA.Column = Column;
		AA.Order = Order;
		AA.Current = Current;
		AA.color = color;

	}

	*/void DrawMinister::DrawMinisterOnTable(int CellW, int CellH)
	{
		//auto balance//lockS = new Object();

//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (balance//lockS)
		{

			try
			{

					 //WHITE int.
				if ((static_cast<int>(Row) >= 0) && (static_cast<int>(Row) < 8) && (static_cast<int>(Column) >= 0) && (static_cast<int>(Column) < 8))
				{
					//WHITE Order.
					if (Order == 1)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{ //Draw an Instant from File of WHITE Soldeirs.
							 //Draw a WHITE Instatnt Minister Image on the Table.
							//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
						}
					}
					else
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{ //Draw an Instant from File of WHITE Soldeirs.
							 //Draw a BLACK Instatnt Minister Image on the Table.
							//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MB.png"), new Rectangle((int)([So2]. * CellW), (int)(Column * (float)CellH), CellW, CellH);
						}
					}
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}

		}
	}

	void DrawMinister::InitializeInstanceFields()
	{
		//Space = new std::string(L"&nbsp;");
		Spaces = 0;
		WinOcuuredatChiled = 0;
		int *temp_LoseOcuuredatChiled = new int[3];
		for (int element = 0; element < sizeof(temp_LoseOcuuredatChiled) / sizeof(temp_LoseOcuuredatChiled[0]); element++)
			LoseOcuuredatChiled[element] = temp_LoseOcuuredatChiled[element];
		ValuableSelfSupported = std::vector<int*>();
		MovementsAStarGreedyHeuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = true;
		BestMovmentsT = false;
		PredictHeuristicT = true;
		OnlySelfT = false;
		AStarGreedyHeuristicT = false;
		ArrangmentsChanged = true;
		Row = 0;
		Column = 0;
		color = (int)0;
		Table = 0;
		Current = 0;
		Order = 0;
		CurrentAStarGredyMax = -1;
	}

