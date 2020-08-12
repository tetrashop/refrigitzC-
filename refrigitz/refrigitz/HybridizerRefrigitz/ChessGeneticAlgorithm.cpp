#include "HybridizerRefrigitzGeneticAlgorithm.h"
#include "AllDraw.h"
#include "ChessRules.h"
#include "ThinkingHybridizerRefrigitz.h"



bool HybridizerRefrigitzGeneticAlgorithm::NoGameFounf = false;


	HybridizerRefrigitzGeneticAlgorithm::HybridizerRefrigitzGeneticAlgorithm(bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
	{
		InitializeInstanceFields();
		MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
		IgnoreSelfObjectsT = IgnoreSelfObject;
		UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
		BestMovmentsT = BestMovment;
		PredictHeuristicT = PredictHurist;
		OnlySelfT = OnlySel;
		AStarGreedyHeuristicT = AStarGreedyHuris;
		ArrangmentsChanged = Arrangments;
		//Initiate Global Variables.
		RowColumn.clear();
	}

	bool HybridizerRefrigitzGeneticAlgorithm::FindHitToModified(int ** Cromosom1, int ** Cromosom2, std::vector<int**> &List, int Index, int Order, bool and)
	{
		bool Find = false;
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				if (Order == 1 && Cromosom1[i][j] <= 0)
				{
					continue;
				}
				if (Order == -1 && Cromosom1[i][j] >= 0)
				{
					continue;
				}
				if (Order == 1)
				{
					if (Cromosom1[i][j] != Cromosom2[i][j])
					{
						if (Order == 1)
						{
							if (Cromosom1[i][j] > 0 && Cromosom2[i][j] < 0)
							{
								CromosomRowHit = i;
								CromosomColumnHit = j;
								Find = true;
								break;
							}
						}
						else
						{
							if (Cromosom1[i][j] < 0 && Cromosom2[i][j] > 0)
							{
								CromosomRowHit = i;
								CromosomColumnHit = j;
								Find = true;
								break;
							}

						}
					}
				}

			}
			if (Find)
			{
				break;
			}
		}
		return Find;
	}

	bool HybridizerRefrigitzGeneticAlgorithm::FindGenToModified(int ** Cromosom1, int ** Cromosom2, std::vector<int**> &List, int Index, int Order, bool and)
	{
		ChessRules::SmallKingCastleBLACK = false;
		ChessRules::SmallKingCastleWHITE = false;
		ChessRules::BigKingCastleBLACK = false;
		ChessRules::BigKingCastleWHITE = false;
		//Injtjate Local Varjables.
		bool Find = false;
		int FindNumber = 0;
		bool Brj = false;

		//For All Table Home
		for (int  j = 0; j < 8; j++)
		{
			for (int  i = 0; i < 8; i++)
			{
				if (Cromosom1[j][i] == 0 && Cromosom2[j][i] == 0)
				{
					continue;
				}

				//WHITE Order.

				if (!ArrangmentsChanged)
				{
					{
						if (Order == 1 && i == ConversionDistantRowBelow && j > 0 && j < 7)
						{
							if (((Cromosom2[j][i + PlusOne] > 0) || (Cromosom2[j + PlusOne][i + PlusOne] > 0 && Cromosom1[j + PlusOne][i + PlusOne] < 0) || (Cromosom2[j + MinusOne][i + PlusOne] > 0 && Cromosom1[j + MinusOne][i + PlusOne] < 0)) && Cromosom1[j][i] == 1)
							{
								CromosomRowFirst = j;
								CromosomColumnFirst = i;
								if (Cromosom2[j][i + PlusOne] > 0)
								{
									CromosomRow = j;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + PlusOne][i + PlusOne] > 0 && Cromosom1[j + PlusOne][i + PlusOne] < 0)
								{
									CromosomRow = j + PlusOne;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + MinusOne][i + PlusOne] > 0 && Cromosom1[j + MinusOne][i + PlusOne] < 0)
								{
									CromosomRow = j + MinusOne;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}

							}

						}
						else
						{
							if (Order == -1 && i == ConversionDistantRowUp && j > 0 && j < 7)
							{
							if (((Cromosom2[j][i + MinusOne] < 0) || (Cromosom2[j + PlusOne][i + MinusOne] < 0 && Cromosom1[j + PlusOne][i + MinusOne] > 0) || (Cromosom2[j + MinusOne][i + MinusOne] < 0 && Cromosom1[j + MinusOne][i + MinusOne] < 0)) && Cromosom1[j][i] == -1)
							{
								CromosomRowFirst = j;
								CromosomColumnFirst = i;
								if (Cromosom2[j][i + MinusOne] > 0)
								{
									CromosomRow = j;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + PlusOne][i + MinusOne] > 0 && Cromosom1[j + PlusOne][i + MinusOne] < 0)
								{
									CromosomRow = j + PlusOne;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + MinusOne][i + MinusOne] > 0 && Cromosom1[j + MinusOne][i + MinusOne] < 0)
								{
									CromosomRow = j + MinusOne;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
							}
							}
						}

						//Castles King Valjdjty Condjtjon.
						if (Order == 1 && i == DistantRowUp)
						{
							//Small WHITE Castles King.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == KingWHITE && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == CastleWHITE && Cromosom1[SmallCastleKingColumnBefore][DistantRowUp] == KingWHITE && Cromosom1[SmallCastleCastleColumnBefore][DistantRowUp] == CastleWHITE)
							{
								CromosomRowFirst = SmallCastleKingColumnBefore;
								CromosomColumnFirst = i;
								CromosomRow = SmallCastleCastleColumnAfter;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleWHITE = true;
								Brj = true;
							}
							else //Big Brjges King WHITE.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowUp] == CastleWHITE && Cromosom2[BigCastleKingColumnAfter][DistantRowUp] == KingWHITE && Cromosom1[BigCastleCastleColumnBefore][DistantRowUp] == CastleWHITE && Cromosom1[BigCastleKingColumnBefore][DistantRowUp] == KingWHITE)
								{
								CromosomRowFirst = DistantRowUp;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowUp;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleWHITE = true;
								Brj = true;
								}
							}

						}
						else if (i == DistantRowBelow)
						{
							//Small Castles King BLACK.
							if (j == DistantColumnSmall && Cromosom2[BigCastleKingColumnAfter][DistantRowBelow] == KingBLACK && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleBLACK && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingBLACK && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleBLACK)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									CromosomRowFirst = DistantRowBelow;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowBelow;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::SmallKingCastleBLACK = true;
									Brj = true;
								}
							}
							else //Big Castles King BLACK.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleBLACK && Cromosom2[BigCastleKingColumnBefore][DistantRowBelow] == KingBLACK && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleBLACK && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingBLACK)
								{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									CromosomRowFirst = DistantRowBelow;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowBelow;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::BigKingCastleBLACK = true;
									Brj = true;
								}
								}
							}

						}

					}
				}
				else
				{
					{
						if (Order == 1 && i == ConversionDistantRowUp && j > 0 && j < 7)
						{
							if (((Cromosom2[j][i + MinusOne] > 0) || (Cromosom2[j + PlusOne][i + MinusOne] > 0 && Cromosom1[j + PlusOne][i + MinusOne] < 0) || (Cromosom2[j + MinusOne][i + MinusOne] > 0 && Cromosom1[j + MinusOne][i + MinusOne] < 0)) && Cromosom1[j][i] == 1)
							{
								CromosomRowFirst = j;
								CromosomColumnFirst = i;
								if (Cromosom2[j][i + MinusOne] > 0)
								{
									CromosomRow = j;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + PlusOne][i + MinusOne] > 0 && Cromosom1[j + PlusOne][i + MinusOne] < 0)
								{
									CromosomRow = j + PlusOne;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + MinusOne][i + MinusOne] > 0 && Cromosom1[j + MinusOne][i + MinusOne] < 0)
								{
									CromosomRow = j + MinusOne;
									CromosomColumn = i + MinusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}

							}

						}
						else
						{
							if (Order == -1 && i == ConversionDistantRowBelow && j > 0 && j < 7)
							{
							if (((Cromosom2[j][i + PlusOne] < 0) || (Cromosom2[j + PlusOne][i + PlusOne] < 0 && Cromosom1[j + PlusOne][i + PlusOne] > 0) || (Cromosom2[j + MinusOne][i + PlusOne] < 0 && Cromosom1[j + MinusOne][i + PlusOne] < 0)) && Cromosom1[j][i] == -1)
							{
								CromosomRowFirst = j;
								CromosomColumnFirst = i;
								if (Cromosom2[j][i + PlusOne] > 0)
								{
									CromosomRow = j;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + PlusOne][i + PlusOne] > 0 && Cromosom1[j + PlusOne][i + PlusOne] < 0)
								{
									CromosomRow = j + PlusOne;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
								else if (Cromosom2[j + MinusOne][i + PlusOne] > 0 && Cromosom1[j + MinusOne][i + PlusOne] < 0)
								{
									CromosomRow = j + MinusOne;
									CromosomColumn = i + PlusOne;
									Find = true;
									FindNumber++;
									AllDraw::SodierConversionOcuured = true;
								}
							}
							}
						}

						//Castles King Valjdjty Condjtjon.
						if (Order == 1 && i == DistantRowBelow)
						{
							//Small WHITE Castles King.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleKingColumnAfter][DistantRowBelow] == KingWHITE && Cromosom2[SmallCastleCastleColumnAfter][DistantRowBelow] == CastleWHITE && Cromosom1[SmallCastleKingColumnBefore][DistantRowBelow] == KingWHITE && Cromosom1[SmallCastleCastleColumnBefore][DistantRowBelow] == CastleWHITE)
							{
								CromosomRowFirst = DistantRowBelow;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowBelow;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleWHITE = true;
								Brj = true;
							}
							else //Big Brjges King WHITE.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleWHITE && Cromosom2[BigCastleKingColumnAfter][DistantRowBelow] == KingWHITE && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleWHITE && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingWHITE)
								{
								CromosomRowFirst = DistantRowBelow;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowBelow;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleWHITE = true;
								Brj = true;
								}
							}

						}
						else if (i == DistantRowUp)
						{
							//Small Castles King BLACK.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleKingColumnAfter][DistantRowUp] == KingBLACK && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == CastleBLACK && Cromosom1[SmallCastleKingColumnBefore][DistantRowUp] == KingBLACK && Cromosom1[SmallCastleCastleColumnBefore][DistantRowUp] == CastleBLACK)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									CromosomRowFirst = DistantRowUp;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowUp;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::SmallKingCastleBLACK = true;
									Brj = true;
								}
							}
							else //Big Castles King BLACK.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowUp] == CastleBLACK && Cromosom2[BigCastleKingColumnAfter][DistantRowUp] == KingBLACK && Cromosom1[BigCastleCastleColumnBefore][DistantRowUp] == CastleBLACK && Cromosom1[BigCastleKingColumnBefore][DistantRowUp] == KingBLACK)
								{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									CromosomRowFirst = DistantRowUp;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowUp;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::BigKingCastleBLACK = true;
									Brj = true;
								}
								}
							}

						}

					}
				}

				//When To Same Locatjon Tbles are Different jn Gen.
				if (Cromosom1[j][i] != Cromosom2[j][i])
				{
					if (Order == 1)
					{
						if (Cromosom2[j][i] > 0 && Cromosom1[j][i] <= 0)
						{
							CromosomRow = j;
							CromosomColumn = i;
							Find = true;
							FindNumber++;

						}

						else
						{
						if (Cromosom2[j][i] == 0 && Cromosom1[j][i] > 0)
						{
							CromosomRowFirst = j;
							CromosomColumnFirst = i;
							Find = true;
							FindNumber++;

						}
						}
					}
					else
					{
						if (Cromosom2[j][i] < 0 && Cromosom1[j][i] >= 0)
						{
							CromosomRow = j;
							CromosomColumn = i;
							Find = true;
							FindNumber++;

						}

						else
						{
					   if (Cromosom2[j][i] == 0 && Cromosom1[j][i] < 0)
					   {
							CromosomRowFirst = j;
							CromosomColumnFirst = i;
							Find = true;
							FindNumber++;

					   }
						}
					}
				}

			}
		}
		Hit = HitSet(Order, Cromosom1, Cromosom2);

		//If Gen Foundatjon js Valjd. 
		if (((FindNumber >= 1) && Find) || Brj || AllDraw::SodierConversionOcuured)
		{
			return Find;
		}
		//Gen Not Found.
		return false;
	}

	bool HybridizerRefrigitzGeneticAlgorithm::HitSet(int Order, int ** Cromosom1, int ** Cromosom2)
	{
		bool Hit = false;
		try
		{
			if (CromosomRowFirst != -1 && CromosomColumnFirst != -1 && CromosomRow != -1 && CromosomColumn != -1)
			{
				if (Order == 1)
				{
					if (Cromosom1[CromosomRowFirst][CromosomColumnFirst] > 0 && Cromosom1[CromosomRow][CromosomColumn] < 0)
					{
						Hit = true;
					}
				}
				else
				{
					if (Cromosom1[CromosomRowFirst][CromosomColumnFirst] < 0 && Cromosom1[CromosomRow][CromosomColumn] > 0)
					{
						Hit = true;
					}
				}
			}
		}
		catch (std::exception &t)
		{
			
		}
		return Hit;
	}

	int **HybridizerRefrigitzGeneticAlgorithm::CloneATable(int** Tab)
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

	bool **HybridizerRefrigitzGeneticAlgorithm::CloneATableb(bool** Tab)
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
	int **HybridizerRefrigitzGeneticAlgorithm::GenerateTable(std::vector<int**> &List, int Index, int Order)
	{
		*GeneticTable = new int[8]; for (int b = 0; b < 8; b++)GeneticTable[b] = new int[8];
		//Initiate Local Variables.
		Begine5:
		RowColumn.clear();
		int Store = Index;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Cromosom1 = nullptr;
		int **Cromosom1 = nullptr;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Cromosom2 = nullptr;
		int **Cromosom2 = nullptr;
		try
		{
			Cromosom1 = List[List.size() - 2];
			Cromosom2 = List[List.size() + MinusOne];
		}
		catch (IndexOutOfRangeException t)
		{
			
			return nullptr;
		}

		Index = Store;
		//Found of Gen.
		if (!FindGenToModified(Cromosom1, Cromosom2, List, Index, Order, false))
		{
			goto EndFindAThing;
		}





		//Initiate Global Variables.
		BeginFind:
		int color = 1;
		if (Order == -1)
		{
			color = -1;
		}
		try
		{
			//If Cromosom Location is Not Founded.
			if (CromosomRow == -1 && CromosomColumn == -1)
			{
				//Initiayte Local Variables.
				List.erase(List.size() + MinusOne);
				Index--;
				goto Begine5;
			}
			//Found Kind Of Gen.
			Ki = List[List.size() + MinusOne][CromosomRow][CromosomColumn];
			//Initiate Local Variables.
			*GeneticTable = new int[8]; for (int b = 0; b < 8; b++)GeneticTable[b] = new int[8];
			//If Gen Kind Not Found Retrun Not Valididity.
			if (List[List.size() + MinusOne][CromosomRow][CromosomColumn] == 0)
			{
				return nullptr;
			}
			else
			{
				//Clone a Copy.
				for (int  ii = 0; ii < 8; ii++)
				{
					for (int  jj = 0; jj < 8; jj++)
					{
						GeneticTable[ii][jj] = List[List.size() + MinusOne][ii][jj];
					}
				}
			}
			//Initiate Global and Local Variables.
			color = 1;
			if (Order == -1)
			{
				color = -1;
			}
			//For All Gens.
			for (Gen1 = 0; Gen1 < 8; Gen1++)
			{
				for (Gen2 = 0; Gen2 < 8; Gen2++)
				{
					//If Gen is Current Gen Location Continue Traversal Back.
					if (Gen1 == CromosomRow && Gen2 == CromosomColumn)
					{
						continue;
					}
					//Rulement of Gen Movments.
					if ((new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, GeneticTable[CromosomRow][CromosomColumn], CloneATable(GeneticTable), Order, CromosomRow, CromosomColumn))->Rules(CromosomRow, CromosomColumn, Gen1, Gen2, color, GeneticTable[CromosomRow][CromosomColumn]))
					{
						//Initiate Global Variables and Syntax.
						int A[2];
						A[0] = CromosomRow;
						A[1] = CromosomColumn;
						RowColumn.push_back(A);



						GeneticTable[Gen1][Gen2] = GeneticTable[CromosomRow][CromosomColumn];
						GeneticTable[CromosomRow][CromosomColumn] = 0;
						//Table Repeatative Consideration.
						if (ThinkingHybridizerRefrigitz::ExistTableInList(CloneATable(GeneticTable), List, 0))
						{
							GeneticTable[CromosomRow][CromosomColumn] = GeneticTable[Gen1][Gen2];
							GeneticTable[Gen1][Gen2] = 0;
							continue;

						}
						else
						{
							//Check Consideration.
							if ((new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, GeneticTable[CromosomRow][CromosomRow], CloneATable(GeneticTable), Order, CromosomRow, CromosomColumn))->Check(CloneATable(GeneticTable), Order))
							{
								GeneticTable[CromosomRow][CromosomColumn] = GeneticTable[Gen1][Gen2];
								GeneticTable[Gen1][Gen2] = 0;
								continue;
							}

							else
							{

								//Return Genetic Table.
								return GeneticTable;
							}

						}
					}


				}
			}
			//Initiate Try Catch.
			GeneticTable = nullptr;
			int a = GeneticTable[0][0];
		}

		catch (NullReferenceException t)
		{
			//Try Catch Expetion Handling of Not Successful Foundation of Gen.
			
			if (Order == 1)
			{
				Ki = (new Random())->Next(1, 7);
			}
			else
			{
				Ki = (new Random())->Next(1, 7) * -1;
			}

			if (Order == 1)
			{
				int Count = 0;
				do
				{
					if (Ki < 6)
					{
						Ki++;
					}
					else
					{
						Ki = 1;
					}
					Count++;
				} while (Count < 6 && !(new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Ki, List[List.size() + MinusOne], Order, CromosomRow, CromosomColumn))->FindAThing(List[List.size() + MinusOne], CromosomRow, CromosomColumn, Ki, true, RowColumn));
				if (Count >= 6)
				{
					NoGameFounf = true;
					return nullptr;
				}


			}
			else
			{
				int Count = 0;
				do
				{
					if (Ki > -6)
					{
						Ki--;
					}
					else
					{
						Ki = -1;
					}
					Count++;
				} while (Count < 6 && !(new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Ki, List[List.size() + MinusOne], Order, CromosomRow, CromosomColumn))->FindAThing(List[List.size() + MinusOne], CromosomRow, CromosomColumn, Ki, true, RowColumn));
				if (Count >= 6)
				{
					NoGameFounf = true;
					return nullptr;
				}






			}

			goto BeginFind;
		}

		EndFindAThing:
		//Foudn of Some Samness Gen.
		if (Order == 1)
		{
			Ki = (new Random())->Next(1, 7);
		}
		else
		{
			Ki = (new Random())->Next(1, 7) * -1;
		}
		if (Order == 1)
		{
			int Count = 0;
			do
			{
				if (Ki < 6)
				{
					Ki++;
				}
				else
				{
					Ki = 1;
				}
				Count++;
			} while (Count < 6 && !(new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Ki, List[List.size() + MinusOne], Order, CromosomRow, CromosomColumn))->FindAThing(List[List.size() + MinusOne], CromosomRow, CromosomColumn, Ki, true, RowColumn));
			if (Count >= 6)
			{
				return nullptr;
			}

		}
		else
		{
			int Count = 0;
			do
			{
				if (Ki > -6)
				{
					Ki--;
				}
				else
				{
					Ki = -1;
				}
				Count++;
			} while (Count < 6 && !(new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Ki, List[List.size() + MinusOne], Order, CromosomRow, CromosomColumn))->FindAThing(List[List.size() + MinusOne], CromosomRow, CromosomColumn, Ki, true, RowColumn));
			if (Count >= 6)
			{
				return nullptr;
			}
		}

		goto BeginFind;


	}
*/
	void HybridizerRefrigitzGeneticAlgorithm::InitializeInstanceFields()
	{
		Hit = false;
		MovementsAStarGreedyHeuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = true;
		BestMovmentsT = false;
		PredictHeuristicT = true;
		OnlySelfT = false;
		AStarGreedyHeuristicT = false;
		ArrangmentsChanged = true;
		CastlesKing = false;
		RowColumn = std::vector<int*>();
		Ki = 0;
		CromosomRow = -1;
		CromosomColumn = -1;
		CromosomRowHit = -1;
		CromosomColumnHit = -1;
		CromosomRowFirst = -1;
		CromosomColumnFirst = -1;
		Gen1 = 0;
		Gen2 = 0;
	}

