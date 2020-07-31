#include "DrawHourse.h"



long long DrawHourse::MaxHeuristicxH = -20000000000000000;

	

	DrawHourse::~DrawHourse()
	{

		InitializeInstanceFields();
		ValuableSelfSupported.clear();

	}
	DrawHourse::DrawHourse(){}

	bool DrawHourse::MaxFound(bool &MaxNotFound)
	{

		int a = ReturnHeuristic();
		if (MaxHeuristicxH < a)
		{
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				MaxNotFound = false;
				if (ThinkingHybridizerRefrigitz::MaxHeuristicx < MaxHeuristicxH)
				{
					ThinkingHybridizerRefrigitz::MaxHeuristicx = a;
				}
				MaxHeuristicxH = a;
			}

			return true;
		}

		MaxNotFound = true;

		return false;
	}

	int DrawHourse::ReturnHeuristic()
	{
		int HaveKilled = 0;

		int a = 0;
		for (int  ii = 0; ii < AllDraw::HourseMovments; ii++)

		{
			a += HourseThinking->ReturnHeuristic(-1, -1, Order, false,HaveKilled);
		}

		return a;
	}

	DrawHourse::DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur)
	{


		InitializeInstanceFields();
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
			//Initiate Global Variable By Local Paramenters.
			*Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  ii = 0; ii < 8; ii++)
			{
				for (int  jj = 0; jj < 8; jj++)
				{
					Table[ii][jj] = Tab[ii][jj];
				}
			}
			
				HourseThinking = new ThinkingHybridizerRefrigitz(0,3,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(i), static_cast<int>(j), a, CloneATable(Tab), 8, Ord, TB, Cur, 4, 3);
		
			Row = i;
			Column = j;
			color = a;
			Order = Ord;
			Current = Cur;
		}

	}

	int **DrawHourse::CloneATable(int** Tab)
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

	bool **DrawHourse::CloneATableb(bool** Tab)
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
	/*
	void DrawHourse::Clone(DrawHourse *&AA)
	{

		int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				Tab[i][j] = this->Table[i][j];
			}
		}
		//Create a Construction Ojects and Initiate a Clone Copy.
		AA = new DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, this->Row, this->Column, this->color, this->CloneATable(Table), this->Order, false, this->Current);
		AA->ArrangmentsChanged = ArrangmentsChanged;
		for (int  i = 0; i < AllDraw::HourseMovments; i++)
		{

			AA->HourseThinking = new ThinkingHybridizerRefrigitz(i,3,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(this->[So2].), static_cast<int>(this->Column));
			this->HourseThinking->Clone(AA->HourseThinking);

		}
		*AA->Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
		for (int  ii = 0; ii < 8; ii++)
		{
			for (int  jj = 0; jj < 8; jj++)
			{
				AA->Table[ii][jj] = Tab[ii][jj];
			}
		}
		AA->[So2]. = Row;
		AA->Column = Column;
		AA->Order = Order;
		AA->Current = Current;
		AA->color = color;

	}
*/
	void DrawHourse::DrawHourseOnTable(int CellW, int CellH)
	{
		//auto balance//lockS = new Object();

//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (balance//lockS)
		{

			try
			{


				if ((static_cast<int>(Row) >= 0) && (static_cast<int>(Row) < 8) && (static_cast<int>(Column) >= 0) && (static_cast<int>(Column) < 8))
				{ //WHITE Order.
					if (Order == 1)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{ //Draw an Instant from File of WHITE Soldeirs.
							 //Draw an Instatnt WHITE Hourse on the Table.
							//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
						}
					}
					else
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{ //Draw an Instant from File of WHITE Soldeirs.
							 //Draw an Instatnt BLACK Hourse on the Table.
							//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
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

	void DrawHourse::InitializeInstanceFields()
	{
		//Space = new std::string("&nbsp;");
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

