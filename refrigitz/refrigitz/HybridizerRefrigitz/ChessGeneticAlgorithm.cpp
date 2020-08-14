#include "ChessGeneticAlgorithm.h"
#include "AllDraw.h"
#include "ChessRules.h"
#include "ThinkingHybridizerRefrigitz.h"



bool ChessGeneticAlgorithm::NoGameFounf = false;

	

	ChessGeneticAlgorithm::ChessGeneticAlgorithm(bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
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
		//Initiate Global autoiables.
		RowColumn.clear();
	}

	bool ChessGeneticAlgorithm::FindHitToModified(int **Cromosom1, int **Cromosom2, std::vector<int**> &List, int Index, int Order, bool and)
	{
		bool Find = false;
		for (auto i = 0; i < 8; i++)
		{
			for (auto j = 0; j < 8; j++)
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

	bool ChessGeneticAlgorithm::FindGenToModified(int **Cromosom1, int **Cromosom2, std::vector<int**> &List, int Index, int Order, bool and)
	{
		ChessRules::SmallKingCastleBrown = false;
		ChessRules::SmallKingCastleGray = false;
		ChessRules::BigKingCastleBrown = false;
		ChessRules::BigKingCastleGray = false;
		//Injtjate Local autojables.
		bool Find = false;
		int FindNumber = 0;
		bool Brj = false;

		//For All Table Home
		for (auto j = 0; j < 8; j++)
		{
			for (auto i = 0; i < 8; i++)
			{
				if (Cromosom1[j][i] == 0 && Cromosom2[j][i] == 0)
				{
					continue;
				}

				//Gray Order.

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
							//Small Gray Castles King.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == KingGray && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == CastleGray && Cromosom1[SmallCastleKingColumnBefore][DistantRowUp] == KingGray && Cromosom1[SmallCastleCastleColumnBefore][DistantRowUp] == CastleGray)
							{
								CromosomRowFirst = SmallCastleKingColumnBefore;
								CromosomColumnFirst = i;
								CromosomRow = SmallCastleCastleColumnAfter;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleGray = true;
								Brj = true;
							}
							else //Big Brjges King Gray.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowUp] == CastleGray && Cromosom2[BigCastleKingColumnAfter][DistantRowUp] == KingGray && Cromosom1[BigCastleCastleColumnBefore][DistantRowUp] == CastleGray && Cromosom1[BigCastleKingColumnBefore][DistantRowUp] == KingGray)
								{
								CromosomRowFirst = DistantRowUp;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowUp;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleGray = true;
								Brj = true;
								}
							}

						}
						else if (i == DistantRowBelow)
						{
							//Small Castles King Brown.
							if (j == DistantColumnSmall && Cromosom2[BigCastleKingColumnAfter][DistantRowBelow] == KingBrown && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleBrown && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingBrown && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleBrown)
							{
								
									CromosomRowFirst = DistantRowBelow;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowBelow;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::SmallKingCastleBrown = true;
									Brj = true;
								
							}
							else //Big Castles King Brown.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleBrown && Cromosom2[BigCastleKingColumnBefore][DistantRowBelow] == KingBrown && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleBrown && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingBrown)
								{
								
									CromosomRowFirst = DistantRowBelow;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowBelow;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::BigKingCastleBrown = true;
									Brj = true;
								
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
							//Small Gray Castles King.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleKingColumnAfter][DistantRowBelow] == KingGray && Cromosom2[SmallCastleCastleColumnAfter][DistantRowBelow] == CastleGray && Cromosom1[SmallCastleKingColumnBefore][DistantRowBelow] == KingGray && Cromosom1[SmallCastleCastleColumnBefore][DistantRowBelow] == CastleGray)
							{
								CromosomRowFirst = DistantRowBelow;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowBelow;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleGray = true;
								Brj = true;
							}
							else //Big Brjges King Gray.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowBelow] == CastleGray && Cromosom2[BigCastleKingColumnAfter][DistantRowBelow] == KingGray && Cromosom1[BigCastleCastleColumnBefore][DistantRowBelow] == CastleGray && Cromosom1[BigCastleKingColumnBefore][DistantRowBelow] == KingGray)
								{
								CromosomRowFirst = DistantRowBelow;
								CromosomColumnFirst = i;
								CromosomRow = DistantRowBelow;
								CromosomColumn = i;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleGray = true;
								Brj = true;
								}
							}

						}
						else if (i == DistantRowUp)
						{
							//Small Castles King Brown.
							if (j == DistantColumnSmall && Cromosom2[SmallCastleKingColumnAfter][DistantRowUp] == KingBrown && Cromosom2[SmallCastleCastleColumnAfter][DistantRowUp] == CastleBrown && Cromosom1[SmallCastleKingColumnBefore][DistantRowUp] == KingBrown && Cromosom1[SmallCastleCastleColumnBefore][DistantRowUp] == CastleBrown)
							{
								
									CromosomRowFirst = DistantRowUp;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowUp;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::SmallKingCastleBrown = true;
									Brj = true;
								
							}
							else //Big Castles King Brown.
							{
								if (j == DistantColumnBig && Cromosom2[BigCastleCastleColumnAfter][DistantRowUp] == CastleBrown && Cromosom2[BigCastleKingColumnAfter][DistantRowUp] == KingBrown && Cromosom1[BigCastleCastleColumnBefore][DistantRowUp] == CastleBrown && Cromosom1[BigCastleKingColumnBefore][DistantRowUp] == KingBrown)
								{
								
									CromosomRowFirst = DistantRowUp;
									CromosomColumnFirst = i;
									CromosomRow = DistantRowUp;
									CromosomColumn = i;
									Find = true;
									FindNumber++;
									ChessRules::BigKingCastleBrown = true;
									Brj = true;
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

	bool ChessGeneticAlgorithm::HitSet(int Order, int **Cromosom1, int **Cromosom2)
	{
		bool Hit = false;
		
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
		
		return Hit;
	}

	int **ChessGeneticAlgorithm::CloneATable(int **Tab)
	{

		
			//Create and new an Object.
		int **Table; *Table = new int[8];	for (auto i = 0; i < 8; i++) { Table[i] = new int[8]; }

			//Assigne Parameter To New Objects.
			for (auto i = 0; i < 8; i++)
			{
				for (auto j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			//Return New Object.

			return Table;
		

	}

	bool **ChessGeneticAlgorithm::CloneATable(bool** Tab)
	{

		
			//Create and new an Object.
		bool **Table; *Table = new bool[8];	for (auto i = 0; i < 8; i++) { Table[i] = new bool[8]; }
		//Assigne Parameter To New Objects.
			for (auto i = 0; i < 8; i++)
			{
				for (auto j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			//Return New Object.

			return Table;
		

	}


	void ChessGeneticAlgorithm::InitializeInstanceFields()
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
