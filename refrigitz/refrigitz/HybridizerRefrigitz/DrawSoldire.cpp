#include "DrawSoldier.h"


int DrawSoldier::MaxHeuristicxS = -DBL_MAX;

	

	DrawSoldier::~DrawSoldier()
	{

		InitializeInstanceFields();
		ValuableSelfSupported.clear();

	}
	DrawSoldier::DrawSoldier(){}

	bool DrawSoldier::MaxFound(bool &MaxNotFound)
	{

		int a = ReturnHeuristic();
		if (MaxHeuristicxS < a)
		{
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				MaxNotFound = false;
				if (ThinkingHybridizerRefrigitz::MaxHeuristicx < MaxHeuristicxS)
				{
					ThinkingHybridizerRefrigitz::MaxHeuristicx = a;
				}
				MaxHeuristicxS = a;
			}

			return true;
		}

		MaxNotFound = true;

		return false;
	}

	int DrawSoldier::ReturnHeuristic()
	{
		int HaveKilled = 0;

		int a = 0;
		for (int  ii = 0; ii < AllDraw::SodierMovments; ii++)

		{
			a += SoldierThinking.ReturnHeuristic(-1, -1, Order, false,HaveKilled);
		}


		return a;
	}

	int **DrawSoldier::CloneATable(int** Tab)
	{
		int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
		
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				Tabl[i][j] = Tab[i][j];
			}
		}
		return Tabl;
	}

	DrawSoldier::DrawSoldier(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur) : ThingsConverter(Arrangments, static_cast<int>(i), static_cast<int>(j), a, Tab, Ord, TB, Cur)
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
			
				SoldierThinking = ThinkingHybridizerRefrigitz(0,1,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(i), static_cast<int>(j), a, CloneATable(Tab), 4, Ord, TB, Cur, 16, 1);
			Row = i;
			Column = j;
			color = a;
			Order = Ord;
			Current = Cur;
		}

	}
	/*
	void DrawSoldier::Clone(DrawSoldier *&AA)
	{

		int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				Tab[i][j] = this->Table[i][j];
			}
		}
		//Initiate a Object and Assignemt of a Clone to Construction of a Copy.

		AA = new DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, this->Row, this->Column, this->color, CloneATable(Tab), this->Order, false, this->Current);
		AA.ArrangmentsChanged = ArrangmentsChanged;
		for (int  i = 0; i < AllDraw::SodierMovments; i++)
		{

			AA.SoldierThinking = ThinkingHybridizerRefrigitz(i,1,CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, static_cast<int>(this->[So2].), static_cast<int>(this->Column));
			this->SoldierThinking.Clone(AA.SoldierThinking);

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

	}*/

	bool **DrawSoldier::CloneATableb(bool** Tab)
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

	void DrawSoldier::DrawSoldierOnTable(int CellW, int CellH)
	{
		//auto balance//lockS = new Object();

//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (balance//lockS)
		{

			try
			{


				//When Conversion Solders Not Occured.
				if (!ConvertOperation(static_cast<int>(Row), static_cast<int>(Column), color, CloneATable(Table), Order, false, Current))
				{

					//WHITE int.
					if ((static_cast<int>(Row) >= 0) && (static_cast<int>(Row) < 8) && (static_cast<int>(Column) >= 0) && (static_cast<int>(Column) < 8))
					{


						//If Order is WHITE.
						if (Order == 1)
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "SG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);

							}
						}
						else
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								 //Draw an Instatnt of BLACK Soldier File On the Table.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "SB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}


					}
					else //If Minsister Conversion Occured.
					{
						if (ConvertedToMinister)
						{

						//int of WHITE.
						if (Order == 1)
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								 //Draw of WHITE Minsister Image File By an Instant.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}
						else
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								 //Draw a Image File on the Table Form n Instatnt One.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "MB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}

						}
					else if (ConvertedToCastle) //When Castled Converted.
					{

						//int of WHITE.
						if (Order == 1)
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								 //Create on the Inststant of WHITE Castles Images.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "BrG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}
						else
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instant from File of WHITE Soldeirs.
								 //Creat of an Instant of BLACK Image Castles.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "BrB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}

					}
					else if (ConvertedToHourse) //When Hourse Conversion Occured.
					{


						//int of WHITE.
						if (Order == 1)
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instatnt of WHITE Hourse Image File.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (int)CellH), CellW, CellH);
							}
						}
						else
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Creat of an Instatnt Hourse Image File.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "HB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}


					}
					else if (ConvertedToElefant) //When Elephant Conversion.
					{

						//int of WHITE.
						if (Order == 1)
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw an Instatnt Image of WHITE Elephant.
								//g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "EG.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}
						else
						{
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{ //Draw of Instant Image of BLACK Elephant.
								////g.DrawImage(Image.FromFile(AllDraw.ImagesSubRoot + "EB.png"), new Rectangle((int)([So2]. * (float)CellW), (int)(Column * (float)CellH), CellW, CellH);
							}
						}


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

	void DrawSoldier::InitializeInstanceFields()
	{
		//Space = "&nbsp;";
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
		Order = 0;
		Current = 0;
		CurrentAStarGredyMax = -1;
	}

