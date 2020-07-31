#include "ChessRules.h"
#include "AllDraw.h"
#include "ThinkingHybridizerRefrigitz.h"
#include "DrawKing.h"


int ChessRules::ObjectHittedRow = -1;
bool ChessRules::SelfHomeStatCP = false;
int ChessRules::ObjectHittedColumn = -1;
int ChessRules::NumbersofKingMovesToPatWHITE = 0;
int ChessRules::NumbersofKingMovesToPatBLACK = 0;
bool ChessRules::PatCheckedInKingRule = false;
bool ChessRules::CastleKingAllowedWHITE = true;
bool ChessRules::CastleKingAllowedBLACK = true;
bool ChessRules::KingAttacker = false;
bool ChessRules::SmallKingCastleBLACK = false;
bool ChessRules::KingCastleBLACK = false;
bool ChessRules::SmallKingCastleWHITE = false;
bool ChessRules::KingCastleWHITE = false;
bool ChessRules::BigKingCastleBLACK = false;
bool ChessRules::BigKingCastleWHITE = false;
bool ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporter = false;
int ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporterNumber = 0;
bool ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = false;
bool ChessRules::CheckWHITEObjectDangourFirstTimesOcured = false;
bool ChessRules::CheckBLACKObjectDangourFirstTimesOcured = false;
bool ChessRules::CastleActWHITE = false;
bool ChessRules::CastleActBLACK = false;
int ChessRules::CurrentOrder = 1;
bool ChessRules::CheckWHITERemovable = true;
bool ChessRules::CheckBLACKRemovable = true;
int ChessRules::CheckWHITERemovableValueRowi = 0;
int ChessRules::CheckWHITERemovableValueColumni = 0;
int ChessRules::CheckWHITERemovableValueRowii = 0;
int ChessRules::CheckWHITERemovableValueColumnjj = 0;
int ChessRules::CheckBLACKRemovableValueRowi = 0;
int ChessRules::CheckBLACKRemovableValueColumnj = 0;
int ChessRules::CheckBLACKRemovableValueRowii = 0;
int ChessRules::CheckBLACKRemovableValueColumnjj = 0;

	

	ChessRules::ChessRules(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged, int oRDER)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		InitializeInstanceFields();
		CurrentAStarGredyMax = CurrentAStarGredy;
		MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
		IgnoreSelfObjectsT = IgnoreSelfObject;
		UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
		BestMovmentsT = BestMovment;
		PredictHeuristicT = PredictHurist;
		OnlySelfT = OnlySel;
		AStarGreedyHeuristicT = AStarGreedyHuris;
		Order = oRDER;
		ArrangmentsBoard = ArrangmentsChanged;
		////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ChessRules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
	}

	ChessRules::ChessRules(int CurrentAStarGredy, int oRDER, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		InitializeInstanceFields();
		CurrentAStarGredyMax = CurrentAStarGredy;
		Order = oRDER;
		MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
		IgnoreSelfObjectsT = IgnoreSelfObject;
		UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
		BestMovmentsT = BestMovment;
		PredictHeuristicT = PredictHurist;
		OnlySelfT = OnlySel;
		AStarGreedyHeuristicT = AStarGreedyHuris;
		ArrangmentsBoard = ArrangmentsChanged;
		////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ChessRules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
	}

	ChessRules::ChessRules(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged, int Ki, int **A, int Ord, int i, int j)
	{
		InitializeInstanceFields();
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;

			CurrentAStarGredyMax = CurrentAStarGredy;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			ArrangmentsBoard = ArrangmentsChanged;
			Row = i;
			Column = j;

			//Initiate Global Variables By Local Parameters.
			KindNA = Ki;
			Kind = abs(Ki);
			TableS = CloneATable(A);

			Order = Ord;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ChessRules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
		}
	}

	bool ChessRules::Rules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, int color, int Ki, bool SelfHomeStatCP = true
	)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			if (Order == 1 && Table[RowFirst][ColumnFirst] < 0)
			{
				return false;
			}
			if (Order == -1 && Table[RowFirst][ColumnFirst] > 0)
			{
				return false;
			}

			if (Order == 1 && Table[RowFirst][ColumnFirst] == 0)
			{
				return false;
			}
			if (Order == -1 && Table[RowFirst][ColumnFirst] == 0)
			{
				return false;
			}
			//long Time = TimeElapced.TimeNow();Spaces++;


			if (Table[RowFirst][ColumnFirst] > 0 && Table[RowSecond][ColumnSecond] > 0)
			{
				if (!SelfHomeStatCP)
				{
					IgnoreSelfObject = true;
				}
				else
				{
					IgnoreSelfObject = false;
				}
			}
			else
			{
				IgnoreSelfObject = false;
			}

			if (Table[RowFirst][ColumnFirst] < 0 && Table[RowSecond][ColumnSecond] < 0)
			{
				if (!SelfHomeStatCP)
				{
					IgnoreSelfObject = true;
				}
				else
				{
					IgnoreSelfObject = false;
				}
			}
			else
			{
				IgnoreSelfObject = false;
			}

			//Initaite Global Varibales.
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporter = false;
				CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporterNumber = 0;
			}
			//When Order is Non Detectable Continue Traversal Back.
			//if (Order != CurrentOrder)
			//  return false;
			//Found Location of Tow WHITE and BLACK Kings. 
			int RowB = 0, ColumnB = 0;
			int RowG = 0, ColumnG = 0;
			FindBLACKKing(CloneATable(TableS), RowB, ColumnB);
			FindWHITEKing(CloneATable(TableS), RowG, ColumnG);

			//WHITE Order.
			if ((Order == 1))
			{
				if (Table[RowFirst][ColumnFirst] == 6)
				{
					if (abs(RowB - RowSecond) <= 1 && abs(ColumnB - ColumnSecond) <= 1)
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return false;
					}
				}
				//Illegal King Foundation.
				if (abs(RowB - RowG) <= 1 && abs(ColumnB - ColumnG) <= 1)
				{
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return false;
				}
			} //BLACK Order.
			else
			{
				if (Table[RowFirst][ColumnFirst] == -6)
				{
					if (abs(RowG - RowSecond) <= 1 && abs(ColumnG - ColumnSecond) <= 1)
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return false;
					}
				}
				//Ilegal Kings Foundation.
				if (abs(RowB - RowG) <= 1 && abs(ColumnB - ColumnG) <= 1)
				{
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return false;
				}
			}
			//Determination of Enemy in the Destionation Home.
			bool ExistInDestinationEnemy = bool();
			if (((Table[RowFirst][ColumnFirst] > 0) && (Table[RowSecond][ColumnSecond] < 0) && (Order == 1)))
			{
				ExistInDestinationEnemy = true;
			}
			else
			{
				if (((Table[RowFirst][ColumnFirst] < 0) && (Table[RowSecond][ColumnSecond] > 0) && (Order == -1)))
				{
				ExistInDestinationEnemy = true;
				}
			}

			//If There is A Source of Soldier.
			if (abs(Kind) == 1)
			{
				if (!(ArrangmentsBoard))
				{
					//Solders of WHITE at Begining.
					if (ColumnFirst == 1 && (Order == 1))
					{

						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, true, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
					}
					else //Solder of BLACK At Begining.
					{
						if (ColumnFirst == 6 && (Order == -1))
						{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, true, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
						}
					else //Another Solder Movments.
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, false, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
					}
					}
				}
				else
				{
					//Solders of WHITE at Begining.
					if (ColumnFirst == 6 && (Order == 1))
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, true, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
					}
					else //Solder of BLACK At Begining.
					{
						if (ColumnFirst == 1 && (Order == -1))
						{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, true, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
						}
					else //Another Solder Movments.
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, false, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
					}
					}
				}
			}
			else //For another Kind of Objects.
			{
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return Rule(RowFirst, ColumnFirst, RowSecond, ColumnSecond, false, color, ExistInDestinationEnemy, Ki, SelfHomeStatCP);
			}
		}
	}

	bool ChessRules::CastleKing(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
			if (!(ArrangmentsBoard))
			{ //WHITE Order.
				if (Order == 1)
				{
					//When WHITE Castles Not Act.
					if (ChessRules::CastleKingAllowedWHITE)
					{
						//If Column is At First Location.
						if (ColumnFirst == 0 && ColumnSecond == 0)
						{
							//When Kings Moves for Small Kings Castles Movments.
							if (RowFirst == RowSecond - 2 && ((RowSecond - 2) >= 0))
							{
								//Consideration of Castles King of WHITE King.

								if (((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && ((RowSecond - 2) >= 0) && Table[RowSecond - 2][ColumnSecond] == 6 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond + 1][ColumnSecond] == 4)
								{
									////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (OO)
									{
										CastleActWHITE = true;
										SmallKingCastleWHITE = true;
									}
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									return true;
								}

							}

							else //For Greates Castles King Movments.
							{
								if (RowFirst == RowSecond + 2 && ((RowSecond + 2) < 8))
								{
								//Consideration of Castles King M<ovments.

								if (((RowSecond + 2) < 8) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && ((RowSecond - 2) >= 0) && Table[RowSecond + 2][ColumnSecond] == 6 && Table[RowSecond + 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond - 2][ColumnSecond] == 4)
								{
									////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (OO)
									{
										CastleActWHITE = true;
										BigKingCastleWHITE = true;
									}
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									return true;
								}


								}
							}
						}
					}
				}
				else //Order of BLACK.
				{
					//When BLACK Castles King Not Occured.
					if (ChessRules::CastleKingAllowedBLACK)
					{
						//Column Situation.
						if (ColumnFirst == 7 && ColumnSecond == 7)
						{
							//Small BLACK King Castles Consideration.
							if (RowFirst == RowSecond - 2 && ((RowSecond - 2) < 8))
							{


								if (((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && Table[RowSecond - 2][ColumnSecond] == -6 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond + 1][ColumnSecond] == -4)
								{
									//CastleActBLACK = true;
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										SmallKingCastleBLACK = true;
									}
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									return true;
								}


							}
							else
							{
								if (RowFirst == RowSecond + 2 && ((RowSecond + 2) < 8))
								{
							//BLACK Kings.Big King Castles Consideration.

								if (((RowSecond + 2) < 8) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && ((RowSecond - 2) >= 0) && Table[RowSecond + 2][ColumnSecond] == -6 && Table[RowSecond + 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond - 2][ColumnSecond] == -4)
								{
									//CastleActBLACK = true;
									////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (OO)
									{
										BigKingCastleBLACK = true;
									}
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									return true;
								}

								}
							}
						}
					}
				}
			}
			else
			{
				//WHITE Order.
				if (Order == 1)
				{
					//When WHITE Castles Not Act.
					if (ChessRules::CastleKingAllowedWHITE)
					{
						//If Column is At First Location.
						if (ColumnFirst == 7 && ColumnSecond == 7)
						{
							//When Kings Moves for Small Kings Castles Movments.
							if (RowFirst == RowSecond - 2 && ((RowSecond - 2) >= 0))
							{
								//Consideration of Castles King of WHITE King.


								if (((RowSecond - 2) >= 0) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && Table[RowSecond - 2][ColumnSecond] == 6 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond + 1][ColumnSecond] == 4)
								{
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									//CastleActWHITE = true;
									//SmallKingCastleWHITE = true;
									return true;
								}

							}

							else //For Greates Castles King Movments.
							{
								if (RowFirst == RowSecond + 2 && ((RowSecond + 2) < 8))
								{
								//Consideration of Castles King M<ovments.

								if (((RowSecond + 2) < 8) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && ((RowSecond - 2) >= 0) && Table[RowSecond + 2][ColumnSecond] == 6 && Table[RowSecond + 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond - 2][ColumnSecond] == 4)
								{
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									//CastleActWHITE = true;
									//BigKingCastleWHITE = true;
									return true;
								}


								}
							}
						}
					}
				}
				else //Order of BLACK.
				{
					//When BLACK Castles King Not Occured.
					if (ChessRules::CastleKingAllowedBLACK)
					{
						//Column Situation.
						if (ColumnFirst == 0 && ColumnSecond == 0)
						{
							//Small BLACK King Castles Consideration.
							if (RowFirst == RowSecond - 2 && ((RowSecond - 2) > 0))
							{


								if (((RowSecond - 2) >= 0) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && Table[RowSecond - 2][ColumnSecond] == -6 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond + 1][ColumnSecond] == -4)
								{
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									//CastleActBLACK = true;
									//SmallKingCastleBLACK = true;
									return true;
								}


							}
							else
							{
								if (RowFirst == RowSecond + 2 && ((RowSecond + 2) < 8))
								{
							//BLACK Kings.Big King Castles Consideration.

								if (((RowSecond + 2) < 8) && ((RowSecond - 1) >= 0) && ((RowSecond + 1) < 8) && ((RowSecond - 2) >= 0) && Table[RowSecond + 2][ColumnSecond] == -6 && Table[RowSecond + 1][ColumnSecond] == 0 && Table[RowSecond][ColumnSecond] == 0 && Table[RowSecond - 1][ColumnSecond] == 0 && Table[RowSecond - 2][ColumnSecond] == -4)
								{
									////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
									//  CastleActBLACK = true;
									//BigKingCastleBLACK = true;
									return true;
								}

								}
							}
						}
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return false;
		}
	}

	bool ChessRules::CheckConstructor(int color, int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, int Ki, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			 //Initiate a Local Variable.
			 //Clone A Copy of Table.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] tab = CloneATable(TableS);
			int **tab = CloneATable(TableS);


			//Act a Move.
			tab[RowSecond][ColumnSecond] = tab[RowFirst][ColumnFirst];
			tab[RowFirst][ColumnFirst] = 0;
			//If There is Check State.
			if (Check(tab, Order))
			{
				//When int of Order is WHITE Check return Check State.
				if (Order == 1)
				{
					if (CheckWHITE)
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckConstructor:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return true;
					}
				}
				//When int is BLACK State  there is Check State return Check State.
				if (Order == -1)
				{
					if (CheckBLACK)
					{
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckConstructor:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return true;
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckConstructor:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Return Non Check State.
			return false;
		}
	}

	bool ChessRules::ExistSelfHome(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
			//Initiate of Local Variable.
			bool NotExistInDestinationSelfHome = false;
			//When There is Not Source and Destination is the Same Home Location. 
			if (RowFirst != RowSecond || ColumnFirst != ColumnSecond)
			{
				//If the Same WHITE int Return Self Home. 
				if (Table[RowSecond][ColumnSecond] > 0 && Table[RowFirst][ColumnFirst] > 0)
				{
					NotExistInDestinationSelfHome = true;
				}
				else //If The Same int BLACK Return Self Home.
				{
					if (Table[RowSecond][ColumnSecond] < 0 && Table[RowFirst][ColumnFirst] < 0)
					{
					NotExistInDestinationSelfHome = true;
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ExistSelfHome:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return NotExistInDestinationSelfHome;
		}
	}

	bool ChessRules::ObjectDangourKingMove(int Order, int** Table, bool DoIgnore)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			//Clone a Copy
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Tab[i][j] = Table[i][j];
				}
			}
			//Initiate Variables.
			CheckWHITE = false;
			CheckBLACK = false;
			CheckWHITEObjectDangour = false;
			CheckBLACKObjectDangour = false;
			int RowG = 0, ColumnG = 0;
			int RowB = 0, ColumnB = 0;
			//Object O = new Object();
			////////lock (O)
			///{
			/// if (DoIgnore)
			///HybridizerRefrigitz.ChessRules.CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = true;
			// }
			//Check identification.
			//Check(CloneATable(Tab), Order);
			bool CheckWHITEDummy = CheckWHITE;
			bool CheckBLACKDummy = CheckBLACK;
			//If There is Check on Tow Side.

			int CDummy = ChessRules::CurrentOrder;
			int COrder = Order;
			if (Order == 1)
			{
				//Location of King Gary
				if (FindWHITEKing(CloneATable(Tab), RowG, ColumnG))
				{
					//For Enemy BLACK.
					for (int  ii = 0; ii < 8; ii++)
					{
						for (int  jj = 0; jj < 8; jj++)
						{

							//Ignore WHITE.
							if (Tab[ii][jj] >= 0)
							{
								continue;
							}
							//For Current WHITE and Empty.
							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									for (int  i = 0; i < 8; i++)
									{
										for (int  j = 0; j < 8; j++)
										{
											Tab[i][j] = Table[i][j];
										}
									}
									//Ignore BLACK.
									if (Tab[iii][jjj] < 0)
									{
										continue;
									}
									ThinkingHybridizerRefrigitz *AA = new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, ii, jj);
									//When There is Attacked to WHITE from BLACK.
									if (AA->Attack(CloneATable(Tab), ii, jj, iii, jjj, -1, Order * -1))
									{
										//Move.
										int a = Tab[iii][jjj];
										Tab[iii][jjj] = Tab[ii][jj];
										Tab[ii][jj] = 0;
										int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
										for (int h = 0; h < 8; h++)
										{
											for (int g = 0; g < 8; g++)
											{
												Tabl[h][g] = Tab[h][g];
											}
										}
										ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tabl[iii][jjj], CloneATable(Tabl), Order, iii, jjj);
										//When there is checked or checkmate.
										if (AAA->CheckMate(Tabl, Order))
										{
											//if (AAA->CheckMateWHITE)
											if (AAA->CheckMateWHITE)
											{
												CheckWHITEObjectDangour = true;
												break;
											}
										}
										//CheckWHITEObjectDangour = true;
									}
									if (CheckWHITEObjectDangour)
									{
										break;
									}

								}
								if (CheckWHITEObjectDangour)
								{
									break;
								}
							}
							if (CheckWHITEObjectDangour)
							{
								break;
							}

						}
						if (CheckWHITEObjectDangour)
						{
							break;
						}

					}
				}
			}
			else
			{
				//Location of King BLACK
				if (FindBLACKKing(CloneATable(Tab), RowB, ColumnB))
				{

					//For WHITE Enemy.
					for (int  ii = 0; ii < 8; ii++)
					{
						for (int  jj = 0; jj < 8; jj++)
						{
							//Ignore BLACK
							if (Tab[ii][jj] <= 0)
							{
								continue;
							}
							//For Current BLACK.
							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									for (int  i = 0; i < 8; i++)
									{
										for (int  j = 0; j < 8; j++)
										{
											Tab[i][j] = Table[i][j];
										}
									}
									//Ignore WHITE.
									if (Tab[iii][jjj] > 0)
									{
										continue;
									}

									ThinkingHybridizerRefrigitz *AA = new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, ii, jj);
									//When There is Attack to BLACK.
									if (AA->Attack(CloneATable(Tab), ii, jj, iii, jjj, 1, Order * -1))
									{
										//Move
										int a = Tab[iii][jjj];
										Tab[iii][jjj] = Tab[ii][jj];
										Tab[ii][jj] = 0;
										int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
										for (int h = 0; h < 8; h++)
										{
											for (int g = 0; g < 8; g++)
											{
												Tabl[h][g] = Tab[h][g];
											}
										}
										ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tabl[iii][jjj], CloneATable(Tabl), Order, iii, jjj);
										//When There is Check or Checkedmate
										if (AAA->CheckMate(Tabl, Order))
										{
											//if (AAA->CheckMateBLACK)
											if (AAA->CheckMateBLACK)
											{
												CheckBLACKObjectDangour = true;
												break;
											}

										}

										//CheckBLACKObjectDangour = true;

									}
									if (CheckBLACKObjectDangour)
									{
										break;
									}
								}
								if (CheckBLACKObjectDangour)
								{
									break;
								}
							}
							if (CheckBLACKObjectDangour)
							{
								break;
							}

						}
						if (CheckBLACKObjectDangour)
						{
							break;
						}

					}
				}
			}
			//Iniaiate Global Variables.
			//Object O1 = new Object();
			//////lock (O1)
			//{
			//HybridizerRefrigitz.ChessRules.CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = false;
			//}
			//If There is BLACK ObjectDanger Or WHITE ObjectDanger.
			if (CheckBLACKObjectDangour || CheckWHITEObjectDangour)
			{
				//Iniaate Global Check Variable By Local Variables.
				ChessRules::CurrentOrder = CDummy;
				Order = COrder;
				CheckWHITE = CheckWHITEDummy;
				CheckBLACK = CheckBLACKDummy;
				//Achamz is Validity.
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return true;
			}
			ChessRules::CurrentOrder = CDummy;
			Order = COrder;

			//Iniatiate Of Global Varibales By Local Variables.
			CheckWHITE = CheckWHITEDummy;
			CheckBLACK = CheckBLACKDummy;
			//Return Not Validiy.
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return false;
		}
	}

	bool ChessRules::ObjectDangourKingMove(int Order, int** Table)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			//Clone a Copy
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Tab[i][j] = Table[i][j];
				}
			}
			//Initiate Variables.
			CheckWHITE = false;
			CheckBLACK = false;
			CheckWHITEObjectDangour = false;
			CheckBLACKObjectDangour = false;
			int RowG = 0, ColumnG = 0;
			int RowB = 0, ColumnB = 0;
			//Object O = new Object();
			////////lock (O)
			///{
			/// if (DoIgnore)
			///HybridizerRefrigitz.ChessRules.CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = true;
			// }
			//Check identification.
			//Check(CloneATable(Tab), Order);
			bool CheckWHITEDummy = CheckWHITE;
			bool CheckBLACKDummy = CheckBLACK;
			//If There is Check on Tow Side.

			int CDummy = ChessRules::CurrentOrder;
			int COrder = Order;
			if (Order == 1)
			{
				//Location of King Gary
				if (FindWHITEKing(CloneATable(Tab), RowG, ColumnG))
				{
					//For Enemy BLACK.
					for (int  ii = 0; ii < 8; ii++)
					{
						for (int  jj = 0; jj < 8; jj++)
						{

							//Ignore WHITE.
							if (Tab[ii][jj] >= 0)
							{
								continue;
							}
							//For Current WHITE and Empty.
							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									for (int  i = 0; i < 8; i++)
									{
										for (int  j = 0; j < 8; j++)
										{
											Tab[i][j] = Table[i][j];
										}
									}
									//Ignore BLACK.
									if (Tab[iii][jjj] < 0)
									{
										continue;
									}
									ThinkingHybridizerRefrigitz *AA = new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, ii, jj);
									//When There is Attacked to WHITE from BLACK.
									if (AA->Attack(CloneATable(Tab), ii, jj, iii, jjj, -1, Order * -1))
									{
										//Move.
										int a = Tab[iii][jjj];
										Tab[iii][jjj] = Tab[ii][jj];
										Tab[ii][jj] = 0;
										int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
										for (int h = 0; h < 8; h++)
										{
											for (int g = 0; g < 8; g++)
											{
												Tabl[h][g] = Tab[h][g];
											}
										}
										ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tabl[iii][jjj], CloneATable(Tabl), Order, iii, jjj);
										//When there is checked or checkmate.
										if (AAA->Check(Tabl, Order))
										{
											//if (AAA->CheckMateWHITE)
											if (AAA->CheckWHITE)
											{
												CheckWHITEObjectDangour = true;
												break;
											}
										}
										//CheckWHITEObjectDangour = true;
									}
									if (CheckWHITEObjectDangour)
									{
										break;
									}

								}
								if (CheckWHITEObjectDangour)
								{
									break;
								}
							}
							if (CheckWHITEObjectDangour)
							{
								break;
							}

						}
						if (CheckWHITEObjectDangour)
						{
							break;
						}

					}
				}
			}
			else
			{
				//Location of King BLACK
				if (FindBLACKKing(CloneATable(Tab), RowB, ColumnB))
				{

					//For WHITE Enemy.
					for (int  ii = 0; ii < 8; ii++)
					{
						for (int  jj = 0; jj < 8; jj++)
						{
							//Ignore BLACK
							if (Tab[ii][jj] <= 0)
							{
								continue;
							}
							//For Current BLACK.
							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									for (int  i = 0; i < 8; i++)
									{
										for (int  j = 0; j < 8; j++)
										{
											Tab[i][j] = Table[i][j];
										}
									}
									//Ignore WHITE.
									if (Tab[iii][jjj] > 0)
									{
										continue;
									}

									ThinkingHybridizerRefrigitz *AA = new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, ii, jj);
									//When There is Attack to BLACK.
									if (AA->Attack(CloneATable(Tab), ii, jj, iii, jjj, 1, Order * -1))
									{
										//Move
										int a = Tab[iii][jjj];
										Tab[iii][jjj] = Tab[ii][jj];
										Tab[ii][jj] = 0;
										int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
										for (int h = 0; h < 8; h++)
										{
											for (int g = 0; g < 8; g++)
											{
												Tabl[h][g] = Tab[h][g];
											}
										}
										ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tabl[iii][jjj], CloneATable(Tabl), Order, iii, jjj);
										//When There is Check or Checkedmate
										if (AAA->Check(Tabl, Order))
										{
											//if (AAA->CheckMateBLACK)
											if (AAA->CheckBLACK)
											{
												CheckBLACKObjectDangour = true;
												break;
											}

										}

										//CheckBLACKObjectDangour = true;

									}
									if (CheckBLACKObjectDangour)
									{
										break;
									}
								}
								if (CheckBLACKObjectDangour)
								{
									break;
								}
							}
							if (CheckBLACKObjectDangour)
							{
								break;
							}

						}
						if (CheckBLACKObjectDangour)
						{
							break;
						}

					}
				}
			}
			//Iniaiate Global Variables.
			//Object O1 = new Object();
			//////lock (O1)
			//{
			//HybridizerRefrigitz.ChessRules.CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = false;
			//}
			//If There is BLACK ObjectDanger Or WHITE ObjectDanger.
			if (CheckBLACKObjectDangour || CheckWHITEObjectDangour)
			{
				//Iniaate Global Check Variable By Local Variables.
				ChessRules::CurrentOrder = CDummy;
				Order = COrder;
				CheckWHITE = CheckWHITEDummy;
				CheckBLACK = CheckBLACKDummy;
				//Achamz is Validity.
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return true;
			}
			ChessRules::CurrentOrder = CDummy;
			Order = COrder;

			//Iniatiate Of Global Varibales By Local Variables.
			CheckWHITE = CheckWHITEDummy;
			CheckBLACK = CheckBLACKDummy;
			//Return Not Validiy.
			return false;
		}
	}

	bool ChessRules::AchmazCheckByMoveByRule(int** Tabl, int RowF, int ColumnF, int Row, int ColumnS, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			bool Achmaz = false;
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tabl[i][j];
				}
			}
			Table[Row][ColumnS] = Table[RowF][ColumnF];
			Table[RowF][ColumnF] = 0;
			if (Check(CloneATable(Table), Order))
			{
				if (Order == 1 && CheckWHITE)
				{
					Achmaz = true;
				}
				if (Order == -1 && CheckBLACK)
				{
					Achmaz = true;
				}

			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("AchmazCheckByMoveByRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Achmaz;
		}
	}

	bool ChessRules::ObjectDangourKingMove(int Order, int** Table, bool DoIgnore, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			//Clone a Copy
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Tab[i][j] = Table[i][j];
				}
			}
			//Initiate Variables.
			CheckWHITE = false;
			CheckBLACK = false;
			CheckWHITEObjectDangour = false;
			CheckBLACKObjectDangour = false;
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				if (DoIgnore)
				{
					ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = true;
				}
			}

			//Check identification.
			Check(CloneATable(Tab), Order);
			bool CheckWHITEDummy = CheckWHITE;
			bool CheckBLACKDummy = CheckBLACK;
			//If There is Check on Tow Side.
			if (CheckBLACK || CheckWHITE)
			{
				//Check meand achmaz.
				if (CheckBLACK)
				{
					CheckBLACKObjectDangour = true;
				}
				if (CheckWHITE)
				{
					CheckWHITEObjectDangour = true;
				}
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return true;

			}
			int CDummy = ChessRules::CurrentOrder;
			int COrder = Order;

			//Location of King Gary

			{
				//Iniatite Global Varibales.
				ChessRules::CurrentOrder = -1;
				Order = -1;
				//For Enemies.
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						//Ignore of current.
						if (Order == 1 && Tab[i][i] >= 0)
						{
							continue;
						}
						if (Order == -1 && Tab[i][i] <= 0)
						{
							continue;
						}
						//For All Current
						for (int  iii = 0; iii < 8; iii++)
						{
							for (int  jjj = 0; jjj < 8; jjj++)
							{
								//Ignore of enemies.
								if (Order == 1 && Tab[iii][jjj] <= 0)
								{
									continue;
								}
								if (Order == -1 && Tab[iii][jjj] >= 0)
								{
									continue;
								}


								//Clone a Copy
								for (int  ik = 0; ik < 8; ik++)
								{
									for (int  jk = 0; jk < 8; jk++)
									{
										Tab[ik][jk] = Table[ik][jk];
									}
								}
								ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tab[i][j], CloneATable(Tab), Order * -1, i, j);
								int a = 1;
								if (Order * -1 == -1)
								{
									a = -1;
								}
								//When Enemies can gard King
								if (A->Rules(i, j, iii, jjj, a, Tab[i][j]))
								{
									Tab[iii][jjj] = Tab[i][j];
									Tab[i][j] = 0;
									if (A->CheckMate(CloneATable(Tab), Order))
									{
										if (Order == 1 && A->CheckMateWHITE)
										{
											//For Current.
											for (int  iiii = 0; iiii < 8; iiii++)
											{
												for (int  jjjj = 0; jjjj < 8; jjjj++)
												{
													//Ignore of enemies.
													if (Order == 1 && Tab[iiii][jjjj] <= 0)
													{
														continue;
													}
													if (Order == -1 && Tab[iiii][jjjj] >= 0)
													{
														continue;
													}
													//For Enemies and Emety.
													for (int iiiii = 0; iiiii < 8; iiiii++)
													{
														for (int jjjjj = 0; jjjjj < 8; jjjjj++)
														{
															//Ignore of Current.
															if (Order == 1 && Tab[iiiii][jjjjj] > 0)
															{
																continue;
															}
															if (Order == -1 && Tab[iiiii][jjjjj] < 0)
															{
																continue;
															}
															for (int  ik = 0; ik < 8; ik++)
															{
																for (int  jk = 0; jk < 8; jk++)
																{
																	Tab[ik][jk] = Table[ik][jk];
																}
															}
															Tab[iii][jjj] = Tab[i][j];
															Tab[i][j] = 0;

															A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tab[iiii][jjjj], CloneATable(Tab), Order, iiii, jjjj);
															if (A->Rules(iiii, jjjj, iiiii, jjjjj, a, Tab[i][j]))
															{
																Tab[iiiii][jjjjj] = Tab[iiii][jjjj];
																Tab[iiii][jjjj] = 0;
																if (A->CheckMate(CloneATable(Tab), Order))
																{
																	CheckBLACK = A->CheckBLACK;
																	CheckWHITE = A->CheckWHITE;
																	CheckMateWHITE = A->CheckMateWHITE;
																	CheckMateBLACK = A->CheckMateBLACK;
																	CheckWHITEObjectDangour = A->CheckWHITEObjectDangour;
																	CheckBLACKObjectDangour = A->CheckBLACKObjectDangour;
																	ChessRules::CurrentOrder = CDummy;
																	Order = COrder;
																	////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
																	return true;
																}
															}
														}
													}
												}
											}

										}
										else
										{
											if (Order == -1 && A->CheckMateBLACK)
											{

											//For Current.
											for (int  iiii = 0; iiii < 8; iiii++)
											{
												for (int  jjjj = 0; jjjj < 8; jjjj++)
												{
													//Ignore of enemies.
													if (Order == 1 && Tab[iiii][jjjj] <= 0)
													{
														continue;
													}
													if (Order == -1 && Tab[iiii][jjjj] >= 0)
													{
														continue;
													}
													//For Enemies and Emety.
													for (int iiiii = 0; iiiii < 8; iiiii++)
													{
														for (int jjjjj = 0; jjjjj < 8; jjjjj++)
														{
															//Ignore of Current.
															if (Order == 1 && Tab[iiiii][jjjjj] > 0)
															{
																continue;
															}
															if (Order == -1 && Tab[iiiii][jjjjj] < 0)
															{
																continue;
															}
															for (int  ik = 0; ik < 8; ik++)
															{
																for (int  jk = 0; jk < 8; jk++)
																{
																	Tab[ik][jk] = Table[ik][jk];
																}
															}
															Tab[iii][jjj] = Tab[i][j];
															Tab[i][j] = 0;

															A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Tab[iiii][jjjj], CloneATable(Tab), Order, iiii, jjjj);
															if (A->Rules(iiii, jjjj, iiiii, jjjjj, a, Tab[i][j]))
															{
																Tab[iiiii][jjjjj] = Tab[iiii][jjjj];
																Tab[iiii][jjjj] = 0;
																if (A->CheckMate(CloneATable(Tab), Order))
																{
																	CheckBLACK = A->CheckBLACK;
																	CheckWHITE = A->CheckWHITE;
																	CheckMateWHITE = A->CheckMateWHITE;
																	CheckMateBLACK = A->CheckMateBLACK;
																	CheckWHITEObjectDangour = A->CheckWHITEObjectDangour;
																	CheckBLACKObjectDangour = A->CheckBLACKObjectDangour;
																	ChessRules::CurrentOrder = CDummy;
																	Order = COrder;
																	////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
																	return true;
																}
															}
														}
													}
												}
											}
											}
										}


									}

								}

							}
						}
					}
				}

			}

			ChessRules::CurrentOrder = CDummy;
			Order = COrder;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ObjectDangourKingMove:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Iniatiate Of Global Varibales By Local Variables.
			//Return Not Validiy.
			return false;
		}
	}

	bool ChessRules::FindWHITEKing(int** Table, int &Row, int &Column)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			//For All Home Table.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//If Current is WHITE Home 
					if (Table[i][j] == 6)
					{
						//Initiate Refreable Parameters.
						Row = i;
						Column = j;
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindWHITEKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						return true;
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindWHITEKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Not Found.
			return false;
		}
	}

	std::string ChessRules::ThingsAlphabet(int i)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();
		  //Initiate a Local Varibale. 
			std::string A ;
			//Determinbe WHITE Or BLACK Movment.
			if (i < 0)
			{
				A = "BLACK:";
			}
			if (i > 0)
			{
				A = "WHITE:";
			}
			//Determine Object Alhpabet. 
			if (abs(i) == 1)
			{
				A += std::string("(S)");
			}
			if (abs(i) == 2)
			{
				A += std::string("(E)");
			}
			if (abs(i) == 3)
			{
				A += std::string("(H)");
			}
			if (abs(i) == 4)
			{
				A += std::string("(B)");
			}
			if (abs(i) == 5)
			{
				A += std::string("(M)");
			}
			if (abs(i) == 6)
			{
				A += std::string("(K)");
			}
			//Retrun Alphabet.
			////AllDraw.OutPut.Append("\r\nThingsAlphabet:" + (TimeElapced.TimeNow() - Time).ToString();
			return A;

		}
	}

	std::string ChessRules::RowAlphabet(int i)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();
				 //Initiate Local Variable.
			std::string A ;
			//[So2]. Alphabet Consideration.
			if (i == 0)
			{
				A = "a";
			}
			if (i == 1)
			{
				A = "b";
			}
			if (i == 2)
			{
				A = "c";
			}
			if (i == 3)
			{
				A = "d";
			}
			if (i == 4)
			{
				A = "e";
			}
			if (i == 5)
			{
				A = "f";
			}
			if (i == 6)
			{
				A = "g";
			}
			if (i == 7)
			{
				A = "h";
			}
			//Return [So2]. Alphabet.
			////AllDraw.OutPut.Append("\r\nRowAlphabet:" + (TimeElapced.TimeNow() - Time).ToString();
			return A;

		}
	}

	std::string ChessRules::CreateStatistic(bool Arrange, int** Tab, int Movments, int SourceThings, int Column, int Row, bool Hit, int HitThings, bool CastleKing, bool SodierConvert)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOO)
		{
			ArrangmentsBoard = Arrange;

			bool ms = false;
			int bn = Movments;
			if (((bn) % 2) == 1)
			{
				ms = true;
			}
			//Movments String Number Creation in String.
			bn = (static_cast<int>(bn / 2)) + 1;
			std::string SN ;
			std::string S ;
			if (ms)
			{
				SN = StringConverterHelper::toString(bn) + std::string(".");
			}


			//Consider CheckMate Condition of Table.
			ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, Arrange, 1, CloneATable(Tab), 1, Row, Column);
			ChessRules *AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, Arrange, 1, CloneATable(Tab), 1, Row, Column);
			ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, Arrange, 1, CloneATable(Tab), 1, Row, Column);
			A->CheckMate(CloneATable(Tab), Order);
			AA->ObjectDangourKingMove(Order, CloneATable(Tab), false);
			int a = 1;
			if (Order == -1)
			{
				a = -1;
			}
			AAA->Pat(CloneATable(Tab), Order, a);
			if (A->CheckWHITE)
			{
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					ChessRules::CastleKingAllowedWHITE = false;
					ChessRules::CastleActWHITE = true;
					ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;
				}
			}
			else if (A->CheckBLACK)
			{
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					ChessRules::CastleActBLACK = true;
					ChessRules::CastleKingAllowedBLACK = false;
					ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;
				}
			}
			bool Castles = false;
			if (Order == 1)
			{
				if (ChessRules::SmallKingCastleWHITE || ChessRules::BigKingCastleWHITE)
				{
					Castles = true;
				}
			}
			if (Order == -1)
			{
				if (ChessRules::SmallKingCastleBLACK || ChessRules::BigKingCastleBLACK)
				{
					Castles = true;
				}
			}
			//When Solder Converted or Castles King Acts.
			if (SodierConvert || (CastleKing && Castles))
			{
				//When Castles Acts.
				if (CastleKing)
				{
					//Castles BLACK King.
					if (ChessRules::SmallKingCastleWHITE)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;
							S += std::string("WHITE-BK-S");
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								if (!AllDraw::Stockfish)
								{
									ChessRules::SmallKingCastleWHITE = false;
									ChessRules::CastleKingAllowedWHITE = false;
								}
							}
						}
					}
					else
					{
						if (ChessRules::BigKingCastleWHITE)
						{
					//Castles BLACK King.                    
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							S += std::string("WHITE-BK-B");
							ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								if (!AllDraw::Stockfish)
								{
									ChessRules::BigKingCastleWHITE = false;
									ChessRules::CastleKingAllowedWHITE = false;
								}
							}
						}
						}
					else
					{
							if (ChessRules::SmallKingCastleBLACK)
							{
					//Castles BLACK King.                    
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							S += std::string("BLACK-BK-S");
							ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								if (!AllDraw::Stockfish)
								{
									ChessRules::SmallKingCastleBLACK = false;
									ChessRules::CastleKingAllowedBLACK = false;
								}
							}
						}
							}
					else
					{
								if (ChessRules::BigKingCastleBLACK)
								{
					//Castles BLACK King.                    

						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							S += std::string("BLACK-BK-B");
							ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								if (!AllDraw::Stockfish)
								{
									ChessRules::BigKingCastleBLACK = false;
									ChessRules::CastleKingAllowedBLACK = false;
								}
							}
						}
								}
					}
					}
					}
					//Castles BLACK King.                    

					//Great Castles WHITE King.

				}
				//Soldier Converted.
				if (SodierConvert)
				{
					//Object Kind String Addition.
					S += ThingsAlphabet(SourceThings);
					//If Hit Acts.
					if (Hit)
					{
						////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O)
						{
							ObjectHittedRow = Row;
							ObjectHittedColumn = Column;
						}
						//THIS.SetObjectInPictureBox(Row, Column);

						S += std::string("x");
					}
					S += StringConverterHelper::toString(Column);
					//CheckMate of WHITE Or BLACK
					if (AAA->PatkWHITE || AAA->PatBLACK)
					{
						S += std::string("-O-");
					}
					else
					{
						if (A->CheckMateWHITE || A->CheckMateBLACK)
						{
						S += std::string("++");
						}
					//Check Of WHITE Or BLACK.
					else if (A->CheckBLACK || A->CheckWHITE)
					{

						S += std::string("+");
						if (A->CheckBLACK && Order == -1)
						{
							////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O2)
							{
								ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;
								ChessRules::BigKingCastleBLACK = false;
								ChessRules::CastleKingAllowedBLACK = false;
							}
						}
						if (A->CheckWHITE && Order == 1)
						{
							////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O2)
							{
								ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;
								ChessRules::BigKingCastleWHITE = false;
								ChessRules::CastleKingAllowedWHITE = false;
							}
						}
					}
					else if (AA->CheckWHITEObjectDangour || AA->CheckBLACKObjectDangour)
					{

						if (AA->CheckWHITEObjectDangour && Order == -1)
						{
							////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O2)
							{
								ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;

							}
						}
						if (AA->CheckBLACKObjectDangour && Order == 1)
						{
							////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O2)
							{
								ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;

							}
						}
					}
					}

				}
			}
			else //BLACK Order.
			{
				//Object of Kind.
				S += ThingsAlphabet(SourceThings);
				//Hit Consideration.
				if (Hit)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						ObjectHittedRow = Row;
						ObjectHittedColumn = Column;
					}
					//THIS.SetObjectInPictureBox(Row, Column);
					S += std::string("x");
				}
				//[So2]. Column Consideration.
				S += RowAlphabet(Row);
				S += StringConverterHelper::toString(Column);
				//CheckMate Consideration.
				if (AAA->PatkWHITE || AAA->PatBLACK)
				{
					S += std::string("-O-");
				}
				else

				{
					if (A->CheckMateWHITE || A->CheckMateBLACK)
					{
					S += std::string("++");
					}
				//WHITE Consideration.
				else if (A->CheckBLACK || A->CheckWHITE)
				{
					S += std::string("+");
					if (A->CheckBLACK && Order == -1)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ChessRules::BigKingCastleBLACK = false;
							ChessRules::CastleKingAllowedBLACK = false;
							ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;

						}
					}
					if (A->CheckWHITE && Order == 1)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ChessRules::BigKingCastleWHITE = false;
							ChessRules::CastleKingAllowedWHITE = false;
							ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;

						}
					}
				}
				else if (AA->CheckWHITEObjectDangour || AA->CheckBLACKObjectDangour)
				{

					if (AA->CheckWHITEObjectDangour && Order == -1)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ThinkingHybridizerRefrigitz::KingMaovableBLACK = true;

						}
					}
					if (AA->CheckBLACKObjectDangour && Order == 1)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ThinkingHybridizerRefrigitz::KingMaovableWHITE = true;

						}
					}
				}
				}


			}
			//Separate.
			if (AllDraw::Less != -DBL_MAX)
			{
				S += std::string(" With Heuristic (") + StringConverterHelper::toString(AllDraw::Less) + std::string(")--");
			}
			else
			{
				S += std::string(" --");
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CreateStatistic:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Return String Sysntax.
			return SN + S;
		}
	}

	bool ChessRules::ArrayInList(std::vector<int*> &List, int *A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			 //Initiate Local Variables.
			bool Is = false;
			//For each Items of a Tow Part List.
			for (int  i = 0; i < List.size(); i++)
			{
				//If Listis Equal Setting of Local Variable Equality.
				if (A[0] == List[i][0] && A[1] == List[i][1])
				{
					Is = true;
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ArrayInList:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Retrun Condition.
			return Is;
		}
	}

	bool ChessRules::FindAThing(int** Table, int &Row, int &Column, int Thing, bool BeMovable, std::vector<int*> &List)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			  //For All Items In Table Home.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//Initiate Local Variables.
					int AA[2];
					AA[0] = i;
					AA[1] = j;
					//If Table Home is Eqaul Tow Things Object.
					if (Table[i][j] == Thing)
					{
						//If Set A Global Variable Low Logical.
						if (!BeMovable)
						{
							//If Array Exist In List Continue Traversal Back.
							if (ArrayInList(List, AA))
							{
								continue;
							}
							//Iniatiate Local Varibales.
							Row = i;
							Column = j;
							////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindAThing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
							//Found State.
							return true;
						}
						else //else of Condition.
						{
							//Iniatiate Local Variables.
							int A = 1;
							if (Order == -1)
							{
								A = -1;
							}
							//For All Second Home.
							for (int  ii = 0; ii < 8; ii++)
							{
								for (int  jj = 0; jj < 8; jj++)
								{
									//If First Home is Movable to Second Home.
									if ((new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, i, j))->Movable(CloneATable(Table), i, j, ii, jj, A, Order))
									{
										//If Array Exist in Home.
										if (ArrayInList(List, AA))
										{
											continue;
										}
										//Initaite Local Variables.
										Row = i;
										Column = j;
										////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindAThing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
										//Found of State
										return true;
									}

								}
							}
						}

					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindAThing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Not Found State.
			return false;
		}
	}

	bool ChessRules::FindBLACKKing(int** Table, int &Row, int &Column)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			 //For All Home Table.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//If Current Home is BLACK King.
					if (Table[i][j] == -6)
					{
						//Initiate Refrencable Parameter.
						Row = i;
						Column = j;
						////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindBLACKKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
						//Found of BLACK King.
						return true;
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("FindBLACKKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Not Found.
			return false;
		}
	}

	bool ChessRules::CheckRemovableByAttack(int** Table, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			  //Initiate Local Variables.
			int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
			//Clone a Copy.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Tabl[i][j] = Table[i][j];
				}
			}
			//Initiate Global Variables.
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				CheckWHITERemovable = true;

				CheckBLACKRemovable = true;
			}

			Check(Tabl, Order);
			//if (Order == -1)
			{
				//For All Home Tables in Fourth Second Traversal.
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						for (int  ii = 0; ii < 8; ii++)
						{
							for (int  jj = 0; jj < 8; jj++)
							{
								//If Tow How is the Same Continue Traversal Back.
								if (i == ii && j == jj)
								{
									continue;
								}
								//If is BLACK Order.
								if (Table[i][j] < 0)
								{
									//If Is WHITE Order.
									if (Table[ii][jj] > 0)
									{
										//Initiate Local Variables.
										int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
										//Clone  a Copy.
										for (int  iii = 0; iii < 8; iii++)
										{
											for (int  jjj = 0; jjj < 8; jjj++)
											{
												Tab[iii][jjj] = Table[iii][jjj];
											}
										}
										//If Is Movable.
										if ((new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, i, j))->Movable(CloneATable(Tab), i, j, ii, jj, -1, -1))
										{
											//Clone a Copy.
											for (int  iii = 0; iii < 8; iii++)
											{
												for (int  jjj = 0; jjj < 8; jjj++)
												{
													Tab[iii][jjj] = Table[iii][jjj];
												}
											}
											//If BLACK Check.
											if (CheckBLACK)
											{
												//Initiate Local Variables.
												Tab[ii][jj] = Tab[i][j];
												Tab[i][j] = 0;
												//If There is Not Check.
												if (!Check(CloneATable(Tab), Order))
												{
													//If Is Not BLACK Check.
													if (!CheckBLACK)
													{
														//Initiate and Move.
														Tab[i][j] = Table[ii][jj];
														Tab[ii][jj] = 0;
														////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
														////lock (O1)
														{
															CheckBLACKRemovableValueRowi = i;
															CheckWHITERemovableValueColumni = j;
															CheckWHITERemovableValueRowii = ii;
															CheckWHITERemovableValueColumnjj = jj;
															CheckWHITERemovable = true;
														}
													}
												}
												//Move Back.
												Tab[i][j] = Table[ii][jj];
												Tab[ii][jj] = 0;
											}


										}
									}
								}
							}
						}
					}
				}
			}
			{
				//For All Second Traversal Homes.
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						for (int  ii = 0; ii < 8; ii++)
						{
							for (int  jj = 0; jj < 8; jj++)
							{
								//if The Tow Traversal are the ame Continue Traversal Back.
								if (i == ii && j == jj)
								{
									continue;
								}
								//If the WHITE.
								if (Table[i][j] > 0)
								{
									//If the BLACK.
									if (Table[ii][jj] < 0)
									{
										//Inaitate Local Variables.
										int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
										//Clone a Copy.
										for (int  iii = 0; iii < 8; iii++)
										{
											for (int  jjj = 0; jjj < 8; jjj++)
											{
												Tab[iii][jjj] = Table[iii][jjj];
											}
										}
										//Moveable Movemnts in the Tow Traversal Kind.
										if ((new ThinkingHybridizerRefrigitz(-1, 0, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, i, j))->Movable(CloneATable(Tab), i, j, ii, jj, 1, 1))
										{
											for (int  iii = 0; iii < 8; iii++)
											{
												for (int  jjj = 0; jjj < 8; jjj++)
												{
													Tab[iii][jjj] = Table[iii][jjj];
												}
											}
											//If the WHITE Check.
											if (CheckWHITE)
											{
												//Move 
												Tab[ii][jj] = Tab[i][j];
												Tab[i][j] = 0;
												//If ther is Not Check.
												if (!Check(CloneATable(Tab), Order))
												{
													//If there is Not WHITE Check.
													if (!CheckWHITE)
													{
														//Move and Initaite Local and Global Variables.
														Tab[i][j] = Table[ii][jj];
														Tab[ii][jj] = 0;
														////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
														////lock (O1)
														{
															CheckBLACKRemovableValueRowi = i;
															CheckBLACKRemovableValueColumnj = j;
															CheckBLACKRemovableValueRowii = ii;
															CheckBLACKRemovableValueColumnjj = jj;
															CheckBLACKRemovable = true;
														}

													}
												}
												//Move Back.
												Tab[i][j] = Table[ii][jj];
												Tab[ii][jj] = 0;
											}


										}
									}
								}
							}
						}
					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckRemovableByAttack:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//If Check Remoavbe BLACK Or WHITE Return Removable.
			if (CheckBLACKRemovable || CheckWHITERemovable)
			{
				return true;
			}
			//Return Not Removable.
			return false;
		}
	}

	bool **ChessRules::VeryFye(int** Table, int Order, int a, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int Cdummy = ChessRules::CurrentOrder;
			if (Order == 1)
			{
				ChessRules::CurrentOrder = 1;
			}
			else
			{
				ChessRules::CurrentOrder = -1;
			}
			
			bool **Tab; *Tab = new bool[8]; for (int b = 0; b < 8; b++)Tab[b] = new bool[8];
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					if (i == ii && j == jj)
					{
						continue;
					}


					if ((new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[ii][jj], CloneATable(Table), Order, ii, jj))->Rules(0, jj, i, j, a, Table[ii][jj]))
					{
						Tab[i][j] = true;
					}
					if ((new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[ii][jj], CloneATable(Table), Order, ii, jj))->Rules(0, jj, i, j, a, Table[ii][jj]))
					{
						Tab[i][j] = true;
					}
				}
			}
			ChessRules::CurrentOrder = Cdummy;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("VeryFye:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Tab;
		}
	}

	bool ChessRules::OnlyKingMovable(int** Tab, bool  ** TabB, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					if (TabB[i][j])
					{
						if (Order == 1)
						{
							if (Tab[i][j] != 6)
							{
								////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("OnlyKingMovable:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
								return false;
							}
						}
						else
						{
							if (Tab[i][j] != -6)
							{
							////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("OnlyKingMovable:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
							return false;
							}
						}
					}

				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("OnlyKingMovable:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return true;

		}
	}

	int **ChessRules::CloneATable(int** Tab)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
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
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CloneATable:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Table;
		}

	}

	bool **ChessRules::CloneATableB(bool** Tab)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
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
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CloneATable:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Table;
		}

	}

	bool ChessRules::Pat(int** Tab, int Order, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			bool Pat = false;
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				PatCheckedInKingRule = true;
			}
			if (!Check(CloneATable(Table), Order))
			{
				bool **TableS;*TableS = new bool[8]; for (int b = 0; b < 8; b++)TableS[b] = new bool[8];

				//  if (Order == -1)

				for (int  ii = 0; ii < 8; ii++)
				{
					for (int  jj = 0; jj < 8; jj++)
					{
						if (Table[ii][jj] > 0)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: bool[,] TableSS = VeryFye(CloneATable(Table), 1, int.WHITE, ii, jj);
							bool **TableSS = VeryFye(CloneATable(Table), 1, 1, ii, jj);

							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									TableS[iii][jjj] |= TableSS[iii][jjj];
								}
							}
						}
					}
				}
				if (OnlyKingMovable(CloneATable(Table), CloneATableB(TableS), 1))
				{
					NumbersofKingMovesToPatWHITE++;
				}
				Pat = false;
				for (int  ii = 0; ii < 8; ii++)
				{
					for (int  jj = 0; jj < 8; jj++)
					{
						Pat |= TableS[ii][jj];
					}
				}
				Pat = !Pat;
				if (Pat || NumbersofKingMovesToPatWHITE > 16)
				{
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						AllDraw::EndOfGame = true;
						PatkWHITE = true;
					}
				}
				*TableS = new bool[8]; for (int b = 0; b < 8; b++)TableS[b] = new bool[8];
				
				for (int  ii = 0; ii < 8; ii++)
				{
					for (int  jj = 0; jj < 8; jj++)
					{
						if (Table[ii][jj] < 0)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: bool[,] TableSS = VeryFye(CloneATable(Table), -1, int.BLACK, ii, jj);
							bool **TableSS = VeryFye(CloneATable(Table), -1, -1, ii, jj);
							for (int  iii = 0; iii < 8; iii++)
							{
								for (int  jjj = 0; jjj < 8; jjj++)
								{
									TableS[iii][jjj] |= TableSS[iii][jjj];
								}
							}
						}
					}
				}
				if (OnlyKingMovable(CloneATable(Table), CloneATableB(TableS), -1))
				{
					NumbersofKingMovesToPatBLACK++;
				}
				Pat = false;
				for (int  ii = 0; ii < 8; ii++)
				{
					for (int  jj = 0; jj < 8; jj++)
					{
						Pat |= TableS[ii][jj];
					}
				}
				Pat = !Pat;
				if (Pat || NumbersofKingMovesToPatBLACK >= 16)
				{
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						AllDraw::EndOfGame = true;
						PatBLACK = true;
					}
				}
				if (PatkWHITE || PatBLACK)
				{
					Pat = true;
				}
			}
			else
			{
				if (CheckWHITE)
				{
					NumbersofKingMovesToPatWHITE = 0;
				}
				else
				{
					if (CheckBLACK)
					{
					NumbersofKingMovesToPatBLACK = 0;
					}
				}

			}
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				PatCheckedInKingRule = false;
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Pat:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Pat;
		}
	}

	void ChessRules::CheckKing(int** Table, int Order, int RowK, int ColumnK)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			//Clone a Copy.
			for (int  ii = 0; ii < 8; ii++)
			{
				for (int  jj = 0; jj < 8; jj++)
				{
					Tab[ii][jj] = Table[ii][jj];
				}
			}
			int Ord = Order;
			int aa = 1;
			if (Ord == -1)
			{
				aa = -1;
			}
			bool BREAK = false;
			//For All Home Table.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//If The Current Home is the WHITE King Continue Traversal Back.
					if (i == RowK && j == ColumnK)
					{
						continue;
					}
					if (Ord == 1 & Tab[i][j] <= 0)
					{
						continue;
					}
					if (Ord == -1 & Tab[i][j] >= 0)
					{
						continue;
					}
					//Initiate Global Variables.
					int Dummt = ChessRules::CurrentOrder;
					ChessRules::CurrentOrder = -1;
					//Clone a Copy.
					for (int  ii = 0; ii < 8; ii++)
					{
						for (int  jj = 0; jj < 8; jj++)
						{
							Tab[ii][jj] = Table[ii][jj];
						}
					}

					int a = 1;
					if (Ord == -1)
					{
						a = -1;
					}
					ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[i][j], CloneATable(Table), Ord, i, j);
					if (Ord == 1)
					{
						//Menen Parameter is Moveble to Second Parameters Location returm Movable.
						if (A->Rules(i, j, RowK, ColumnK, aa, Ord))
						{
							BREAK = true;
							//Initiate Local Is Check Variables.
							CheckBLACK = true;
							break;
						}
					}
					else
					{ //Menen Parameter is Moveble to Second Parameters Location returm Movable.
						if (A->Rules(i, j, RowK, ColumnK, aa, Ord))
						{
							BREAK = true;
							CheckWHITE = true;
							break;
						}
					}

					//Initiate Global Variables.
					ChessRules::CurrentOrder = Dummt;


				}
				if (BREAK)
				{
					break;
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
		}
	}

	bool ChessRules::Check(int** Table, int Ord)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
		   //A player is not required to move their king out of check and the game concludes when there is a 100 % probability that one of the kings has been taken. As a result there is no checkmate.
			if (DrawKing::KingWHITENotCheckedByQuantumMove && Ord == 1)
			{
				return false;
			}
			else
			{
			if (DrawKing::KingBLACKNotCheckedByQuantumMove && Ord == -1)
			{
				return false;
			}
			}
			int DummyOrder = Ord;
			//Initiate Local and Global Briables.
			bool Store = ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing;
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				ChessRules::CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing = false;
			}
			CheckWHITE = false;
			CheckBLACK = false;
			//Initiate Local Variables.
			int RowG = 0, ColumnG = 0;
			int RowB = 0, ColumnB = 0;
			//if (Ord == 1)

			//Foud of WHITE King.
			if (FindWHITEKing(CloneATable(Table), RowG, ColumnG))
			{
				CheckKing(CloneATable(Table), -1, RowG, ColumnG);
			}

			//Found of BLACK King.
			if (FindBLACKKing(CloneATable(Table), RowB, ColumnB))
			{
				CheckKing(CloneATable(Table), 1, RowB, ColumnB);
			}

			Ord = DummyOrder;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Check:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//If WHITE Check Or brwon Check return Check..
			if (CheckBLACK || CheckWHITE)
			{
				return true;
			}
			//Return Non Check.
			return false;
		}
	}

	void ChessRules::CheckMateKing(int** Tab, int Ord, bool CheckWHITEDummy, bool CheckBLACKDummy, int RowK, int ColumnK, bool &ActMove, bool Checked)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
			int DummyOrder = Order;
			//For All Home Table.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					if (Ord == 1 && Tab[i][j] > 0)
					{
						continue;
					}
					if (Ord == -1 && Tab[i][j] < 0)
					{
						continue;
					}

					//Clone a Copy.
					CheckWHITE = CheckWHITEDummy;
					CheckBLACK = CheckBLACKDummy;
					//If There is WHITE Check.
					if (Checked)
					{
						//Initiate Global Variables.
						ChessRules::CurrentOrder = 1;
						//Ig WHITE King is Movable to First Home Table.
						int a = 1;
						if (Ord == -1)
						{
							a = -1;
						}
						ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[RowK][ColumnK], CloneATable(Table), Ord, RowK, ColumnK);
						Order = DummyOrder;
						///Table[ii, jj] = 0;
						//Menen Parameter is Moveble to Second Parameters Location returm Movable.
						for (int k = 0; k < 8; k++)
						{
							for (int p = 0; p < 8; p++)
							{
								Table[k][p] = Tab[k][p];
							}
						}
						if (A->Rules(RowK, ColumnK, i, j, a, Ord))
						{
							Order = DummyOrder;
							//Initaite Loval and Move.
							//ActMove = false;
							int Store = Table[i][j];
							//For Another Methods
							Table[i][j] = Table[RowK][ColumnK];
							Table[RowK][ColumnK] = 0;
							//If Is Check.
							if (A->Check(CloneATable(Table), Ord))
							{
								//Move Back.
								//If WHITE Check.
								if (Ord == 1)
								{
									if (A->CheckWHITE)
									{
										//Move Mack.
										ActMove = true;
										continue;
									}
									else //If There is Not WHITE Check.
									{
										//Move Back.
										ActMove = false;
										break;
									}
								}
								else
								{
									if (A->CheckBLACK)
									{
										//Move Mack.
										ActMove = true;
										continue;
									}
									else //If There is Not WHITE Check.
									{
										//Move Back.
										ActMove = false;
										break;
									}
								}

							}
							else
							{
								//Comon Move Back.
								ActMove = false;
								break;
							}

						}
					}

				}
				//If One of The Not Movable.
				if (!ActMove)
				{
					break;
				}
			}
			Order = DummyOrder;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckMateKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
		}
	}

	void ChessRules::CheckMateNotKing(int** Tab, int Ord, bool CheckWHITEDummy, bool CheckBLACKDummy, bool &ActMove)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
			int DummyOrder = Ord;
			//For All Home Table.
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					if (Ord == 1 && Tab[i][j] <= 0)
					{
						continue;
					}
					if (Ord == -1 && Tab[i][j] >= 0)
					{
						continue;
					}
					//Initiate Global varibales. 
					CheckWHITE = CheckWHITEDummy;
					CheckBLACK = CheckBLACKDummy;
					//Clone a Copy.
					CheckWHITE = CheckWHITEDummy;
					CheckBLACK = CheckBLACKDummy;
					//If There is WHITE Check.
					//Initiate Local Varibale.
					ActMove = true;
					//For All Second Home Table.
					for (int  ii = 0; ii < 8; ii++)
					{

						for (int  jj = 0; jj < 8; jj++)
						{
							if (Ord == 1 && Tab[ii][jj] > 0)
							{
								continue;
							}
							if (Ord == -1 && Tab[ii][jj] < 0)
							{
								continue;
							}
							//Clone a Copy.

							Table = CloneATable(Tab);

							int a = 1;
							if (Ord == -1)
							{
								a = -1;
							}
							ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[i][j], CloneATable(Table), Ord, i, j);
							///Table[ii, jj] = 0;
							//Menen Parameter is Moveble to Second Parameters Location returm Movable.
							if (A->Rules(i, j, ii, jj, a, Ord))
							{
								Order = DummyOrder;
								//Initiate Local Varibales and Move.
								//ActMove = false;
								//For Another Methods
								int Store = Table[i][j];
								Table[ii][jj] = Table[i][j];
								Table[i][j] = 0;
								//If Check.
								A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[ii][jj], CloneATable(Table), Ord, ii, jj);
								if (A->Check(CloneATable(Table), Ord))
								{
									Order = DummyOrder;
									//Move Back.
									Table[i][j] = Table[ii][jj];
									Table[ii][jj] = Store;
									//If WHITE Check.
									if (Ord == 1)
									{
										if (A->CheckWHITE)
										{
											//Initiate and Move Back.
											ActMove = true;
											Table[i][j] = Table[ii][jj];
											Table[ii][jj] = Store;
											continue;
										}
										//If There is Not WHITE Check.
										else
										{
											//Initiate Varaible and Move Back.
											ActMove = false;
											Table[i][j] = Table[ii][jj];
											Table[ii][jj] = Store;
											break;
										}
									}
									else
									{
										if (A->CheckBLACK)
										{
											//Initiate and Move Back.
											ActMove = true;
											Table[i][j] = Table[ii][jj];
											Table[ii][jj] = Store;
											continue;
										}
										//If There is Not WHITE Check.
										else
										{
											//Initiate Varaible and Move Back.
											ActMove = false;
											Table[i][j] = Table[ii][jj];
											Table[ii][jj] = Store;
											break;
										}
									}
								}
								else
								{
									//Move Back and Initiate.
									Table[i][j] = Table[ii][jj];
									Table[ii][jj] = Store;
									ActMove = false;
									break;
								}
							}
						}
						//If Not Movable Break.
						if (!ActMove)
						{
							break;
						}
					}

					if (!ActMove)
					{
						break;
					}
				}
				//If Not Movable Break.
				if (!ActMove)
				{
					break;
				}
			}
			Order = DummyOrder;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckMateNotKing:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
		}
	}

	bool ChessRules::CheckMate(int** Tab, int Ord)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;

			//Initiate Local and Global  Varibales.
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];

			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}

			CheckWHITE = false;
			CheckBLACK = false;
			CheckMateBLACK = false;
			CheckMateWHITE = false;
			bool ActMoveG = true;
			bool ActMoveGF = true;
			bool ActMoveB = true;
			bool ActMoveBF = true;
			int RowG = 0, ColumnG = 0;
			int RowB = 0, ColumnB = 0;
			int DumnyOrder = Ord;
			//Check Consideration.
			Check(CloneATable(Table), Ord);
			//Initiate Local Varibales.
			bool CheckWHITEDummy = CheckWHITE;
			bool CheckBLACKDummy = CheckBLACK;

			ActMoveG = true;
			ActMoveGF = true;

			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			ChessRules *A =new  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[RowG][ColumnG], CloneATable(Table), Ord, RowG, ColumnG);

			//Found of WHITE King.
			if (FindWHITEKing(CloneATable(Table), RowG, ColumnG))
			{
				A->CheckMateKing(CloneATable(Table), 1, CheckWHITEDummy, CheckBLACKDummy, RowG, ColumnG, ActMoveG, CheckWHITE);
			}

			Table = CloneATable(Tab);


			//Found of WHITE King.
			if (FindWHITEKing(CloneATable(Table), RowG, ColumnG))
			{
				A->CheckMateNotKing(CloneATable(Table), 1, CheckWHITEDummy, CheckBLACKDummy, ActMoveGF);
			}

			//Intiate Global Variables.
			CheckWHITE = CheckWHITEDummy;
			CheckBLACK = CheckBLACKDummy;

			//Condition of CheckMate WHITE King.
			if (CheckWHITE && (ActMoveG && ActMoveGF))
			{
				CheckMateWHITE = true;
			}


			ActMoveB = true;
			ActMoveBF = true;

			ChessRules *AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsBoard, Table[RowB][ColumnB], CloneATable(Table), Ord, RowB, ColumnB);

			Table = CloneATable(Tab);


			//Found of BLACK King.
			if (FindBLACKKing(CloneATable(Table), RowB, ColumnB))
			{
				AA->CheckMateKing(CloneATable(Table), -1, CheckWHITEDummy, CheckBLACKDummy, RowB, ColumnB, ActMoveB, CheckBLACK);
			}
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					Table[i][j] = Tab[i][j];
				}
			}
			//Found of BLACK King.
			if (FindBLACKKing(CloneATable(Table), RowB, ColumnB))
			{
				AA->CheckMateNotKing(CloneATable(Table), -1, CheckWHITEDummy, CheckBLACKDummy, ActMoveBF);
			}


			//Initiate Global Varibales.
			CheckWHITE = CheckWHITEDummy;
			CheckBLACK = CheckBLACKDummy;
			//Condition of BLACK CheckMate.
			if (CheckBLACK && (ActMoveB && ActMoveBF))
			{
				CheckMateBLACK = true;
			}

			//Initiate Global Variables.
			Ord = DumnyOrder;
			//If BLACK CheckMate and WHITE.
			if (CheckMateWHITE || CheckMateBLACK)
			{
				//Initiate Global Variable and Return CheckMate.
				CheckWHITE = CheckWHITEDummy;
				CheckBLACK = CheckBLACKDummy;
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					AllDraw::EndOfGame = true;
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckMate:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return true;
				}
			}
			//Initiate Global Variables.
			CheckWHITE = CheckWHITEDummy;
			CheckBLACK = CheckBLACKDummy;
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CheckMate:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Return Not CheckMate.
			return false;
		}
	}

	bool ChessRules::Rule(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki, bool SelfHomeStatCP)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
			  //When is Not Castles King State.
			if (Kind != 7)
			{
				//Determination of Enemy Existing.
				if (ExistSelfHome(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, Ki) && SelfHomeStatCP)
				{
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return false;
				}
			}
			//Determination of King Enemy at Destination Home.

			//If Source and The Destination are The Same.
			if (RowFirst == RowSecond && ColumnFirst == ColumnSecond)
			{
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return false;
			}
			//Initiate Global Variable.
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				KingAttacker = false;
			}
			//Rule of Soldeir.
			switch (Kind)
			{
				//Rule of Soldeir.
				case 1:
					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return SoldierRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy);


				case 4: //Rule of Castles.
					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}


					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return CastleRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki);


				case 3: //Rule of Hourses.
					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}
					return HourseRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy);

				case 2: //Rule of Elephant.

					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}

					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return ElefantRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki);
				case 5: //Rule of Ministers.
					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}

					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return MinisterRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki);

				case 6: //Rule of Kings.
					if (abs(TableS[RowFirst][ColumnFirst]) != Kind)
					{
						return false;
					}
					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return KingRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki);
				case 7: //Rule of Castles King.

					////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("Rule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
					return CastleKing(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, Ki);
				default:
					return false;
			}

		}
	}

	bool ChessRules::KingRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			//When Miniaster Rule is Valid.
			if (MinisterRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki) && (abs(RowFirst - RowSecond) <= 1) && (abs(ColumnFirst - ColumnSecond) <= 1))
			{
				//Initiate Local Variable.

				Move_Renamed = true;
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("KingRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Move_Renamed;
		}
	}

	bool ChessRules::MinisterRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			//When is Castles Rule.
			if (CastleRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki))
			{
				//Return Validity.,
				Move_Renamed = true;
			}
			else
			{
				//When is Elephant Rule.
				if (ElefantRules(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy, Ki))
				{
				//Return Validity.,
				Move_Renamed = true;
				}
			}
			//Return Not Valididty.
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("MinisterRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Move_Renamed;
		}

	}

	bool ChessRules::CastleRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			bool Act = false;
			//If Variation is Only in [So2]..
			if (abs(ColumnFirst - ColumnSecond) == 0 && abs(RowFirst - RowSecond) != 0)
			{
				//Initiate Local Variables.
				int RowU = RowSecond, RowD = RowFirst;
				int ColD = ColumnFirst, ColU = ColumnSecond;
				int RowF = 1, Colf = 1;
				if (RowU < RowD)
				{
					RowF = -1;
				}
				if (ColU < ColD)
				{
					Colf = -1;
				}
				int incf = 0, incR = 0;
				if (RowF < 0)
				{
					incf = -1;
				}
				if (Colf < 0)
				{
					incR = -1;
				}
				int F = 0, G = 0;
				int A = 0, B = 0;
				if (incf < 0)
				{
					F = RowU;
					G = RowD;
				}
				else
				{
					F = RowD;
					G = RowU;

				}
				if (incR < 0)
				{
					A = ColU;
					B = ColD;
				}
				else
				{
					A = ColD;
					B = ColU;

				}
				{
					//For Variation of [So2]. Home.
					for (int  i = F; i <= G; i++)
					{
						if (IgnoreSelfObject && i == RowSecond)
						{
							continue;
						}
						//When is Not Current Source Home.
						if (i != RowFirst)
						{
							//When There is Self Home at Home of WHITE Return Not Validity.
							if (Table[i][ColumnFirst] > 0 && Table[RowFirst][ColumnFirst] > 0)
							{
								Move_Renamed = false;
								Act = true;
							}
							//When There is Self Home of BLACK Objects Return Not Validity.
							if (Table[i][ColumnFirst] < 0 && Table[RowFirst][ColumnFirst] < 0)
							{
								Act = true;
								Move_Renamed = false;
							}

							//If Situation is Occured.
							if (i != RowSecond)
							{
								//When There is Slef Home at Root Return Not Valididty.
								if ((Table[i][ColumnFirst] < 0 || Table[i][ColumnFirst] > 0) && Table[RowFirst][ColumnFirst] > 0)
								{
									Act = true;
									Move_Renamed = false;
								}
								//When There is Slef Home at Root Return Not Valididty.
								if ((Table[i][ColumnFirst] > 0 || Table[i][ColumnFirst] < 0) && Table[RowFirst][ColumnFirst] < 0)
								{
									Act = true;
									Move_Renamed = false;
								}
							}
						}

					}
				}
				if (!Act)
				{
					Move_Renamed = true;
				}

			}
			//When There is Only Column Variation Home Changes.
			if (abs(ColumnFirst - ColumnSecond) != 0 && abs(RowFirst - RowSecond) == 0)
			{
				//Initiate Local Variables.
				int RowU = RowSecond, RowD = RowFirst;
				int ColD = ColumnFirst, ColU = ColumnSecond;
				int RowF = 1, Colf = 1;
				if (RowU < RowD)
				{
					RowF = -1;
				}
				if (ColU < ColD)
				{
					Colf = -1;
				}
				int incf = 0, incR = 0;
				if (RowF < 0)
				{
					incf = -1;
				}
				if (Colf < 0)
				{
					incR = -1;
				}
				int F = 0, G = 0;
				int A = 0, B = 0;
				if (incf < 0)
				{
					F = RowU;
					G = RowD;
				}
				else
				{
					F = RowD;
					G = RowU;

				}
				if (incR < 0)
				{
					A = ColU;
					B = ColD;
				}
				else
				{
					A = ColD;
					B = ColU;

				}

				//For All Column Home Variation.
				for (int  j = A; j <= B; j++)
				{
					if (IgnoreSelfObject && j == ColumnSecond)
					{
						continue;
					}
					//When The Source is Not The Current.
					if (j != ColumnFirst)
					{
						//For All Self Home at Root Return Not Validity
						if (Table[RowFirst][j] > 0 && Table[RowFirst][ColumnFirst] > 0)
						{
							Act = true;
							Move_Renamed = false;
						}
						//For All Self Home at Root Return Not Validity.                       
						if (Table[RowFirst][j] < 0 && Table[RowFirst][ColumnFirst] < 0)
						{
							Act = true;
							Move_Renamed = false;
						}
						//Condition Determination.
						if (j != ColumnSecond)
						{
							//Existing of Self Home At Root Cuased to Not validity.
							if ((Table[RowFirst][j] < 0 || Table[RowFirst][j] > 0) && Table[RowFirst][ColumnFirst] > 0)
							{
								Act = true;
								Move_Renamed = false;
							}
							//Existing of Self Home At Root Cuased to Not validity.
							if ((Table[RowFirst][j] > 0 || Table[RowFirst][j] < 0) && Table[RowFirst][ColumnFirst] < 0)
							{
								Act = true;
								Move_Renamed = false;
							}
						}
					}


				}
				//Return Validity.
				if (!Act)
				{
					Move_Renamed = true;
				}
			}

			//Return Not Validity.

			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("CastleRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Return not Vailidity.
			return Move_Renamed;

		}
	}

	bool ChessRules::ElefantRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			bool Act = false;
			//Orthogonal Movments of One Abs Derivation.
			if (abs(ColumnFirst - ColumnSecond) == abs(RowFirst - RowSecond))
			{
				//Initaiet Of Local Variables.
				int RowU = RowSecond, RowD = RowFirst;
				int ColD = ColumnFirst, ColU = ColumnSecond;
				int RowF = 1, Colf = 1;
				if (RowU < RowD)
				{
					RowF = -1;
				}
				if (ColU < ColD)
				{
					Colf = -1;
				}
				int incf = 0, incR = 0;
				if (RowF < 0)
				{
					incf = -1;
				}
				if (Colf < 0)
				{
					incR = -1;
				}
				int F = 0, G = 0;
				int A = 0, B = 0;
				if (incf < 0)
				{
					F = RowU;
					G = RowD;
				}
				else
				{
					F = RowD;
					G = RowU;

				}
				if (incR < 0)
				{
					A = ColU;
					B = ColD;
				}
				else
				{
					A = ColD;
					B = ColU;

				}
				//For All Root Source to Destination.
				for (int  i = F; i <= G; i++)
				{
					for (int  j = A; j <= B; j++)
					{
						if (IgnoreSelfObject && i == RowSecond && j == ColumnSecond)
						{
							continue;
						}

						//If Abs Derivation is Not One Continue. 
						if (abs(i - RowFirst) != abs(j - ColumnFirst))
						{
							continue;
						}
						//If the Current is Not Source Home.
						if (i != RowFirst && j != ColumnFirst)
						{
							{
								//If the Root Contains Self Home Return Not Validity.
								if (Table[i][j] > 0 && Table[RowFirst][ColumnFirst] > 0)
								{
									Act = true;
									Move_Renamed = false;
								}
								//If The Root Contains Self Home Return Not vALIDITY. 
								if (Table[i][j] < 0 && Table[RowFirst][ColumnFirst] < 0)
								{
									Act = true;
									Move_Renamed = false;
								}
								//When the Current is Not The Source Home.
								if (i != RowSecond && j != ColumnSecond)
								{
									//When the Self ObjectExisting at the Root .
									if ((Table[i][j] > 0 || Table[i][j] < 0) && Table[RowFirst][ColumnFirst] > 0)
									{
										Act = true;
										Move_Renamed = false;
									}
									//When the Self ObjectExisting at the Root .
									if ((Table[i][j] < 0 || Table[i][j] > 0) && Table[RowFirst][ColumnFirst] < 0)
									{
										Act = true;
										Move_Renamed = false;
									}
								}
							}
						}

					}
				}
				//Return Validity.
				if (!Act)
				{
					Move_Renamed = true;
				}
			}

			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ElephantRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//Return Not Validity.
			return Move_Renamed;
		}
	}

	bool ChessRules::HourseRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			//When L Movament is Occured. 
			if (abs(ColumnFirst - ColumnSecond) == 2 && abs(RowFirst - RowSecond) == 1)
			{
				//Retrun Validity.
				Move_Renamed = true;
			}
			//When Second L Movments Occured.
			if (abs(ColumnFirst - ColumnSecond) == 1 && abs(RowFirst - RowSecond) == 2)
			{
				//Return Validity.
				Move_Renamed = true;
			}
			//Return Not Validity.

			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("HourseRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Move_Renamed;
		}
	}

	bool ChessRules::SoldierRulesaArrangmentsBoardOne(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			//When int is WHITE.
			if (Order == 1)
			{
				//If Not Forward Return Not Validity.
				if (ColumnFirst < ColumnSecond)
				{
					Move_Renamed = false;
				}
			}
			else //int of BLACK.
			{
				if (Order == -1)
				{
				//If Not Back Wrad Return Not Vlaidity.
				if (ColumnFirst > ColumnSecond)
				{
					Move_Renamed = false;
				}
				}
			}
			//When Soldier Not Moved in Original Location do
			if (NotMoved)
			{
				if (Order == -1 && Table[RowFirst][ColumnFirst] < 0)
				{
					//Depend on First Move do For Land Of Islam


					if ((ColumnFirst + 2 < 8) && (ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 2) && (Table[RowSecond][ColumnSecond - 1] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else
					{
						if ((ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 1) && (Table[RowSecond][ColumnSecond] == 0))
						{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
						}
					else //Hit BLACK Soldier Rulments.
					{
							if ((ColumnFirst + 1 < 8) && ColumnSecond == ColumnFirst + 1)
							{
						if ((RowSecond - 1 < 8) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}

							}
					}
					}

				}
				else //WHITE int.
				{
					if (Order == 1 && Table[RowFirst][ColumnFirst] > 0)
					{
					//Depend Of First Move do For Positivism

					if ((ColumnSecond + 2 < 8) && (ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 2) && (Table[RowSecond][ColumnSecond + 1] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else
					{
						if ((ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 1) && (Table[RowSecond][ColumnSecond] == 0))
						{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
						}
					else //Hit Condition Enemy Movments.
					{
							if ((ColumnSecond + 1 < 8) && ColumnFirst == ColumnSecond + 1)
							{
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						if ((RowSecond - 1 >= 0) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
							}
					}
					}

					}
				}
			}
			else //If Soldeior Moved Previously.
			{
				//For BLACK int.
				if (Order == -1 && Table[RowFirst][ColumnFirst] < 0)
				{
					//Depend on Second Move do For Land Of Islam

					if ((ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 1) && (Table[RowSecond][ColumnSecond] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else //Hit BLACK Soldier Rulments.
					{
						if ((ColumnFirst + 1 < 8) && ColumnSecond == ColumnFirst + 1)
						{
						if ((RowSecond - 1 < 8) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}

						}
					}

				}
				else //WHITE int.
				{
					if (Order == 1 && Table[RowFirst][ColumnFirst] > 0)
					{
					//Depend Of Second Move do For Positivism Land

					if ((ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 1) && (Table[RowSecond][ColumnSecond] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else //Hit Condition Enemy Movments.
					{
						if ((ColumnSecond + 1 < 8) && ColumnFirst == ColumnSecond + 1)
						{
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						if ((RowSecond - 1 >= 0) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						}
					}

					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("SoldierRule:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Move_Renamed;
		}
	}

	bool ChessRules::SoldierRulesaArrangmentsBoardZero(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(TableS);
			int **Table = CloneATable(TableS);

			//long Time = TimeElapced.TimeNow();Spaces++;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
			bool Move_Renamed = false;
			//When int is WHITE.
			if (Order == 1)
			{
				//If Not Forward Return Not Validity.
				if (ColumnFirst > ColumnSecond)
				{
					Move_Renamed = false;
				}
			}
			else //int of BLACK.
			{
				if (Order == -1)
				{
				//If Not Back Wrad Return Not Vlaidity.
				if (ColumnFirst < ColumnSecond)
				{
					Move_Renamed = false;
				}
				}
			}
			//When Soldier Not Moved in Original Location do
			if (NotMoved)
			{
				if (Order == 1 && Table[RowFirst][ColumnFirst] > 0)
				{
					//Depend on First Move do For Land Of Islam


					if ((ColumnFirst + 2 < 8) && (ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 2) && (Table[RowSecond][ColumnSecond - 1] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else
					{
						if ((ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 1) && (Table[RowSecond][ColumnSecond] == 0))
						{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
						}
					else //Hit WHITE Soldier Rulments.
					{
							if ((ColumnFirst + 1 < 8) && ColumnSecond == ColumnFirst + 1)
							{
						if ((RowSecond - 1 < 8) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}

							}
					}
					}

				}
				else //BLACK int.
				{
					if (Order == -1 && Table[RowFirst][ColumnFirst] < 0)
					{
					//Depend Of First Move do For Positivism

					if ((ColumnSecond + 2 < 8) && (ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 2) && (Table[RowSecond][ColumnSecond + 1] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else
					{
						if ((ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 1) && (Table[RowSecond][ColumnSecond] == 0))
						{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
						}
					else //Hit Condition Enemy Movments.
					{
							if ((ColumnSecond + 1 < 8) && ColumnFirst == ColumnSecond + 1)
							{
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						if ((RowSecond - 1 >= 0) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
							}
					}
					}

					}
				}
			}
			else //If Soldeior Moved Previously.
			{
				//For WHITE int.
				if (Order == 1 && Table[RowFirst][ColumnFirst] > 0)
				{
					//Depend on Second Move do For Land Of Islam

					if ((ColumnFirst + 1 < 8) && (RowFirst == RowSecond) && (ColumnSecond == ColumnFirst + 1) && (Table[RowSecond][ColumnSecond] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else //Hit WHITE Soldier Rulments.
					{
						if ((ColumnFirst + 1 < 8) && ColumnSecond == ColumnFirst + 1)
						{
						if ((RowSecond - 1 < 8) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							Move_Renamed = true;
						}

						}
					}

				}
				else //BLACK int.
				{
					if (Order == -1 && Table[RowFirst][ColumnFirst] < 0)
					{
					//Depend Of Second Move do For Positivism Land

					if ((ColumnSecond + 1 < 8) && (RowFirst == RowSecond) && (ColumnFirst == ColumnSecond + 1) && (Table[RowSecond][ColumnSecond] == 0))
					{
						//When Destination is The Empty Return Validity Else Return Not Validity.
						if (Table[RowSecond][ColumnSecond] == 0)
						{
							Move_Renamed = true;
						}
						else
						{
							Move_Renamed = false;
						}
					}
					else //Hit Condition Enemy Movments.
					{
						if ((ColumnSecond + 1 < 8) && ColumnFirst == ColumnSecond + 1)
						{
						if ((RowSecond + 1 < 8) && (RowFirst == RowSecond + 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						if ((RowSecond - 1 >= 0) && (RowFirst == RowSecond - 1) && (ExistInDestinationEnemy || IgnoreSelfObject))
						{
							//Return Validity.
							Move_Renamed = true;
						}
						}
					}

					}
				}
			}
			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("SoldierRulesaArrangmentsBoardZero:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			return Move_Renamed;
		}

	}

	bool ChessRules::SoldierRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//long Time = TimeElapced.TimeNow();Spaces++;

			if (!(ArrangmentsBoard))
			{
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("SoldierRules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return SoldierRulesaArrangmentsBoardZero(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy);
			}
			else
			{
				////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("SoldierRules:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
				return SoldierRulesaArrangmentsBoardOne(RowFirst, ColumnFirst, RowSecond, ColumnSecond, NotMoved, color, ExistInDestinationEnemy);
			}

			///Return Not Validity.
		}
	}

	void ChessRules::InitializeInstanceFields()
	{
		//Space = new std::string("&nbsp;");
		Spaces = 0;
		IgnoreSelfObject = false;
		MovementsAStarGreedyHeuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = true;
		BestMovmentsT = false;
		PredictHeuristicT = true;
		OnlySelfT = false;
		AStarGreedyHeuristicT = false;
		CheckWHITEObjectDangour = false;
		CheckBLACKObjectDangour = false;
		PatkWHITE = false;
		PatBLACK = false;
		CheckWHITE = false;
		CheckBLACK = false;
		CheckMateWHITE = false;
		CheckMateBLACK = false;
		Kind = 0;
		KindNA = 0;
		Row = 0;
		Column = 0;
		Order = 0;
		ArrangmentsBoard = false;
		CurrentAStarGredyMax = -1;
	}

