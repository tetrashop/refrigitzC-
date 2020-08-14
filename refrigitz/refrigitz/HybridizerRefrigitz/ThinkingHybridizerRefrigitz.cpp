#include "ThinkingHybridizerRefrigitz.h"
#include "ChessRules.h"
#include "QuantumAtamata.h"


std::wstring ThinkingHybridizerRefrigitz::OutP = L"";
bool ThinkingHybridizerRefrigitz::GoldenFinished = false;
int ThinkingHybridizerRefrigitz::NoOfBoardMovedWHITE = 0;
int ThinkingHybridizerRefrigitz::NoOfBoardMovedBLACK = 0;
int ThinkingHybridizerRefrigitz::NoOfMovableAllObjectMove = 1;
int ThinkingHybridizerRefrigitz::ColleralationWHITE = DBL_MAX;
int ThinkingHybridizerRefrigitz::ColleralationBLACK = DBL_MAX;
//int ThinkingHybridizerRefrigitz::Colleralation = DBL_MAX;
int ThinkingHybridizerRefrigitz::DeColleralation = DBL_MAX;
int ThinkingHybridizerRefrigitz::TableInitiation[8][8]=
{
	{-4, -1, 0, 0, 0, 0, 1, 4},
	{-3, -1, 0, 0, 0, 0, 1, 3},
	{-2, -1, 0, 0, 0, 0, 1, 2},
	{-5, -1, 0, 0, 0, 0, 1, 5},
	{-6, -1, 0, 0, 0, 0, 1, 6},
	{-2, -1, 0, 0, 0, 0, 1, 2},
	{-3, -1, 0, 0, 0, 0, 1, 3},
	{-4, -1, 0, 0, 0, 0, 1, 4}
};
int ThinkingHybridizerRefrigitz::TableInitiationPreventionOfMultipleMove[8][8] =
{
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}
};
bool ThinkingHybridizerRefrigitz::FullGameAllow = false;
bool ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw = false;
NetworkQuantumLearningKrinskyAtamata *ThinkingHybridizerRefrigitz::LearniningTable = nullptr;
std::wstring ThinkingHybridizerRefrigitz::ActionsString = L"";
bool ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccured = false;
bool ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccuredOneCheckedMate = false;
int ThinkingHybridizerRefrigitz::MaxHeuristicx = -DBL_MAX;
int ThinkingHybridizerRefrigitz::NumbersOfCurrentBranchesPenalties = 0;
int ThinkingHybridizerRefrigitz::NumbersOfAllNode = 0;
bool ThinkingHybridizerRefrigitz::KingMaovableWHITE = false;
bool ThinkingHybridizerRefrigitz::KingMaovableBLACK = false;
int ThinkingHybridizerRefrigitz::FoundFirstMating = 0;
int ThinkingHybridizerRefrigitz::FoundFirstSelfMating = 0;
int ThinkingHybridizerRefrigitz::BeginThread = 0;
int ThinkingHybridizerRefrigitz::EndThread = 0;
bool ThinkingHybridizerRefrigitz::NotSolvedKingDanger = false;
bool ThinkingHybridizerRefrigitz::ThinkingRun = false;
/*inline bool operator==(const AllDraw* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const AllDraw* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawSoldire* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawSoldire* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawCastle* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawCastle* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawElefant* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawElefant* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawHourse* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawHourse* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawMinister* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawMinister* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawKing* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawKing* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const ThinkingHybridizerRefrigitz* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const ThinkingHybridizerRefrigitz* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }*/
/*

inline bool operator==(const AllDraw lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const AllDraw lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawSoldire lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawSoldire lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawCastle lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawCastle lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawElefant lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawElefant lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawHourse lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawHourse lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawMinister lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawMinister lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawKing lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawKing lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const ThinkingHybridizerRefrigitz lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const ThinkingHybridizerRefrigitz lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }*/

	void ThinkingHybridizerRefrigitz::SetObjectNumbersInList(int** Tab)
	{
		SetObjectNumbers(Tab);
		int **A; *A = new int[2]; for (int i = 0; i < 2; i++)A[i] = new int[6];
		A[0][0] = SodierMidle;
		A[1][0] = SodierHigh;

		A[0][1] = ElefantMidle;
		A[1][1] = ElefantHigh;

		A[0][2] = HourseMidle;
		A[1][2] = HourseHight;

		A[0][3] = CastleMidle;
		A[1][3] = CastleHigh;

		A[0][4] = MinisterMidle;
		A[1][4] = MinisterHigh;

		A[0][5] = KingMidle;
		A[1][5] = KingHigh;
		ObjectNumbers.push_back(A);
	}

	void ThinkingHybridizerRefrigitz::SetObjectNumbers(int** TabS)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			SodierMidle = 0;
			SodierHigh = 0;
			ElefantMidle = 0;
			ElefantHigh = 0;
			HourseMidle = 0;
			HourseHight = 0;
			CastleMidle = 0;
			CastleHigh = 0;
			MinisterMidle = 0;
			MinisterHigh = 0;
			KingMidle = 0;
			KingHigh = 0;
			for (int h = 0; h < 8; h++)
			{
				for (int s = 0; s < 8; s++)
				{
					if (TabS[h][s] == 1)
					{
						SodierMidle++;
						SodierHigh++;
					}
					else if (TabS[h][s] == 2)
					{
						ElefantMidle++;
						ElefantHigh++;
					}
					else if (TabS[h][s] == 3)
					{
						HourseMidle++;
						HourseHight++;
					}
					else if (TabS[h][s] == 4)
					{
						CastleMidle++;
						CastleHigh++;
					}
					else if (TabS[h][s] == 5)
					{
						MinisterMidle++;
						MinisterHigh++;
					}
					else if (TabS[h][s] == 6)
					{
						KingMidle++;
						KingHigh++;
					}
					else
					{
						if (TabS[h][s] == -1)
						{
						SodierHigh++;
						}
					else if (TabS[h][s] == -2)
					{
						ElefantHigh++;
					}
					else if (TabS[h][s] == -3)
					{
						HourseHight++;
					}
					else if (TabS[h][s] == -4)
					{
						CastleHigh++;
					}
					else if (TabS[h][s] == -5)
					{
						MinisterHigh++;
					}
					else if (TabS[h][s] == -6)
					{
						KingHigh++;
					}
					}
				}
			}
		}
	}

	ThinkingHybridizerRefrigitz::~ThinkingHybridizerRefrigitz()
	{
		InitializeInstanceFields();
		this->Dispose(true);
//C# TO C++ CONVERTER WARNING: There is no garbage collector in native C++:
//		GC::SuppressFinalize(this);
	}

	void ThinkingHybridizerRefrigitz::Dispose(bool disposing)
	{
		if (disposing)
		{


		}
	}

	std::wstring ThinkingHybridizerRefrigitz::AsS(int i, int j, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			OutP = Alphabet(i) + Number(j) + Alphabet(ii) + Number(jj);
			return OutP;
		}
	}

	

	ThinkingHybridizerRefrigitz::ThinkingHybridizerRefrigitz(int KindO, int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int i, int j) 
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Variables.

			CurrentAStarGredyMax = CurrentAStarGredy;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			ArrangmentsChanged = Arrangments;
			Row = i;
			Column = j;
			//Clear Dearty Part.
			if (KindO == 1)
			{
				TableListSolder = std::vector<int**>();
				RowColumnSoldier = std::vector<int*>();
				HitNumberSoldier = std::vector<int>();
				HeuristicListSolder = std::vector<int*>();
				PenaltyRegardListSolder = std::vector<QuantumAtamata*>();
			}
			else
			{
				if (KindO == 2)
				{
				TableListElefant = std::vector<int**>();
				RowColumnElefant = std::vector<int*>();
				HitNumberElefant = std::vector<int>();
				HeuristicListElefant = std::vector<int*>();
				PenaltyRegardListElefant = std::vector<QuantumAtamata*>();
				}
			else
			{
				if (KindO == 3)
				{
				TableListHourse = std::vector<int**>();
				RowColumnHourse = std::vector<int*>();
				HitNumberHourse = std::vector<int>();
				HeuristicListHourse = std::vector<int*>();
				PenaltyRegardListHourse = std::vector<QuantumAtamata*>();
				}
			else
			{
				if (KindO == 4)
				{
				TableListCastle = std::vector<int**>();
				RowColumnCastle = std::vector<int*>();
				HitNumberCastle = std::vector<int>();
				HeuristicListCastle = std::vector<int*>();
				PenaltyRegardListCastle = std::vector<QuantumAtamata*>();
				}
			else
			{
				if (KindO == 5)
				{
				TableListMinister = std::vector<int**>();
				RowColumnMinister = std::vector<int*>();
				HitNumberMinister = std::vector<int>();
				HeuristicListMinister = std::vector<int*>();
				PenaltyRegardListMinister = std::vector<QuantumAtamata*>();
				}
			else if (KindO == 6)
			{
				TableListKing = std::vector<int**>();
				RowColumnKing = std::vector<int*>();
				HitNumberKing = std::vector<int>();
				HeuristicListKing = std::vector<int*>();
				PenaltyRegardListKing = std::vector<QuantumAtamata*>();
			}
			}
			}
			}
			}
			KillerAtThinking = std::vector<int>();
			//AStarGreedy = std::vector<AllDraw>();
			//Network  QuantumAtamata Book Initiate For Every Clone.

		}
	}

	bool ThinkingHybridizerRefrigitz::BeginArragmentsOfOrderFinished(int** Table, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int CH = 0;
			if (ArrangmentsChanged)
			{
				if (Order == 1)
				{
					//Number of WHITE Objects at Last Row Bottmm.
					for (int  i = 0; i < 2; i++)
					{
						for (int  j = 6; j < 8; j++)
						{
							if (Table[i][j] > 0)
							{
								CH++;
							}
						}
					}
				}
				else
				{
					//Number of BLACK Objects at Last tow Row Upper.
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 0; j < 2; j++)
						{
							if (Table[i][j] < 0)
							{
								CH++;
							}
						}
					}
				}
			}
			else
			{
				if (Order == -1)
				{
					//Number of BLACK Objects Table at Last tow row Uppper.
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 6; j < 2; j++)
						{
							if (Table[i][j] > 0)
							{
								CH++;
							}
						}
					}
				}
				else
				{
					//Number of WHITE Objects Table at Last tow rown below.
					for (int  i = 0; i < 2; i++)
					{
						for (int  j = 0; j < 8; j++)
						{
							if (Table[i][j] < 0)
							{
								CH++;
							}
						}
					}
				}
			}
			if (CH <= 8)
			{
				return true;
			}
			return false;
		}
	}
	
	ThinkingHybridizerRefrigitz::ThinkingHybridizerRefrigitz(int iInde, int KindO, int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int i, int j, int a, int** Tab, int Ma, int Ord, bool ThinkingBeg, int CurA, int ThingN, int Kin): iIndex(iInde), iIndex(-1), Space(new std::string(L"&nbsp;"), Spaces(0), callStack(new StackFrame(1, true))
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

			CurrentAStarGredyMax = CurrentAStarGredy;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			//Initiate Variables.
			ArrangmentsChanged = Arrangments;
			Kind = Kin;
			SetObjectNumbers(Tab);
			//AStarGreedy = std::vector<AllDraw>();
			ThingsNumber = ThingN;
			CurrentArray = CurA;
			if (KindO == 1)
			{
				TableListSolder = std::vector<int**>();
				RowColumnSoldier = std::vector<int*>();
				HitNumberSoldier = std::vector<int>();
				HeuristicListSolder = std::vector<int*>();
				PenaltyRegardListSolder = std::vector<QuantumAtamata*>();
			}
			else
			{
				   if (KindO == 2)
				   {
				TableListElefant = std::vector<int**>();
				RowColumnElefant = std::vector<int*>();
				HitNumberElefant = std::vector<int>();
				HeuristicListElefant = std::vector<int*>();
				PenaltyRegardListElefant = std::vector<QuantumAtamata*>();
				   }
			else
			{
				   if (KindO == 3)
				   {
				TableListHourse = std::vector<int**>();
				RowColumnHourse = std::vector<int*>();
				HitNumberHourse = std::vector<int>();
				HeuristicListHourse = std::vector<int*>();
				PenaltyRegardListHourse = std::vector<QuantumAtamata*>();
				   }
			else
			{
				   if (KindO == 4)
				   {
				TableListCastle = std::vector<int**>();
				RowColumnCastle = std::vector<int*>();
				HitNumberCastle = std::vector<int>();
				HeuristicListCastle = std::vector<int*>();
				PenaltyRegardListCastle = std::vector<QuantumAtamata*>();
				   }
			else
			{
				   if (KindO == 5)
				   {
				TableListMinister = std::vector<int**>();
				RowColumnMinister = std::vector<int*>();
				HitNumberMinister = std::vector<int>();
				HeuristicListMinister = std::vector<int*>();
				PenaltyRegardListMinister = std::vector<QuantumAtamata*>();
				   }
			else if (KindO == 6)
			{
				TableListKing = std::vector<int**>();
				RowColumnKing = std::vector<int*>();
				HitNumberKing = std::vector<int>();
				HeuristicListKing = std::vector<int*>();
				PenaltyRegardListKing = std::vector<QuantumAtamata*>();
			}
			}
			}
			}
			}
			KillerAtThinking = std::vector<int>();
			//AStarGreedy = std::vector<AllDraw>();

			Row = i;
			Column = j;
			color = a;
			Max = Ma;
			TableT = Tab;
			IndexSoldier = 0;
			IndexElefant = 0;
			IndexHourse = 0;
			IndexCastle = 0;
			IndexMinister = 0;
			IndexKing = 0;
			TableConst = CloneATable(Tab);
			Order = Ord;
			ThinkingBegin = ThinkingBeg;


		}
	}

	int **ThinkingHybridizerRefrigitz::CloneATable(int** Tab)
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

	int *ThinkingHybridizerRefrigitz::CloneAList(int *Tab, int Count)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate new Objects.
			int *Table=new int[Count];
			//Asigne to new Objects.
			for (int  i = 0; i < Count; i++)
			{
				Table[i] = Tab[i];
			}
			//Retrun new Object.
			return Table;
		}
	}

	int ThinkingHybridizerRefrigitz::GetValue(int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			return Value[i][j];
		}
	}
/*
	void ThinkingHybridizerRefrigitz::Clone(ThinkingHybridizerRefrigitz &AA)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Assignment Content to New Content Object.
			//Initaite New Object.
			if (AA == nullptr)
			{
				AA = new ThinkingHybridizerRefrigitz(iIndex, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column); //, Kind
			}
			AA->ArrangmentsChanged = ArrangmentsChanged;
			//When Depth Object is not NULL.
			if (AStarGreedy.size() != 0)
			{
				AA->AStarGreedy = std::vector<AllDraw>();
				//For All Depth(s).
				for (int  i = 0; i < AStarGreedy.size(); i++)
				{
					//Clone a Copy From Depth Objects.
					AStarGreedy[i]->Clone(AA->AStarGreedy[i]);
				}
			}
			//For All Moves Indexx Solders List Count.
			for (int  j = 0; j < RowColumnSoldier.size(); j++)
			{
				//Add a Clone To New Solder indexx Object.
				AA->RowColumnSoldier.push_back(CloneAList(RowColumnSoldier[j], 2));
			}
			//For All Castle List Count.
			for (int  j = 0; j < RowColumnCastle.size(); j++)
			{
				//Add a Clone to New Castle index Objects List.
				AA->RowColumnCastle.push_back(CloneAList(RowColumnCastle[j], 2));
			}
			//For All Elephant index List Count.
			for (int  j = 0; j < RowColumnElefant.size(); j++)
			{
				//Add a Clone to New Elephant Object List.
				AA->RowColumnElefant.push_back(CloneAList(RowColumnElefant[j], 2));
			}
			//For All Hourse index List Count.
			for (int  j = 0; j < RowColumnHourse.size(); j++)
			{
				//Add a Clone to New Hourse index List.
				AA->RowColumnHourse.push_back(CloneAList(RowColumnHourse[j], 2));
			}
			//For All King index List Count.
			for (int  j = 0; j < RowColumnKing.size(); j++)
			{
				//Add a Clone To New King Object List.
				AA->RowColumnKing.push_back(CloneAList(RowColumnKing[j], 2));
			}
			//For All Minister index Count.
			for (int  j = 0; j < RowColumnMinister.size(); j++)
			{
				//Add a Clone To Minister New index List.
				AA->RowColumnMinister.push_back(CloneAList(RowColumnMinister[j], 2));
			}
			//Assgine thread.
			//Create and Initiate new Table Object.
			AA->TableT = new int[8][8];
			//Create and Initaite New Table Object.
			AA->TableConst = new int[8][8];
			//if Table is not NULL>
			if (TableT != nullptr)
			{
				//For All Items in Table Object.
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						//Assgine Table items in New Table Object.
						AA->TableT[i][j] = TableT[i][j];
					}
				}
			}
			//If Table is Not Null.
			if (TableConst != nullptr)
			{
				//For All Items in Table Object.
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						//Assignm Items in New Table Object.
						AA->TableConst[i][j] = TableConst[i][j];
					}
				}
			}
			//For All Table State Movements in Castles Objects.
			for (int  i = 0; i < TableListCastle.size(); i++)
			{
				//Add aclon of a Table in New Briges Table List.
				AA->TableListCastle.push_back(CloneATable(TableListCastle[i]));
			}
			//For All Table List Movements in  Elephant Objects 
			for (int  i = 0; i < TableListElefant.size(); i++)
			{
				//Add a Clone of Tables in Elephant Mevments Obejcts List To New One.
				AA->TableListElefant.push_back(CloneATable(TableListElefant[i]));
			}
			//For All Hourse Table Movemnts items.
			for (int  i = 0; i < TableListHourse.size(); i++)
			{
				//Add a Clone of Hourse Table Movement in New List.
				AA->TableListHourse.push_back(CloneATable(TableListHourse[i]));
			}
			//For All King Tables Movment Count.
			for (int  i = 0; i < TableListKing.size(); i++)
			{
				//Add a Clone To New King Table List.
				AA->TableListKing.push_back(CloneATable(TableListKing[i]));
			}
			//For All Minister Table Movment Items.
			for (int  i = 0; i < TableListMinister.size(); i++)
			{
				//Add a clone To New Minister Table Movment List.
				AA->TableListMinister.push_back(CloneATable(TableListMinister[i]));
			}
			//For All Solder Table Movment Count.
			for (int  i = 0; i < TableListSolder.size(); i++)
			{
				//Add a Clone of Table item to New Table List Movments.
				AA->TableListSolder.push_back(CloneATable(TableListSolder[i]));
			}
			//For All Solder Husrist List Count.
			for (int  i = 0; i < HeuristicListSolder.size(); i++)
			{
				//Ad a Clone of Hueristic Solders To New List.
				AA->HeuristicListSolder.push_back(CloneAList(HeuristicListSolder[i], 4));
			}
			//For All Elephant Heuristic List Count. 
			for (int  i = 0; i < HeuristicListElefant.size(); i++)
			{
				//Add A Clone of Copy to New Elephant Heuristic List.
				AA->HeuristicListElefant.push_back(CloneAList(HeuristicListElefant[i], 4));
			}
			//For All Hours Heuristic Hourse Count.
			for (int  i = 0; i < HeuristicListHourse.size(); i++)
			{
				//Add a Clone of Copy To New Housre Heuristic List.
				AA->HeuristicListHourse.push_back(CloneAList(HeuristicListHourse[i], 4));
			}
			//For All Castles Heuristic List Count.
			for (int  i = 0; i < HeuristicListCastle.size(); i++)
			{
				//Add a Clone of Copy to New Castles Heuristic List.
				AA->HeuristicListCastle.push_back(CloneAList(HeuristicListCastle[i], 4));
			}
			//For All Minister Heuristic List Count.
			for (int  i = 0; i < HeuristicListMinister.size(); i++)
			{
				//Add a Clone of Copy to New Minister List.
				AA->HeuristicListMinister.push_back(CloneAList(HeuristicListMinister[i], 4));
			}
			//For All King Husrict List Items.
			for (int  i = 0; i < HeuristicListKing.size(); i++)
			{
				//Add a Clone of Copy to New King Hursitic List.
				AA->HeuristicListKing.push_back(CloneAList(HeuristicListKing[i], 4));
			}
			//Initiate and create Penalty Solder List.
			AA->PenaltyRegardListSolder = std::vector<QuantumAtamata*>();
			//For All Solder Penalty List Count.
			if (Kind == 1)
			{
				AA->PenaltyRegardListSolder = std::vector<QuantumAtamata*>();
				for (int  i = 0; i < PenaltyRegardListSolder.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					//Add New Object Create to New Penalty Solder List.
					AA->PenaltyRegardListSolder.push_back(PenaltyRegardListSolder[i]);
				}
			}
			else
			{
			if (Kind == 2)
			{
				//Initaite and Create Elephant Penalty List Object.
				AA->PenaltyRegardListElefant = std::vector<QuantumAtamata*>();
				//For All Elepahtn Penalty List Count.
				for (int  i = 0; i < PenaltyRegardListElefant.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					//Clone a Copy Of Penalty Elephant.
					AA->PenaltyRegardListElefant.push_back(PenaltyRegardListElefant[i]);
					//Add New Object Create to New Penalty Elephant List.
				}
			}
			else
			{
		if (Kind == 3)
		{
				//Initaite and Create Hourse Penalty List Object.
				AA->PenaltyRegardListHourse = std::vector<QuantumAtamata*>();
				//For All Solder Hourse List Count.
				for (int  i = 0; i < PenaltyRegardListHourse.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
					//Clone a Copy Of Penalty Hourse.
					//Add New Object Create to New Penalty Hourse List.
					AA->PenaltyRegardListHourse.push_back(PenaltyRegardListHourse[i]);
				}
		}
			else
			{
			if (Kind == 4)
			{
				//Initaite and Create Castles Penalty List Object.
				AA->PenaltyRegardListCastle = std::vector<QuantumAtamata*>();
				//For All Solder Castle List Count.
				for (int  i = 0; i < PenaltyRegardListCastle.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					//Clone a Copy Of Penalty Castles.
					//Add New Object Create to New Penalty Castles List.
					AA->PenaltyRegardListCastle.push_back(PenaltyRegardListCastle[i]);
				}
			}
			else
			{
			if (Kind == 5)
			{
				//Initaite and Create Minister Penalty List Object.
				AA->PenaltyRegardListMinister = std::vector<QuantumAtamata*>();
				//For All Solder Minster List Count.
				for (int  i = 0; i < PenaltyRegardListMinister.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					//Clone a Copy Of Penalty Minsiter.
					//Add New Object Create to New Penalty Minsietr List.
					AA->PenaltyRegardListMinister.push_back(PenaltyRegardListMinister[i]);
				}
			}
			else
			{
			if (Kind == 6)
			{
				//Initaite and Create King Penalty List Object.
				AA->PenaltyRegardListKing = std::vector<QuantumAtamata*>();
				//For All Solder King List Count.
				for (int  i = 0; i < PenaltyRegardListKing.size(); i++)
				{
					//Initiate a new  QuantumAtamata Object
					//Clone a Copy Of Penalty King.
					//Add New Object Create to New Penalty King List.
					AA->PenaltyRegardListKing.push_back(PenaltyRegardListKing[i]);
				}
			}
			}
			}
			}
			}
			}
			//Iniktiate Same Obejcts to New Same Obejcts.
			AA->AStarGreedy = AStarGreedy;
			AA->CastleValue = CastleValue;
			AA->color = color;
			AA->Column = Column;
			AA->CurrentArray = CurrentArray;
			AA->CurrentColumn = CurrentColumn;
			AA->CurrentRow = CurrentRow;
			AA->ElefantValue = ElefantValue;
			AA->ExistingOfEnemyHiiting = ExistingOfEnemyHiiting;
			AA->HourseValue = HourseValue;
			AA->IgnoreObjectDangour = IgnoreObjectDangour;
			AA->IndexCastle = IndexCastle;
			AA->IndexElefant = IndexElefant;
			AA->IndexHourse = IndexHourse;
			AA->IndexKing = IndexKing;
			AA->IndexMinister = IndexMinister;
			AA->IndexSoldier = IndexSoldier;
			AA->IsCheck = IsCheck;
			AA->Kind = Kind;
			AA->KingValue = KingValue;
			AA->CheckMateAStarGreedy = CheckMateAStarGreedy;
			AA->CheckMateOcuured = CheckMateOcuured;
			AA->Max = Max;
			AA->MinisterValue = MinisterValue;
			AA->Order = Order;
			AA->Row = Row;
			AA->SodierValue = SodierValue;
			AA->ThingsNumber = ThingsNumber;
			AA->ThinkingBegin = ThinkingBegin;
			AA->ThinkingFinished = ThinkingFinished;
		}
	}

	*/bool ThinkingHybridizerRefrigitz::IsDistributedObjectAttackNonDistributedEnemyObject(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if ((Table[RowS][ColS] != TableInitiation[RowS][ColS]) && (Table[RowD][ColD] == TableInitiation[RowD][ColD]))
			{
				Is = true;
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicAttack(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicAttackValue = 0;
			int HA = 0;
			int DumOrder = Order;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			///When AStarGreedy Heuristic is Not Assigned.
			//When Heuristic is not Greedy.
			if (!AStarGreedyHeuristicT)
			{
				int Order = int();
				int a;
				a = aa;
				if (RowS == RowD && ColS == ColD)
				{
					return HeuristicAttackValue;
				}
				int Sign = int();
				Order = DummyOrder;
				///When Attack is true. means [RowD,ColD] is in Attacked  [RowS,ColS].
				///What is Attack!
				///Ans:When [RowD,ColD] is Attacked [RowS,ColS] continue true when enemy is located in [RowD,ColD].
				if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					Sign = AllDraw::SignAttack;
					ChessRules::CurrentOrder = -1;
					a = -1;
				}
				else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
				{
					Order = 1;
					Sign = AllDraw::SignAttack;
					ChessRules::CurrentOrder = -1;
					a = 1;
				}
				else
				{
					return HeuristicAttackValue;
				}
				//For Attack Movments.- GetObjectValueHeuristic
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					{
					//if (Before)
						bool ab = false;
						ab = IsDistributedObjectAttackNonDistributedEnemyObject(Before, CloneATable(Table), Ord, aa, RowS, ColS, RowD, ColD);


						if (ab)
						{
							HA += RationalPenalty;
						}
						else
						{
							ab = Attack(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);



							if (ab)
							{
								HA += RationalRegard;
								//When there is supporter of attacked Objects take Heuristic negative else take muliply sign and muliply Heuristic.
								int Supported = int();
								int SupportedS = int();
								Supported = 0;
								SupportedS = 0;
								//For All Enemy Obejcts.                                             
								////Parallel.For(0, 8, g =>
								for (int g = 0; g < 8; g++)
								{
									////Parallel.For(0, 8, h =>
									for (int h = 0; h < 8; h++)
									{
										//Ignore Of Self Objects.
										if (Order == 1 && Table[g][h] >= 0)
										{
											continue;
										}
										if (Order == -1 && Table[g][h] <= 0)
										{
											continue;
										}
										int aaa;
										//Assgin Enemy ints.
										aaa = 1;
										if (Order * -1 == -1)
										{
											aaa = -1;
										}
										else
										{
											aaa = 1;
										}
										//When Enemy is Supported.
										bool A = bool();
										bool B = bool();
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											A = Support(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);


											B = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);


										}
										//When Enemy is Supported.
										if (B)
										{
											//Assgine variable.
											SupportedS++;
										}
										if (A)
										{
											//Assgine variable.
											Supported++;
											continue;
										}
									}
								}

								if (SupportedS > 0 && Supported == 0)
								{
									HA *= static_cast<int>(pow(2, SupportedS));
								}
								else
								{
								if (Supported > 0)
								{
									HA *= static_cast<int>(-1 * pow(2, Supported));
								}
								}
							}
						}
					}
				}
			}
			//For All Table Homes find Attack Heuristic.
			else
			{
				int Order = int();
				int a;
				a = aa;
				//Ignore of Current->
				if (RowS == RowD && ColS == ColD)
				{
					return HeuristicAttackValue;
				}
				Order = DummyOrder;
				int Sign = 1;
				///When Attack is true. means [RowD,ColD] is in Attacked  [RowS,ColS].
				///What is Attack!
				///Ans:When [RowD,ColD] is Attacked [RowS,ColS] continue true when enemy is located in [RowD,ColD].
				if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					Sign = AllDraw::SignAttack;
					ChessRules::CurrentOrder = -1;
					a = -1;
				}
				else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
				{
					Order = 1;
					Sign = AllDraw::SignAttack;
					ChessRules::CurrentOrder = -1;
					a = 1;
				}
				else
				{
					return HeuristicAttackValue;
				}

				//For Attack Movments.
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					{
					//if (Before)
						bool ab = false;
						ab = IsDistributedObjectAttackNonDistributedEnemyObject(Before, CloneATable(Table), Ord, aa, RowS, ColS, RowD, ColD);


						if (ab)
						{
							HA += RationalPenalty;
						}
						ab = Attack(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);



						if (ab)
						{

							HA += RationalRegard;

							//When there is supporter of attacked Objects take Heuristic negative else take muliply sign and muliply Heuristic.
							//For All Enemy Obejcts.                                             
							////Parallel.For(0, 8, g =>
							int Supported = int();
							int SupportedS = int();
							Supported = 0;
							SupportedS = 0;
							//For All Enemy Obejcts.                                             
							////Parallel.For(0, 8, g =>
							for (int g = 0; g < 8; g++)
							{
								////Parallel.For(0, 8, h =>
								for (int h = 0; h < 8; h++)
								{
									//Ignore Of Self Objects.
									if (Order == 1 && Table[g][h] >= 0)
									{
										continue;
									}
									if (Order == -1 && Table[g][h] <= 0)
									{
										continue;
									}
									int aaa;
									//Assgin Enemy ints.
									aaa = 1;
									if (Order * -1 == -1)
									{
										aaa = -1;
									}
									else
									{
										aaa = 1;
									}
									//When Enemy is Supported.
									bool A = bool();
									bool B = bool();
									////auto o12 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O12)
									{
										A = Support(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);


										B = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);


									}
									//When Enemy is Supported.
									if (B)
									{
										//Assgine variable.
										SupportedS++;
									}
									if (A)
									{
										//Assgine variable.
										Supported++;
										continue;
									}
								}
							}
							if (SupportedS > 0 && Supported == 0)
							{
								HA *= static_cast<int>(pow(2, SupportedS));
							}
							else
							{
							 if (Supported > 0)
							 {
								HA *= static_cast<int>(-1 * pow(2, Supported));
							 }
							}
						}
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			Order = DumOrder;
			//Initiate to Begin Call Orders.
			return 1 * HA;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsMinisteBreakable(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		bool Is = false;
		const int MinisterWHITE = 5, MinisterBLACK = -5;
		if (Order == -1)
		{
			if (Table[RowD][ColD] == MinisterWHITE)
			{
				return true;
			}

		}
		else
		{
			if (Order == 1)
			{
				if (Table[RowD][ColD] == MinisterBLACK)
				{
					return true;
				}
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::IsMinistePowerfull(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		bool Is = true;
		const int MinisterWHITE = 5, MinisterBLACK = -5;
		if (Order == 1)
		{
			if (Table[RowS][ColS] == MinisterWHITE)
			{
				bool ab = false;
				ab = IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table), 31);


				if (!ab)
				{
					if (ColS < 5)
					{
						return false;
					}
				}
			}
		}
		else
		{
			if (Table[RowS][ColS] == MinisterBLACK)
			{
				bool ab = false;
				ab = IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table), 31);


				if (!ab)
				{
					if (ColS > 2)
					{
						return false;
					}
				}
			}
		}
		return Is;
	}

	int ThinkingHybridizerRefrigitz::HeuristicReducsedAttack(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicReducedAttackValue = 0;
			//Initiate Objects.
			int HA = 0;
			int DumOrder = Order;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			int Sign = 1;
			///When AStarGreedy Heuristic is Not Assigned.
			bool MinisterOnAttack = false;
			if (!AStarGreedyHeuristicT)
			{
				{
					{
				//For All Self
						//For Current Object Lcation.
						int Order = int();
						Order = DumOrder;
						int a;
						a = aa;
						//Ignore Current Unnessery Home.
						if (RowS == RowD && ColS == ColD)
						{
							return 0;
						}
						//Default Is WHITE One.
						Order = DummyOrder;
						///When Supporte is true. means [RowD,ColD] Supportes [RowS,ColS].
						///What is Supporte!
						///Ans:When [RowS,ColS] is Supporte [RowD,ColD] return true when Self is located in [RowD,ColD].
						//if (Order == 1 && Table[RowD, ColD] >= 0)
						//if (Order == -1 && Table[RowD, ColD] <= 0)
						//if (!Scop(RowD, ColD, RowS, ColS, System.Math.Abs(Table[RowD, ColD])))
						///When Attack is true. means [RowD,ColD] is in Attacked  [RowS,ColS].
						///What is Attack!
						///Ans:When [RowD,ColD] is Attacked [RowS,ColS] continue true when enemy is located in [RowD,ColD].
						if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
						{
							Order = 1;
							Sign = 1 * AllDraw::SignAttack;
							ChessRules::CurrentOrder = 1;
							a = 1;
						}
						else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
						{
							Order = -1;
							Sign = 1 * AllDraw::SignAttack;
							ChessRules::CurrentOrder = -1;
							a = -1;
						}
						else
						{
							return HeuristicReducedAttackValue;
						}
						//For Attack Movments.
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							{
							//if (Before)
								bool ab = false;
								ab = Attack(CloneATable(Table), RowD, ColD, RowS, ColS, a, Order);


								if (ab)
								{
									MinisterOnAttack = true;
									HA += RationalPenalty;
									//When there is supporter of attacked Objects take Heuristic negative else take muliply sign and muliply Heuristic.
									int Supported = int();
									int SupportedS = int();
									Supported = 0;
									SupportedS = 0;
									//For All Enemy Obejcts.                                             
									////Parallel.For(0, 8, g =>
									for (int g = 0; g < 8; g++)
									{
										////Parallel.For(0, 8, h =>
										for (int h = 0; h < 8; h++)
										{
											//Ignore Of Self Objects.
											if (Order == 1 && Table[g][h] >= 0)
											{
												continue;
											}
											if (Order == -1 && Table[g][h] <= 0)
											{
												continue;
											}
											int aaa;
											//Assgin Enemy ints.
											aaa = 1;
											if (Order * -1 == -1)
											{
												aaa = -1;
											}
											else
											{
												aaa = 1;
											}
											//When Enemy is Supported.
											bool A = bool();
											bool B = bool();
											////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
											////lock (O2)
											{
												A = Support(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);


												B = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);


											}
											//When Enemy is Supported.
											if (B)
											{
												//Assgine variable.
												SupportedS++;
											}
											if (A)
											{
												//Assgine variable.
												Supported++;
												continue;
											}
										}
									}
									if (SupportedS > 0 && Supported == 0)
									{
										HA *= static_cast<int>(pow(2, SupportedS));
									}
									else
									{
										  if (Supported > 0)
										  {
										HA *= static_cast<int>(-1 * pow(2, Supported));
										  }
									}
								}
								else
								{
									if (IsMinisteBreakable(Before, CloneATable(Table), Order, aa, RowS, ColS, RowD, ColD))
									{
										HA += (3 * RationalPenalty);
									}
								}
							}
						}
					}
				}
			}
			//For All Table Homes find Attack Heuristic.
			else
			{

				int Order = int();
				int a;
				a = aa;
				{
					//Ignore Current Home.
					//if (Order == 1 && Table[RowD, ColD] >= 0)
					//if (Order == -1 && Table[RowD, ColD] <= 0)
					//if (!Scop(RowD, ColD, RowS, ColS, System.Math.Abs(Table[RowD, ColD])))
					///When Attack is true. means [RowD,ColD] is in Attacked  [RowS,ColS].
					///What is Attack!
					///Ans:When [RowD,ColD] is Attacked [RowS,ColS] continue true when enemy is located in [RowD,ColD].
					if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
					{
						Order = 1;
						Sign = 1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = 1;
						a = 1;
					}
					else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
					{
						Order = -1;
						Sign = 1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = -1;
						a = -1;
					}
					else
					{
						return HeuristicReducedAttackValue;
					}
					//For Attack Movments.
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						{
						//if (Before)
							bool ab = false;
							ab = Attack(CloneATable(Table), RowD, ColD, RowS, ColS, a, Order);


							if (ab)
							{
								MinisterOnAttack = true;
								HA += RationalPenalty;
								//When there is supporter of attacked Objects take Heuristic negative else take muliply sign and muliply Heuristic.
								int Supported = int();
								int SupportedS = int();
								Supported = 0;
								SupportedS = 0;
								//For All Enemy Obejcts.                                             
								////Parallel.For(0, 8, g =>
								for (int g = 0; g < 8; g++)
								{
									////Parallel.For(0, 8, h =>
									for (int h = 0; h < 8; h++)
									{
										//Ignore Of Self Objects.
										if (Order == 1 && Table[g][h] >= 0)
										{
											continue;
										}
										if (Order == -1 && Table[g][h] <= 0)
										{
											continue;
										}
										int aaa;
										//Assgin Enemy ints.
										aaa = 1;
										if (Order * -1 == -1)
										{
											aaa = -1;
										}
										else
										{
											aaa = 1;
										}
										//When Enemy is Supported.
										bool A = bool();
										bool B = bool();
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											A = Support(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);


											B = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);


										}
										//When Enemy is Supported.
										if (B)
										{
											//Assgine variable.
											SupportedS++;
										}
										if (A)
										{
											//Assgine variable.
											Supported++;
											continue;
										}
									}
								}
								if (SupportedS > 0 && Supported == 0)
								{
									HA *= static_cast<int>(pow(2, SupportedS));
								}
								else
								{
						   if (Supported > 0)
						   {
									HA *= static_cast<int>(-1 * pow(2, Supported));
						   }
								}
							}
							else
							{
								ab = IsMinisteBreakable(Before, CloneATable(Table), Order, aa, RowS, ColS, RowD, ColD);


								if (ab)
								{
									HA += (3 * RationalPenalty);
								}
							}
						}
					}
				}
			}


			if (!MinisterOnAttack)
			{
				bool ab = false;
				ab = IsMinistePowerfull(Before, CloneATable(Table), Order, aa, RowS, ColS, RowD, ColD);


				if (ab)
				{
					HA += RationalRegard;
				}
			}
			else
			{
				HA += RationalPenalty;
			}
			//Initiate to Begin Call Orders.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			Order = DumOrder;
			//Add Local Heuristic to Global One.
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::GetObjectValue(int** Tabl, int ii, int jj, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			return abs(Tabl[ii][jj]);
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicObjectDangour(int** Table, int Order, int a, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicCheckedMate = 0;
			int HA = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			///When There is no AStarGreedyHeuristicT
			if (!AStarGreedyHeuristicT)
			{
				///For All Object in Current Table.
				if (RowS == RowD && ColS == ColD)
				{
					return HeuristicCheckedMate;
				}
				Order = DummyOrder;
				int Sign = 1;
				///When ObjectDanger is true. means [RowD,ColD] is in ObjectDanger by [RowS,ColS].
				///What is ObjectDanger!
				///Ans:When [RowS,ColS] is Attacked [RowD,ColD] return true when enemy is located in [RowD,ColD].
				if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = 1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = -1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = 1;
					}
					a = 1;
				}
				else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
				{
					Order = -1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = -1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = -1;
					}
					a = -1;
				}
				else
				{
					return HeuristicCheckedMate;
				}
				bool ab = false;
				ab = ObjectDanger(CloneATable(Table), RowD, ColD, RowS, ColS, a, Order);



				//For ObjectDanger Movments.
				if (ab)
				{
					HA += Sign * (ObjectValueCalculator(CloneATable(Table), RowD, ColD, RowS, ColS));


					//Find Local Sumation of ObjectDanger Heuristic.                               

				}
			}
			//For All Table Home Find ObjectDanger Heuristic
			else
			{
				if (RowS == RowD && ColS == ColD)
				{
					return HeuristicCheckedMate;
				}
				int Sign = 1;
				///When ObjectDanger is true. means [RowD,ColD] is in ObjectDanger by [RowS,ColS].
				///What is ObjectDanger!
				///Ans:When [RowS,ColS] is Attacked [RowD,ColD] return true when enemy is located in [RowD,ColD].
				if (Table[RowD][ColD] > 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = 1;
					////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O2)
					{
						Sign = -1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = 1;
					}
					a = 1;
				}
				else if (Table[RowD][ColD] < 0 && DummyOrder == 1 && Table[RowS][ColS] > 0)
				{
					Order = -1;
					////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O3)
					{
						Sign = -1 * AllDraw::SignAttack;
						ChessRules::CurrentOrder = -1;
					}
					a = -1;
				}
				else
				{
					return HeuristicCheckedMate;
				}
				//For ObjectDanger Movments.
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					bool ab = false;
					ab = ObjectDanger(CloneATable(Table), RowD, ColD, RowS, ColS, a, Order);



					if (ab)
					{
						//Find Local Sumation of ObjectDanger Heuristic.                                
						HA += Sign * (ObjectValueCalculator(CloneATable(Table), RowD, ColD, RowS, ColS));


					}
				}
			}
			//Initiate Orders to Call Begining.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//Assignments of Global Heuristic with Local One.
			//return Local Heuristic.
			return HA * 1;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicKiller(int Killed, int** Tabl, int RowS, int ColS, int RowD, int ColD, int Ord, int aa, bool Hit)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			for (int  ik = 0; ik < 8; ik++)
			{
				for (int  jk = 0; jk < 8; jk++)
				{
					Tab[ik][jk] = Tabl[ik][jk];
				}
			}
			int HeuristicReducedSupport = 0;
			//Defualt is WHITE Order.
			int HA = 0;
			int Sign = AllDraw::SignKiller;
			int DummyOrder = Ord;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//Make live when there is killed.
			if (Killed != 0)
			{
				Tab[RowD][ColD] = Tab[RowS][ColS];
				Tab[RowS][ColS] = Killed;
			}

			int Order = int();
			Order = DummyOrder;
			int a;
			a = aa;
			int colorAS = a;
			//Ignore of Self.
			if (Order == 1 && Tab[RowD][ColD] >= 0)
			{
				return HeuristicReducedSupport;
			}
			if (Order == -1 && Tab[RowD][ColD] <= 0)
			{
				return HeuristicReducedSupport;
			}
			bool EnemyNotSupported = false;
			a = 1;
			if (Order == -1)
			{
				a = -1;
			}
			//Wehn Curfrent Movemnet is on attack.
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				EnemyNotSupported = InAttackEnemyThatIsNotSupported(Killed, CloneATable(Tab), Order, aa, RowS, ColS, RowD, ColD);



				//When there is Attacks to Current Objects and is killable..
				bool ab = false;
				ab = Attack(CloneATable(Tab), RowD, ColD, RowS, ColS, a, Order);


				if (ab)
				{
					if (EnemyNotSupported)
					{
						//Heuristic positive.
						HA += AllDraw::SignKiller * static_cast<int>((ObjectValueCalculator(CloneATable(Tab), RowS, ColS, RowD, ColD)));


					}
					else
					{
						//Heuristic ngative.
						HA += AllDraw::SignKiller * static_cast<int>((ObjectValueCalculator(CloneATable(Tab), RowS, ColS, RowD, ColD)) * -1);


					}
				}
				a = colorAS;
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return 1 * HA;
		}
	}

	bool ThinkingHybridizerRefrigitz::InAttackEnemyThatIsNotSupported(int Kilded, int** Table, int Order, int a, int i, int j, int ii, int jj)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Global Variables.                
			int Ord = Order;
			bool S = true;
			bool EnemyNotSupported = true;
			if (Kilded != 0)
			{
				EnemyNotSupported = true;
				//Enemy
				////Parallel.For(0, 8, RowS =>
				for (int  RowS = 0; RowS < 8; RowS++)
				{
					////Parallel.For(0, 8, ColS =>
					for (int  ColS = 0; ColS < 8; ColS++)
					{
						if (!EnemyNotSupported)
						{
							continue;
						}
						int Order1 = int();
						Order1 = Ord;
						int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
						////Parallel.For(0, 8, ik =>
						for (int  ik = 0; ik < 8; ik++)
						{
							if (!EnemyNotSupported)
							{
								continue;
							}
							for (int  jk = 0; jk < 8; jk++)
							{
							////Parallel.For(0, 8, jk =>
								////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O3)
								{
									Tab[ik][jk] = Table[ik][jk];
								}
							}
						}
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							Tab[i][j] = Tab[ii][jj];
							Tab[ii][jj] = Kilded;
						}
						//Ignore of Current
						if (Order1 == 1 && Tab[RowS][ColS] >= 0)
						{
							continue;
						}
						else
						{
								if (Order1 == -1 && Tab[RowS][ColS] <= 0)
								{
							continue;
								}
						}
						a = 1;
						if (Order1 * -1 == -1)
						{
							a = -1;
						}
						//When Enemy is Supported.
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							bool ab = false;
							ab = Support(CloneATable(Tab), RowS, ColS, ii, jj, a, Order1 * -1) && ObjectValueCalculator(CloneATable(Tab), i, j) >= ObjectValueCalculator(CloneATable(Tab), ii, jj);



							if (ab)
							//Wehn [i,j] (Current) is less or equal than [ii][jj] (Enemy) 
							//EnemyNotSupported method Should continue [valid]
							//By this situation continue not valid
							{
								EnemyNotSupported = false;
								continue;
							}
						}
					}
					if (!EnemyNotSupported)
					{
						continue;
					}
				}
				if (EnemyNotSupported)
				{
					S = false;
				}
			}
			//When S is not valid there is one node in [EnemyNotSupported]
			if (!S)
			{
				Order = Ord;
				return true;
			}
			Order = Ord;
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::InAttackEnemyThatIsNotSupportedAll(bool EnemyIsValuable, int** Table, int Order, int a, int ij, int ji, int iij, int jji, std::vector<int*> &ValuableEnemyNotSupported)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Global Variables.
			int Ord = Order;
			////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O4)
			{
				int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = Table[ik][jk];
					}
				}
				bool S = true;
				bool EnemyNotSupported = true;
				bool InAttackedNotEnemySupported = false;
				//For Current
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						//Ignore of Enemy
						if (Order == 1 && Tab[i][j] <= 0)
						{
							continue;
						}
						else
						{
							if (Order == -1 && Tab[i][j] >= 0)
							{
							continue;
							}
						}
						//For Enemies.
						for (int  ii = 0; ii < 8; ii++)
						{
							for (int  jj = 0; jj < 8; jj++)
							{
								//Ignore of Curent
								if (Order == 1 && Tab[ii][jj] >= 0)
								{
									continue;
								}
								else
								{
									if (Order == -1 && Tab[ii][jj] <= 0)
									{
									continue;
									}
								}
								////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O1)
								{
									bool ab = false;
									std::vector<int*> ValuableEnemyNotSupportedA = ValuableEnemyNotSupported;
									ab = EnemyIsValuable && (!IsObjectValaubleObjectEnemy(0, jj, Tab[ii][jj], ValuableEnemyNotSupportedA));



									ValuableEnemyNotSupported = ValuableEnemyNotSupportedA;

									if (ab)
									{
										continue;
									}
									EnemyNotSupported = true;
									InAttackedNotEnemySupported = false;
									ab = Attack(CloneATable(Tab), i, j, ii, jj, a, Order);



									if (ab)
									{
										InAttackedNotEnemySupported = true;
										//Enemy
										for (int  RowS = 0; RowS < 8; RowS++)
										{
											for (int  ColS = 0; ColS < 8; ColS++)
											{
												//Ignore of Current
												if (Order == 1 && Tab[RowS][ColS] >= 0)
												{
													continue;
												}
												else
												{
													if (Order == -1 && Tab[RowS][ColS] <= 0)
													{
													continue;
													}
												}
												a = 1;
												if (Order * -1 == -1)
												{
													a = -1;
												}
												//
												ab = Support(CloneATable(Tab), RowS, ColS, ii, jj, a, Order * -1);



												if (ab)
													//&& (ObjectValueCalculator(CloneATable(Tab),i,j) >= ObjectValueCalculator(CloneATable(Tab),ii,jj)
													//Wehn [i,j] (Current) is less or equal than [ii][jj] (Enemy) 
													//EnemyNotSupported method Should return [valid]
													//By this situation return not valid
												{
													EnemyNotSupported = false;
												}
											}
											if (!EnemyNotSupported)
											{
												break;
											}
										}
									}
									if (EnemyNotSupported && InAttackedNotEnemySupported)
									{
										S = false;
										break;
									}
								}
							}
							if (!S)
							{
								break;
							}
						}
						if (!S)
						{
							break;
						}
					}
					if (!S)
					{
						break;
					}
				}
				//When there is at leat tow enmy of attackment.
				if (!S)
				{
					Order = Ord;
					return true;
				}
				Order = Ord;
			}
			return false;
		}
	}

	int ThinkingHybridizerRefrigitz::IsNotSafeToMoveAenemeyToAttackMoreThanTowObject(int AttackCount, int** Table, int Order, int i, int j, int ii, int jj)
	{

		//For All Enemie
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//Ignore of Self
			if (Order == 1 && Table[i][j] >= 0)
			{
				return 0;
			}
			if (Order == -1 && Table[i][j] <= 0)
			{
				return 0;
			}
			//For All Self and Empty.
			//Ignore of Enemy.
			if (Order == 1 && Table[ii][jj] < 0)
			{
				return 0;
			}
			if (Order == -1 && Table[ii][jj] > 0)
			{
				return 0;
			}
			ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order * -1, i, j);
			int a = 1;
			if (Order * -1 == -1)
			{
				a = -1;
			}
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = Table[ik][jk];
					}
				}
			}
			//When there is attack to some self node.
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				if (A->Rules(i, j, ii, jj, a, Tab[i][j], true))
				{
					//take move
					Tab[ii][jj] = Tab[i][j];
					Tab[i][j] = 0;
					AttackCount = 0;
					//For All Self
					for (int  RowS = 0; RowS < 8; RowS++)
					{
					////Parallel.For(0, 8, RowS =>
						//if (AttackCount > 1)
						for (int  ColS = 0; ColS < 8; ColS++)
						{
						////Parallel.For(0, 8, ColS =>
							if (AttackCount > 1)
							{
								continue;
							}
							//Ignore of Enemy.
							if (Order == 1 && Tab[RowS][ColS] <= 0)
							{
								continue;
							}
							if (Order == -1 && Tab[RowS][ColS] >= 0)
							{
								continue;
							}
							a = 1;
							if (Order * -1 == -1)
							{
								a = -1;
							}
							bool ab = false;
							ab = Attack(CloneATable(Tab), ii, jj, RowS, ColS, a, Order * -1);


							//when there is attack to some self node.
							if (ab)
							{
								bool Supporte = false;
								//For All Self
								////Parallel.For(0, 8, RowD =>
								for (int RowD = 0; RowD < 8; RowD++)
								{
									if (AttackCount > 1)
									{
										continue;
									}
									////Parallel.For(0, 8, ColD =>
									for (int ColD = 0; ColD < 8; ColD++)
									{
										if (AttackCount > 1)
										{
											continue;
										}
										//Ignore of Enemy.
										if (Order == 1 && Tab[RowD][ColD] <= 0)
										{
											continue;
										}
										if (Order == -1 && Tab[RowD][ColD] >= 0)
										{
											continue;
										}
										a = 1;
										if (Order == -1)
										{
											a = -1;
										}
										//when there is attack of self node to that enemy node.
										ab = Support(CloneATable(Tab), RowD, ColD, RowS, ColS, a, Order) || Attack(CloneATable(Tab), RowD, ColD, ii, jj, a, Order);


										if (ab)
										{
											Supporte = true;
											continue;
										}
									}
								}
								if (!Supporte)
								{
									AttackCount++;
								}
							}
							else
							{
								continue;
							}
							if (AttackCount > 1)
							{
								continue;
							}
						}
						if (AttackCount > 1)
						{
							continue;
						}
					}
				}
				else
				{
					return 0;
				}
			}

			return AttackCount;
		}
	}

	bool ThinkingHybridizerRefrigitz::InAttackSelfThatNotSupported(int** TableS, int Order, int a, int ij, int ji, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Variables.
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = TableS[ik][jk];
					}
				}
				int Ord = Order;
				bool SelfSupported = false;
				bool InAttackedNotSelfSupported = false;
				bool IsObjDangerest = false;
				bool S = true;
				int i = ii, j = jj;
				//Ignore of Current
				//For Enemy.
				for (int  RowS = 0; RowS < 8; RowS++)
				{
					for (int  ColS = 0; ColS < 8; ColS++)
					{
						//Ignore of Current
						if (Order == 1 && Tab[RowS][ColS] >= 0)
						{
							continue;
						}
						else
						{
						if (Order == -1 && Tab[RowS][ColS] <= 0)
						{
							continue;
						}
						}
						//Enemy
						a = 1;
						if (Order * -1 == -1)
						{
							a = -1;
						}
						for (int  ik = 0; ik < 8; ik++)
						{
							for (int  jk = 0; jk < 8; jk++)
							{
								Tab[ik][jk] = TableS[ik][jk];
							}
						}
						InAttackedNotSelfSupported = false;
						SelfSupported = false;
						////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO)
						{
							bool ab = false;
							ab = Attack(CloneATable(Tab), RowS, ColS, i, j, a, Order * -1);


							if (ab)
							{
								InAttackedNotSelfSupported = true;
								a = 1;
								if (Order == -1)
								{
									a = -1;
								}
								//For Self.
								for (int RowD = 0; RowD < 8; RowD++)
								{
									for (int ColD = 0; ColD < 8; ColD++)
									{
										//Ignore of Enemies
										if (Order == 1 && Tab[RowD][ColD] <= 0)
										{
											continue;
										}
										else
										{
											if (Order == -1 && Tab[RowD][ColD] >= 0)
											{
											continue;
											}
										}
										a = 1;
										if (Order == -1)
										{
											a = -1;
										}
										for (int  ik = 0; ik < 8; ik++)
										{
											for (int  jk = 0; jk < 8; jk++)
											{
												Tab[ik][jk] = TableS[ik][jk];
											}
										}
										//When there is support and cuurent is less than enemy.
										//method return true when is not supporte and the enemy is less than cuurent in to be hitten.
										ab = Support(CloneATable(Tab), RowD, ColD, i, j, a, Order);


										if (ab)
										{
											SelfSupported = true;
											S = S && true;
											break;
										}
									}
									if (SelfSupported)
									{
										break;
									}
								}
								//When a source enemy object attack a destination source object 
								//a source object is greater than another source object. Is = -1 Is another object valuable.
								//a source object is less than or equal  than another source object.Is = 1 Is not another object valuable.
							}
						}
						if ((!SelfSupported && InAttackedNotSelfSupported)) //|| IsObjDangerest
						{
							S = false;
							break;
						}
					}
					if ((!SelfSupported && InAttackedNotSelfSupported) || IsObjDangerest)
					{
						S = false;
						break;
					}
				}
				if (!SelfSupported && InAttackedNotSelfSupported)
				{
					S = false;
				}
				if (!SelfSupported && InAttackedNotSelfSupported)
				{
					S = false;
				}

				Order = Ord;
				if (S)
				{
					return false;
				}
				return true;
			}
		}
	}

	bool ThinkingHybridizerRefrigitz::InAttackSelfThatNotSupportedAll(int** TableS, int Order, int a, int i, int j, int RowS, int ColS, int ikk, int jkk, int iik, int jjk)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool S = true;
			int Ord = Order;
			std::vector<int*> ValuableSelfSupported = std::vector<int*>();
			bool IsTowValuableObject = false;
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				IsTowValuableObject = InAttackSelfThatNotSupportedCalculateValuableAll(CloneATable(TableS), Order, color, ikk, jkk, iik, jjk, ValuableSelfSupported);




				//Initiate Variables.
				int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = TableS[ik][jk];
					}
				}
				bool SelfSupported = false;
				bool InAttackedNotSelfSupported = false;
				S = true;
				Order = Ord;
				//Ignore of Enemies
				if (Order == 1 && Tab[i][j] <= 0)
				{
					return false;
				}
				else
				{
					if (Order == -1 && Tab[i][j] >= 0)
					{
					return false;
					}
				}
				//when there is another object valuable in List continue.
				bool ab = false;
				ab = IsTowValuableObject && (!IsObjectValaubleObjectSelf(i, j, Tab[i][j], ValuableSelfSupported));


				if (ab)
				{
					return false;
				}
				Order = Ord;
				//Ignore of Current
				if (Order == 1 && Tab[RowS][ColS] >= 0)
				{
					return false;
				}
				else
				{
					if (Order == -1 && Tab[RowS][ColS] <= 0)
					{
					return false;
					}
				}
				if (i == RowS && j == ColS)
				{
					return false;
				}
				//Enemy
				a = 1;
				Order = Ord;
				if (Order * -1 == -1)
				{
					a = -1;
				}
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = TableS[ik][jk];
					}
				}
				InAttackedNotSelfSupported = false;
				SelfSupported = false;
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tab[ik][jk] = TableS[ik][jk];
					}
				}
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					ab = Attack(CloneATable(Tab), RowS, ColS, i, j, a, Order * -1);


					if (ab)
					{
						InAttackedNotSelfSupported = true;
						a = 1;
						if (Order == -1)
						{
							a = -1;
						}
						//For Self.
						for (int RowD = 0; RowD < 8; RowD++)
						{
							for (int ColD = 0; ColD < 8; ColD++)
							{
								//Ignore of Enemies
								if (Order == 1 && Tab[RowD][ColD] <= 0)
								{
									continue;
								}
								else
								{
									if (Order == -1 && Tab[RowD][ColD] >= 0)
									{
									continue;
									}
								}
								if (i == RowD && j == ColD)
								{
									continue;
								}
								a = 1;
								if (Order == -1)
								{
									a = -1;
								}
								for (int  ik = 0; ik < 8; ik++)
								{
									for (int  jk = 0; jk < 8; jk++)
									{
										Tab[ik][jk] = TableS[ik][jk];
									}
								}
								//When there is supporte and cuurent is less than enemy.
								//method return true when is not supporte and the enemy is less than cuurent in to be hitten.
								ab = Support(CloneATable(Tab), RowD, ColD, i, j, a, Order) && (ObjectValueCalculator(CloneATable(Tab), i, j) <= ObjectValueCalculator(CloneATable(Tab), RowS, ColS));


								if (ab)
								{
									SelfSupported = true;
									S = S && true;
									break;
								}
							}
							//When a source enemy object attack a destination source object 
							//a source object is greater than another source object. Is = -1 Is another object valuable.
							//a source object is less than or equal  than another source object.Is = 1 Is not another object valuable.                                    
							if (SelfSupported)
							{
								break;
							}
						}
					}
				}
				if ((!SelfSupported && InAttackedNotSelfSupported))
				{
					S = false;
				}
			}
			Order = Ord;

			if (S)
			{
				return false;
			}
			return true;
		}
	}

	bool ThinkingHybridizerRefrigitz::InAttackSelfThatNotSupportedCalculateValuableAll(int** TableS, int Order, int a, int ij, int ji, int ii, int jj, std::vector<int*> &ValuableSelfSupported)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Variables.
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			for (int  ik = 0; ik < 8; ik++)
			{
				for (int  jk = 0; jk < 8; jk++)
				{
					Tab[ik][jk] = TableS[ik][jk];
				}
			}
			int Ord = Order;
			bool SelfSupported = false;
			bool InAttackedNotSelfSupported = false;
			bool S = true;
			//For Self
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					S = true;
					//Ignore of Enemy
					if (Order == 1 && Tab[i][j] <= 0)
					{
						continue;
					}
					else
					{
						if (Order == -1 && Tab[i][j] >= 0)
						{
						continue;
						}
					}
					//For Enemy.
					for (int  RowS = 0; RowS < 8; RowS++)
					{
						for (int  ColS = 0; ColS < 8; ColS++)
						{
							//Ignore of Current
							if (Order == 1 && Tab[RowS][ColS] >= 0)
							{
								continue;
							}
							else
							{
								if (Order == -1 && Tab[RowS][ColS] <= 0)
								{
								continue;
								}
							}
							//Enemy
							a = 1;
							if (Order * -1 == -1)
							{
								a = -1;
							}
							for (int  ik = 0; ik < 8; ik++)
							{
								for (int  jk = 0; jk < 8; jk++)
								{
									Tab[ik][jk] = TableS[ik][jk];
								}
							}
							InAttackedNotSelfSupported = false;
							SelfSupported = false;
							S = true;
							//Wehn an Object of Enemy Attack Self Object
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								bool ab = false;
								ab = Attack(CloneATable(Tab), RowS, ColS, i, j, a, Order * -1);


								if (ab)
								{
									InAttackedNotSelfSupported = true;
									a = 1;
									if (Order == -1)
									{
										a = -1;
									}
									//For Self.
									for (int RowD = 0; RowD < 8; RowD++)
									{
										for (int ColD = 0; ColD < 8; ColD++)
										{
											//Ignore of Enemies
											if (Order == 1 && Tab[RowD][ColD] <= 0)
											{
												continue;
											}
											else
											{
												if (Order == -1 && Tab[RowD][ColD] >= 0)
												{
												continue;
												}
											}
											a = 1;
											if (Order == -1)
											{
												a = -1;
											}
											for (int  ik = 0; ik < 8; ik++)
											{
												for (int  jk = 0; jk < 8; jk++)
												{
													Tab[ik][jk] = TableS[ik][jk];
												}
											}
											//When There is Supporter For Attacked Self Object and Is Greater than Attacking Object.
											ab = Support(CloneATable(Tab), RowD, ColD, i, j, a, Order) && (ObjectValueCalculator(CloneATable(Tab), i, j) <= ObjectValueCalculator(CloneATable(Tab), RowS, ColS));


											if (ab)
											{

												SelfSupported = true;
												S = S && true;
												break;
											}
										}
										if (SelfSupported)
										{
											break;
										}
									}
									//When a source enemy object attack a destination source object 
									//a source object is greater than another source object. Is = -1 Is another object valuable.
									//a source object is less than or equal  than another source object.Is = 1 Is not another object valuable.                                        
								}
							}
							//When Attacked Current Object is not supported and there is another object valuable
							////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O2)
							{
								if ((!SelfSupported && InAttackedNotSelfSupported))
								{
									S = false;
									if (!S)
									{
										int Valuable[3];
										Valuable[0] = TableS[i][j];
										Valuable[1] = i;
										Valuable[2] = j;
										if (!ExistValuble(Valuable, ValuableSelfSupported))
										{
											ValuableSelfSupported.push_back(Valuable);
										}
										S = true;
									}
								}
							}
						}
					}
				}
			}
			Order = Ord;
			//When There is at Last tow SelfNotSupporeted Object.
			if (ValuableSelfSupported.size() > 1)
			{
				return true;
			}
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::ExistValuble(int *Table, std::vector<int*> &ValuableSelfSupported)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			for (int  i = 0; i < ValuableSelfSupported.size(); i++)
			{
				if (ValuableSelfSupported[i][0] == Table[0] && ValuableSelfSupported[i][1] == Table[1] && ValuableSelfSupported[i][2] == Table[2])
				{
					return true;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::MaxObjecvts(std::vector<int> &Obj, int Max)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool MaxO = true;
			if (Obj.size() > 0)
			{
				if (Max == 0)
				{
					return !MaxO;
				}
				if (Max > 0)
				{
					if (Obj[0] < 0)
					{
						return !MaxO;
					}
				}
				if (Max < 0)
				{
					if (Obj[0] > 0)
					{
						return !MaxO;
					}
				}
				for (int  i = 0; i < Obj.size(); i++)
				{
					if (abs(Obj[i]) > abs(Max))
					{
						MaxO = true;
						return MaxO;
					}
					else
					{
						MaxO = false;
					}
				}
			}
			return MaxO;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsCurrentMoveTakeSupporte(int** Table, int Order, int a, int i, int j, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Variables.
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			for (int  ik = 0; ik < 8; ik++)
			{
				for (int  jk = 0; jk < 8; jk++)
				{
					Tab[ik][jk] = Table[ik][jk];
				}
			}
			bool SelfSupported = false;
			int Dum = ChessRules::CurrentOrder;
			for (int  RowS = 0; RowS < 8; RowS++)
			{
				for (int  ColS = 0; ColS < 8; ColS++)
				{
					//Ignore of Enemy Objects.
					if (Tab[RowS][ColS] <= 0 && Order == 1)
					{
						continue;
					}
					if (Tab[RowS][ColS] >= 0 && Order == -1)
					{
						continue;
					}
					a = 1;
					if (Order == -1)
					{
						a = -1;
					}

					//When there is Attacks.
					if (Support(CloneATable(Tab), RowS, ColS, ii, jj, a, Order))
					{
						SelfSupported = true;
					}
				}
			}
			return SelfSupported;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicKingSafety(int** Tab, int Order, int a, int CurrentAStarGredy, int RowS, int ColS, int RowD, int ColD)
	{

		////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (ol)
		{
			int HA = 0;
			const int CastleWHITE = 4, CastleBLACK = -4, KingWHITE = 6, KingBLACK = -6;
			if (Order == 1)
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Tab), Order, RowS, ColS);
				G->FindWHITEKing(CloneATable(Tab), RowK, ColK);
				if (Kind == 7)
				{
					HA = RationalRegard;
				}
				if (Tab[RowK][ColK] == KingWHITE && Tab[RowK][ColK] == TableInitiation[RowK][ColK] && ChessRules::CastleKingAllowedWHITE)
				{
					HA += RationalPenalty;
				}
				if ((Tab[RowK][ColK] == KingWHITE) && (Tab[RowK][7] == CastleWHITE || Tab[RowK][0] == CastleWHITE) && (TableInitiation[RowK][ColK] == 6) && ChessRules::CastleKingAllowedWHITE)
				{
					if (RowS == RowK && ColS == 5)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 6)
					{
						HA += RationalRegard;
					}
					//if (RowS == RowK - 1 && ColS == 5)
					///if (RowS == RowK - 1 && ColS == 6)

					if (RowS == RowK && ColS == 3)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 2)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 1)
					{
						HA += RationalRegard;
					}
					// if (RowS == RowK - 1 && ColS == 3)
					//if (RowS == RowK - 1 && ColS == 2)
					//if (RowS == Row - 1 && ColS == 1)



				}
			}
			else
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Tab), Order, RowS, ColS);
				G->FindBLACKKing(CloneATable(Tab), RowK, ColK);
				if (Kind == -7)
				{
					HA = RationalRegard;
				}
				if (Tab[RowK][ColK] == KingBLACK && Tab[RowK][ColK] == TableInitiation[RowK][ColK] && ChessRules::CastleKingAllowedBLACK)
				{
					HA += RationalPenalty;
				}
				if ((Tab[RowK][ColK] == KingBLACK) && (Tab[RowK][7] == CastleBLACK || Tab[RowK][0] == CastleBLACK) && (TableInitiation[RowK][ColK] == -6) && ChessRules::CastleKingAllowedBLACK)
				{
					if (RowS == RowK && ColS == 5)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 6)
					{
						HA += RationalRegard;
					}
					//if (RowS == RowK + 1 && ColS == 5)
					// if (RowS == RowK + 1 && ColS == 6)

					if (RowS == RowK && ColS == 3)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 2)
					{
						HA += RationalRegard;
					}
					if (RowS == RowK && ColS == 1)
					{
						HA += RationalRegard;
					}
					//if (RowS == RowK + 1 && ColS == 3)
					// if (RowS == RowK + 1 && ColS == 2)
					//if (RowS == RowK + 1 && ColS == 1)

				}
			}
			return HA;
		}

	}

	int ThinkingHybridizerRefrigitz::HeuristicKingPreventionOfCheckedAtBegin(int** Tab, int Order, int a, int CurrentAStarGredy, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O3)
		{
			int HA = 0;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tabl = CloneATable(Tab);
			int **Tabl = CloneATable(Tab);
			if (Tabl[RowS][ColS] != 0)
			{
				Tabl[RowD][ColD] = Tabl[RowS][ColS];
				Tabl[RowS][ColS] = 0;
				ChessRules *A = new ChessRules(CurrentAStarGredy, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab[RowD][ColD], CloneATable(Tab), Order, RowD, ColD);
				A->CheckMate(Tabl, Order);



				if (!(A->CheckMateWHITE || A->CheckMateBLACK))
				{
					if (A->CheckWHITE || A->CheckBLACK)
					{
						HA += RationalPenalty;
					}
				}
				if (Order == 1)
				{
					if (A->CheckMateWHITE)
					{
						HA += RationalPenalty;
					}
					else
					{
					if (A->CheckMateBLACK)
					{
						HA += RationalRegard;
					}
					}
				}
				else
				{
					if (A->CheckMateWHITE)
					{
						HA += RationalRegard;
					}
					else
					{
		 if (A->CheckMateBLACK)
		 {
						HA += RationalPenalty;
		 }
					}
				}
			}
			else
			{
				ChessRules *A = new ChessRules(CurrentAStarGredy, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab[RowD][ColD], CloneATable(Tab), Order, RowD, ColD);
				A->CheckMate(Tabl, Order);


				if (A->CheckWHITE || A->CheckBLACK)
				{
					HA += RationalRegard;
				}
				if (Order == 1)
				{
					if (A->CheckMateWHITE)
					{
						HA += RationalPenalty;
					}
					else
					{
					if (A->CheckMateBLACK)
					{
						HA += RationalRegard;
					}
					}
				}
				else
				{
					if (A->CheckMateWHITE)
					{
						HA += RationalRegard;
					}
					else
					{
		 if (A->CheckMateBLACK)
		 {
						HA += RationalPenalty;
		 }
					}
				}
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicSupported(int** Tab, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HAS = 0;
			int HAE = 0;

				HAS = HeuristicSelfSupported(CloneATable(Tab), Ord, aa, RowS, ColS, RowD, ColD);



				HAS = HAE = HeuristicEnemySupported(CloneATable(Tab), Ord, aa, RowS, ColS, RowD, ColD);



			return HAS + (HAE);
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicSelfSupported(int** Tab, int Ord, int aa, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicSelfSupportedValue = 0;
			//Initiate Local Vrariables.
			int HA = 0;
			int DumOrder = Order;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//If There is Not AStarGreedy Heuristic Boolean Value.
			if (!AStarGreedyHeuristicT)
			{
				{
					{
				//For All Self
						//For Current Object Lcation.
						int Order = int();
						Order = DumOrder;
						int a;
						a = aa;
						//Ignore Current Unnessery Home.
						if (RowS == RowD && ColS == ColD)
						{
							return 0;
						}
						//Default Is WHITE One.
						int Sign = 1;
						Order = DummyOrder;
						///When Supporte is true. means [RowD,ColD] Supportes [RowS,ColS].
						///What is Supporte!
						///Ans:When [RowS,ColS] is Supporte [RowD,ColD] return true when Self is located in [RowD,ColD].
						//if (Order == 1 && Tab[RowD, ColD] <= 0)
						//if (Order == -1 && Tab[RowD, ColD] >= 0)
						//if (!Scop(RowS, ColS, RowD, ColD, System.Math.Abs(Tab[RowS, ColS])))
						if (Tab[RowD][ColD] < 0 && DummyOrder == -1 && Tab[RowS][ColS] <= 0)
						{
							Order = -1;
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								Sign = 1 * AllDraw::SignSupport;
								ChessRules::CurrentOrder = -1;
							}
							a = -1;
						}
						else if (Tab[RowD][ColD] > 0 && DummyOrder == 1 && Tab[RowS][ColS] > 0)
						{
							Order = 1;
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								Sign = 1 * AllDraw::SignSupport;
								ChessRules::CurrentOrder = 1;
							}
							a = 1;
						}
						else
						{
							return HeuristicSelfSupportedValue;
						}
						//For Support Movments.
						bool ab = false;
						ab = Support(CloneATable(Tab), RowS, ColS, RowD, ColD, a, Order);


						if (ab)
						{
							//Calculate Local Support Heuristic.
							HA += RationalRegard;
							int Supported = int();
							int SupportedE = int();
							Supported = 0;
							SupportedE = 0;
							//For All Self Obejcts.                                             
							////Parallel.For(0, 8, g =>
							for (int g = 0; g < 8; g++)
							{
								//if (Supported)
								////Parallel.For(0, 8, h =>
								for (int h = 0; h < 8; h++)
								{
									////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O2)
									{
										//if (Supported)
										//Ignore Of Enemy Objects.
										if (Order == 1 && Tab[g][h] == 0)
										{
											continue;
										}
										if (Order == -1 && Tab[g][h] == 0)
										{
											continue;
										}
										if (!Scop(g, h, RowS, ColS, abs(Tab[g][h])))
										{
											continue;
										}
										int aaa;
										//Assgin Enemy ints.
										aaa = 1;
										aa = 1;
										if (Order == -1)
										{
											aaa = -1;
										}
										else
										{
											aaa = 1;
										}
										if (Order * -1 == -1)
										{
											aa = -1;
										}
										else
										{
											aa = 1;
										}
										//When Enemy is Supported.
										bool A = bool();
										bool B = bool();
										A = Support(CloneATable(Tab), g, h, RowS, ColS, aaa, Order);


										B = Attack(CloneATable(Tab), g, h, RowS, ColS, aa, Order * -1);



										//When Enemy is Supported.
										if (A)
										{
											//Assgine variable.
											Supported++;

										}
										if (B)
										{
											//Assgine variable.
											SupportedE++;

										}
									}
								}
								// if (Supported)
							}
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								if (Supported > 0 && SupportedE == 0)
								{
									//When is Not Supported multyply 100.
									HA *= static_cast<int>(pow(2, Supported));
								}
								else
								{
									if (SupportedE > 0)
									{
									//When is Supported Multyply -100.
									HA *= static_cast<int>(-1 * pow(2, SupportedE));
									}
								}
							}
						}
					}
				}
			}
			//For All Homes Table.
			else
			{
				{
					{
						{
							{
								int Order = int();
								int a;
								a = aa;
								{
									//Ignore Current Home.
									if (RowS == RowD && ColS == ColD)
									{
										return 0;
									}
									//Initiate Local Variables.
									int Sign = 1;
									Order = DummyOrder;
									///When Supporte is true. means [RowD,ColD] is in SelfSupported.by [RowS,ColS].
									///What is Supporte!
									///Ans:When [RowS,ColS] is Supporte [RowD,ColD] return true when Self is located in [RowD,ColD].
									//if (!Scop(RowS, ColS, RowD, ColD, System.Math.Abs(Tab[RowS, ColS])))
									if (Tab[RowD][ColD] < 0 && DummyOrder == -1 && Tab[RowS][ColS] <= 0)
									{
										Order = -1;
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											Sign = 1 * AllDraw::SignSupport;
											ChessRules::CurrentOrder = -1;
											a = -1;
										}
									}
									else if (Tab[RowD][ColD] > 0 && DummyOrder == 1 && Tab[RowS][ColS] > 0)
									{
										Order = 1;
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											Sign = 1 * AllDraw::SignSupport;
											ChessRules::CurrentOrder = 1;
											a = 1;
										}
									}
									else
									{
										return HeuristicSelfSupportedValue;
									}
									//For Support Movments.
									bool ab = false;
									ab = Support(CloneATable(Tab), RowS, ColS, RowD, ColD, a, Order);


									if (ab)
									{
										//Calculate Local Support Heuristic.
										HA += RationalRegard;
										int Supported = int();
										int SupportedE = int();
										Supported = 0;
										SupportedE = 0;
										//For All Self Obejcts.                                             
										////Parallel.For(0, 8, g =>
										for (int g = 0; g < 8; g++)
										{
											//if (Supported)
											////Parallel.For(0, 8, h =>
											for (int h = 0; h < 8; h++)
											{
												////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												////lock (O2)
												{
													//if (Supported)
													//Ignore Of Enemy Objects.
													if (Order == 1 && Tab[g][h] == 0)
													{
														continue;
													}
													if (Order == -1 && Tab[g][h] == 0)
													{
														continue;
													}
													if (!Scop(g, h, RowS, ColS, abs(Tab[g][h])))
													{
														continue;
													}
													int aaa;
													//Assgin Enemy ints.
													aaa = 1;
													aa = 1;
													if (Order == -1)
													{
														aaa = -1;
													}
													else
													{
														aaa = 1;
													}
													if (Order * -1 == -1)
													{
														aa = -1;
													}
													else
													{
														aa = 1;
													}
													//When Enemy is Supported.
													bool A = bool();
													bool B = bool();
													A = Support(CloneATable(Tab), g, h, RowS, ColS, aaa, Order);


													B = Attack(CloneATable(Tab), g, h, RowS, ColS, aa, Order * -1);


													//When Enemy is Supported.
													if (A)
													{
														//Assgine variable.
														Supported++;

													}
													if (B)
													{
														//Assgine variable.
														SupportedE++;

													}
												}
											}
											// if (Supported)
										}
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											if (Supported > 0 && SupportedE == 0)
											{
												//When is Not Supported multyply 100.
												HA *= static_cast<int>(pow(2, Supported));
											}
											else
											{
											  if (SupportedE > 0)
											  {
												//When is Supported Multyply -100.
												HA *= static_cast<int>(-1 * pow(2, SupportedE));
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
			//Reassignments of Global Orders with Local Begining One.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			Order = DumOrder;
			return HA * 1;
		}
	} ///Identification of Equality

	int ThinkingHybridizerRefrigitz::HeuristicEnemySupported(int** Tab, int Ord, int aa, int RowD, int ColD, int RowS, int ColS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicSelfSupportedValue = 0;
			//Initiate Local Vrariables.
			int HA = 0;
			int DumOrder = Order;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//If There is Not AStarGreedy Heuristic Boolean Value.
			if (!AStarGreedyHeuristicT)
			{
				{
					{
				//For All Self
						//For Current Object Lcation.
						int Order = int();
						Order = DumOrder;
						int a;
						a = aa;
						//Ignore Current Unnessery Home.
						if (RowS == RowD && ColS == ColD)
						{
							return 0;
						}
						//Default Is WHITE One.
						int Sign = 1;
						Order = DummyOrder;
						///When Supporte is true. means [RowD,ColD] Supportes [RowS,ColS].
						///What is Supporte!
						///Ans:When [RowS,ColS] is Supporte [RowD,ColD] return true when Self is located in [RowD,ColD].
						//if (Order == 1 && Tab[RowD, ColD] <= 0)
						//if (Order == -1 && Tab[RowD, ColD] >= 0)
						//if (!Scop(RowS, ColS, RowD, ColD, System.Math.Abs(Tab[RowS, ColS])))
						if (Tab[RowD][ColD] < 0 && DummyOrder == -1 && Tab[RowS][ColS] <= 0)
						{
							Order = -1;
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								Sign = 1 * AllDraw::SignSupport;
								ChessRules::CurrentOrder = -1;
							}
							a = -1;
						}
						else if (Tab[RowD][ColD] > 0 && DummyOrder == 1 && Tab[RowS][ColS] > 0)
						{
							Order = 1;
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								Sign = 1 * AllDraw::SignSupport;
								ChessRules::CurrentOrder = 1;
							}
							a = 1;
						}
						else
						{
							return HeuristicSelfSupportedValue;
						}
						//For Support Movments.
						bool ab = false;
						ab = Support(CloneATable(Tab), RowS, ColS, RowD, ColD, a, Order);


						if (ab)
						{

							//Calculate Local Support Heuristic.
							HA += RationalPenalty;
							int Supported = int();
							int SupportedE = int();
							Supported = 0;
							SupportedE = 0;
							//For All Self Obejcts.                                             
							////Parallel.For(0, 8, g =>
							for (int g = 0; g < 8; g++)
							{
								//if (Supported)
								////Parallel.For(0, 8, h =>
								for (int h = 0; h < 8; h++)
								{
									////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O2)
									{
										//if (Supported)
										//Ignore Of Enemy Objects.
										if (Order == 1 && Tab[g][h] == 0)
										{
											continue;
										}
										if (Order == -1 && Tab[g][h] == 0)
										{
											continue;
										}
										if (!Scop(g, h, RowS, ColS, abs(Tab[g][h])))
										{
											continue;
										}
										int aaa;
										//Assgin Enemy ints.
										aaa = 1;
										aa = 1;
										if (Order == -1)
										{
											aaa = -1;
										}
										else
										{
											aaa = 1;
										}
										if (Order * -1 == -1)
										{
											aa = -1;
										}
										else
										{
											aa = 1;
										}
										//When Enemy is Supported.
										bool A = bool();
										bool B = bool();
										A = Support(CloneATable(Tab), g, h, RowS, ColS, aaa, Order);


										B = Attack(CloneATable(Tab), g, h, RowS, ColS, aa, Order * -1);


										//When Enemy is Supported.
										if (A)
										{
											//Assgine variable.
											Supported++;

										}
										if (B)
										{
											//Assgine variable.
											SupportedE++;

										}
									}
								}
								// if (Supported)
							}
							////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O1)
							{
								if (SupportedE > 0 && Supported == 0)
								{
									//When is Not Supported multyply 100.
									HA *= static_cast<int>(pow(2, SupportedE));
								}
								else
								{
								   if (Supported > 0)
								   {
									//When is Supported Multyply -100.
									HA *= static_cast<int>(-1 * pow(2, Supported));
								   }
								}
							}
						}
					}
				}
			}
			//For All Homes Table.
			else
			{
				{
					{
						{
							{
								int Order = int();
								int a;
								a = aa;
								{
									//Ignore Current Home.
									if (RowS == RowD && ColS == ColD)
									{
										return 0;
									}
									//Initiate Local Variables.
									int Sign = 1;
									Order = DummyOrder;
									///When Supporte is true. means [RowD,ColD] is in SelfSupported.by [RowS,ColS].
									///What is Supporte!
									///Ans:When [RowS,ColS] is Supporte [RowD,ColD] return true when Self is located in [RowD,ColD].
									//if (!Scop(RowS, ColS, RowD, ColD, System.Math.Abs(Tab[RowS, ColS])))
									if (Tab[RowD][ColD] < 0 && DummyOrder == -1 && Tab[RowS][ColS] <= 0)
									{
										Order = -1;
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											Sign = 1 * AllDraw::SignSupport;
											ChessRules::CurrentOrder = -1;
											a = -1;
										}
									}
									else if (Tab[RowD][ColD] > 0 && DummyOrder == 1 && Tab[RowS][ColS] > 0)
									{
										Order = 1;
										////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O2)
										{
											Sign = 1 * AllDraw::SignSupport;
											ChessRules::CurrentOrder = 1;
											a = 1;
										}
									}
									else
									{
										return HeuristicSelfSupportedValue;
									}
									//For Support Movments.
									bool ab = false;
									ab = Support(CloneATable(Tab), RowS, ColS, RowD, ColD, a, Order);


									if (ab)
									{

										//Calculate Local Support Heuristic.
										HA += RationalPenalty;
										int Supported = int();
										int SupportedE = int();
										Supported = 0;
										SupportedE = 0;
										//For All Self Obejcts.                                             
										////Parallel.For(0, 8, g =>
										for (int g = 0; g < 8; g++)
										{
											//if (Supported)
											////Parallel.For(0, 8, h =>
											for (int h = 0; h < 8; h++)
											{
												////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
												////lock (O2)
												{
													//if (Supported)
													//Ignore Of Enemy Objects.
													if (Order == 1 && Tab[g][h] == 0)
													{
														continue;
													}
													if (Order == -1 && Tab[g][h] == 0)
													{
														continue;
													}
													if (!Scop(g, h, RowS, ColS, abs(Tab[g][h])))
													{
														continue;
													}
													int aaa;
													//Assgin Enemy ints.
													aaa = 1;
													aa = 1;
													if (Order == -1)
													{
														aaa = -1;
													}
													else
													{
														aaa = 1;
													}
													if (Order * -1 == -1)
													{
														aa = -1;
													}
													else
													{
														aa = 1;
													}
													//When Enemy is Supported.
													bool A = bool();
													bool B = bool();
													A = Support(CloneATable(Tab), g, h, RowS, ColS, aaa, Order);


													B = Attack(CloneATable(Tab), g, h, RowS, ColS, aa, Order * -1);


													//When Enemy is Supported.
													if (A)
													{
														//Assgine variable.
														Supported++;

													}
													if (B)
													{
														//Assgine variable.
														SupportedE++;

													}
												}
											}
											// if (Supported)
										}
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											if (SupportedE > 0 && Supported == 0)
											{
												//When is Not Supported multyply 100.
												HA *= static_cast<int>(pow(2, SupportedE));
											}
											else
											{
												  if (Supported > 0)
												  {
												//When is Supported Multyply -100.
												HA *= static_cast<int>(-1 * pow(2, Supported));
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
			//Reassignments of Global Orders with Local Begining One.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			Order = DumOrder;
			return HA * 1;
		}
	} ///Identification of Equality

	bool ThinkingHybridizerRefrigitz::TableEqual(int** Tabl1, int** Tabl2)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//For All Home
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//When there is different values in same location of tow Table return non equality.
					if (Tabl1[i][j] != Tabl2[i][j])
					{
						return false;
					}
				}
			}
			//Else return equlity.
			return true;
		}
	}

	bool ThinkingHybridizerRefrigitz::TableEqual(int Tab1, int Tab2)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//When there is different values in same location of tow Table return non equality.
			if (Tab1 != Tab2)
			{
				return false;
			}
			//Else return equlity.
			return true;
		}
	}

	bool ThinkingHybridizerRefrigitz::ExistTableInList(int** Tab, std::vector<int**> &List, int Index)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Local Variables.
			bool Exist = false;
			//For All Tables of Table List.
			for (int  i = Index; i < List.size(); i++)
			{
				//Strore Equality Value.
				bool Eq = TableEqual(Tab, List[i]);
				//When is Equality is Occurred.
				if (Eq)
				{
					//Store Equality Local Value in a Global static value.
					AllDraw::LoopHeuristicIndex = i;
					return Eq;
				}
				Exist |= Eq;
			}
			//return Equality Local value of all lists.
			return Exist;
		}
	}

	bool ThinkingHybridizerRefrigitz::Movable(int** Tab, int i, int j, int ii, int jj, int a, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Tab[i][j] == 0)
			{
				return false;
			}
			if (Order == 1 && Tab[i][j] < 0)
			{
				return false;
			}
			if (Order == -1 && Tab[i][j] > 0)
			{
				return false;
			}
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int p = 0; p < 8; p++)
			{
				for (int k = 0; k < 8; k++)
				{
					Table[p][k] = Tab[p][k];
				}
			}
			//Initiate Local Variables.
			int Store = Table[ii][jj];
			ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order, i, j);
			//Menen Parameter is Moveble to Second Parameters Location returm Movable.
			if (Order == 1 && Table[ii][jj] < 0)
			{
				bool ab = false;
				ab = A->Rules(i, j, ii, jj, a, Order, true);


				if (ab)
				{

					return true;
				}
			}
			else
			{
			 if (Order == -1 && Table[ii][jj] > 0)
			 {
				bool ab = false;
				ab = A->Rules(i, j, ii, jj, a, Order, true);


				if (ab)
				{
					return true;
				}
			 }
			}
			if (Order == 1 && Table[ii][jj] == 0)
			{
				bool ab = false;
				ab = A->Rules(i, j, ii, jj, a, Order, true);


				if (ab)
				{
					return true;
				}
			}
			else
			{
			if (Order == -1 && Table[ii][jj] == 0)
			{
				bool ab = false;
				ab = A->Rules(i, j, ii, jj, a, Order, true);


				if (ab)
				{
					return true;
				}
			}
			}

			return false;
		}
	}

	int ThinkingHybridizerRefrigitz::SignOrderToPlate(int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Sign = 1;
			//When Current Order Sign Positive.
			if (Order == AllDraw::OrderPlateDraw)
			{
				Sign = 1;
			}
			else
			{
				//When Order is Opposite Sign Negative.
				if (Order !=  AllDraw::OrderPlateDraw)
				{
				Sign = -1;
				}
			}
			return Sign;
		}
	}

	bool ThinkingHybridizerRefrigitz::RemovePenalty(int** Tab, int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Remove = false;
			//Create Objects.
			ChessRules *AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab[i][j], CloneATable(Tab), Order, i, j);
			//When is Check.
			if (AA->Check(CloneATable(Tab), Order))
			{
				//When there is Current Checked or Objects Danger return false.
				if (Order == 1 && (AA->CheckWHITE || AA->CheckWHITEObjectDangour))
				{
					return Remove;
				}
				if (Order == -1 && (AA->CheckBLACK || AA->CheckBLACKObjectDangour))
				{
					return Remove;
				}
			}

			//For Enemy.
			for (int  ii = 0; ii < 8; ii++)
			{
				for (int  jj = 0; jj < 8; jj++)
				{
					if (Order == 1 && Tab[ii][jj] >= 0)
					{
						continue;
					}
					if (Order == -1 && Tab[ii][jj] <= 0)
					{
						continue;
					}
					//Clone a Copy.
					int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
					//Clone a Table.
					for (int  RowS = 0; RowS < 8; RowS++)
					{
						for (int  ColS = 0; ColS < 8; ColS++)
						{
							Table[RowS][ColS] = Tab[RowS][ColS];
						}
					}
					ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[ii][jj], CloneATable(Table), Order * -1, ii, jj);
					int a = 1;
					if (Order * -1 == -1)
					{
						a = -1;
					}
					//When there is movment to current OPbject.
					bool ab = false;
					ab = A->Rules(0, jj, i, j, a, Table[ii][jj], true);


					if (ab)
					{
						//Number of Attacks and take move.
						int Count = 0;
						Count = AttackerCount(CloneATable(Table), Order * -1, a, ii, jj);


						//When there is Object Danger.
						//Clone a Copy.
						for (int  RowS = 0; RowS < 8; RowS++)
						{
							for (int  ColS = 0; ColS < 8; ColS++)
							{
								Table[RowS][ColS] = Tab[RowS][ColS];
							}
						}
						//Create New HybridizerRefrigitz Rule Object.
						A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[ii][jj], CloneATable(Table), Order, ii, jj);
						//Detect int.
						a = 1;
						if (Order == -1)
						{
							a = -1;
						}
						//When Current Movments Attacks Enemy.
						ab = Attack(CloneATable(Table), i, j, ii, jj, a, Order);


						if (ab)
						{

							//For Current Home.
							for (int  RowS = 0; RowS < 8; RowS++)
							{
								for (int  ColS = 0; ColS < 8; ColS++)
								{
									//Ignore of Enemy.
									if (Order == 1 && Tab[RowS][ColS] <= 0)
									{
										continue;
									}
									if (Order == -1 && Tab[RowS][ColS] >= 0)
									{
										continue;
									}
									//Whn Value Of Current is Less That Enemy.
									ab = ObjectValueCalculator(CloneATable(Table), i, j) < ObjectValueCalculator(CloneATable(Table), ii, jj);


									if (ab)
									{
										//Take Move.
										Table[ii][jj] = Table[i][j];
										Table[i][j] = 0;
										a = 1;
										if (Order * -1 == -1)
										{
											a = -1;
										}
										//When Enemy Attacks Current Moved.
										ab = Attack(CloneATable(Table), RowS, ColS, ii, jj, a, Order * -1);


										if (ab)
										{

											//For Current Order.
											for (int RowD = 0; RowD < 8; RowD++)
											{
												for (int ColD = 0; ColD < 8; ColD++)
												{
													//Ignore of Enemy.
													if (Order == 1 && Tab[RowD][ColD] <= 0)
													{
														continue;
													}
													if (Order == -1 && Tab[RowD][ColD] >= 0)
													{
														continue;
													}
													a = 1;
													if (Order == -1)
													{
														a = -1;
													}
													//When Self Supported Current
													ab = Support(CloneATable(Table), RowD, ColD, i, j, a, Order);


													if (ab)
													{

														//If V alue of Enemy is Greater Than Current and Value of Enemy is Greater than Supporter.
														ab = ObjectValueCalculator(CloneATable(Table), RowS, ColS) < ObjectValueCalculator(CloneATable(Table), ii, jj) && ObjectValueCalculator(CloneATable(Table), RowS, ColS) > ObjectValueCalculator(CloneATable(Table), Row, ColS);


														if (ab)
														{
															Remove = true;
															return Remove;
														}
														else
														{
															return Remove;
														}
													}
													else
													{
														return Remove;
													}
												}
											}
										}
										else
										{
											return Remove;
										}
									}
									else
									{
										return Remove;
									}
								}
							}
						}
					}
				}
			}
			return Remove;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsCurrentStateIsDangreousForCurrentOrder(int** Tabl, int Order, int a, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Object.
			ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 1, CloneATable(Tabl), 1, Row, Column);
			//WHITE Order.
			if (Order == 1)
			{
				//Find location of WHITE King.
				int RowG = -1, ColumnG = -1;
				A->FindWHITEKing(Tabl, RowG, ColumnG);
				//When found.
				if (RowG != -1 && ColumnG != -1)
				{
					//For BLACK
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 0; j < 8; j++)
						{
							//Ignore of WHITE and Empty
							if (Tabl[i][j] >= 0)
							{
								continue;
							}
							if (i != ii && j != jj)
							{
								//Create new Objects of Table
								int **TablCon; *TablCon = new int[8]; for (int b = 0; b < 8; b++)TablCon[b] = new int[8];
								for (int  RowS = 0; RowS < 8; RowS++)
								{
									for (int  ColS = 0; ColS < 8; ColS++)
									{
										TablCon[RowS][ColS] = Tabl[RowS][ColS];
									}
								}
								//For Enemy Order.
								if (TablCon[i][j] < 0)
								{
									//For WHITE and Empty Objects.
									if (TablCon[ii][jj] >= 0)
									{
										//Setting Enemy Order.
										int DummyOrder = Order;
										int DummyCurrentOrder = ChessRules::CurrentOrder;
										A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TablCon[i][j], TablCon, -1, i, j);
										//When Enemy is Attacked WHITE Objects.
										bool ab = false;
										ab = A->Rules(i, j, ii, jj, -1, TablCon[i][j], true);


										if (ab)
										{

											//Take Movments.
											TablCon[ii][jj] = TablCon[i][j];
											TablCon[i][j] = 0;
											//Settting Current Order.
											ChessRules::CurrentOrder = 1;
											//Settting Object.
											A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TablCon[ii][jj], TablCon, 1, ii, jj);
											//When Occured Check.
											ab = A->Check(TablCon, 1);


											if (ab)
											{

												//When WHITE is Check.
												if (A->CheckWHITE)
												{
													//For Enemy Order Objects.
													for (int RowD = 0; RowD < 8; RowD++)
													{
														for (int ColD = 0; ColD < 8; ColD++)
														{
															//When is not Conflict.
															if (RowD != i && ColD != j && RowD != ii && ColD != jj)
															{
																//Setting Enemy.
																ChessRules::CurrentOrder = -1;
																//When Enemy is Supported 
																ab = Support(TablCon, RowD, ColD, i, j, -1, -1);


																if (ab)
																{
																	//restore and return true.
																	Order = DummyOrder;
																	ChessRules::CurrentOrder = DummyCurrentOrder;
																	return true;
																}
															}
														}
													}
												}
												Order = DummyOrder;
												ChessRules::CurrentOrder = DummyCurrentOrder;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//For BLACK Order.
			else if (Order == -1)
			{
				//Found of BLACK King.
				int RowB = -1, ColumnB = -1;
				A->FindBLACKKing(Tabl, RowB, ColumnB);
				//When found.
				if (RowB != -1 && ColumnB != -1)
				{
					//For WHITE.
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 0; j < 8; j++)
						{
							if (Tabl[i][j] <= 0)
							{
								continue;
							}
							if (i != ii && j != jj)
							{
								//Create new Objects of Table
								int **TablCon; *TablCon = new int[8]; for (int b = 0; b < 8; b++)TablCon[b] = new int[8];
								for (int  RowS = 0; RowS < 8; RowS++)
								{
									for (int  ColS = 0; ColS < 8; ColS++)
									{
										TablCon[RowS][ColS] = Tabl[RowS][ColS];
									}
								}
								//For Enemy Objects.
								if (TablCon[i][j] > 0)
								{
									//For Self Objects and Empty.
									if (TablCon[ii][jj] <= 0)
									{
										//Store and Enemy Order.
										int DummyOrder = Order;
										int DummyCurrentOrder = ChessRules::CurrentOrder;
										A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TablCon[i][j], TablCon, 1, i, j);
										ChessRules::CurrentOrder = 1;
										//When Enemy Attacked Self Objects.
										bool ab = false;
										ab = A->Rules(i, j, ii, jj, 1, TablCon[i][j], true);


										if (ab)
										{
											//Take movemnts.
											TablCon[ii][jj] = TablCon[i][j];
											TablCon[i][j] = 0;
											//Setting current Order.
											ChessRules::CurrentOrder = -1;
											A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TablCon[ii][jj], TablCon, -1, ii, jj);
											//When Check Occured.
											ab = A->Check(TablCon, -1);


											if (ab)
											{
												//When Current is Check.
												if (A->CheckBLACK)
												{
													//For Enemy Objecvts.
													for (int RowD = 0; RowD < 8; RowD++)
													{
														for (int ColD = 0; ColD < 8; ColD++)
														{
															//Ignore of Conflit.
															if (RowD != i && ColD != j && RowD != ii && ColD != jj)
															{
																//Setting Enemy Order
																ChessRules::CurrentOrder = 1;
																//When Enemy is Supported.
																ab = Support(TablCon, RowD, ColD, i, j, 1, 1);


																if (ab)
																{
																	//restore and return true.
																	Order = DummyOrder;
																	ChessRules::CurrentOrder = DummyCurrentOrder;
																	return true;
																}
															}
														}
													}
												}
												//restore.
												Order = DummyOrder;
												ChessRules::CurrentOrder = DummyCurrentOrder;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//return false.
			return false;
		}
	}

	int *ThinkingHybridizerRefrigitz::IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(int Order, int** Tabl, int ik, int jk, int iki, int jki, int OrderPalte, int OrderPalteMulMinuse, int Depth, bool KindCheckedSelf)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is[4];
			////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O3)
			{
				Is[0] = 0;
				Is[1] = 0;
				Is[2] = 0;
				Is[3] = 0;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab2 = CloneATable(Tabl);
				int **Tab2 = CloneATable(Tabl);
				ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab2[ik][jk], Tab2, Order * -1, ik, jk);
				if (Order * -1 == 1)
				{
					color = 1;
				}
				else
				{
					color = -1;
				}
				//When Enemy Attack Currnet.
				bool ab = false;
				ab = A->Rules(ik, jk, iki, jki, color, Tab2[ik][jk], true);


				if (ab)
				{

					Tab2[iki][jki] = Tab2[ik][jk];
					Tab2[ik][jk] = 0;
					A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab2[iki][jki], Tab2, Order * -1, iki, jki);
					//When Current Always is in CheckedMate.
					ab = A->CheckMate(Tab2, Order * -1);


					if (ab)
					{
						//When Order is WHITE.
						if (OrderPalte == 1)
						{
							if (A->CheckMateWHITE)
							{
								Is[0] = 1;
								if (KindCheckedSelf)
								{
									Is[1] = Depth;
								}
							}
							else
							{
								//if (A->CheckMateBLACK)
							}
						}
						//When Order is BLACK.
						else
						{
						   if (OrderPalte == -1)
						   {
							if (A->CheckMateBLACK)
							{
								Is[0] = 1;
								Is[1] = Depth;
							}
							else
							{
								//if (A->CheckMateWHITE)
							}
						   }
						}

						//When Order * -1 is WHITE
						if (OrderPalteMulMinuse == 1)
						{
							if (A->CheckMateWHITE)
							{
								Is[2] = 1;
								Is[3] = Depth;
							}
							else
							{
								//if (A->CheckMateBLACK)
							}
						}
						//When Order * -1 is BLACK
						else
						{
						   if (OrderPalteMulMinuse == -1)
						   {
							if (A->CheckMateBLACK)
							{
								Is[2] = 1;
								Is[3] = Depth;
							}
							else
							{
								//if (A->CheckMateWHITE)
							}
						   }
						}

					}
					if (Order * -1 == 1)
					{
						color = 1;
					}
					else
					{
						color = -1;
					}
					//if (Tab2[iki, jki] == 0)
					//For Movements.
					int Ord = Order * -1;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tab2);
					int **Tab = CloneATable(Tab2);
					int a = color;
					if (Ord == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMulMinuse, Depth1 = Depth + 1;
					bool KindCheckedSelf1 = KindCheckedSelf;
					////auto o1 = new Object();
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
					int *IS = nullptr;
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovment(CloneATable(Tab), Ord, a, Depth1, OrderP, OrderM, KindCheckedSelf1);



					}
					if (Is[0] == 1)
					{
						Is[0] = 1;
					}
					if (IS[2] == 1)
					{
						Is[2] = 1;
					}
					Is[1] = Is[1];
					Is[3] = IS[3];
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsNextMovmentIsCheckOrCheckMateForCurrentMovmentOnCurrentMovemnet(int Order, int** Tabl, int ik, int jk, int iki, int jki, int OrderPalte)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			int **Tab2; *Tab2 = new int[8]; for (int b = 0; b < 8; b++)Tab2[b] = new int[8];
			for (int ki = 0; ki < 8; ki++)
			{
				for (int kj = 0; kj < 8; kj++)
				{
					Tab2[ki][kj] = Tabl[ki][kj];
				}
			}
			ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab2[ik][jk], Tab2, Order - 1, ik, jk);
			//When Enemy Attack Currnet.
			A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Tab2[iki][jki], Tab2, OrderPalte, iki, jki);
			//When Current Always is in CheckedMate.
			bool ab = false;
			ab = A->CheckMate(Tab2, OrderPalte);


			if (ab)
			{
				//When for penalty.
				if (OrderPalte == AllDraw::OrderPlate)
				{
					//When Order is WHITE.
					if (OrderPalte == 1)
					{
						if (A->CheckMateWHITE)
						{
							Is = true;
						}
						else
						{
							if (A->CheckMateBLACK)
							{
								return Is;
							}
						}
					}
					//When Order is BLACK.
					else
					{
					   if (OrderPalte == -1)
					   {
						if (A->CheckMateBLACK)
						{
							Is = true;
						}
						else
						{
							if (A->CheckMateWHITE)
							{
								return Is;
							}
						}
					   }
					}
				}
				//When for regard.
				else
				{
					//When Order * -1 is WHITE
					if (OrderPalte == 1)
					{
						if (A->CheckMateWHITE)
						{
							Is = true;
						}
						else
						{
							if (A->CheckMateBLACK)
							{
								return Is;
							}
						}
					}
					//When Order * -1 is BLACK
					else
					{
					   if (OrderPalte == -1)
					   {
						if (A->CheckMateBLACK)
						{
							Is = true;
						}
						else
						{
							if (A->CheckMateWHITE)
							{
								return Is;
							}
						}
					   }
					}
				}
			}
			return Is;
		}
	}

	int *ThinkingHybridizerRefrigitz::IsNextMovmentIsCheckOrCheckMateForCurrentMovment(int** Tabl, int Order, int a, int Depth, int OrderPalte, int OrderPalteMinusPluse, bool KindCheckedSelf)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is[4];
			////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O3)
			{
				Is[0] = 0;
				Is[1] = 0;
				Is[2] = 0;
				Is[3] = 0;
				int DummyOrder = Order;
				int DummyCurrentOrder = ChessRules::CurrentOrder;
				if (Depth >= AllDraw::MaxAStarGreedy)
				{
					return Is;
				}
				//For All Enemies.
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					////Parallel.For(0, 8, ik =>
					////Parallel.For(0, 8, jk =>
					{
						//Ignore of Current
						if (Order == 1 && Tabl[ik][jk] >= 0)
						{
							continue;
						}
						if (Order == -1 && Tabl[ik][jk] <= 0)
						{
							continue;
						}
						switch (abs(Tabl[ik][jk]))
						{
							case 1:
								//For Current Home
								for (int  iki = ik - 2; iki < ik + 3; iki++)
								{
									for (int  jki = jk - 2; jki < jk + 3; jki++)
									////Parallel.For(ik - 2, ik + 3, iki =>
									////Parallel.For(jk - 2, jk + 3, jki =>
									// init subtotal
									{
										if (!Scop(ik, jk, iki, jki, 1))
										{
											continue;
										}
										//Ignore of Enemy
										if (Order == 1 && Tabl[iki][jki] < 0)
										{
											continue;
										}
										if (Order == -1 && Tabl[iki][jki] > 0)
										{
											continue;
										}
										if (Is[0] == 1)
										{
											continue;
										}
										int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
										int **Tab = CloneATable(Tabl);
										int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
										bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
										int *IS = nullptr;
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);


											if (Is[0] == 1)
											{
												Is[0] = 1;
											}
											if (IS[2] == 1)
											{
												Is[2] = 1;
											}
											Is[1] = Is[1];
											Is[3] = IS[3];
										}
									}
								}
								break;
							case 2:

								//For Current Home
								////Parallel.For(0, 8, iki =>
								for (int  iki = 0; iki < 8; iki++)
								{
									auto jki = iki + jk - ik;
									if (!Scop(ik, jk, iki, jki, 2))
									{
										continue;
									}
									//Ignore of Enemy
									if (Order == 1 && Tabl[iki][jki] < 0)
									{
										continue;
									}
									if (Order == -1 && Tabl[iki][jki] > 0)
									{
										continue;
									}
									if (Is[0] == 1)
									{
										continue;
									}
									int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
									int **Tab = CloneATable(Tabl);
									int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
									bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
									int *IS = nullptr;
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);


										if (Is[0] == 1)
										{
											Is[0] = 1;
										}
										if (IS[2] == 1)
										{
											Is[2] = 1;
										}
										Is[1] = Is[1];
										Is[3] = IS[3];
									}
								}
								//For Current Home
								////Parallel.For(0, 8, iki =>
								for (int  iki = 0; iki < 8; iki++)
								{
									auto jki = iki * -1 + jk + ik;
									if (!Scop(ik, jk, iki, jki, 2))
									{
										continue;
									}
									//Ignore of Enemy
									if (Order == 1 && Tabl[iki][jki] < 0)
									{
										continue;
									}
									if (Order == -1 && Tabl[iki][jki] > 0)
									{
										continue;
									}
									if (Is[0] == 1)
									{
										continue;
									}
									int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
									int **Tab = CloneATable(Tabl);
									int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
									bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
									int *IS = nullptr;
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);


										if (Is[0] == 1)
										{
											Is[0] = 1;
										}
										if (IS[2] == 1)
										{
											Is[2] = 1;
										}
										Is[1] = Is[1];
										Is[3] = IS[3];
									}
								}
								break;
							case 3:
								//For Current Home
								////Parallel.For(ik - 2, ik + 3, iki =>
								////Parallel.For(jk - 2, jk + 3, jki =>
								for (int  iki = ik - 2; iki < ik + 3; iki++)
								{
									for (int  jki = jk - 2; jki < jk + 3; jki++)
									{
										if (!Scop(ik, jk, iki, jki, 3))
										{
											continue;
										}
										//Ignore of Enemy
										if (Order == 1 && Tabl[iki][jki] < 0)
										{
											continue;
										}
										if (Order == -1 && Tabl[iki][jki] > 0)
										{
											continue;
										}
										int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
										int **Tab = CloneATable(Tabl);
										int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
										bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
										int *IS = nullptr;
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);



											if (Is[0] == 1)
											{
												Is[0] = 1;
											}
											if (IS[2] == 1)
											{
												Is[2] = 1;
											}
											Is[1] = Is[1];
											Is[3] = IS[3];
										}
									}
								}
								break;
							case 4:
								//For Current Home
								////Parallel.For(0, 8, iki =>
								for (int  iki = 0; iki < 8; iki++)
								{
									auto jki = jk;
									if (!Scop(ik, jk, iki, jki, 4))
									{
										continue;
									}
									//Ignore of Enemy
									if (Order == 1 && Tabl[iki][jki] < 0)
									{
										continue;
									}
									if (Order == -1 && Tabl[iki][jki] > 0)
									{
										continue;
									}
									if (Is[0] == 1)
									{
										continue;
									}
									int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
									int **Tab = CloneATable(Tabl);
									int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
									bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
									int *IS = nullptr;
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);


										if (Is[0] == 1)
										{
											Is[0] = 1;
										}
										if (IS[2] == 1)
										{
											Is[2] = 1;
										}
										Is[1] = Is[1];
										Is[3] = IS[3];
									}
								}
								//For Current Home
								////Parallel.For(0, 8, jki =>
								for (int  jki = 0; jki < 8; jki++)
								{
									auto iki = ik;
									if (!Scop(ik, jk, iki, jki, 4))
									{
										continue;
									}
									//Ignore of Enemy
									if (Order == 1 && Tabl[iki][jki] < 0)
									{
										continue;
									}
									if (Order == -1 && Tabl[iki][jki] > 0)
									{
										continue;
									}
									if (Is[0] == 1)
									{
										continue;
									}
									int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
									int **Tab = CloneATable(Tabl);
									int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
									bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
									int *IS = nullptr;
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);



										if (Is[0] == 1)
										{
											Is[0] = 1;
										}
										if (IS[2] == 1)
										{
											Is[2] = 1;
										}
										Is[1] = Is[1];
										Is[3] = IS[3];
									}
								}
								break;
							case 5:

								//For Current Home
								////Parallel.For(0, 8, iki =>
								////Parallel.For(0, 8, jki =>
								for (int  iki = 0; iki < 8; iki++)
								{
									for (int  jki = 0; jki < 8; jki++)
									{
										//Ignore of Enemy
										if (Order == 1 && Tabl[iki][jki] < 0)
										{
											continue;
										}
										if (Order == -1 && Tabl[iki][jki] > 0)
										{
											continue;
										}
										if (!Scop(ik, jk, iki, jki, 5))
										{
											continue;
										}
										if (Is[0] == 1)
										{
											continue;
										}
										int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
										int **Tab = CloneATable(Tabl);
										int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
										bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
										int *IS = nullptr;
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);



											if (Is[0] == 1)
											{
												Is[0] = 1;
											}
											if (IS[2] == 1)
											{
												Is[2] = 1;
											}
											Is[1] = Is[1];
											Is[3] = IS[3];
										}
									}
								}
								break;
							case 6:
								//For Current Home
								////Parallel.For(ik - 1, ik + 2, iki =>
								////Parallel.For(jk - 1, jk + 2, jki =>
								for (int  iki = ik - 1; iki < ik + 2; iki++)
								{
									for (int  jki = jk - 1; jki < jk + 2; jki++)
									{
										if (!Scop(ik, jk, iki, jki, 6))
										{
											continue;
										}
										//Ignore of Enemy
										if (Order == 1 && Tabl[iki][jki] < 0)
										{
											continue;
										}
										if (Order == -1 && Tabl[iki][jki] > 0)
										{
											continue;
										}
										if (Is[0] == 1)
										{
											continue;
										}
										int Ord = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Tabl);
										int **Tab = CloneATable(Tabl);
										int ik1 = ik, jk1 = jk, iki1 = iki, jki1 = jki, OrderP = OrderPalte, OrderM = OrderPalteMinusPluse, Depth1 = Depth + 1;
										bool KindCheckedSelf1 = KindCheckedSelf;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IS = nullptr;
										int *IS = nullptr;
										////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (O1)
										{
											IS = IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(Ord, CloneATable(Tab), ik1, jk1, iki1, jki1, OrderP, OrderM, Depth1, KindCheckedSelf1);


											if (Is[0] == 1)
											{
												Is[0] = 1;
											}
											if (IS[2] == 1)
											{
												Is[2] = 1;
											}
											Is[1] = Is[1];
											Is[3] = IS[3];
										}
									}
								}
								break;
						}
					}
				}
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsGardForCurrentMovmentsAndIsNotMovable(int** Tab, int Order, int a, int ii, int jj, int RowS, int ColS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Setting false.
			bool Attacked = true;
			int NumberOfCurrentEnemyAttackSuchObject = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//For Enemy Order.
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				//Ignore of Self Objects.
				if (Order == 1 && Tab[ii][jj] >= 0)
				{
					return false;
				}
				else
				{
					if (Order == -1 && Tab[ii][jj] <= 0)
					{
					return false;
					}
				}
				//Restore
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				NumberOfCurrentEnemyAttackSuchObject = 0;
				//For Self Objects and Empty.
				//Ignore of Enemy Objects.
				if (Order == 1 && Tab[RowS][ColS] < 0)
				{
					return false;
				}
				else
				{
					if (Order == -1 && Tab[RowS][ColS] > 0)
					{
					return false;
					} //For Enemy Order.
				}
				ChessRules::CurrentOrder = Order * -1;
				//Initiate for not exiting from abnormal loop.
				Attacked = false;
				int aa = 1;
				if (Order * -1 == -1)
				{
					aa = -1;
				}
				bool ab = false;
				ab = Attack(CloneATable(Tab), ii, jj, RowS, ColS, aa, Order * -1) && (ObjectValueCalculator(CloneATable(Tab), ii, jj) < ObjectValueCalculator(CloneATable(Tab), RowS, ColS));



				//When Enemy Attacked Current Movements.
				if (ab)
				{
					NumberOfCurrentEnemyAttackSuchObject++;
					//Clone a Table.
					int **TabS; *TabS = new int[8]; for (int b = 0; b < 8; b++)TabS[b] = new int[8];
					
					for (int p = 0; p < 8; p++)
					{
						for (int m = 0; m < 8; m++)
						{
							TabS[p][m] = Tab[p][m];
						}
					}
					TabS[RowS][ColS] = TabS[ii][jj];
					TabS[ii][jj] = 0;
					//For Self Objects.
					////Parallel.For(0, 8, RowD =>
					for (int RowD = 0; RowD < 8; RowD++)
					{
						if (!Attacked || NumberOfCurrentEnemyAttackSuchObject > 1)
						{
							continue;
						}
						////Parallel.For(0, 8, ColD =>
						for (int ColD = 0; ColD < 8; ColD++)
						{
							if (!Attacked || NumberOfCurrentEnemyAttackSuchObject > 1)
							{
								if (Order == 1 && Tab[RowD][ColD] <= 0)
								{
									continue;
								}
								else
								{
										if (Order == -1 && Tab[RowD][ColD] >= 0)
										{
									continue;
										}
								}
							}
							//Show the Attacked.
							Attacked = true;
							//For Self Objects and Empty.
							////Parallel.For(0, 8, iiiii =>
							for (int iiiii = 0; iiiii < 8; iiiii++)
							{
								////Parallel.For(0, 8, jjjjj =>
								for (int jjjjj = 0; jjjjj < 8; jjjjj++)
								{
									//Ignore of Enemy Objects.
									if (Order == 1 && Tab[iiiii][jjjjj] < 0)
									{
										continue;
									}
									else
									{
										   if (Order == -1 && Tab[iiiii][jjjjj] > 0)
										   {
										continue;
										   }
									}
									//When Current Objects Movable not need to consideration mor going to next Current object.
									////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O2)
									{
										ab = (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TabS[RowD][ColD], TabS, Order, RowD, ColD))->Rules(RowD, ColD, iiiii, jjjjj, a, TabS[RowD][ColD],true);


										if (ab)
										{
											Attacked = Attacked && false;
											continue;
										}
									}
								}
								if (!Attacked || NumberOfCurrentEnemyAttackSuchObject > 1)
								{
									continue;
								}
							}
							if (Attacked || NumberOfCurrentEnemyAttackSuchObject > 1)
							{
								continue;
							}
						}
						if (Attacked || NumberOfCurrentEnemyAttackSuchObject > 1)
						{
							continue;
						}
					}
				}
				else
				{
					return false;
				}
			}
			//Restore.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			//continue Variable when true show an object is not movable or one enemy object attack more than one current Object.
			return Attacked || NumberOfCurrentEnemyAttackSuchObject > 1;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsCurrentCanGardHighPriorityEnemy(int Depth, int** Table, int Order, int a, int ij, int ji, int iij, int jji, int OrderPlate)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Depth >= CurrentAStarGredyMax)
			{
				return false;
			}
			////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O4)
			{
				Depth++;
				IsGardHighPriority = false;
				int **Tabl1; *Tabl1 = new int[8]; for (int b = 0; b < 8; b++)Tabl1[b] = new int[8];
				for (int  ik = 0; ik < 8; ik++)
				{
					for (int  jk = 0; jk < 8; jk++)
					{
						Tabl1[ik][jk] = Table[ik][jk];
					}
				}
				//For Current->
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						//Ignore of Enemy.QC_OK.
						if (Order == 1 && Tabl1[i][j] <= 0)
						{
							continue;
						}
						else
						{
							if (Order == -1 && Tabl1[i][j] >= 0)
							{
							continue;
							}
						}
						//For Enemy.
						for (int  ii = 0; ii < 8; ii++)
						{
							for (int  jj = 0; jj < 8; jj++)
							{
								//Ignore of Current->QC_OK.
								if (Order == 1 && Tabl1[ii][jj] >= 0)
								{
									continue;
								}
								else
								{
									if (Order == -1 && Tabl1[ii][jj] >= 0)
									{
									continue;
									}
								}
								for (int  ik = 0; ik < 8; ik++)
								{
									for (int  jk = 0; jk < 8; jk++)
									{
										Tabl1[ik][jk] = Table[ik][jk];
									}
								}
								//Take Movement.
								bool ab = false;
								ab = Attack(Tabl1, i, j, ii, jj, a, Order * -1);


								if (ab)
								{

									ab = ObjectValueCalculator(Tabl1, i, j) <= ObjectValueCalculator(Tabl1, ii, jj);


									if (ab)
									{ //When Current Movments is

										if (Order == OrderPlate)
										{
											IsGardHighPriority = true;
										}
									}
									else
									{
										Tabl1[ii][jj] = Tabl1[i][j];
										Tabl1[i][j] = 0;
										if (Order * -1 == 1)
										{
											a = 1;
										}
										else
										{
											a = -1;
										}
										IsGardHighPriority = IsGardHighPriority || IsCurrentCanGardHighPriorityEnemy(Depth, CloneATable(Table), Order * -1, a, ii, jj, i, j, OrderPlate);


									}
								}
							}
						}
					}
				}
			}

			return IsGardHighPriority;
		}
	}

	bool ThinkingHybridizerRefrigitz::CurrentIsTowCastleOrMinisterBecomeCheckedMateAtCloseRanAway(int RowK, int ColK, int** Table)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table)))
			{
				return false;
			}
			bool Is = false;
			int IsN = 0;
			if (Table[RowK][ColK] != 0)
			{
				int Sign = (abs(Table[RowK][ColK]) / Table[RowK][ColK]) * -1;
				int Obj1 = Sign * 4;
				int Obj2 = Sign * 5;
				for (int k = 0; k < 8; k++)
				{
					if (RowK == k)
					{
						continue;
					}
					if (Table[k][ColK] == Obj1 || Table[k][ColK] == Obj2)
					{
						IsN++;
					}
					else
					{
					if (Table[k][ColK] != 0)
					{
						IsN = 0;
					}
					}
					for (int p = 0; p < 8; p++)
					{
						if (p == ColK)
						{
							continue;
						}
						if (Table[k][p] == Obj1 || Table[k][p] == Obj2)
						{
							IsN++;
						}
						else
						{
					if (Table[k][p] != 0)
					{
							IsN = 0;
					}
						}
					}
				}

				if (IsN >= 2)
				{
					return true;
				}
				IsN = 0;
				for (int k = 0; k < 8; k++)
				{
					if (ColK == k)
					{
						continue;
					}
					if (Table[RowK][k] == Obj1 || Table[RowK][k] == Obj2)
					{
						IsN++;
					}
					else
					{
					if (Table[RowK]!= 0)
					{
						IsN = 0;
					}
					}
					for (int p = 0; p < 8; p++)
					{
						if (p == RowK)
						{
							continue;
						}
						if (Table[p][k] == Obj1 || Table[p][k] == Obj2)
						{
							IsN++;
						}
						else
						{
					if (Table[p][k] != 0)
					{
							IsN = 0;
					}
						}
					}
				}
				if (IsN >= 2)
				{
					Is = true;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::SameSign(int Obj1, int Obj2)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (Obj1 != 0 && Obj2 != 0)
			{
				if ((abs(Obj1) / Obj1) == (abs(Obj2) / Obj2))
				{
					Is = true;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::ThereIsOneSideToRanAwayByEnemyKing(int RowK, int ColK, int** Table)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table)))
			{
				return false;
			}
			bool Is = false;
			if ((ColK == 7) && (ColK - 1 >= 0) && (RowK - 1 >= 0) && (RowK + 1 < 8))
			{
				bool ab = false;
				ab = SameSign(Table[RowK][ColK], Table[RowK - 1][ColK - 1]) && SameSign(Table[RowK][ColK], Table[RowK + 1][ColK - 1]) && SameSign(Table[RowK][ColK], Table[RowK][ColK - 1]);


				if (ab)
				{
					Is = true;
				}
			}
			if ((ColK == 0) && (ColK + 1 < 8) && (RowK - 1 >= 0) && (RowK + 1 < 8))
			{
				bool ab = false;
				ab = SameSign(Table[RowK][ColK], Table[RowK - 1][ColK + 1]) && SameSign(Table[RowK][ColK], Table[RowK + 1][ColK + 1]) && SameSign(Table[RowK][ColK], Table[RowK][ColK + 1]);


				if (ab)
				{
					Is = true;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::CurrentCanBecomeClosedRanAwayByOneCastleOrMinister(int RowK, int ColK, int** Table)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			bool ab = false;
			ab = ThereIsOneSideToRanAwayByEnemyKing(RowK, ColK, CloneATable(Table));


			if (ab)
			{
				for (int k = 0; k < 8; k++)
				{
					if (k == ColK)
					{
						continue;
					}
					for (int p = 0; p < 8; p++)
					{
						ab = SameSign(Table[RowK][ColK], Table[p][k]);


						if (!ab)
						{
							if (Table[p][k] != 0)
							{
								int Obj = abs(Table[p][k]) / Table[p][k];
								int Obj1 = Obj * 4;
								int Obj2 = Obj * 5;
								if (Table[p][k] == Obj1)
								{
									return true;
								}
								if (Table[p][k] == Obj2)
								{
									return true;
								}
							}
						}
					}
				}
				for (int k = 0; k < 8; k++)
				{
					if (k == RowK)
					{
						continue;
					}
					for (int p = 0; p < 8; p++)
					{
						ab = SameSign(Table[RowK][ColK], Table[k][p]);


						if (!ab)
						{

							if (Table[k][p] != 0)
							{
								int Obj = abs(Table[k][p]) / Table[k][p];
								int Obj1 = Obj * 4;
								int Obj2 = Obj * 5;
								if (Table[k][p] == Obj1)
								{
									return true;
								}
								if (Table[k][p] == Obj2)
								{
									return true;
								}
							}
						}
					}
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsObjectrSelfAttackEnemyKing(int Rowk, int ColK, int** Table, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table)))
			{
				return false;
			}
			bool Is = false;
			const int MinisteWHITEObj = 5, CastleWHITEObj = 4, ElepahantWHITEObj = 2, PawnWHITEObj = 1;
			const int MinisteBLACKObj = -5, CastleBLACKObj = -4, PawnBLACKObj = -1; //, ElephantBLACKObj = -2
			if (Order == 1)
			{
				if (ColK == 0)
				{
					if (Table[Rowk][ColK + 1] == ElepahantWHITEObj)
					{
						if (Table[Rowk][ColK + 2] == CastleWHITEObj)
						{
							if ((Table[Rowk - 1][ColK + 1] == PawnWHITEObj) || (Table[Rowk + 1][ColK + 1] == PawnWHITEObj))
							{
								Is = true;
							}
						}
						if (Table[Rowk + 1][ColK + 2] == CastleWHITEObj)
						{
							if ((Table[Rowk - 1][ColK + 1] == MinisteWHITEObj) || (Table[Rowk + 1][ColK + 1] == MinisteWHITEObj))
							{
								Is = true;
							}
						}
					}
					if (Table[Rowk][ColK + 1] == PawnWHITEObj)
					{
						if (Table[Rowk + 1][ColK + 2] == MinisteWHITEObj)
						{
							if (Table[Rowk - 1][ColK + 2] == PawnWHITEObj)
							{
								Is = true;
							}
						}
						if (Table[Rowk + 1][ColK + 2] == MinisteWHITEObj)
						{
							if (Table[Rowk - 2][ColK + 2] == PawnWHITEObj)
							{
								Is = true;
							}
						}
					}
				}
			}
			else
			{
				if (ColK == 7)
				{
					if (Table[Rowk][ColK - 1] == ElepahantWHITEObj)
					{
						if (Table[Rowk][ColK - 2] == CastleBLACKObj)
						{
							if ((Table[Rowk - 1][ColK - 1] == PawnBLACKObj) || (Table[Rowk + 1][ColK - 1] == PawnBLACKObj))
							{
								Is = true;
							}
						}
						if (Table[Rowk - 1][ColK - 2] == CastleBLACKObj)
						{
							if ((Table[Rowk - 1][ColK - 1] == MinisteBLACKObj) || (Table[Rowk + 1][ColK - 1] == MinisteBLACKObj))
							{
								Is = true;
							}
						}
					}
					if (Table[Rowk][ColK - 1] == PawnBLACKObj)
					{
						if (Table[Rowk - 1][ColK - 2] == MinisteBLACKObj)
						{
							if (Table[Rowk + 1][ColK - 2] == PawnBLACKObj)
							{
								Is = true;
							}
						}
						if (Table[Rowk - 1][ColK - 2] == MinisteBLACKObj)
						{
							if (Table[Rowk + 1][ColK - 2] == PawnBLACKObj)
							{
								Is = true;
							}
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::SimpleMate_Zero(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			if (Order == 1)
			{
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowD, ColD);
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
				int **Tab = CloneATable(Table);
				bool ab = false;
				ab = G->CheckMate(CloneATable(Tab), Order);


				if (ab)
				{
					if (Order == 1 && G->CheckMateBLACK)
					{
						HA += RationalRegard;
					}
					else
					{
				 if (Order == 1 && G->CheckMateWHITE)
				 {
						HA += RationalPenalty;
				 }
					}
				}
			}
			else
			{
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
				int **Tab = CloneATable(Table);
				bool ab = false;
				ab = G->CheckMate(CloneATable(Tab), Order);


				if (ab)
				{
					if (Order == -1 && G->CheckMateWHITE)
					{
						HA += RationalRegard;
					}
					else
					{
					if (Order == -1 && G->CheckMateBLACK)
					{
						HA += RationalPenalty;
					}
					}
				}
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::SimpleMate_One(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			if (Order == 1)
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindBLACKKing(CloneATable(Table), RowK, ColK);
				bool S1 = false;
				S1 = CurrentIsTowCastleOrMinisterBecomeCheckedMateAtCloseRanAway(RowK, ColK, CloneATable(Table));


				if (S1)
				{
					HA += RationalRegard;
				}
				else
				{
					bool S2 = false;
					S2 = CurrentCanBecomeClosedRanAwayByOneCastleOrMinister(RowK, ColK, CloneATable(Table));


					if (S2)
					{
						HA += RationalRegard;
					}
					else
					{
						bool S3 = false;
						S3 = IsObjectrSelfAttackEnemyKing(RowK, ColK, CloneATable(Table), Order);


						if (S3)
						{
							HA += RationalRegard;
						}
					}
				}
			}
			else
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindWHITEKing(CloneATable(Table), RowK, ColK);
				bool S1 = false;
				S1 = CurrentIsTowCastleOrMinisterBecomeCheckedMateAtCloseRanAway(RowK, ColK, CloneATable(Table));


				if (S1)
				{
					HA += RationalRegard;
				}
				else
				{
					bool S2 = false;
					S2 = CurrentCanBecomeClosedRanAwayByOneCastleOrMinister(RowK, ColK, CloneATable(Table));


					if (S2)
					{
						HA += RationalRegard;
					}
					else
					{
						bool S3 = false;
						S2 = IsObjectrSelfAttackEnemyKing(RowK, ColK, CloneATable(Table), Order);


						if (S3)
						{
							HA += RationalRegard;
						}
					}
				}
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::SimpleMate_Tow(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			if (Order == 1)
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindBLACKKing(CloneATable(Table), RowK, ColK);
				if (EnemyKingCanMateByCloseHome(RowK, ColK, CloneATable(Table), Order))
				{
					HA += RationalRegard;
				}
			}
			else
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindWHITEKing(CloneATable(Table), RowK, ColK);
				if (EnemyKingCanMateByCloseHome(RowK, ColK, CloneATable(Table), Order))
				{
					HA += RationalRegard;
				}
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::SimpleMate_Three_And_Four(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			if (Order == 1)
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindBLACKKing(CloneATable(Table), RowK, ColK);
				if (EnemyKingHaveAtMostOneEmptyItemInAttack(RowK, ColK, CloneATable(Table), Order))
				{
					HA += RationalRegard;
				}
			}
			else
			{
				int RowK = -1, ColK = -1;
				ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Table), Order, RowS, ColS);
				G->FindWHITEKing(CloneATable(Table), RowK, ColK);
				if (EnemyKingHaveAtMostOneEmptyItemInAttack(RowK, ColK, CloneATable(Table), Order))
				{
					HA += RationalRegard;
				}
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::EnemyKingHaveAtMostOneEmptyItem(int Rowk, int ColK, int** Table, int Order, std::vector<int> &EmptyR, std::vector<int> &EmptyC)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int NIs = 0;
			if ((ColK - 1 >= 0) && !SameSign(Table[Rowk][ColK], Table[Rowk][ColK - 1]))
			{
				EmptyR.push_back(Rowk);
				EmptyC.push_back(ColK - 1);
				NIs++;
			}
			if ((ColK + 1 < 8) && !SameSign(Table[Rowk][ColK], Table[Rowk][ColK + 1]))
			{
				EmptyR.push_back(Rowk);
				EmptyC.push_back(ColK + 1);
				NIs++;
			}
			if ((Rowk - 1 >= 0) && !SameSign(Table[Rowk][ColK], Table[Rowk - 1][ColK]))
			{
				EmptyR.push_back(Rowk - 1);
				EmptyC.push_back(ColK);
				NIs++;
			}
			if ((Row + 1 < 8) && !SameSign(Table[Rowk][ColK], Table[Rowk + 1][ColK]))
			{
				EmptyR.push_back(Rowk + 1);
				EmptyC.push_back(ColK);
				NIs++;
			}
			if ((ColK - 1 >= 0) && (Rowk - 1 >= 0) && !SameSign(Table[Rowk][ColK], Table[Rowk - 1][ColK - 1]))
			{
				EmptyR.push_back(Rowk - 1);
				EmptyC.push_back(ColK - 1);
				NIs++;
			}
			if ((ColK - 1 >= 0) && (Rowk + 1 < 8) && !SameSign(Table[Rowk][ColK], Table[Rowk + 1][ColK - 1]))
			{
				EmptyR.push_back(Rowk + 1);
				EmptyC.push_back(ColK - 1);
				NIs++;
			}
			if ((ColK + 1 < 8) && (Rowk + 1 < 8) && !SameSign(Table[Rowk][ColK], Table[Rowk + 1][ColK + 1]))
			{
				EmptyR.push_back(Rowk + 1);
				EmptyC.push_back(ColK + 1);
				NIs++;
			}
			if ((ColK + 1 < 8) && (Rowk - 1 >= 0) && !SameSign(Table[Rowk][ColK], Table[Rowk - 1][ColK + 1]))
			{
				EmptyR.push_back(Rowk - 1);
				EmptyC.push_back(ColK + 1);
				NIs++;
			}
			if ((ColK + 1 < 8) && (Rowk - 1 >= 0) && !SameSign(Table[Rowk][ColK], Table[Rowk - 1][ColK + 1]))
			{
				EmptyR.push_back(Rowk - 1);
				EmptyC.push_back(ColK + 1);
				NIs++;
			}
			return NIs;
		}
	}

	bool ThinkingHybridizerRefrigitz::EnemyKingHaveAtMostOneEmptyItemInAttack(int Rowk, int ColK, int** Table, int Order)
	{
		bool ab = false;
		ab = IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table));


		if (!ab)
		{
			return false;
		}
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//#pragma warning disable CS0219 // The variable 'NIs' is assigned but its value is never used
	#pragma warning disable CS0219 // The variable 'NIs' is assigned but its value is never used
			int NIs = 0;
	#pragma warning restore CS0219 // The variable 'NIs' is assigned but its value is never used
			//#pragma warning restore CS0219 // The variable 'NIs' is assigned but its value is never used
			for (int k = 0; k < 8; k++)
			{
				for (int p = 0; p < 8; p++)
				{
					ab = Attack(CloneATable(Table), k, p, Rowk, ColK, color, Order);


					if (ab)
					{
						for (int kk = 0; kk < 8; kk++)
						{
							for (int pp = 0; pp < 8; pp++)
							{
								for (int kkk = 0; kkk < 8; kkk++)
								{
									for (int ppp = 0; ppp < 8; ppp++)
									{
										ab = Movable(CloneATable(Table), kk, pp, kkk, ppp, color, Order);


										if (ab)
										{

//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Ta = CloneATable(Table);
											int **Ta = CloneATable(Table);
											Ta[kkk][ppp] = Ta[kk][pp];
											Ta[kk][pp] = 0;
											ChessRules *G = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order, CloneATable(Ta), Order, kkk, ppp);
											ab = G->CheckMate(CloneATable(Ta), Order);


											if (ab)
											{
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
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsNumberOfObjecttIsLessThanThreashold(int** Tab, int Threashold = 30)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int ObjN = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (Tab[i][j] != 0)
					{
						ObjN++;
					}
				}
			}
			if (ObjN <= Threashold)
			{
				return true;
			}
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::EnemyKingCanMateByCloseHome(int RowK, int ColK, int** Table, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Table)))
			{
				return false;
			}
			bool Is = false;
			std::vector<int> EmptyR = std::vector<int>(), EmptyC = std::vector<int>();
			int NIs = 0;
			NIs = EnemyKingHaveAtMostOneEmptyItem(RowK, ColK, CloneATable(Table), Order, EmptyR, EmptyC);



			//King Have One HomeAtlist movment
			if (NIs <= 2)
			{
				for (int k = 0; k < 8; k++)
				{
					for (int p = 0; p < 8; p++)
					{
						if (Order == 1 & Table[k][p] <= 0)
						{
							continue;
						}
						if (Order == -1 & Table[k][p] >= 0)
						{
							continue;
						}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
						int **Tab = CloneATable(Table);
						for (int kk = 0; kk < 8; kk++)
						{
							for (int pp = 0; pp < 8; pp++)
							{
								if (Order == 1 & Table[kk][pp] <= 0)
								{
									continue;
								}
								if (Order == -1 & Table[kk][pp] >= 0)
								{
									continue;
								}
								//Self Have Support
								bool ab = false;
								ab = Support(CloneATable(Tab), kk, pp, k, p, color, Order);


								if (ab)
								{
									for (int kkk = 0; kkk < 8; kkk++)
									{
										for (int ppp = 0; ppp < 8; ppp++)
										{
											if (Order == 1 & Table[kkk][ppp] > 0)
											{
												continue;
											}
											if (Order == -1 & Table[kkk][ppp] < 0)
											{
												continue;
											}
											//Enemy King Attack
											ab = Attack(CloneATable(Tab), k, p, kkk, ppp, color, Order);


											if (ab)
											{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Ta = CloneATable(Tab);
												int **Ta = CloneATable(Tab);
												Ta[kkk][ppp] = Ta[k][p];
												Ta[k][p] = 0;
												ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Ta[kkk][ppp], CloneATable(Tab), Order, kkk, ppp);
												if (A->CheckMate(CloneATable(Ta), Order * 1))
												{
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
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsMinisterOrElephantBecomeActive(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		bool Is = false;
		const int ElephantWHITE = 2, ElephantBLACK = -2;
		const int MinisterWHITE = 2, MinisterBLACK = -2;
		if (Order == 1)
		{
			if (Table[7][2] == ElephantWHITE)
			{
				if (ColS == 6 && RowS == 1)
				{
					Is = true;
				}
				if (ColS == 6 && RowS == 3)
				{
					Is = true;
				}
			}
			if (Table[7][5] == ElephantWHITE)
			{
				if (ColS == 6 && RowS == 4)
				{
					Is = true;
				}
				if (ColS == 6 && RowS == 6)
				{
					Is = true;
				}
			}
			if (Table[7][3] == MinisterWHITE)
			{
				if (ColS == 6 && RowS == 2)
				{
					Is = true;
				}
				if (ColS == 6 && RowS == 3)
				{
					Is = true;
				}
				if (ColS == 6 && RowS == 4)
				{
					Is = true;
				}
			}
		}
		else
		{
			if (Table[0][2] == ElephantBLACK)
			{
				if (ColS == 1 && RowS == 1)
				{
					Is = true;
				}
				if (ColS == 1 && RowS == 3)
				{
					Is = true;
				}
			}
			if (Table[0][5] == ElephantBLACK)
			{
				if (ColS == 1 && RowS == 4)
				{
					Is = true;
				}
				if (ColS == 1 && RowS == 6)
				{
					Is = true;
				}
			}
			if (Table[0][3] == MinisterBLACK)
			{
				if (ColS == 1 && RowS == 2)
				{
					Is = true;
				}
				if (ColS == 1 && RowS == 3)
				{
					Is = true;
				}
				if (ColS == 1 && RowS == 4)
				{
					Is = true;
				}
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::IsContorlCenter(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		bool Is = false;
		const int ControlF = 3, ControlS = 4;
		if ((RowD == ControlF || RowD == ControlS || ColD == ControlF || ColD == ControlS))
		{
			bool ab = false;
			ab = Support(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


			if (ab)
			{
				Is = true;
			}
			ab = Attack(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


			if (ab)
			{
				Is = true;
			}
		}
		return Is;
	}

	int ThinkingHybridizerRefrigitz::HeuristicCheckAndCheckMate(int RowS, int ColS, int RowD, int ColD, int** Table, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			HA += SimpleMate_Zero(RowS, ColS, RowD, ColD, CloneATable(Table), a);



			if (HA == 0)
			{
				HA += SimpleMate_One(RowS, ColS, RowD, ColD, CloneATable(Table), a);


			}
			if (HA == 0)
			{
				HA += SimpleMate_Tow(RowS, ColS, RowD, ColD, CloneATable(Table), a);


			}
			if (HA == 0)
			{
				HA += SimpleMate_Three_And_Four(RowS, ColS, RowD, ColD, CloneATable(Table), a);


			}
			bool S1 = false;

			S1 = IsContorlCenter(RowS, ColS, RowD, ColD, CloneATable(Table), a);


			if (S1)
			{
				HA += RationalRegard;
			}
			bool S2 = false;

			S2 = IsMinisterOrElephantBecomeActive(RowS, ColS, RowD, ColD, CloneATable(Table), a);


			if (S2)
			{
				HA += RationalRegard;
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::VeryFye(int** Table, int Order, int a)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			int Object = Table[Row][Column];
			//Wehn Solider.
			if (abs(Object) == 1)
			{
				HA = 1;
			}
			//When Elephant.
			else if (abs(Object) == 2)
			{
				HA = 2;
			}
			//When Hourse.
			else if (abs(Object) == 3)
			{
				HA = 3;
			}
			//When Castles.
			else if (abs(Object) == 4)
			{
				HA = 5;
			}
			//When Minster.
			else if (abs(Object) == 5)
			{
				HA = 8;
			}
			//When King.
			else if (abs(Object) == 6)
			{
				HA = 10;
			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::SupporterCount(int** Table, int Order, int a, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
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
					if (Order == 1 && Table[i][j] <= 0)
					{
						continue;
					}
					else
					{
						if (Order == -1 && Table[i][j] >= 0)
						{
						continue;
						}
					}
					bool ab = false;
					ab = Support(CloneATable(Table), i, j, ii, jj, a, Order);


					if (ab)
					{

						Count++;
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::AttackerCount(int** Table, int Order, int a, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			for (int h = 0; h < 8; h++)
			{
				for (int k = 0; k < 8; k++)
				{
					Tab[h][k] = Table[h][k];
				}
			}
			//For Slef Objects..
			for (int  ii = 0; ii < 8; ii++)
			{
				for (int  jj = 0; jj < 8; jj++)
				{
					//Ignore Of Self Objects
					if (Order == 1 && Tab[ii][jj] >= 0)
					{
						continue;
					}
					else
					{
						if (Order == -1 && Tab[ii][jj] <= 0)
						{
						continue;
						}
					}
					//If Current Attacks Enemy.
					bool ab = false;
					ab = Attack(CloneATable(Tab), i, j, ii, jj, a, Order);


					if (ab)
					{
						Count++;
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::EnemyAttackerCount(int** Table, int Order, int a, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			if (Order == 1)
			{
				ChessRules::CurrentOrder = 1;
			}
			else
			{
				ChessRules::CurrentOrder = -1;
			}
			int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
			for (int h = 0; h < 8; h++)
			{
				for (int k = 0; k < 8; k++)
				{
					Tab[h][k] = Table[h][k];
				}
			}
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					if (Order == 1 && Table[i][j] >= 0)
					{
						continue;
					}
					else
					{
						if (Order == -1 && Table[i][j] <= 0)
						{
						continue;
						}
					}
					bool ab = false;
					ab = Attack(CloneATable(Table), i, j, ii, jj, a, Order * -1);


					if (ab)
					{

						Count++;
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return Count;
		}
	}

	void ThinkingHybridizerRefrigitz::MakeEmptyTableInitiationPreventionOfMultipleMoveWhenAllIsFull()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (TableInitiationPreventionOfMultipleMove[i][j] == 0)
					{
						Is = true;
					}
				}
			}
			if (!Is)
			{
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						TableInitiationPreventionOfMultipleMove[i][j] = 0;
					}
				}
			}
		}
	}

	bool ThinkingHybridizerRefrigitz::IsTableRowColIsZero(int Row, int Col)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			MakeEmptyTableInitiationPreventionOfMultipleMoveWhenAllIsFull();



			bool Is = false;
			if (TableInitiationPreventionOfMultipleMove[Row][Col] == 0)
			{
				return true;
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsCentralPawnIsOk(int** Tab, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			int NoOfPawn = 0;
			int NoOfSupport = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (Order == 1)
					{
						if (Tab[i][j] == 1)
						{
							NoOfPawn++;
						}
						if (i - 1 >= 0 && j + 1 < 8)
						{
							if (Tab[i - 1][j + 1] == 1)
							{
								NoOfSupport++;
							}
						}
						if (i - 1 >= 0 && j - 1 >= 0)
						{
							if (Tab[i - 1][j - 1] == 1)
							{
								NoOfSupport++;
							}
						}
					}
					else
					{
						if (Tab[i][j] == -1)
						{
							NoOfPawn++;
						}
						if (i + 1 < 8 && j + 1 < 8)
						{
							if (Tab[i + 1][j + 1] == -1)
							{
								NoOfSupport++;
							}
						}
						if (i + 1 < 8 && j - 1 >= 0)
						{
							if (Tab[i + 1][j - 1] == -1)
							{
								NoOfSupport++;
							}
						}
					}
				}
			}
			if (NoOfSupport >= (NoOfPawn / 2))
			{
				Is = true;
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::CenrtrallnControlByTraversal(int** Tab, int a, int Order, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int aa = 1;
			if (Order * -1 == -1)
			{
				aa = -1;
			}
			bool Is = false;
			if (Tab[RowS][ColS] == 1 || Tab[RowS][ColS] == -1)
			{
				return Is;
			}
			if (Tab[RowS][ColS] != 0)
			{
				bool ab = false;
				ab = (Tab[3][4] == 0) && Movable(CloneATable(Tab), RowS, ColS, 3, 4, a, Order);


				if (ab)
				{
					Is = true;
				}
				ab = (Tab[4][3] == 0) && Movable(CloneATable(Tab), RowS, ColS, 4, 3, a, Order);


				if (ab)
				{
					Is = true;
				}
				ab = (Tab[3][3] == 0) && Movable(CloneATable(Tab), RowS, ColS, 3, 3, a, Order);


				if (ab)
				{
					Is = true;
				}
				ab = (Tab[4][4] == 0) && Movable(CloneATable(Tab), RowS, ColS, 4, 4, a, Order);


				if (ab)
				{
					Is = true;
				}
				if (!Is)
				{
					if (Order == 1)
					{
						ab = (Tab[3][4] < 0) && Attack(CloneATable(Tab), RowS, ColS, 3, 4, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][3] < 0) && Attack(CloneATable(Tab), RowS, ColS, 4, 3, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][3] < 0) && Attack(CloneATable(Tab), RowS, ColS, 3, 3, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][4] < 0) && Attack(CloneATable(Tab), RowS, ColS, 4, 4, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][4] > 0) && Support(CloneATable(Tab), RowS, ColS, 3, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][3] > 0) && Support(CloneATable(Tab), RowS, ColS, 4, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][3] > 0) && Support(CloneATable(Tab), RowS, ColS, 3, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][4] > 0) && Support(CloneATable(Tab), RowS, ColS, 4, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
					}
					else
					{
						ab = (Tab[3][4] > 0) && Attack(CloneATable(Tab), RowS, ColS, 3, 4, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][3] > 0) && Attack(CloneATable(Tab), RowS, ColS, 4, 3, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][3] > 0) && Attack(CloneATable(Tab), RowS, ColS, 3, 3, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][4] > 0) && Attack(CloneATable(Tab), RowS, ColS, 4, 4, aa, Order * -1);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][4] < 0) && Support(CloneATable(Tab), RowS, ColS, 3, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][3] < 0) && Support(CloneATable(Tab), RowS, ColS, 4, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][3] < 0) && Support(CloneATable(Tab), RowS, ColS, 3, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][4] < 0) && Support(CloneATable(Tab), RowS, ColS, 4, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
					}
					if (!Is)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Ta = CloneATable(Tab);
						int **Ta = CloneATable(Tab);
						Ta[RowD][ColD] = Tab[RowS][ColS];
						Tab[RowS][ColS] = 0;

						ab = (Tab[3][4] == 0) && Movable(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][3] == 0) && Movable(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[3][3] == 0) && Movable(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


						if (ab)
						{
							Is = true;
						}
						ab = (Tab[4][4] == 0) && Movable(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


						if (ab)
						{
							Is = true;
						}
						if (!Is)
						{
							if (Order == 1)
							{
								ab = (Tab[3][4] < 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 4, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][3] < 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 3, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][3] < 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 3, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][4] < 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 4, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][4] > 0) && Support(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][3] > 0) && Support(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][3] > 0) && Support(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][4] > 0) && Support(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


								if (ab)
								{
									Is = true;
								}
							}
							else
							{
								ab = (Tab[3][4] > 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 4, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][3] > 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 3, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][3] > 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 3, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][4] > 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 4, aa, Order * -1);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][4] < 0) && Support(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][3] < 0) && Support(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[3][3] < 0) && Support(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


								if (ab)
								{
									Is = true;
								}
								ab = (Tab[4][4] < 0) && Support(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


								if (ab)
								{
									Is = true;
								}
							}
						}
					}
				}
				else
				{
					if (Tab[RowD][ColD] == 1 || Tab[RowD][ColD] == -1)
					{
						return Is;
					}
					ab = (Tab[3][4] == 0) && Movable(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


					if (ab)
					{
						Is = true;
					}
					ab = (Tab[4][3] == 0) && Movable(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


					if (ab)
					{
						Is = true;
					}
					ab = (Tab[3][3] == 0) && Movable(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


					if (ab)
					{
						Is = true;
					}
					ab = (Tab[4][4] == 0) && Movable(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


					if (ab)
					{
						Is = true;
					}
					if (!Is)
					{
						if (Order == 1)
						{
							ab = (Tab[3][4] < 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 4, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][3] < 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 3, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][3] < 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 3, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][4] < 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 4, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][4] > 0) && Support(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][3] > 0) && Support(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][3] > 0) && Support(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][4] > 0) && Support(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


							if (ab)
							{
								Is = true;
							}
						}
						else
						{
							ab = (Tab[3][4] > 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 4, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][3] > 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 3, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][3] > 0) && Attack(CloneATable(Tab), RowD, ColD, 3, 3, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][4] > 0) && Attack(CloneATable(Tab), RowD, ColD, 4, 4, aa, Order * -1);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][4] < 0) && Support(CloneATable(Tab), RowD, ColD, 3, 4, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][3] < 0) && Support(CloneATable(Tab), RowD, ColD, 4, 3, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[3][3] < 0) && Support(CloneATable(Tab), RowD, ColD, 3, 3, a, Order);


							if (ab)
							{
								Is = true;
							}
							ab = (Tab[4][4] < 0) && Support(CloneATable(Tab), RowD, ColD, 4, 4, a, Order);


							if (ab)
							{
								Is = true;
							}
						}
					}
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::ExistCastleInDouble(int Order, int** Table, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Ex = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
			int **Tab = CloneATable(Table);
			if (Order == 1)
			{
				if (Tab[RowD][ColD] == 4)
				{
					if (ColD == 7)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (Tab[Row][6] == 4)
							{
								Ex = true;
							}
						}
					}
					else
					{
					if (ColD == 6)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (Tab[Row][7] == 4)
							{
								Ex = true;
							}
						}
					}
					}
				}
				if (!Ex)
				{
					if (Tab[RowS][ColS] == 4 && Tab[RowD][ColD] <= 0)
					{
						Tab[RowD][ColD] = Tab[RowS][ColS];
						Tab[RowS][ColS] = 0;
						if (Tab[RowD][ColD] == 4)
						{
							if (ColD == 7)
							{
								for (int Row = 0; Row < 8; Row++)
								{
									if (Tab[Row][6] == 4)
									{
										Ex = true;
									}
								}
							}
							else
							{
							if (ColD == 6)
							{
								for (int Row = 0; Row < 8; Row++)
								{
									if (Tab[Row][7] == 4)
									{
										Ex = true;
									}
								}
							}
							}
						}
					}
				}
			}
			else
			{
				if (Tab[RowD][ColD] == -4)
				{
					if (ColD == 0)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (Tab[Row][1] == -4)
							{
								Ex = true;
							}
						}
					}
					else
					{
					if (ColD == 1)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (Tab[Row][0] == -4)
							{
								Ex = true;
							}
						}
					}
					}
				}
				if (!Ex)
				{
					if (Tab[RowS][ColS] == -4 && Tab[RowD][ColD] <= 0)
					{
						Tab[RowD][ColD] = Tab[RowS][ColS];
						Tab[RowS][ColS] = 0;
						if (Tab[RowD][ColD] == -4)
						{
							if (ColD == 0)
							{
								for (int Row = 0; Row < 8; Row++)
								{
									if (Tab[Row][1] == -4)
									{
										Ex = true;
									}
								}
							}
							else
							{
							if (ColD == 1)
							{
								for (int Row = 0; Row < 8; Row++)
								{
									if (Tab[Row][0] == -4)
									{
										Ex = true;
									}
								}
							}
							}
						}
					}
				}
			}
			return Ex;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicDistribution(bool Before, int** Tab, int Order, int a, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Dis = 0;
			const int ObjectWHITE = 0, ObjectBLACK = 0;
			//opperation decision making  on pawn movment
			bool ab = false;
			ab = IsTableRowColIsZero(RowS, ColS) && HeuristicAllReducedAttacked.empty();


			if (ab)
			{
				Dis = RationalRegard;
			}
			else
			{
				Dis = RationalPenalty;
			}

			IKIsCentralPawnIsOk = IsCentralPawnIsOk(CloneATable(Tab), Order);



			if (IKIsCentralPawnIsOk && HeuristicAllReducedAttacked.empty())
			{
				Dis += RationalRegard;
			}
			else
			{
				Dis += RationalPenalty;
			}
			ab = ExistCastleInDouble(Order, CloneATable(Tab), RowS, ColS, RowD, ColD);


			if (ab)
			{
				Dis += RationalRegard;
			}
			if (Order == 1)
			{
				//castle in col 7 8
				if (ColD == 6 || ColD == 7)
				{
					if (Tab[RowS][ColS] == 4 || Tab[RowD][ColD] == 4)
					{
						Dis += RationalRegard;
					}
				}
				if ((Tab[3][4] > ObjectWHITE && Tab[4][3] > ObjectWHITE && Tab[3][3] > ObjectWHITE && Tab[4][4] > ObjectWHITE) || (IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 25)))
				{
					ab = (Tab[RowS][ColS] == 3) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) > 0);


					if (ab)
					{
						Dis += RationalPenalty;
					}
					else
					{
						ab = (Tab[RowD][ColD] == 3) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0);


						if (ab)
						{
							Dis += RationalPenalty;
						}
						else

						{
							ab = (Tab[RowS][ColS] == 3) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) == 0);


							if (ab)
							{
								Dis += RationalRegard;
							}
							else
							{
								ab = (Tab[RowD][ColD] == 3) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) == 0);


								if (ab)
								{
									Dis += RationalRegard;
								}
							}
						}
					}
				}
				if (IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 32))
				{
					int Cor = 0;
					Cor = Colleralation::GetCorrelationScore(TableInitiation, CloneATable(Tab), 8, Order);



					if (Cor > Colleralation_Renamed)
					{
						Colleralation_Renamed = Cor;
						Dis += RationalRegard;
					}
					if (Cor < ColleralationWHITE && Tab[RowS][ColS] > 0 && (Cor >= 0))
					{
						ColleralationWHITE = Cor;
					}

				}

				ab = (Tab[RowS][ColS] > 0) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) > 0);


				if (ab)
				{
					Dis += RationalPenalty;
				}
				else
				{
					ab = (Tab[RowD][ColD] > 0) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0);


					if (ab)
					{
						Dis += RationalPenalty;
					}
					else
					{
						ab = (Tab[RowS][ColS] > 0) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) == 0);


						if (ab)
						{
							Dis += RationalRegard;
						}
						else
						{
							ab = (Tab[RowD][ColD] > 0) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) == 0);


							if (ab)
							{
								Dis += RationalRegard;
							}
						}
					}
				}

				ab = ((Tab[3][4] > ObjectWHITE && Tab[4][3] > ObjectWHITE && Tab[3][3] > ObjectWHITE && Tab[4][4] > ObjectWHITE)) && (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 25));


				if (!ab)
				{
					ab = IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 32);


					if (!ab)
					{
						int Cor = 0;
						Cor = Colleralation::GetCorrelationScore(TableInitiation, CloneATable(Tab), 8, Order);



						if (Cor < DeColleralation)
						{
							DeColleralation = Cor;
							Dis += RationalRegard;
						}
					}
				}
			}
			else
			{
				//castle in col 7 8
				if (ColD == 1 || ColD == 0)
				{
					if (Tab[RowS][ColS] == -4 || Tab[RowD][ColD] == -4)
					{
						Dis += RationalRegard;
					}
				}
				if ((Tab[3][4] < ObjectBLACK && Tab[4][3] < ObjectBLACK && Tab[3][3] < ObjectBLACK && Tab[4][4] < ObjectBLACK) || (IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 25)))
				{
					ab = (Tab[RowS][ColS] == -3) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) > 0);


					if (ab)
					{
						Dis += RationalPenalty;
					}
					else
					{
						ab = (Tab[RowD][ColD] == -3) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0);


						if (ab)
						{
							Dis += RationalPenalty;
						}
						else
						{
							ab = (Tab[RowS][ColS] == -3) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) == 0);


							if (ab)
							{
								Dis += RationalRegard;
							}
							else
							{
								ab = (Tab[RowD][ColD] == -3) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) == 0);


								if (ab)
								{
									Dis += RationalRegard;
								}
							}
						}
					}
				}
				ab = IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 32);


				if (ab)
				{
					int Cor = 0;
					Cor = Colleralation::GetCorrelationScore(TableInitiation, CloneATable(Tab), 8, Order);


					if (Cor > Colleralation_Renamed)
					{
						Colleralation_Renamed = Cor;
						Dis += RationalRegard;
					}
					if (Cor < ColleralationBLACK && Tab[RowS][ColS] < 0 && (Cor >= 0))
					{
						ColleralationBLACK = Cor;
					}
				}
				ab = (Tab[RowS][ColS] < 0) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) > 0);


				if (ab)
				{
					Dis += RationalPenalty;
				}
				else
				{
					ab = (Tab[RowD][ColD] < 0) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0);


					if (ab)
					{
						Dis += RationalPenalty;
					}
					else
					{
						ab = (Tab[RowS][ColS] < 0) && (NoOfExistInReducedAttackList(Before, RowS, ColS, RowD, ColD) == 0);


						if (ab)
						{
							Dis += RationalRegard;
						}
						else
						{
							ab = (Tab[RowD][ColD] < 0) && (NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) == 0);


							if (ab)
							{
								Dis += RationalRegard;
							}
						}
					}
				}
				if (!((Tab[3][4] < ObjectBLACK && Tab[4][3] < ObjectBLACK && Tab[3][3] < ObjectBLACK && Tab[4][4] < ObjectBLACK)) && (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 25)))
				{
					if (!IsNumberOfObjecttIsLessThanThreashold(CloneATable(Tab), 32))
					{
						int Cor = 0;
						Cor = Colleralation::GetCorrelationScore(TableInitiation, CloneATable(Tab), 8, Order);



						if (Cor < DeColleralation)
						{
							DeColleralation = Cor;
							Dis += RationalRegard;
						}
					}
				}
			}
			if (CenrtrallnControlByTraversal(CloneATable(Tab), a, Order, RowS, ColS, RowD, ColD))
			{
				Dis += RationalRegard;
			}
			else
			{
				Dis += RationalPenalty;
			}

			return Dis;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsPawnIsolatedOrDoubleBackAwayOrHung(int RowS, int ColS, int RowD, int ColD, int** Table, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (Order == 1)
			{
				if (ColS < 5)
				{

					if (!Is)
					{
						bool A = true;
						bool B = true;
						if (RowD >= 1 && ColD >= 1)
						{
							A = (Table[RowD - 1][ColD - 1] == 1);
						}
						if (RowD + 1 < 8 && ColD >= 1)
						{
							B = (Table[RowD + 1][ColD - 1] == 1);
						}
						if (!(A || B))
						{
							Is = true;
						}
					}
				}
			}
			else
			{
				if (ColS > 2)
				{

					if (!Is)
					{
						bool A = true;
						bool B = true;
						if (RowS >= 1 && ColS + 1 < 8)
						{
							A = (Table[RowS - 1][ColS + 1] == -1);
						}
						if (RowS + 1 < 8 && ColS + 1 > 8)
						{
							B = (Table[RowS + 1][ColS + 1] == -1);
						}
						if (!(A || B))
						{
							Is = true;
						}
					}
				}
			}
			if (!Is)
			{
				if (Order == 1)
				{
					if (ColS + 1 < 8)
					{
						if ((Table[RowS][ColS + 1] == 1 && Table[RowS][ColS] == 1))
						{
							Is = false;
						}
					}
					else
					{
					if (ColS - 1 >= 0)
					{
						if ((Table[RowS][ColS - 1] == 1 && Table[RowS][ColS] == 1))
						{
							Is = false;
						}
					}
					}
				}
				else
				{
					if (ColS + 1 < 8)
					{
						if ((Table[RowS][ColS + 1] == -1 && Table[RowS][ColS] == -1))
						{
							Is = false;
						}
					}
					else
					{
				  if (ColS - 1 >= 0)
				  {
						if ((Table[RowS][ColS - 1] == -1 && Table[RowS][ColS] == -1))
						{
							Is = false;
						}
				  }
					}
				}
			}
			if (!Is)
			{
				bool IsSuported = false;
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (Order == 1 && Table[i][j] <= 0)
						{
							continue;
						}
						if (Order == -1 && Table[i][j] >= 0)
						{
							continue;
						}
						if (abs(Table[RowS][ColS]) == 1 && SameSign(Table[RowS][ColS], Table[i][j]))
						{
							bool ab = false;
							ab = Support(CloneATable(Table), i, j, RowS, ColS, color, Order);


							if (ab)
							{
								IsSuported = true;
								break;
							}
						}
						else
						{
						if (abs(Table[RowD][ColD]) == 1 && SameSign(Table[RowD][ColD], Table[i][j]))
						{
							bool ab = false;
							ab = Support(CloneATable(Table), i, j, RowD, ColD, color, Order);


							if (ab)
							{
								IsSuported = true;
								break;
							}
						}
						}
					}
					if (IsSuported)
					{
						break;
					}
				}
				Is = (!IsSuported);
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicObjectAtCenterAndPawnAttackTraversalObjectsAndDangourForEnemy(int** Table, int aa, int Ord, int ii, int jj, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HA = 0;
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				if ((i == 3 || i == 4) && (j == 3 || j == 4) && HeuristicAllReducedAttacked.empty())
				{
					HA = RationalRegard;
				}
				else
				{
				if ((i == 3 || i == 4) && (j == 3 || j == 4) && HeuristicAllReducedAttacked.size() != 0)
				{
					HA = RationalPenalty;
				}
				}
				if (HA == 0)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Ta = CloneATable(Table);
					int **Ta = CloneATable(Table);
					bool Before = false;
					if (Order == 1)
					{
						if (Ta[ii][jj] != 0)
						{
							Ta[i][j] = Ta[ii][jj];
							Ta[ii][jj] = 0;
							Before = true;
						}
						if (Ta[i][j] == 1)
						{
							HA += HeuristicAttack(Before, CloneATable(Ta), Ord, aa, ii, jj, i, j);
						}
					}
					else
					{
						if (Ta[ii][jj] != 0)
						{
							Ta[i][j] = Ta[ii][jj];
							Ta[ii][jj] = 0;
							Before = true;
						}
						if (Ta[i][j] == -1)
						{
							HA += HeuristicAttack(Before, CloneATable(Ta), Ord, aa, ii, jj, i, j);
						}
					}
				}
				if (IsPawnIsolatedOrDoubleBackAwayOrHung(0, jj, i, j, CloneATable(Table), Order))
				{
					HA += RationalPenalty;
				}

			}
			return HA;
		}
	}

	int ThinkingHybridizerRefrigitz::OrderColor(int Ord)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int a = 1;
			if (Ord == -1)
			{
				a = -1;
			}
			return a;
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Move was renamed since it is named the same as a user-defined type:
	bool ThinkingHybridizerRefrigitz::Permit(int Order, int TabS, int TabD, bool Self = true, bool Move_Renamed = false)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Per = false;
			if (Self)
			{
				if (Move_Renamed)
				{
					if (Order == 1 && TabS > 0 && TabD == 0)
					{
						Per = true;
					}
					if (Order == -1 && TabS < 0 && TabD == 0)
					{
						Per = true;
					}
				}
				else
				{
					if (Order == 1 && TabS > 0 && TabD > 0)
					{
						Per = true;
					}
					if (Order == -1 && TabS < 0 && TabD < 0)
					{
						Per = true;
					}
				}
			}
			else
			{
				if (Move_Renamed)
				{
					if (Order == 1 && TabS > 0 && TabD <= 0)
					{
						Per = true;
					}
					if (Order == -1 && TabS < 0 && TabD >= 0)
					{
						Per = true;
					}
				}
				else
				{
					if (Order == 1 && TabS > 0 && TabD < 0)
					{
						Per = true;
					}
					if (Order == -1 && TabS < 0 && TabD > 0)
					{
						Per = true;
					}
				}
			}
			return Per;
		}
	}

	int ThinkingHybridizerRefrigitz::Diff(int Obj1, int Obj2, bool Penalty = true)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int df = Obj1 - Obj2;
			if (Penalty)
			{
				if (abs(Obj1) > abs(Obj2))
				{
					return 12 - abs(df) + 1;
				}
				else
				{
					return abs(df) + 1;
				}
			}
			else
			{
				if (abs(Obj1) > abs(Obj2))
				{
					return abs(df) + 1;
				}
				else
				{
					return 12 - abs(df) + 1;
				}
			}
		}
	}

	int ThinkingHybridizerRefrigitz::DiffSupport(int Obj1, int Obj2)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int df = Obj1 - Obj2;
			return abs(df) + 1;
		}
	}

	int *ThinkingHybridizerRefrigitz::HeuristicAll(bool Before, int Killed, int** Table, int aa, int Ord)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicA[6];
			int HeuristicB[6];
			int HA = 0;
			int DumOrder = Order;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			///When AStarGreedy Heuristic is Not Assigned.
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				for (int RowS = 0; RowS < 8; RowS++)
				{
					for (int ColS = 0; ColS < 8; ColS++)
					{
						for (int RowD = 0; RowD < 8; RowD++)
						{
							for (int ColD = 0; ColD < 8; ColD++)
							{
								if (IsDistributedObjectAttackNonDistributedEnemyObject(Before, CloneATable(Table), Ord, aa, RowS, ColS, RowD, ColD))
								{
										HA += RationalPenalty;
										continue;
								}

									   ////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (OO)
										{
											if (HeuristicA[0] == 0)
											{
												bool ab = false;
												ab = Permit(Order * -1, Table[RowD][ColD], Table[RowS][ColS], false, false);


												if (ab)
												{
													ab = Attack(CloneATable(Table), RowD, ColD, RowS, ColS, OrderColor(Ord * -1), Ord * -1);


													if (ab)
													{
														if (HeuristicA[0] == 0)
														{
															HeuristicA[0] = RationalPenalty;
														}
														HeuristicB[0] += RationalPenalty;
													}
												}
											}


										if (HeuristicA[2] == 0)
										{
											bool ab = false;
											ab = Permit(Order * -1, Table[RowD][ColD], Table[RowS][ColS], true, false);


											if (ab)
											{
												ab = Support(CloneATable(Table), RowD, ColD, RowS, ColS, OrderColor(Ord * -1), Ord * -1);


												if (ab)
												{
													if (HeuristicA[2] == 0)
													{
														HeuristicA[2] = RationalPenalty;
													}
													HeuristicB[2] += RationalPenalty;
												}
											}
										}

										if (HeuristicA[1] == 0)
										{
											bool ab = false;
											ab = Permit(Order, Table[RowS][ColS], Table[RowD][ColD], false, false);


											if (ab)
											{
												ab = Attack(CloneATable(Table), RowS, ColS, RowD, ColD, OrderColor(Ord), Ord);


												if (ab)
												{
													if (HeuristicA[1] == 0)
													{
														HeuristicA[1] = RationalRegard;
													}
													HeuristicB[1] += RationalRegard;
												}
											}
										}

										 if (HeuristicA[3] == 0)
										 {
											 bool ab = false;
											 ab = Permit(Order, Table[RowS][ColS], Table[RowD][ColD], true, false);


											 if (ab)
											 {
												 ab = Support(CloneATable(Table), RowS, ColS, RowD, ColD, OrderColor(Ord), Ord);


												 if (ab)
												 {
													 if (HeuristicA[3] == 0)
													 {
														 HeuristicA[3] = RationalRegard;
													 }
													 HeuristicB[3] += RationalRegard;
												 }
											 }
										 }
										}
							}
						}
					}
				}
			}



			return HeuristicA;

		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInMoveList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllMove.size(); i++)
				{
					if (HeuristicAllMove[i][0] == Rows && HeuristicAllMove[i][1] == Cols && HeuristicAllMove[i][2] == Rowd && HeuristicAllMove[i][3] == Cold)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllMoveMidel > 0 && HeuristicAllMoveMidel < HeuristicAllMove.size())
				{
					for (int i = HeuristicAllMoveMidel; i < HeuristicAllMove.size(); i++)
					{
						if (HeuristicAllMove[i][0] == Rows && HeuristicAllMove[i][1] == Cols && HeuristicAllMove[i][2] == Rowd && HeuristicAllMove[i][3] == Cold)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInReducedMoveList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllReducedMove.size(); i++)
				{
					if (HeuristicAllReducedMove[i][2] == Rows && HeuristicAllReducedMove[i][3] == Cols && HeuristicAllReducedMove[i][0] == Rowd && HeuristicAllReducedMove[i][1] == Cols)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllReducedMoveMidel > 0 && HeuristicAllReducedMoveMidel < HeuristicAllReducedMove.size())
				{
					for (int i = HeuristicAllReducedMoveMidel; i < HeuristicAllReducedMove.size(); i++)
					{
						if (HeuristicAllReducedMove[i][2] == Rows && HeuristicAllReducedMove[i][3] == Cols && HeuristicAllReducedMove[i][0] == Rowd && HeuristicAllReducedMove[i][1] == Cols)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllAttacked.size(); i++)
				{
					if (HeuristicAllAttacked[i][0] == Rows && HeuristicAllAttacked[i][1] == Cols && HeuristicAllAttacked[i][2] == Rowd && HeuristicAllAttacked[i][3] == Cold)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllAttackedMidel > 0 && HeuristicAllAttackedMidel < HeuristicAllAttacked.size())
				{
					for (int i = HeuristicAllAttackedMidel; i < HeuristicAllAttacked.size(); i++)
					{
						if (HeuristicAllAttacked[i][0] == Rows && HeuristicAllAttacked[i][1] == Cols && HeuristicAllAttacked[i][2] == Rowd && HeuristicAllAttacked[i][3] == Cold)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInReducedAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllReducedAttacked.size(); i++)
				{
					if (HeuristicAllReducedAttacked[i][2] == Rows && HeuristicAllReducedAttacked[i][3] == Cols && HeuristicAllReducedAttacked[i][0] == Rowd && HeuristicAllReducedAttacked[i][1] == Cold)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllReducedAttackedMidel > 0 && HeuristicAllReducedAttackedMidel < HeuristicAllReducedAttacked.size())
				{
					for (int i = HeuristicAllReducedAttackedMidel; i < HeuristicAllReducedAttacked.size(); i++)
					{
						if (HeuristicAllReducedAttacked[i][2] == Rows && HeuristicAllReducedAttacked[i][3] == Cols && HeuristicAllReducedAttacked[i][0] == Rowd && HeuristicAllReducedAttacked[i][1] == Cold)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	std::vector<int*> ThinkingHybridizerRefrigitz::ListOfExistInReducedAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			std::vector<int*> Is = std::vector<int*>();
			if (Before)
			{
				for (int i = 0; i < HeuristicAllReducedAttacked.size(); i++)
				{
					if (HeuristicAllReducedAttacked[i][2] == Rows && HeuristicAllReducedAttacked[i][3] == Cols && HeuristicAllReducedAttacked[i][0] == Rowd && HeuristicAllReducedAttacked[i][1] == Cold)
					{
						int I[5];
						I[0] = HeuristicAllReducedAttacked[i][0];
						I[1] = HeuristicAllReducedAttacked[i][1];
						I[2] = HeuristicAllReducedAttacked[i][2];
						I[3] = HeuristicAllReducedAttacked[i][3];
						I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
						Is.push_back(I);
					}
				}
			}
			else
			{
				if (HeuristicAllReducedAttackedMidel > 0 && HeuristicAllReducedAttackedMidel < HeuristicAllReducedAttacked.size())
				{
					for (int i = HeuristicAllReducedAttackedMidel; i < HeuristicAllReducedAttacked.size(); i++)
					{
						if (HeuristicAllReducedAttacked[i][2] == Rows && HeuristicAllReducedAttacked[i][3] == Cols && HeuristicAllReducedAttacked[i][0] == Rowd && HeuristicAllReducedAttacked[i][1] == Cold)
						{
							int I[5];
							I[0] = HeuristicAllReducedAttacked[i][0];
							I[1] = HeuristicAllReducedAttacked[i][1];
							I[2] = HeuristicAllReducedAttacked[i][2];
							I[3] = HeuristicAllReducedAttacked[i][3];
							I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
							Is.push_back(I);
						}
					}
				}
			}
			return Is;
		}
	}

	std::vector<int*> ThinkingHybridizerRefrigitz::ListOfExistInReducedSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		std::vector<int*> Is = std::vector<int*>();
		if (Before)
		{
			for (int i = 0; i < HeuristicAllReducedSupport.size(); i++)
			{
				if (HeuristicAllReducedSupport[i][2] == Rows && HeuristicAllReducedSupport[i][3] == Cols && HeuristicAllReducedSupport[i][0] == Rowd && HeuristicAllReducedSupport[i][1] == Cold)
				{
					int I[5];
					I[0] = HeuristicAllReducedSupport[i][0];
					I[1] = HeuristicAllReducedSupport[i][1];
					I[2] = HeuristicAllReducedSupport[i][2];
					I[3] = HeuristicAllReducedSupport[i][3];
					I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
					Is.push_back(I);
				}
			}
		}
		else
		{
			if (HeuristicAllReducedSupportMidel > 0 && HeuristicAllReducedSupportMidel < HeuristicAllReducedSupport.size())
			{
				for (int i = HeuristicAllReducedSupportMidel; i < HeuristicAllReducedSupport.size(); i++)
				{
					if (HeuristicAllReducedSupport[i][2] == Rows && HeuristicAllReducedSupport[i][3] == Cols && HeuristicAllReducedSupport[i][0] == Rowd && HeuristicAllReducedSupport[i][1] == Cold)
					{
						int I[5];
						I[0] = HeuristicAllReducedSupport[i][0];
						I[1] = HeuristicAllReducedSupport[i][1];
						I[2] = HeuristicAllReducedSupport[i][2];
						I[3] = HeuristicAllReducedSupport[i][3];
						I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
						Is.push_back(I);
					}
				}
			}
		}
		return Is;
	}

	std::vector<int*> ThinkingHybridizerRefrigitz::ListOfExistInSupportList(bool Before, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			std::vector<int*> Is = std::vector<int*>();
			if (Before)
			{
				for (int i = 0; i < HeuristicAllSupport.size(); i++)
				{
					if (HeuristicAllSupport[i][2] == RowD && HeuristicAllSupport[i][3] == ColD && HeuristicAllSupport[i][0] == RowS && HeuristicAllSupport[i][1] == ColS)
					{
						int I[5];
						I[0] = HeuristicAllSupport[i][0];
						I[1] = HeuristicAllSupport[i][1];
						I[2] = HeuristicAllSupport[i][2];
						I[3] = HeuristicAllSupport[i][3];
						I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
						Is.push_back(I);
					}
				}
			}
			else
			{
				if (HeuristicAllSupportMidel > 0 && HeuristicAllSupportMidel < HeuristicAllSupport.size())
				{
					for (int i = HeuristicAllSupportMidel; i < HeuristicAllSupport.size(); i++)
					{
						if (HeuristicAllSupport[i][2] == RowD && HeuristicAllSupport[i][3] == ColD && HeuristicAllSupport[i][0] == RowS && HeuristicAllSupport[i][1] == ColS)
						{
							int I[5];
							I[0] = HeuristicAllSupport[i][0];
							I[1] = HeuristicAllSupport[i][1];
							I[2] = HeuristicAllSupport[i][2];
							I[3] = HeuristicAllSupport[i][3];
							I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
							Is.push_back(I);
						}
					}
				}
			}
			return Is;
		}
	}

	std::vector<int*> ThinkingHybridizerRefrigitz::ListOfExistInAttackList(bool Before, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			std::vector<int*> Is = std::vector<int*>();
			if (Before)
			{
				for (int i = 0; i < HeuristicAllAttacked.size(); i++)
				{
					if (HeuristicAllAttacked[i][2] == RowD && HeuristicAllAttacked[i][3] == ColD && HeuristicAllAttacked[i][0] == RowS && HeuristicAllAttacked[i][1] == ColS)
					{
						int I[5];
						I[0] = HeuristicAllAttacked[i][0];
						I[1] = HeuristicAllAttacked[i][1];
						I[2] = HeuristicAllAttacked[i][2];
						I[3] = HeuristicAllAttacked[i][3];
						I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
						Is.push_back(I);
					}
				}
			}
			else
			{
				if (HeuristicAllAttackedMidel > 0 && HeuristicAllAttackedMidel < HeuristicAllAttacked.size())
				{
					for (int i = HeuristicAllAttackedMidel; i < HeuristicAllAttacked.size(); i++)
					{
						if (HeuristicAllAttacked[i][2] == RowD && HeuristicAllAttacked[i][3] == ColD && HeuristicAllAttacked[i][0] == RowS && HeuristicAllAttacked[i][1] == ColS)
						{
							int I[5];
							I[0] = HeuristicAllAttacked[i][0];
							I[1] = HeuristicAllAttacked[i][1];
							I[2] = HeuristicAllAttacked[i][2];
							I[3] = HeuristicAllAttacked[i][3];
							I[4] = SignBeforNext(I[0], I[1], I[2], I[3]);
							Is.push_back(I);
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllSupport.size(); i++)
				{
					if (HeuristicAllSupport[i][0] == Rows && HeuristicAllSupport[i][1] == Cols && HeuristicAllSupport[i][2] == Rowd && HeuristicAllSupport[i][3] == Cold)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllSupportMidel > 0 && HeuristicAllSupportMidel < HeuristicAllSupport.size())
				{
					for (int i = HeuristicAllSupportMidel; i < HeuristicAllSupport.size(); i++)
					{
						if (HeuristicAllSupport[i][0] == Rows && HeuristicAllSupport[i][1] == Cols && HeuristicAllSupport[i][2] == Rowd && HeuristicAllSupport[i][3] == Cold)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInReducedSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			if (Before)
			{
				for (int i = 0; i < HeuristicAllReducedSupport.size(); i++)
				{
					if (HeuristicAllReducedSupport[i][2] == Rows && HeuristicAllReducedSupport[i][3] == Cols && HeuristicAllReducedSupport[i][0] == Rowd && HeuristicAllReducedSupport[i][1] == Cold)
					{
						Is++;
					}
				}
			}
			else
			{
				if (HeuristicAllReducedSupportMidel > 0 && HeuristicAllReducedSupportMidel < HeuristicAllReducedSupport.size())
				{
					for (int i = HeuristicAllReducedSupportMidel; i < HeuristicAllReducedSupport.size(); i++)
					{
						if (HeuristicAllReducedSupport[i][2] == Rows && HeuristicAllReducedSupport[i][3] == Cols && HeuristicAllReducedSupport[i][0] == Rowd && HeuristicAllReducedSupport[i][1] == Cold)
						{
							Is++;
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::NoOfExistInSupportList(bool Before, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Is = 0;
			for (int Rows = 0; Rows < 8; Rows++)
			{
				for (int Cols = 0; Cols < 8; Cols++)
				{
					if (Before)
					{
						for (int i = 0; i < HeuristicAllSupport.size(); i++)
						{
							if (HeuristicAllSupport[i][0] == Rows && HeuristicAllSupport[i][1] == Cols && HeuristicAllSupport[i][2] == RowD && HeuristicAllSupport[i][3] == ColD)
							{
								Is++;
							}
						}
					}
					else
					{
						if (HeuristicAllSupportMidel > 0 && HeuristicAllSupportMidel < HeuristicAllSupport.size())
						{
							for (int i = HeuristicAllSupportMidel; i < HeuristicAllSupport.size(); i++)
							{
								if (HeuristicAllSupport[i][0] == Rows && HeuristicAllSupport[i][1] == Cols && HeuristicAllSupport[i][2] == RowD && HeuristicAllSupport[i][3] == ColD)
								{
									Is++;
								}
							}
						}
					}
				}
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicPromotion(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HP = 0;
			if (Order == 1)
			{
				if (Cod != 0)
				{
					return HP;
				}
				if (TableConst[Ros][Cos] == 1 && Tab[Rod][Cod] > 0)
				{
					HP = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
				}
			}
			else
			{
				if (Cod != 7)
				{
					return HP;
				}
				if (TableConst[Ros][Cos] == -1 && Tab[Rod][Cod] < 0)
				{
					HP = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
				}
			}
			return HP;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicElephantOpen(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HE = 0;
			if (Order == 1)
			{
				if (TableConst[Ros][Cos] == 2 && Tab[Rod][Cod] <= 0)
				{
					HE = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
					if (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) == 0)
					{
						HE *= NoOfExistInMoveList(Before, Ros, Cos, Rod, Cod);
					}
				}
			}
			else
			{
				if (TableConst[Ros][Cos] == -2 && Tab[Rod][Cod] >= 0)
				{
					HE = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
					if (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) == 0)
					{
						HE *= NoOfExistInMoveList(Before, Ros, Cos, Rod, Cod);
					}
				}
			}
			return HE;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicHourseCloseBaseOfWeakHourseIsWhereIsHomeStrong(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HH = 0;
			if (Order == 1)
			{
				if (TableConst[Ros][Cos] == 3 && Tab[Rod][Cod] <= 0)
				{
					//Base of weak hourse is where is Home strong.
					HH = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (128 - NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
					//Hourse close
					if (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) == 0)
					{
						HH *= (64 - NoOfExistInMoveList(Before, Ros, Cos, Rod, Cod));
					}
				}
			}
			else
			{
				if (TableConst[Ros][Cos] == -3 && Tab[Rod][Cod] >= 0)
				{
					//Base of weak hourse is where is Home strong.
					HH = ((RationalRegard) * (NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)) + ((RationalPenalty) * (128 - NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))));
					//Hourse close
					if (NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) == 0)
					{
						HH *= (64 - NoOfExistInMoveList(Before, Ros, Cos, Rod, Cod));
					}
				}
			}
			return HH;
		}
	}

	int *ThinkingHybridizerRefrigitz::HeuristicExchange(bool Before, int Killed, int** Table, int aa, int Ord, int Ros, int Cos, int Rod, int Cod)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int **RemobeActiveDenfesiveObjectsOfEnemy; *RemobeActiveDenfesiveObjectsOfEnemy = new int[8]; for (int b = 0; b < 8; b++)RemobeActiveDenfesiveObjectsOfEnemy[b] = new int[8];
			const int ToSupport = 3, ReducedAttacked = 0, ReducedSupport = 2, ReducedMove = 5, ToAttacked = 1, ToMoved = 4;
			int Exchange[6];
			int ExchangeSeed[3];
			int DumOrd = Ord;
			int DummyOrd = Ord;
			int DummyCurrentOrd = ChessRules::CurrentOrder;
			///When AStarGreedy Exchange is Not Assigned.
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				for (int RowS = 0; RowS < 8; RowS++)
				{
					for (int ColS = 0; ColS < 8; ColS++)
					{
						for (int RowD = 0; RowD < 8; RowD++)
						{
							for (int ColD = 0; ColD < 8; ColD++)
							{



										////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
										////lock (OO)
										{
											bool ab = false;
											ab = Permit(Ord * -1, Table[RowD][ColD], Table[RowS][ColS], false, false);


											if (ab)
											{

												ab = Attack(CloneATable(Table), RowD, ColD, RowS, ColS, OrderColor(Ord * -1), Ord * -1);


												if (ab)
												{
													////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
													////lock (OOO)
													{
														int A[5];
														A[0] = RowD;
														A[1] = ColD;
														A[2] = RowS;
														A[3] = ColS;
														A[4] = SignBeforNext(RowD, ColD, RowS, ColS);
														HeuristicAllReducedAttacked.push_back(A);
														Exchange[ReducedAttacked]++;
													}
												}
											}



													 ab = false;
													ab = Permit(Ord * -1, Table[RowD][ColD], Table[RowS][ColS], true, false);


													if (ab)
													{

														ab = Support(CloneATable(Table), RowD, ColD, RowS, ColS, OrderColor(Ord * -1), Ord * -1);


														if (ab)
														{

															////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
															////lock (OOO)
															{
																int A[5];
																A[0] = RowD;
																A[1] = ColD;
																A[2] = RowS;
																A[3] = ColS;
																A[4] = SignBeforNext(RowD, ColD, RowS, ColS);
																HeuristicAllReducedSupport.push_back(A);
																Exchange[ReducedSupport]++;
															}
														}
													}


													 ab = false;
													ab = Permit(Ord * -1, Table[RowD][ColD], Table[RowS][ColS], true, true);


													if (ab)
													{

														ab = Movable(CloneATable(Table), RowD, ColD, RowS, ColS, OrderColor(Ord * -1), Ord * -1);


														if (ab)
														{
															////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
															////lock (OOO)
															{
																int A[5];
																A[0] = RowD;
																A[1] = ColD;
																A[2] = RowS;
																A[3] = ColS;
																A[4] = SignBeforNext(RowD, ColD, RowS, ColS);
																HeuristicAllReducedMove.push_back(A);
																Exchange[ReducedMove]++;
															}
														}
													}

													 ab = false;
													ab = Permit(Ord, Table[RowS][ColS], Table[RowD][ColD], false, false);


													if (ab)
													{

														ab = Attack(CloneATable(Table), RowS, ColS, RowD, ColD, OrderColor(Ord), Ord);


														if (ab)
														{
															////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
															////lock (OOO)
															{
																int A[5];
																A[0] = RowS;
																A[1] = ColS;
																A[2] = RowD;
																A[3] = ColD;
																A[4] = SignBeforNext(RowS, ColS, RowD, ColD);
																HeuristicAllAttacked.push_back(A);
																Exchange[ToAttacked]++;
															}
														}
													}

													 ab = false;
													ab = Permit(Ord, Table[RowS][ColS], Table[RowD][ColD], true, false);


													if (ab)
													{
														ab = Support(CloneATable(Table), RowS, ColS, RowD, ColD, OrderColor(Ord), Ord);


														if (ab)
														{
															////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
															////lock (OOO)
															{
																int A[5];
																A[0] = RowS;
																A[1] = ColS;
																A[2] = RowD;
																A[3] = ColD;
																A[4] = SignBeforNext(RowS, ColS, RowD, ColD);
																HeuristicAllSupport.push_back(A);
																Exchange[ToSupport]++;
															}
														}
													}

													 ab = false;
													ab = Permit(Ord, Table[RowS][ColS], Table[RowD][ColD], true, true);


													if (ab)
													{

														ab = Movable(CloneATable(Table), RowS, ColS, RowD, ColD, OrderColor(Ord), Ord);


														if (ab)
														{
															////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
															////lock (OOO)
															{
																int A[5];
																A[0] = RowS;
																A[1] = ColS;
																A[2] = RowD;
																A[3] = ColD;
																A[4] = SignBeforNext(RowS, ColS, RowD, ColD);
																HeuristicAllMove.push_back(A);
																Exchange[ToMoved]++;
															}
														}
													}
										}

							}
						}
					}
				}


			}
			//When situation is closed
			int A1 = 0;
			A1 = IsSupportLessThanReducedSupport(Exchange[ToSupport], Exchange[ReducedSupport]);


			if (A1 > 0)
			{
				ExchangeSeed[0] = RationalPenalty;
			}
			else
			{
			if (A1 < 0 && Exchange[ReducedSupport] == 0)
			{
				ExchangeSeed[0] = RationalRegard;
			}
			else //When reinforcment arrangments is Ok
			{
				if (Ord != AllDraw::OrderPlate)
				{
					if (IKIsCentralPawnIsOk && Exchange[ReducedAttacked] == 0)
					{
						ExchangeSeed[0] += RationalRegard;
					}
					else
					{
						if (IKIsCentralPawnIsOk && Exchange[ReducedAttacked] != 0)
						{
							ExchangeSeed[0] += RationalPenalty;
						}
					}
				}
			}
			}
			//when situation is closed and restriction
			A1 = IsAttackLessThanReducedAttack(Exchange[ToAttacked], Exchange[ReducedAttacked]);


			if (A1 > 0)
			{
				ExchangeSeed[1] = RationalPenalty;
			}
			else
			{
			if (A1 < 0 && Exchange[ReducedAttacked] == 0)
			{
				ExchangeSeed[1] = RationalRegard;
			}
			}

			//Closed space remove
			A1 = (Exchange[ToAttacked] + Exchange[ToSupport] + Exchange[ToMoved]);
			//penalties
			int A2 = A1 + (Exchange[ReducedAttacked] + Exchange[ReducedSupport] + Exchange[ReducedMove]);
			ExchangeSeed[2] = static_cast<int>((static_cast<double>(RationalPenalty)) * (((static_cast<double>(A2)) / 64.0)));

			//When victorian of self on enemy to consideration of weaker self traversal object at active enemy strong traversal
			if (ExchangeSeed[0] + ExchangeSeed[1] + ExchangeSeed[2] >= 0)
			{
				if (Exchange[ToSupport] - Exchange[ReducedSupport] + Exchange[ToAttacked] - Exchange[ReducedAttacked] > 0)
				{
					int HAA6 = 0;
					////auto o11 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O11)
					{
						int i6 = Ros, j6 = Cos, iiii6 = Rod, jjjj6 = Cod;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table6 = CloneATable(Table);
						int **Table6 = CloneATable(Table);
						int Ord6 = Ord;
						int aa6 = aa;
						HAA6 = HeuristicEnemySupported(Table6, Ord6, aa6, i6, j6, iiii6, jjjj6);


					}
					if (HAA6 != 0)
					{
						if (abs(Table[Rod][Cod]) - abs(Table[Ros][Cos]) >= 2)
						{
							ExchangeSeed[0] += RationalRegard;
						}
					}
					else
					{
					if (HAA6 == 0)
					{
						ExchangeSeed[0] += RationalRegard;
					}
					}
				}

			}
			//Simplification of mathematic method when we have victories
			double ExchangedOfGameSimplification = static_cast<double>(Exchange[ToSupport] - Exchange[ReducedSupport] + Exchange[ToAttacked] - Exchange[ReducedSupport]);
			double MAX = 64.0;
			ExchangeSeed[2] += static_cast<int>((static_cast<double>(RationalRegard)) * (ExchangedOfGameSimplification / MAX));
			//Remove of most impressive defensive enemy Objects
			double Defen = static_cast<double>(RemobeActiveDenfesiveObjectsOfEnemy[Ros][Cos] - RemobeActiveDenfesiveObjectsOfEnemy[Rod][Cod]);
			ExchangeSeed[2] += static_cast<int>((static_cast<double>(RationalRegard)) * (Defen / MAX) * 4);
			ExchangeSeed[2] += HeuristicPromotion(Before, CloneATable(Table), Ord, Ros, Cos, Rod, Cod);


			ExchangeSeed[2] += HeuristicElephantOpen(Before, CloneATable(Table), Ord, Ros, Cos, Rod, Cod);


			ExchangeSeed[2] += HeuristicHourseCloseBaseOfWeakHourseIsWhereIsHomeStrong(Before, CloneATable(Table), Ord, Ros, Cos, Rod, Cod);


			//Safty before Attack
			ExchangeSeed[2] += (RationalPenalty * (NoOfExistInReducedMoveList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInReducedSupportList(Before, Ros, Cos, Rod, Cod))) + (RationalRegard * (NoOfExistInMoveList(Before, Ros, Cos, Rod, Cod) + NoOfExistInAttackList(Before, Ros, Cos, Rod, Cod) + NoOfExistInSupportList(Before, Ros, Cos, Rod, Cod)));


			Ord = DummyOrd;
			ChessRules::CurrentOrder = DummyCurrentOrd;
			Ord = DumOrd;
			//Initiate to Begin Call Ords.
			return ExchangeSeed;

		}
	}

	bool ThinkingHybridizerRefrigitz::IsObjectSourceLessThanDestination(int RowS, int ColS, int RowD, int ColD, int** TabS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (TabS[RowS][ColS] < TabS[RowD][ColD])
			{
				Is = true;
			}
			return Is;
		}
	}

	int ThinkingHybridizerRefrigitz::IsSupportLessThanReducedSupport(int Support, int ReducedSupport)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Support == 0)
			{
				return 0;
			}
			if (Support < ReducedSupport)
			{
				return 1;
			}
			else
			{
				if (Support > ReducedSupport)
				{
				return -1;
				}
			}
			return 0;
		}
	}

	int ThinkingHybridizerRefrigitz::IsAttackLessThanReducedAttack(int Attack, int ReducedAttack)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Attack == 0)
			{
				return 0;
			}
			if (Attack < ReducedAttack)
			{
				return 1;
			}
			else
			{
				 if (Attack > ReducedAttack)
				 {
				return -1;
				 }
			}
			return 0;
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Move was renamed since it is named the same as a user-defined type:
	int ThinkingHybridizerRefrigitz::IsMoveLessThanReducedMove(int Move_Renamed, int ReducedMove)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Move_Renamed == 0)
			{
				return 0;
			}
			if (Move_Renamed < ReducedMove)
			{
				return 1;
			}
			else
			{
		if (Move_Renamed > ReducedMove)
		{
				return -1;
		}
			}
			return 0;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicMovment(bool Before, int** Table, int aa, int Ord, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HAS = 0;
			int HAE = 0;

				HAS = HeuristicMovmentSelf(Before, CloneATable(Table), aa, Ord, RowS, ColS, RowD, ColD);



				HAE = HeuristicMovmentEnemy(Before, CloneATable(Table), aa, Ord, RowS, ColS, RowD, ColD);




			return HAS + (HAE);
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicMovmentSelf(bool Before, int** Table, int aa, int Ord, int RowS, int ColS, int RowD, int ColD)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicMovementValue = 0;
			//Initiate Local Variable.
			int HA = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			///When AStarGreedy Heuristic is Not Assigned.
			if (!AStarGreedyHeuristicT)
			{
				int Order = int();
				int a;
				a = aa;
				Order = DummyOrder;
				int Sign = int();
				///When Moveble is true. means [RowS,ColS] is in Movmebale to [RowD,ColD].
				///What is Moveable!
				///Ans:When [RowS,ColS] is Movebale to [RowD,ColD] continue true when Empty or Enemy is located in [RowS,ColS].
				if (Table[RowD][ColD] == 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = -1;
					}
					a = -1;
				}
				else if (Table[RowD][ColD] == 0 && DummyOrder == 1 && Table[RowS][ColS] >= 0)
				{
					Order = 1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = 1;
					}
					a = 1;
				}
				else
				{
					return HeuristicMovementValue;
				}
				{
				//if (Before)
					//When is Movable Movement inCurrent->
					bool ab = false;
					ab = Movable(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


					if (ab)
					{
						int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
						for (int  ik = 0; ik < 8; ik++)
						{
							for (int  jk = 0; jk < 8; jk++)
							{
								Tab[ik][jk] = Table[ik][jk];
							}
						}
						HA += RationalRegard;
						int Supported = 0;
						int Attacked = 0;
						//For All Enemy Obejcts.                                             
						for (int g = 0; g < 8; g++)
						{
						////Parallel.For(0, 8, g =>
							////Parallel.For(0, 8, h =>
							for (int h = 0; h < 8; h++)
							{
								////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O2)
								{
									//Ignore Of Self Objects.
									if (Order == 1 && Table[g][h] == 0)
									{
										continue;
									}
									if (Order == -1 && Table[g][h] == 0)
									{
										continue;
									}
									int aaa;
									//Assgin Enemy ints.
									aaa = 1;
									if (Order * -1 == -1)
									{
										aaa = -1;
									}
									else
									{
										aaa = 1;
									}
									//When Enemy is Supported.
									bool A = bool();
									bool B = bool();
									A = Support(CloneATable(Tab), g, h, RowS, ColS, a, Order);





									B = Attack(CloneATable(Tab), g, h, RowD, ColD, aaa, Order * -1);




									//When Enemy is Supported.
									if (B)
									{
										//Assgine variable.
										Attacked++;
									}
									if (A)
									{
										//Assgine variable.
										Supported++;
										continue;
									}
								}
							}
						}
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Supported > 0 && Attacked == 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(pow(2, Supported));
							}
							else
							{
							//When is Supported Multyply -100.
							if (Attacked > 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(-(1 * pow(2, Attacked)));
							}
							}
						}
					}
				}
			}
			//For All Homes Table.
			else
			{
				int Order = int();
				int a;
				a = aa;
				if (RowD == RowS && ColD == ColS)
				{
					return HeuristicMovementValue;
				}
				int Sign = int();
				Order = DummyOrder;
				///When Moveble is true. means [RowS,ColS] is in Movmebale to [RowD,ColD].
				///What is Moveable!
				///Ans:When [RowS,ColS] is Movebale to [RowD,ColD] continue true when Empty or Enemy is located in [RowS,ColS].
				if (Table[RowD][ColD] == 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = -1;
						a = -1;
					}
				}
				else if (Table[RowD][ColD] == 0 && DummyOrder == 1 && Table[RowS][ColS] >= 0)
				{
					Order = 1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = 1;
						a = 1;
					}
				}
				else
				{
					return HeuristicMovementValue;
				}
				{
				//if (Before)
					//When is Movable Movement inCurrent->
					bool ab = false;
					ab = Movable(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


					if (ab)
					{

						HA += RationalRegard;
						int Supported = 0;
						int Attacked = 0;
						//For All Enemy Obejcts.                                             
						for (int g = 0; g < 8; g++)
						{
						////Parallel.For(0, 8, g =>
							////Parallel.For(0, 8, h =>
							for (int h = 0; h < 8; h++)
							{
								////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O2)
								{
									//Ignore Of Self Objects.
									if (Order == 1 && Table[g][h] == 0)
									{
										continue;
									}
									if (Order == -1 && Table[g][h] == 0)
									{
										continue;
									}
									int aaa;
									//Assgin Enemy ints.
									aaa = 1;
									if (Order * -1 == -1)
									{
										aaa = -1;
									}
									else
									{
										aaa = 1;
									}
									//When Enemy is Supported.
									bool A = bool();
									bool B = bool();
									A = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);





									B = Attack(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);



									//When Enemy is Supported.
									if (B)
									{
										//Assgine variable.
										Attacked++;
									}
									if (A)
									{
										//Assgine variable.
										Supported++;
										continue;
									}
								}
							}
						}
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Supported > 0 && Attacked == 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(pow(2, Supported));
							}
							else
							{
						  //When is Supported Multyply -100.
						  if (Attacked > 0)
						  {
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(-(1 * pow(2, Attacked)));
						  }
							}
						}
					}
				}
			}
			//Reassignments of Begin Call Global Orders.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//Store Local Heuristic in Global One.
			return HA * 1;
		}
	}

	int ThinkingHybridizerRefrigitz::HeuristicMovmentEnemy(bool Before, int** Table, int aa, int Ord, int RowD, int ColD, int RowS, int ColS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int HeuristicMovementValue = 0;
			//Initiate Local Variable.
			int HA = 0;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			///When AStarGreedy Heuristic is Not Assigned.
			if (!AStarGreedyHeuristicT)
			{
				int Order = int();
				int a;
				a = aa;
				Order = DummyOrder;
				int Sign = int();
				///When Moveble is true. means [RowS,ColS] is in Movmebale to [RowD,ColD].
				///What is Moveable!
				///Ans:When [RowS,ColS] is Movebale to [RowD,ColD] continue true when Empty or Enemy is located in [RowS,ColS].
				if (Table[RowD][ColD] == 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = -1;
					}
					a = -1;
				}
				else if (Table[RowD][ColD] == 0 && DummyOrder == 1 && Table[RowS][ColS] >= 0)
				{
					Order = 1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = 1;
					}
					a = 1;
				}
				else
				{
					return HeuristicMovementValue;
				}
				{
				//if (Before)
					//When is Movable Movement inCurrent->
					bool ab = false;
					ab = Movable(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


					if (ab)
					{
						int **Tab; *Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
						for (int  ik = 0; ik < 8; ik++)
						{
							for (int  jk = 0; jk < 8; jk++)
							{
								Tab[ik][jk] = Table[ik][jk];
							}
						}
						HA += RationalPenalty;
						int Supported = 0;
						int Attacked = 0;
						//For All Enemy Obejcts.                                             
						for (int g = 0; g < 8; g++)
						{
						////Parallel.For(0, 8, g =>
							////Parallel.For(0, 8, h =>
							for (int h = 0; h < 8; h++)
							{
								////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O2)
								{
									//Ignore Of Self Objects.
									if (Order == 1 && Table[g][h] == 0)
									{
										continue;
									}
									if (Order == -1 && Table[g][h] == 0)
									{
										continue;
									}
									int aaa;
									//Assgin Enemy ints.
									aaa = 1;
									if (Order * -1 == -1)
									{
										aaa = -1;
									}
									else
									{
										aaa = 1;
									}
									//When Enemy is Supported.
									bool A = bool();
									bool B = bool();
									A = Support(CloneATable(Tab), g, h, RowS, ColS, a, Order);





									B = Attack(CloneATable(Tab), g, h, RowD, ColD, aaa, Order * -1);


									//When Enemy is Supported.
									if (B)
									{
										//Assgine variable.
										Attacked++;
									}
									if (A)
									{
										//Assgine variable.
										Supported++;
										continue;
									}
								}
							}
						}
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Attacked > 0 && Supported == 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(pow(2, Attacked));
							}
							else
							{
							//When is Supported Multyply -100.
							if (Supported > 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(-(1 * pow(2, Attacked)));
							}
							}
						}
					}
				}
			}
			//For All Homes Table.
			else
			{
				int Order = int();
				int a;
				a = aa;
				if (RowD == RowS && ColD == ColS)
				{
					return HeuristicMovementValue;
				}
				int Sign = int();
				Order = DummyOrder;
				///When Moveble is true. means [RowS,ColS] is in Movmebale to [RowD,ColD].
				///What is Moveable!
				///Ans:When [RowS,ColS] is Movebale to [RowD,ColD] continue true when Empty or Enemy is located in [RowS,ColS].
				if (Table[RowD][ColD] == 0 && DummyOrder == -1 && Table[RowS][ColS] < 0)
				{
					Order = -1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = -1;
						a = -1;
					}
				}
				else if (Table[RowD][ColD] == 0 && DummyOrder == 1 && Table[RowS][ColS] >= 0)
				{
					Order = 1;
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						Sign = 1 * AllDraw::SignMovments;
						ChessRules::CurrentOrder = 1;
						a = 1;
					}
				}
				else
				{
					return HeuristicMovementValue;
				}
				{
				//if (Before)
					//When is Movable Movement inCurrent->
					bool ab = false;
					ab = Movable(CloneATable(Table), RowS, ColS, RowD, ColD, a, Order);


					if (ab)
					{
						HA += RationalPenalty;
						int Supported = 0;
						int Attacked = 0;
						//For All Enemy Obejcts.                                             
						for (int g = 0; g < 8; g++)
						{
						////Parallel.For(0, 8, g =>
							////Parallel.For(0, 8, h =>
							for (int h = 0; h < 8; h++)
							{
								////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O2)
								{
									//Ignore Of Self Objects.
									if (Order == 1 && Table[g][h] == 0)
									{
										continue;
									}
									if (Order == -1 && Table[g][h] == 0)
									{
										continue;
									}
									int aaa;
									//Assgin Enemy ints.
									aaa = 1;
									if (Order * -1 == -1)
									{
										aaa = -1;
									}
									else
									{
										aaa = 1;
									}
									//When Enemy is Supported.
									bool A = bool();
									bool B = bool();
									A = Support(CloneATable(Table), g, h, RowS, ColS, a, Order);





									B = Attack(CloneATable(Table), g, h, RowD, ColD, aaa, Order * -1);


									//When Enemy is Supported.
									if (B)
									{
										//Assgine variable.
										Attacked++;
									}
									if (A)
									{
										//Assgine variable.
										Supported++;
										continue;
									}
								}
							}
						}
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Attacked > 0 && Supported == 0)
							{
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(pow(2, Attacked));
							}
							else
							{
							  //When is Supported Multyply -100.
							  if (Supported > 0)
							  {
								//When is Not Supported multyply 100.
								HA *= static_cast<int>(-(1 * pow(2, Attacked)));
							  }
							}
						}
					}
				}
			}
			//Reassignments of Begin Call Global Orders.
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//Store Local Heuristic in Global One.
			return HA * 1;
		}
	}

	bool ThinkingHybridizerRefrigitz::Attack(int** Tab, int i, int j, int ii, int jj, int a, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Tab[i][j] == 0)
			{
				return false;
			}
			if (Tab[ii][jj] == 0)
			{
				return false;
			}
			if (Tab[i][j] > 0 && Tab[ii][jj] > 0)
			{
				return false;
			}
			if (Tab[i][j] > 0 && Tab[ii][jj] == 0)
			{
				return false;
			}
			if (Tab[i][j] < 0 && Tab[ii][jj] < 0)
			{
				return false;
			}
			if (Tab[i][j] < 0 && Tab[ii][jj] == 0)
			{
				return false;
			}
			int CCurentOrder = ChessRules::CurrentOrder;
			//Initiate Global static  Variable.
			ChessRules::CurrentOrder = Order;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Table = CloneATable(Tab);
			int **Table = CloneATable(Tab);
			//when there is a Movment from Parameter One to Second Parameter return Attacke..
			bool ab = false;
			ab = (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order, i, j))->Rules(i, j, ii, jj, a, Order, true);


			if (ab)
			{
				ChessRules::CurrentOrder = CCurentOrder;
				return true;
			}
			ChessRules::CurrentOrder = CCurentOrder;
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::ObjectDanger(int** Tab, int i, int j, int ii, int jj, int a, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int CCurrentOrder = ChessRules::CurrentOrder;
			//Initiate Local Varibales.
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  RowS = 0; RowS < 8; RowS++)
			{
				for (int  ColS = 0; ColS < 8; ColS++)
				{
					Table[RowS][ColS] = Tab[RowS][ColS];
				}
			}
			ChessRules::CurrentOrder = Order;
			///When [i,j] is Attacked [ii][jj] retrun true when enemy is located in [ii][jj].
			bool ab = false;
			ab = (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order, i, j))->Rules(i, j, ii, jj, a, Order, true);


			if (ab)
			{

				//Initiate Local Variables.
				for (int  RowS = 0; RowS < 8; RowS++)
				{
					for (int  ColS = 0; ColS < 8; ColS++)
					{
						Table[RowS][ColS] = Tab[RowS][ColS];
					}
				}
				//Take Movments.
				Table[ii][jj] = Table[i][j];
				Table[i][j] = 0;
				//Consider Check.
				ChessRules *AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[ii][jj], CloneATable(Table), Order, ii, jj);

				ab = AA->ObjectDangourKingMove(Order, CloneATable(Table), false);


				if (ab)
				{
					ChessRules::CurrentOrder = CCurrentOrder;
					//Return ObjectDanger.
					if ((AA->CheckWHITEObjectDangour) && Order == 1)
					{
						return true;
					}
					else
					{
						if ((AA->CheckBLACKObjectDangour) && Order == -1)
						{
						return true;
						}
					}
				}
				if (AA->CheckMate(CloneATable(Table), Order))
				{
					ChessRules::CurrentOrder = CCurrentOrder;
					//Return ObjectDanger.
					if ((AA->CheckWHITE || AA->CheckMateWHITE) && Order == 1)
					{
						return true;
					}
					else
					{
						if ((AA->CheckBLACK || AA->CheckMateBLACK) && Order == -1)
						{
						return true;
						}
					}
				}
			}


			ChessRules::CurrentOrder = CCurrentOrder;

			//return Non ObjectDanger.
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::Support(int** Tab, int i, int j, int ii, int jj, int a, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (Tab[i][j] == 0)
			{
				return false;
			}
			//Initiate Local Variables.
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  RowS = 0; RowS < 8; RowS++)
			{
				for (int  ColS = 0; ColS < 8; ColS++)
				{
					Table[RowS][ColS] = Tab[RowS][ColS];
				}
			}
			///When All Tables is WHITE.
			if (Order == 1 && Table[i][j] > 0)
			{
				///When [i,j] Supporte [ii][jj].
				bool ab = false;
				ab = (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order, i, j))->Rules(i, j, ii, jj, a, Table[i][j], false) && SameSign(Table[i][j], Table[ii][jj]);


				if (ab)
				{
					return true;
				}
			}
			else
			{
				if (Order == -1 && Table[i][j] < 0)
				{ ///When [i,j] Supporte [ii][jj].
					bool ab = false;
					ab = (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Table[i][j], CloneATable(Table), Order, i, j))->Rules(i, j, ii, jj, a, Table[i][j], false) && SameSign(Table[i][j], Table[ii][jj]);


					if (ab)
					{

						return true;
					}
				}
			}
			return false;
		}
	}

	bool ThinkingHybridizerRefrigitz::MaxHeuristic(int &j, int Kin, int &Less, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{


			bool Found = false;
			//When Solders.
			if (Kin == 1)
			{
				for (int  i = 0; i < this->PenaltyRegardListSolder.size(); i++)
				{
					if (PenaltyRegardListSolder[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListSolder[i][0] + HeuristicListSolder[i][1] + HeuristicListSolder[i][2] + HeuristicListSolder[i][3] + HeuristicListSolder[i][4] + HeuristicListSolder[i][5] + HeuristicListSolder[i][6] + HeuristicListSolder[i][7] + HeuristicListSolder[i][8] + HeuristicListSolder[i][9])
							{
								Less = HeuristicListSolder[i][0] + HeuristicListSolder[i][1] + HeuristicListSolder[i][2] + HeuristicListSolder[i][3] + HeuristicListSolder[i][4] + HeuristicListSolder[i][5] + HeuristicListSolder[i][6] + HeuristicListSolder[i][7] + HeuristicListSolder[i][8] + HeuristicListSolder[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListSolder[i][0] + HeuristicListSolder[i][1] + HeuristicListSolder[i][2] + HeuristicListSolder[i][3] + HeuristicListSolder[i][4] + HeuristicListSolder[i][5] + HeuristicListSolder[i][6] + HeuristicListSolder[i][7] + HeuristicListSolder[i][8] + HeuristicListSolder[i][9])
							{
								Less = HeuristicListSolder[i][0] + HeuristicListSolder[i][1] + HeuristicListSolder[i][2] + HeuristicListSolder[i][3] + HeuristicListSolder[i][4] + HeuristicListSolder[i][5] + HeuristicListSolder[i][6] + HeuristicListSolder[i][7] + HeuristicListSolder[i][8] + HeuristicListSolder[i][9];
								j = i;
								Found = true;
							}
						}
					}
				}
			}
			else //When Elephant.
			{
				if (Kin == 2)
				{
				for (int  i = 0; i < this->PenaltyRegardListElefant.size(); i++)
				{
					if (PenaltyRegardListElefant[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListElefant[i][0] + HeuristicListElefant[i][1] + HeuristicListElefant[i][2] + HeuristicListElefant[i][3] + HeuristicListElefant[i][4] + HeuristicListElefant[i][5] + HeuristicListElefant[i][6] + HeuristicListElefant[i][7] + HeuristicListElefant[i][8] + HeuristicListElefant[i][9])
							{
								Less = HeuristicListElefant[i][0] + HeuristicListElefant[i][1] + HeuristicListElefant[i][2] + HeuristicListElefant[i][3] + HeuristicListElefant[i][4] + HeuristicListElefant[i][5] + HeuristicListElefant[i][6] + HeuristicListElefant[i][7] + HeuristicListElefant[i][8] + HeuristicListElefant[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListElefant[i][0] + HeuristicListElefant[i][1] + HeuristicListElefant[i][2] + HeuristicListElefant[i][3] + HeuristicListElefant[i][4] + HeuristicListElefant[i][5] + HeuristicListElefant[i][6] + HeuristicListElefant[i][7] + HeuristicListElefant[i][8] + HeuristicListElefant[i][9])
							{
								Less = HeuristicListElefant[i][0] + HeuristicListElefant[i][1] + HeuristicListElefant[i][2] + HeuristicListElefant[i][3] + HeuristicListElefant[i][4] + HeuristicListElefant[i][5] + HeuristicListElefant[i][6] + HeuristicListElefant[i][7] + HeuristicListElefant[i][8] + HeuristicListElefant[i][9];
								j = i;
								Found = true;
							}
						}
					}
				}
				}
			else //When Hourse.
			{
					if (Kin == 3)
					{
				for (int  i = 0; i < this->PenaltyRegardListHourse.size(); i++)
				{
					if (PenaltyRegardListHourse[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListHourse[i][0] + HeuristicListHourse[i][1] + HeuristicListHourse[i][2] + HeuristicListHourse[i][3] + HeuristicListHourse[i][4] + HeuristicListHourse[i][5] + HeuristicListHourse[i][6] + HeuristicListHourse[i][7] + HeuristicListHourse[i][8] + HeuristicListHourse[i][9])
							{
								Less = HeuristicListHourse[i][0] + HeuristicListHourse[i][1] + HeuristicListHourse[i][2] + HeuristicListHourse[i][3] + HeuristicListHourse[i][4] + HeuristicListHourse[i][5] + HeuristicListHourse[i][6] + HeuristicListHourse[i][7] + HeuristicListHourse[i][8] + HeuristicListHourse[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListHourse[i][0] + HeuristicListHourse[i][1] + HeuristicListHourse[i][2] + HeuristicListHourse[i][3] + HeuristicListHourse[i][4] + HeuristicListHourse[i][5] + HeuristicListHourse[i][6] + HeuristicListHourse[i][7] + HeuristicListHourse[i][8] + HeuristicListHourse[i][9])
							{
								Less = HeuristicListHourse[i][0] + HeuristicListHourse[i][1] + HeuristicListHourse[i][2] + HeuristicListHourse[i][3] + HeuristicListHourse[i][4] + HeuristicListHourse[i][5] + HeuristicListHourse[i][6] + HeuristicListHourse[i][7] + HeuristicListHourse[i][8] + HeuristicListHourse[i][9];
								j = i;
								Found = true;
							}
						}
					}
				}
					}
			else //When Castles.
			{
						if (Kin == 4)
						{
				for (int  i = 0; i < this->PenaltyRegardListCastle.size(); i++)
				{
					if (PenaltyRegardListCastle[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListCastle[i][0] + HeuristicListCastle[i][1] + HeuristicListCastle[i][2] + HeuristicListCastle[i][3] + HeuristicListCastle[i][4] + HeuristicListCastle[i][5] + HeuristicListCastle[i][6] + HeuristicListCastle[i][7] + HeuristicListCastle[i][8] + HeuristicListCastle[i][9])
							{
								Less = HeuristicListCastle[i][0] + HeuristicListCastle[i][1] + HeuristicListCastle[i][2] + HeuristicListCastle[i][3] + HeuristicListCastle[i][4] + HeuristicListCastle[i][5] + HeuristicListCastle[i][6] + HeuristicListCastle[i][7] + HeuristicListCastle[i][8] + HeuristicListCastle[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListCastle[i][0] + HeuristicListCastle[i][1] + HeuristicListCastle[i][2] + HeuristicListCastle[i][3] + HeuristicListCastle[i][4] + HeuristicListCastle[i][5] + HeuristicListCastle[i][6] + HeuristicListCastle[i][7] + HeuristicListCastle[i][8] + HeuristicListCastle[i][9])
							{
								Less = HeuristicListCastle[i][0] + HeuristicListCastle[i][1] + HeuristicListCastle[i][2] + HeuristicListCastle[i][3] + HeuristicListCastle[i][4] + HeuristicListCastle[i][5] + HeuristicListCastle[i][6] + HeuristicListCastle[i][7] + HeuristicListCastle[i][8] + HeuristicListCastle[i][9];
								j = i;
								Found = true;
							}
						}
					}
				}
						}
			else //When Minister.
			{
							if (Kin == 5)
							{
				for (int  i = 0; i < this->PenaltyRegardListMinister.size(); i++)
				{
					if (PenaltyRegardListMinister[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListMinister[i][0] + HeuristicListMinister[i][1] + HeuristicListMinister[i][2] + HeuristicListMinister[i][3] + HeuristicListMinister[i][4] + HeuristicListMinister[i][5] + HeuristicListMinister[i][6] + HeuristicListMinister[i][7] + HeuristicListMinister[i][8] + HeuristicListMinister[i][9])
							{
								Less = HeuristicListMinister[i][0] + HeuristicListMinister[i][1] + HeuristicListMinister[i][2] + HeuristicListMinister[i][3] + HeuristicListMinister[i][4] + HeuristicListMinister[i][5] + HeuristicListMinister[i][6] + HeuristicListMinister[i][7] + HeuristicListMinister[i][8] + HeuristicListMinister[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListMinister[i][0] + HeuristicListMinister[i][1] + HeuristicListMinister[i][2] + HeuristicListMinister[i][3] + HeuristicListMinister[i][4] + HeuristicListMinister[i][5] + HeuristicListMinister[i][6] + HeuristicListMinister[i][7] + HeuristicListMinister[i][8] + HeuristicListMinister[i][9])
							{
								Less = HeuristicListMinister[i][0] + HeuristicListMinister[i][1] + HeuristicListMinister[i][2] + HeuristicListMinister[i][3] + HeuristicListMinister[i][4] + HeuristicListMinister[i][5] + HeuristicListMinister[i][6] + HeuristicListMinister[i][7] + HeuristicListMinister[i][8] + HeuristicListMinister[i][9];
								j = i;
								Found = true;
							}
						}
					}
				}
							}
			else //When King.
			{
								if (Kin == 6)
								{
				for (int  i = 0; i < this->PenaltyRegardListKing.size(); i++)
				{
					if (PenaltyRegardListKing[i]->IsPenaltyAction() != 0)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (Less > HeuristicListKing[i][0] + HeuristicListKing[i][1] + HeuristicListKing[i][2] + HeuristicListKing[i][3] + HeuristicListKing[i][4] + HeuristicListKing[i][5] + HeuristicListKing[i][6] + HeuristicListKing[i][7] + HeuristicListKing[i][8] + HeuristicListKing[i][9])
							{
								Less = HeuristicListKing[i][0] + HeuristicListKing[i][1] + HeuristicListKing[i][2] + HeuristicListKing[i][3] + HeuristicListKing[i][4] + HeuristicListKing[i][5] + HeuristicListKing[i][6] + HeuristicListKing[i][7] + HeuristicListKing[i][8] + HeuristicListKing[i][9];
								j = i;
								Found = true;
							}
						}
						else
						{
							if (Less < HeuristicListKing[i][0] + HeuristicListKing[i][1] + HeuristicListKing[i][2] + HeuristicListKing[i][3] + HeuristicListKing[i][4] + HeuristicListKing[i][5] + HeuristicListKing[i][6] + HeuristicListKing[i][7] + HeuristicListKing[i][8] + HeuristicListKing[i][9])
							{
								Less = HeuristicListKing[i][0] + HeuristicListKing[i][1] + HeuristicListKing[i][2] + HeuristicListKing[i][3] + HeuristicListKing[i][4] + HeuristicListKing[i][5] + HeuristicListKing[i][6] + HeuristicListKing[i][7] + HeuristicListKing[i][8] + HeuristicListKing[i][9];
								j = i;
								Found = true;
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
			return Found;
		}
	}
	/*

	int ThinkingHybridizerRefrigitz::SolderOnTableCount(DrawSoldire *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0, i = 0;
			//For Alll Solders on int Calculate Solkder Count.
			while (i < MaxCount)
			{
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//When int is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}
				i++;
			};
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::ElefantOnTableCount(DrawElefant *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

			int Count = 0, i = 0;
			//For All Elephant items in Table.
			while (i < MaxCount)
			{
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//when Elaphant int is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}
				i++;
			};
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::HourseOnTableCount(DrawHourse *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0, i = 0;
			while (i < MaxCount)
			{
				//For All Hourse on Table .
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//When int is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}
				i++;
			};
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::CastleOnTableCount(DrawCastle *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0, i = 0;
			while (i < MaxCount)
			{
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//When Castles int is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}

				i++;
			};
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::MinisterOnTableCount(DrawMinister *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0, i = 0;
			while (i < MaxCount)
			{
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//When int of items is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}
				i++;
			};
			return Count;
		}
	}

	int ThinkingHybridizerRefrigitz::KingOnTableCount(DrawKing *So, bool Mi, int MaxCount)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Count = 0, i = 0;
			while (i < MaxCount)
			{
				//The Index out of range exeption is not fixable.
				if (So != nullptr)
				{
					if (So[i] != nullptr)
					{
						//when int is WHITE or BLACK.
						if (So[i]->color == 1 || So[i]->color == -1)
						{
							if (Mi)
							{
								if (So[i]->color == 1)
								{
									Count++;
								}
							}
							else
							{
								Count++;
							}
						}
						else
						{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
							delete So[i];
						}
					}
				}
				i++;
			};
			return Count;
		}
	}*/

	int ThinkingHybridizerRefrigitz::ReturnHeuristic(int ii, int j, int Order, bool AA, int &HaveKilled)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//AllDraw::OutPut = L"";

			//calculation of Heuristic methos and storing value retured.
			int Hur = int();
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				if (!AA)
				{
					if (ii >= 0 && UsePenaltyRegardMechnisamT)
					{
						int Hav = HaveKilled;
						Hur = static_cast<int>(static_cast<double>(ReturnHeuristicCalculartor(0, ii, j, Order, Hav)) * LearniningTable->LearingValue(Row, Column));


						HaveKilled = Hav;
					}
					else
					{
						int Hav = HaveKilled;
						Hur = ReturnHeuristicCalculartor(0, ii, j, Order, Hav);


						HaveKilled = Hav;
					}
				}
				else
				{
					int Hav = HaveKilled;
					Hur = ReturnHeuristicCalculartor(0, ii, j, Order, Hav) + 1000;


					HaveKilled = Hav;

				}
				//Optimization depend of numbers of unpealties nodes quefficient.  
				if (UsePenaltyRegardMechnisamT)
				{
					Hur = Hur * (static_cast<int>(NumbersOfAllNode - NumbersOfCurrentBranchesPenalties) / static_cast<int>(NumbersOfAllNode));


					return Hur;
				}

				return Hur;
			}
		}
	}

	std::wstring ThinkingHybridizerRefrigitz::Alphabet(int RowRealesed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			std::wstring A = L"";
			if (RowRealesed == 0)
			{
				A = L"a";
			}
			else
			{
				if (RowRealesed == 1)
				{
				A = L"b";
				}
			else
			{
					if (RowRealesed == 2)
					{
				A = L"c";
					}
			else
			{
						if (RowRealesed == 3)
						{
				A = L"d";
						}
			else
			{
							if (RowRealesed == 4)
							{
				A = L"e";
							}
			else
			{
								if (RowRealesed == 5)
								{
				A = L"f";
								}
			else
			{
									if (RowRealesed == 6)
									{
				A = L"g";
									}
			else
			{
										if (RowRealesed == 7)
										{
				A = L"h";
										}
			}
			}
			}
			}
			}
			}
			}

			return A;
		}
	}

	std::wstring ThinkingHybridizerRefrigitz::Number(int ColumnRealeased)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			std::wstring A = L"";
			if (ColumnRealeased == 7)
			{
				A = L"0";
			}
			else
			{
				if (ColumnRealeased == 6)
				{
				A = L"1";
				}
			else
			{
					if (ColumnRealeased == 5)
					{
				A = L"2";
					}
			else
			{
						if (ColumnRealeased == 4)
						{
				A = L"3";
						}
			else
			{
							if (ColumnRealeased == 3)
							{
				A = L"4";
							}
			else
			{
								if (ColumnRealeased == 2)
								{
				A = L"5";
								}
			else
			{
									if (ColumnRealeased == 1)
									{
				A = L"6";
									}
			else
			{
										if (ColumnRealeased == 0)
										{
				A = L"7";
										}
			}
			}
			}
			}
			}
			}
			}
			return A;
		}
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorKiller(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		//when killer list satisfied
		if (KillerAtThinking.size() > j)
		{
			//when killer list exist and for victory
			if (KillerAtThinking[j] > 0)
			{
				IsAtLeastOneKillerAtDraw = true;
				HaveKilled = iAstarGready;
			}
			else //when kiler is for lose
			{
			if (KillerAtThinking[j] < 0)
			{
				IsAtLeastOneKillerAtDraw = true;
				HaveKilled = (iAstarGready * -1);
			}
			}
		}
		//when there is not served layer
		bool A = (!(IsSup[j])) || (AllDraw::AllowedSupTrue);
		if (A && j < IsSup.size() && j >= 0)
		{
			//when there is computations
			for (j = 0; HeuristicListSolder.size() > 0 && j < HeuristicListSolder.size(); j++)
			{
				Heuristic += HeuristicListSolder[j][0] + HeuristicListSolder[j][1] + HeuristicListSolder[j][2] + HeuristicListSolder[j][3] + HeuristicListSolder[j][4] + HeuristicListSolder[j][5] + HeuristicListSolder[j][6] + HeuristicListSolder[j][7] + HeuristicListSolder[j][8] + HeuristicListSolder[j][9];
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
					{
						//if (Order == 1)
						//else
					}
				}
			}
			//When Elephant Kind.
			for (j = 0; HeuristicListElefant.size() > 0 && j < HeuristicListElefant.size(); j++)
			{
				Heuristic += HeuristicListElefant[j][0] + HeuristicListElefant[j][1] + HeuristicListElefant[j][2] + HeuristicListElefant[j][3] + HeuristicListElefant[j][4] + HeuristicListElefant[j][5] + HeuristicListElefant[j][6] + HeuristicListElefant[j][7] + HeuristicListElefant[j][8] + HeuristicListElefant[j][9];
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
					{
						//if (Order == 1)
						//else
					}
				}

			}
			//when is hourse
			for (j = 0; HeuristicListHourse.size() > 0 && j < HeuristicListHourse.size(); j++)
			{
				Heuristic += HeuristicListHourse[j][0] + HeuristicListHourse[j][1] + HeuristicListHourse[j][2] + HeuristicListHourse[j][3] + HeuristicListHourse[j][4] + HeuristicListHourse[j][5] + HeuristicListHourse[j][6] + HeuristicListHourse[j][7] + HeuristicListHourse[j][8] + HeuristicListHourse[j][9];
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
					{
						//if (Order == 1)
						//else
					}
				}

			}
			//when is Castle
			for (j = 0; HeuristicListCastle.size() > 0 && j < HeuristicListCastle.size(); j++)
			{
				Heuristic += HeuristicListCastle[j][0] + HeuristicListCastle[j][1] + HeuristicListCastle[j][2] + HeuristicListCastle[j][3] + HeuristicListCastle[j][4] + HeuristicListCastle[j][5] + HeuristicListCastle[j][6] + HeuristicListCastle[j][7] + HeuristicListCastle[j][8] + HeuristicListCastle[j][9];
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
					{
						//if (Order == 1)
						//else
					}
				}
			}
			//when is minister
			for (j = 0; HeuristicListMinister.size() > 0 && j < HeuristicListMinister.size(); j++)
			{
				Heuristic += HeuristicListMinister[j][0] + HeuristicListMinister[j][1] + HeuristicListMinister[j][2] + HeuristicListMinister[j][3] + HeuristicListMinister[j][4] + HeuristicListMinister[j][5] + HeuristicListMinister[j][6] + HeuristicListMinister[j][7] + HeuristicListMinister[j][8] + HeuristicListMinister[j][9];
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
					{
						//if (Order == 1)
						//else
					}
				}
			}
			//when is king
			for (j = 0; HeuristicListKing.size() > 0 && j < HeuristicListKing.size(); j++)
			{
				{
					Heuristic += HeuristicListKing[j][0] + HeuristicListKing[j][1] + HeuristicListKing[j][2] + HeuristicListKing[j][3] + HeuristicListKing[j][4] + HeuristicListKing[j][5] + HeuristicListKing[j][6] + HeuristicListKing[j][7] + HeuristicListKing[j][8] + HeuristicListKing[j][9];
					////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O1)
					{
						if (AllDraw::NumberOfLeafComputation == -1 && AllDraw::FirstTraversalTree)
						{
							//if (Order == 1)
							//else
						}
					}
				}
			}
		}
		else
		{
			BOUND = -1;
			return Heuristic;
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeper(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		//when is deeper
		if (AStarGreedy.size() > 0)
		{
			//for all deeper
			for (int k = 0; k < AStarGreedy.size(); k++)
			{
				//continue when deeper is null
				if (AStarGreedy[k] == nullptr)
				{
					continue;
				}
				////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOO)
				{
					//WHITE
					if (Order == -1)
					{
						//Repeate for Solder.
						for (int m = 0; m < AStarGreedy[k]->SodierMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperSolider(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
						}
						//Repeate for Elephant.
						for (int m = 0; m < AStarGreedy[k]->ElefantMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperElephant(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Hourse.
						for (int m = 0; m < AStarGreedy[k]->HourseMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperHourse(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Castles.
						for (int m = 0; m < AStarGreedy[k]->CastleMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperCastle(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Minstre.
						for (int m = 0; m < AStarGreedy[k]->MinisterMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperMinister(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for King.
						for (int m = 0; m < AStarGreedy[k]->KingMidle; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperKing(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
					}
					else
					{
						for (int m = AStarGreedy[k]->SodierMidle; m < AStarGreedy[k]->SodierHigh; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperSolider(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Elephant.
						for (int m = AStarGreedy[k]->ElefantMidle; m < AStarGreedy[k]->ElefantHigh; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperElephant(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Hourse.
						for (int m = AStarGreedy[k]->HourseMidle; m < AStarGreedy[k]->HourseHight; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperHourse(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Castles.
						for (int m = AStarGreedy[k]->CastleMidle; m < AStarGreedy[k]->CastleHigh; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperCastle(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for Minstre.
						for (int m = AStarGreedy[k]->MinisterMidle; m < AStarGreedy[k]->MinisterHigh; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperMinister(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
						//Repeate for King.
						for (int m = AStarGreedy[k]->KingMidle; m < AStarGreedy[k]->KingHigh; m++)
						{
							int bo = BOUND;
							int hav = HaveKilled;
							Heuristic += ReturnHeuristicCalculartorDeeperKing(k, m, iAstarGready, ii, j, Order, hav, bo);


							BOUND = bo;
							HaveKilled = hav;
						}
					}
				}
			}

		}
		BOUND = 0;
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperKing(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		if (AStarGreedy[k]->KingOnTable == nullptr || AStarGreedy[k]->KingOnTable[m] == nullptr || AStarGreedy[k]->KingOnTable[m]->KingThinking == nullptr || AStarGreedy[k]->KingOnTable[m]->KingThinking == nullptr || AStarGreedy[k]->KingOnTable[m]->KingThinking->TableListKing.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->KingOnTable[m]->KingThinking->TableListKing.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->KingOnTable[m]->KingThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperMinister(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		if (AStarGreedy[k]->MinisterOnTable == nullptr || AStarGreedy[k]->MinisterOnTable[m] == nullptr || AStarGreedy[k]->MinisterOnTable[m]->MinisterThinking == nullptr || AStarGreedy[k]->MinisterOnTable[m]->MinisterThinking == nullptr || AStarGreedy[k]->MinisterOnTable[m]->MinisterThinking->TableListMinister.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->MinisterOnTable[m]->MinisterThinking->TableListMinister.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->MinisterOnTable[m]->MinisterThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperCastle(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		if (AStarGreedy[k]->CastlesOnTable == nullptr || AStarGreedy[k]->CastlesOnTable[m] == nullptr || AStarGreedy[k]->CastlesOnTable[m]->CastleThinking == nullptr || AStarGreedy[k]->CastlesOnTable[m]->CastleThinking == nullptr || AStarGreedy[k]->CastlesOnTable[m]->CastleThinking->TableListCastle.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->CastlesOnTable[m]->CastleThinking->TableListCastle.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->CastlesOnTable[m]->CastleThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperHourse(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		if (AStarGreedy[k]->HoursesOnTable == nullptr || AStarGreedy[k]->HoursesOnTable[m] == nullptr || AStarGreedy[k]->HoursesOnTable[m]->HourseThinking == nullptr || AStarGreedy[k]->HoursesOnTable[m]->HourseThinking == nullptr || AStarGreedy[k]->HoursesOnTable[m]->HourseThinking->TableListHourse.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->HoursesOnTable[m]->HourseThinking->TableListHourse.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->HoursesOnTable[m]->HourseThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperElephant(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;

		if (AStarGreedy[k]->ElephantOnTable == nullptr || AStarGreedy[k]->ElephantOnTable[m] == nullptr || AStarGreedy[k]->ElephantOnTable[m]->ElefantThinking == nullptr || AStarGreedy[k]->ElephantOnTable[m]->ElefantThinking == nullptr || AStarGreedy[k]->ElephantOnTable[m]->ElefantThinking->TableListElefant.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->ElephantOnTable[m]->ElefantThinking->TableListElefant.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->ElephantOnTable[m]->ElefantThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}

		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorDeeperSolider(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;

		if (AStarGreedy[k]->SolderesOnTable == nullptr || AStarGreedy[k]->SolderesOnTable[m] == nullptr || AStarGreedy[k]->SolderesOnTable[m]->SoldierThinking == nullptr || AStarGreedy[k]->SolderesOnTable[m]->SoldierThinking == nullptr || AStarGreedy[k]->SolderesOnTable[m]->SoldierThinking->TableListSolder.empty())
		{
			return Heuristic;
		}
		for (int  jj = 0; jj < AStarGreedy[k]->SolderesOnTable[m]->SoldierThinking->TableListSolder.size(); jj++)
		{
			int hav = HaveKilled;
			Heuristic += AStarGreedy[k]->SolderesOnTable[m]->SoldierThinking->ReturnHeuristicCalculartor(++iAstarGready, ii, jj, Order * -1, hav);


			HaveKilled = hav;
		}

		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartorSurface(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND)
	{
		int Heuristic = 0;
		bool A = (!(IsSup[j])) || (AllDraw::AllowedSupTrue);
		if (A && j < IsSup.size() && j >= 0)
		{
			//When Solder Kind.
			if (abs(Kind) == 1 && HeuristicListSolder.size() > 0)
			{
				Heuristic += HeuristicListSolder[j][0] + HeuristicListSolder[j][1] + HeuristicListSolder[j][2] + HeuristicListSolder[j][3] + HeuristicListSolder[j][4] + HeuristicListSolder[j][5] + HeuristicListSolder[j][6] + HeuristicListSolder[j][7] + HeuristicListSolder[j][8] + HeuristicListSolder[j][9];
			}
			else
			{
			//When Elephant Kind.
			if (abs(Kind) == 2 && HeuristicListElefant.size() > 0)
			{
				Heuristic += HeuristicListElefant[j][0] + HeuristicListElefant[j][1] + HeuristicListElefant[j][2] + HeuristicListElefant[j][3] + HeuristicListElefant[j][4] + HeuristicListElefant[j][5] + HeuristicListElefant[j][6] + HeuristicListElefant[j][7] + HeuristicListElefant[j][8] + HeuristicListElefant[j][9];
			}
			else
			{
			//When Hourse Kind.
			if (abs(Kind) == 3 && HeuristicListHourse.size() > 0)
			{
				Heuristic += HeuristicListHourse[j][0] + HeuristicListHourse[j][1] + HeuristicListHourse[j][2] + HeuristicListHourse[j][3] + HeuristicListHourse[j][4] + HeuristicListHourse[j][5] + HeuristicListHourse[j][6] + HeuristicListHourse[j][7] + HeuristicListHourse[j][8] + HeuristicListHourse[j][9];
			}
			else
			{
			//When Castles Kind.
			if (abs(Kind) == 4 && HeuristicListCastle.size() > 0)
			{
				Heuristic += HeuristicListCastle[j][0] + HeuristicListCastle[j][1] + HeuristicListCastle[j][2] + HeuristicListCastle[j][3] + HeuristicListCastle[j][4] + HeuristicListCastle[j][5] + HeuristicListCastle[j][6] + HeuristicListCastle[j][7] + HeuristicListCastle[j][8] + HeuristicListCastle[j][9];
			}
			else
			{
			//When Minister Kind.
			if (abs(Kind) == 5 && HeuristicListMinister.size() > 0)
			{
				Heuristic += HeuristicListMinister[j][0] + HeuristicListMinister[j][1] + HeuristicListMinister[j][2] + HeuristicListMinister[j][3] + HeuristicListMinister[j][4] + HeuristicListMinister[j][5] + HeuristicListMinister[j][6] + HeuristicListMinister[j][7] + HeuristicListMinister[j][8] + HeuristicListMinister[j][9];
			}
			else
			{
			//When King Kind.
			if (abs(Kind) == 6 && HeuristicListKing.size() > 0)
			{
				Heuristic += HeuristicListKing[j][0] + HeuristicListKing[j][1] + HeuristicListKing[j][2] + HeuristicListKing[j][3] + HeuristicListKing[j][4] + HeuristicListKing[j][5] + HeuristicListKing[j][6] + HeuristicListKing[j][7] + HeuristicListKing[j][8] + HeuristicListKing[j][9];
			}
			}
			}
			}
			}
			}
		}
		else
		{
			if (Order == AllDraw::OrderPlateDraw)
			{
				BOUND = -1;
			}
			else
			{
				BOUND = 1;
			}
		}
		return Heuristic;
	}

	int ThinkingHybridizerRefrigitz::ReturnHeuristicCalculartor(int iAstarGready, int ii, int j, int Order, int &HaveKilled)
	{
		int BOUND = 0;
		if (iAstarGready > AllDraw::MaxAStarGreedy)
		{
			return 0;
		}
		iAstarGready++;
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Heuristic = 0;
			//when deeper there is not or level exceed
			if (AStarGreedy.empty() && iAstarGready != 0)
			{
				return 0;
			}
			NumbersOfCurrentBranchesPenalties += NumberOfPenalties;
			int DummyOrder = Order;
			//when there is deeper
			if (ii != -1)
			{
				//kiiler Heuristic determination//main deeper Heuristic
				int hav = HaveKilled;
				int bo = BOUND;
				Heuristic += ReturnHeuristicCalculartorKiller(iAstarGready, ii, j, Order, hav, bo);


				HaveKilled = hav;
				bo = BOUND;

				//main deeper Heuristic
				hav = HaveKilled;
				bo = BOUND;
				Heuristic += ReturnHeuristicCalculartorDeeper(iAstarGready, ii, j, Order, hav, bo);


				HaveKilled = hav;
				bo = BOUND;

			}
			else
			{
				//sufacive Heuristic
				int hav = HaveKilled;
				int bo = BOUND;
				Heuristic += ReturnHeuristicCalculartorSurface(iAstarGready, ii, j, Order, hav, bo);


				HaveKilled = hav;
				bo = BOUND;

			}
			Order = DummyOrder;
			/*if (BOUND < 0)
			    Heuristic = int.MinValue;
			else
			    if (BOUND > 0)
			    Heuristic = int.MaxValue;*/

			return Heuristic;
		}
	}

	bool ThinkingHybridizerRefrigitz::Scop(int i, int j, int ii, int jj, int Kind)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (i == ii && j == jj)
			{
				return false;
			}
			//Scope of index out of range.
			if (i < 0)
			{
				return false;
			}
			if (j < 0)
			{
				return false;
			}
			if (ii < 0)
			{
				return false;
			}
			if (jj < 0)
			{
				return false;
			}
			if (i > 7)
			{
				return false;
			}
			if (j > 7)
			{
				return false;
			}
			if (ii > 7)
			{
				return false;
			}
			if (jj > 7)
			{
				return false;
			}
			bool Validity = false;
			//Scope on estimation on rule movment.
			if (Kind == 1) //Sodier
			{
				if (ArrangmentsChanged)
				{
					if (Order == 1)
					{
						if (j <= jj)
						{
							return false;
						}
					}
					else
					{
						if (j >= jj)
						{
							return false;
						}
					}
				}
				else if (!ArrangmentsChanged)
				{
					if (Order == -1)
					{
						if (j <= jj)
						{
							return false;
						}
					}
					else
					{
						if (j >= jj)
						{
							return false;
						}
					}
				}
				if (abs(i - ii) <= 2 && abs(j - jj) <= 2)
				{
					Validity = true;
				}
			}
			else
			{
				if (Kind == 2) //Elephant
				{
				if (abs(i - ii) == abs(j - jj))
				{
					Validity = true;
				}
				}
			else
			{
					if (Kind == 3) //Hourse
					{
				if (abs(i - ii) == 1 && abs(j - jj) == 2)
				{
					Validity = true;
				}
				if (abs(i - ii) == 2 && abs(j - jj) == 1)
				{
					Validity = true;
				}
					}
			else
			{
						if (Kind == 4) //Castle
						{
				if ((i == ii && j != jj) || (i != ii && j == jj))
				{
					Validity = true;
				}
						}
			else
			{
							if (Kind == 5) //Minister
							{
				if (((i == ii && j != jj) || (i != ii && j == jj)) || abs(i - ii) == abs(j - jj))
				{
					Validity = true;
				}
							}
			else
			{
		  if (Kind == 6) //King
		  {
				if (abs(i - ii) <= 1 && abs(j - jj) <= 1)
				{
					Validity = true;
				}
		  }
			}
			}
			}
			}
			}

			return Validity;
		}
	}

	bool ThinkingHybridizerRefrigitz::Scop(int i, int j, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (i == ii && j == jj)
			{
				return false;
			}
			//Scope of index out of range.
			if (i < 0)
			{
				return false;
			}
			if (j < 0)
			{
				return false;
			}
			if (ii < 0)
			{
				return false;
			}
			if (jj < 0)
			{
				return false;
			}
			if (i > 7)
			{
				return false;
			}
			if (j > 7)
			{
				return false;
			}
			if (ii > 7)
			{
				return false;
			}
			if (jj > 7)
			{
				return false;
			}

			return true;
		}
	}

	int ThinkingHybridizerRefrigitz::MaxOfSixHeuristic(int *Less)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Value = -1;
			int Les = -DBL_MAX;
			for (int  i = 0; i < 6; i++)
			{
				if (Less[i] > Les)
				{
					Les = Less[i];
					Value = i;
				}
			}
			return Value;
		}
	}

	int ThinkingHybridizerRefrigitz::MinOfSixHeuristic(int *Less)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Value = -1;
			int Les = DBL_MAX;
			for (int  i = 0; i < 6; i++)
			{
				if (Less[i] < Les)
				{
					Les = Less[i];
					Value = i;
				}
			}
			return Value;
		}
	}

	void ThinkingHybridizerRefrigitz::HuMethod(int *Hu, int HeuristicAttackValue, int HeuristicMovementValue, int HeuristicSelfSupportedValue, int HeuristicReducedMovementValue, int HeuristicReducedSupport, int HeuristicReducedAttackValue, int HeuristicDistributionValue, int HeuristicKingSafe, int HeuristicFromCenter, int HeuristicKingDangour, int HeuristicCheckedMate)
	{
		Hu[0] += HeuristicAttackValue;
		Hu[1] += HeuristicMovementValue;
		Hu[2] += HeuristicSelfSupportedValue;
		Hu[3] += HeuristicReducedMovementValue;
		Hu[4] += HeuristicReducedSupport;
		Hu[5] += HeuristicReducedAttackValue;
		Hu[6] += HeuristicDistributionValue;
		Hu[7] += HeuristicKingSafe;
		Hu[8] += HeuristicFromCenter;
		Hu[9] += HeuristicKingDangour + HeuristicCheckedMate;
		return;
	}

	void ThinkingHybridizerRefrigitz::HuMethodSup(int HeuristicAttackValue, int HeuristicMovementValue, int HeuristicSelfSupportedValue, int HeuristicReducedMovementValue, int HeuristicReducedSupport, int HeuristicReducedAttackValue, int HeuristicDistributionValue, int HeuristicKingSafe, int HeuristicFromCenter, int HeuristicKingDangour, int HeuristicCheckedMate)
	{
		HeuristicAttackValueSup += HeuristicAttackValue;
		HeuristicMovementValueSup += HeuristicMovementValue;
		HeuristicSelfSupportedValueSup += HeuristicSelfSupportedValue;
		HeuristicReducedMovementValueSup += HeuristicReducedMovementValue;
		HeuristicReducedSupportSup += HeuristicReducedSupport;
		HeuristicReducedAttackValueSup += HeuristicReducedAttackValue;
		HeuristicDistributionValueSup += HeuristicDistributionValue;
		HeuristicKingSafeSup += HeuristicKingSafe;
		HeuristicFromCenterSup += HeuristicFromCenter;
		HeuristicKingDangourSup += HeuristicKingDangour + HeuristicCheckedMate;
	}

	void ThinkingHybridizerRefrigitz::HuMethodSup(int *Hu)
	{
		Hu[0] = HeuristicAttackValueSup;
		Hu[1] = HeuristicMovementValueSup;
		Hu[2] = HeuristicSelfSupportedValueSup;
		Hu[3] = HeuristicReducedMovementValueSup;
		Hu[4] = HeuristicReducedSupportSup;
		Hu[5] = HeuristicReducedAttackValueSup;
		Hu[6] = HeuristicDistributionValueSup;
		Hu[7] = HeuristicKingSafeSup;
		Hu[8] = HeuristicFromCenterSup;
		Hu[9] = HeuristicKingDangourSup;
		return;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::KingThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);


				if (!Sup)
				{
					///Add Table to List of Private.
					HitNumberKing.push_back(TableS[RowDestination][ColumnDestination]);
					////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}
				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);




				{
				// if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListKing.push_back(Hu);
						}
					}
					////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O4)
					{
						ThinkingLevel++;
						ThinkingAtRun = false;
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);


					ThinkingAtRun = false;
				}

			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;

	}

	std::wstring ThinkingHybridizerRefrigitz::CheM(int A)
	{
		std::wstring AA = L"";
		if (A <= -1 && A < 0)
		{
			AA = L"+SelfChecked ";
		}
		if (A >= 1 && A > 0)
		{
			AA = L"+EnemeyChecked ";
		}
		if (A <= -2 && A < 0)
		{
			AA = L"++SelfMate ";
		}
		if (A >= 2 && A > 0)
		{
			AA = L"++EnemeyMate ";
		}
		if (A <= -3 && A < 0)
		{
			AA = L"++SelfFinished ";
		}
		if (A >= 3 && A > 0)
		{
			AA = L"++EnemeyFinsished ";
		}
		return AA;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::MinisterThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o11 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O11)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);

				if (!Sup)
				{
					///Add Table to List of Private.
					HitNumberMinister.push_back(TableS[RowDestination][ColumnDestination]);
					////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}
				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);



				{
				// if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListMinister.push_back(Hu);
						}
					}
					////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O4)
					{
						ThinkingLevel++;
						ThinkingAtRun = false;
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();

					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);

					ThinkingAtRun = false;
				}

			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;
	}

	bool ThinkingHybridizerRefrigitz::IsPrviousMovemntIsDangrousForCurrent(int** TableS, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Dang = false;
			int BREAK = 0;
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				//.Current
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						BREAK = 0;
						if (Order == 1 && TableS[i][j] <= 0)
						{
							continue;
						}
						else
						{
							if (Order == -1 && TableS[i][j] >= 0)
							{
							continue;
							}
						}
						//Enemy
						for (int  ii = 0; ii < 8; ii++)
						{
							for (int  jj = 0; jj < 8; jj++)
							{
								BREAK = 0;
								if (Order == 1 && TableS[ii][jj] >= 0)
								{
									continue;
								}
								else
								{
									if (Order == -1 && TableS[ii][jj] <= 0)
									{
									continue;
									}
								}
								int a = 1;
								if (Order * -1 == -1)
								{
									a = -1;
								}
								bool ab = false;
								ab = Attack(CloneATable(TableS), ii, jj, i, j, a, Order * -1);


								if (ab)
								{
									BREAK = 1;
									//Current
									for (int  RowS = 0; RowS < 8; RowS++)
									{
										for (int  ColS = 0; ColS < 8; ColS++)
										{
											BREAK = 0;
											if (Order == 1 && TableS[RowS][ColS] <= 0)
											{
												continue;
											}
											else
											{
												if (Order == -1 && TableS[RowS][ColS] >= 0)
												{
												continue;
												}
											}
											a = 1;
											if (Order == -1)
											{
												a = -1;
											}
											ab = Support(CloneATable(TableS), RowS, ColS, i, j, a, Order);


											if (ab)
											{
												BREAK = 2;
												break;
											}
										}
										if (BREAK == 2)
										{
											break;
										}
									}
								}
								if (BREAK == 1)
								{
									break;
								}
							}
							if (BREAK == 1)
							{
								break;
							}
						}
						if (BREAK == 1)
						{
							break;
						}
					}
					if (BREAK == 1)
					{
						break;
					}
				}
				if (BREAK == 1)
				{
					Dang = true;
				}
			}
			return Dang;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsObjectValaubleObjectSelf(int i, int j, int Object, std::vector<int*> &ValuableSelfSupported)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = true;
			for (int k = 0; k < ValuableSelfSupported.size(); k++)
			{
				if (ValuableSelfSupported[k][0] > 0 && Object > 0)
				{
					if (abs(ValuableSelfSupported[k][0]) > abs(Object))
					{
						Is = false;
					}
				}
				else
				{
				   if (ValuableSelfSupported[k][0] < 0 && Object < 0)
				   {
					if (abs(ValuableSelfSupported[k][0]) > abs(Object))
					{
						Is = false;
					}
				   }
				}
				if (Is == false)
				{
					break;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::IsObjectValaubleObjectEnemy(int i, int j, int Object, std::vector<int*> &ValuableEnemyNotSupported)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = true;
			for (int k = 0; k < ValuableEnemyNotSupported.size(); k++)
			{
				if (abs(ValuableEnemyNotSupported[k][0]) < abs(Object))
				{
					Is = false;
					break;
				}
			}
			return Is;
		}
	}

	bool *ThinkingHybridizerRefrigitz::SomeLearningVarsCalculator(int** TableS, int ik, int jk, int iik, int jjk)
	{
		////auto o22 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O22)
		{
			int AttackCount = 0;
			bool LearningV[3];
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				////Parallel.For(0, 8, i =>
				for (int  i = 0; i < 8; i++)
				{
					if ((LearningV[0] || LearningV[1] || LearningV[2]))
					{
						continue;
					}
					////Parallel.For(0, 8, j =>
					for (int  j = 0; j < 8; j++)
					{
						if ((LearningV[0] || LearningV[1] || LearningV[2]))
						{
							continue;
						}
						////Parallel.For(0, 8, RowS =>
						for (int  RowS = 0; RowS < 8; RowS++)
						{
							if ((LearningV[0] || LearningV[1] || LearningV[2]))
							{
								continue;
							}
							////Parallel.For(0, 8, ColS =>
							for (int  ColS = 0; ColS < 8; ColS++)
							{
								if ((LearningV[0] || LearningV[1] || LearningV[2]))
								{
									continue;
								}
								{
								//Parallel.Invoke(() =>
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										if (!(LearningV[0] || LearningV[1] || LearningV[2]))
										{
											LearningV[0] = LearningV[0] || InAttackSelfThatNotSupportedAll(CloneATable(TableS), Order, color, i, j, RowS, ColS, ik, jk, iik, jjk);
										}
									}
								} //, () =>
								{
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										if ((LearningV[0] || LearningV[1] || LearningV[2]))
										{
											continue;
										}
										if (AttackCount <= 1 && (!(LearningV[0] || LearningV[1] || LearningV[2])))
										{
											AttackCount = AttackCount + IsNotSafeToMoveAenemeyToAttackMoreThanTowObject(AttackCount, CloneATable(TableS), Order, i, j, RowS, ColS); //, ii, jj, RowD, ColD
										}
										else
										{
										if (!(LearningV[0] || LearningV[1] || LearningV[2]))
										{
											LearningV[1] = true;
										}
										}
									}
								} //, () =>
								{
									////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O1)
									{
										if (!(LearningV[0] || LearningV[1] || LearningV[2]))
										{
											LearningV[2] = LearningV[2] || IsGardForCurrentMovmentsAndIsNotMovable(CloneATable(TableS), Order, color, i, j, RowS, ColS); //, ii, jj, RowD, ColD
										}
									}
								}
							}
						}
					}
				}
			}
			return LearningV;
		}
	}

	bool *ThinkingHybridizerRefrigitz::CalculateLearningVars(int Killed, int** TableS, int i, int j, int ii, int jj)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool LearningV[14];
			bool IsCurrentCanGardHighPriorityEne = bool();
			bool IsNextMovemntIsCheckOrCheckMateForCurrent = bool();
			bool IsDangerous = bool();
			bool CanKillerAnUnSupportedEnemy = bool();
			bool InDangrousUnSupported = bool();
			bool Support = bool();
			bool IsNextMovemntIsCheckOrCheckMateForEnemy = bool();
			bool IsPrviousMovemntIsDangrousForCurr = bool();
			bool PDo = bool();
			bool RDo = bool();
			bool SelfNotSupported = bool();
			bool EnemyNotSupported = bool();
			bool IsGardForCurrentMovmentsAndIsNotMova = bool();
			bool IsNotSafeToMoveAenemeyToAttackMoreThanTowObj = bool();
			bool P = bool();
			bool R = bool();
			bool IsTowValuableObjectEnemy = false;
			std::vector<int*> ValuableEnemyNotSupported = std::vector<int*>();
			std::vector<int*> ValuableSelfSupported = std::vector<int*>();
			//When true must penalty
			////auto o11 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O11)
			{
				IsPrviousMovemntIsDangrousForCurr = IsPrviousMovemntIsDangrousForCurrent(CloneATable(TableS), Order);


				//when true must penalty
				if (!IsPrviousMovemntIsDangrousForCurr)
				{
					SelfNotSupported = InAttackSelfThatNotSupported(CloneATable(TableS), Order, color, i, j, ii, jj);


				} //when true must regard
				Support = false;
				int SelfChackedMateDepth = 0;
				int EnemyCheckedMateDepth = 0;
				IsDangerous = false;
				//For All Current
				bool *LearningVars=new bool[3];
				LearningVars = SomeLearningVarsCalculator(CloneATable(TableS), ii, jj, i, j);
				////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O4)
				{
					SelfNotSupported = LearningVars[0];
					IsNotSafeToMoveAenemeyToAttackMoreThanTowObj = LearningVars[1];
					IsGardForCurrentMovmentsAndIsNotMova = LearningVars[2];
				}
				if ((!IsNextMovemntIsCheckOrCheckMateForCurrent) && (!SelfNotSupported) && (!IsPrviousMovemntIsDangrousForCurr) && (!IsGardForCurrentMovmentsAndIsNotMova) && (!IsNotSafeToMoveAenemeyToAttackMoreThanTowObj) && (!IsDangerous))
				{
					int *Is=new int[4];
					Is[0] = 0;
					Is[1] = 0;
					Is[2] = 0;
					Is[3] = 0;
					if (CurrentAStarGredyMax == 0)
					{
						int Depth = int();
						Depth = 0;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(TableS);
						int **Tab = CloneATable(TableS);
						int Ord = Order;
						int a = color;
						int Ord1 = AllDraw::OrderPlate;
						int Ord2 = AllDraw::OrderPlate * -1;
						//when is true must penalty(Superposition)
						Is = IsNextMovmentIsCheckOrCheckMateForCurrentMovment(CloneATable(Tab), Ord, a, Depth, Ord1, Ord2, true);
						//A
					}
					////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO1)
					{
						if (Is[0] >= 1)
						{
							IsNextMovemntIsCheckOrCheckMateForCurrent = true;
						}
						else
						{
							IsNextMovemntIsCheckOrCheckMateForCurrent = false;
						}
						if (Is[2] >= 1)
						{
							IsNextMovemntIsCheckOrCheckMateForEnemy = true;
						}
						else
						{
							IsNextMovemntIsCheckOrCheckMateForEnemy = false;
						}
						SelfChackedMateDepth = Is[1];
						EnemyCheckedMateDepth = Is[3];
					}
				}
				//Order Depth Consideration Constraint.
				if (IsNextMovemntIsCheckOrCheckMateForCurrent && IsNextMovemntIsCheckOrCheckMateForEnemy)
				{
					////auto oO2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO2)
					{
						if (SelfChackedMateDepth < EnemyCheckedMateDepth)
						{
							IsNextMovemntIsCheckOrCheckMateForEnemy = false;
						}
						else
						{
						if (SelfChackedMateDepth > EnemyCheckedMateDepth)
						{
							IsNextMovemntIsCheckOrCheckMateForCurrent = false;
						}
						}
					}
				}
				if ((!IsNextMovemntIsCheckOrCheckMateForCurrent) && (!SelfNotSupported) && (!IsPrviousMovemntIsDangrousForCurr) && (!IsGardForCurrentMovmentsAndIsNotMova) && (!IsNotSafeToMoveAenemeyToAttackMoreThanTowObj) && (!IsDangerous))
				{
					EnemyNotSupported = InAttackEnemyThatIsNotSupportedAll(IsTowValuableObjectEnemy, CloneATable(TableS), Order, color, i, j, ii, jj, ValuableEnemyNotSupported);


				}
				if ((!IsNextMovemntIsCheckOrCheckMateForCurrent) && (!SelfNotSupported) && (!IsPrviousMovemntIsDangrousForCurr) && (!IsGardForCurrentMovmentsAndIsNotMova) && (!IsNotSafeToMoveAenemeyToAttackMoreThanTowObj) && (!EnemyNotSupported) && (!IsDangerous))
				{
					EnemyNotSupported = InAttackEnemyThatIsNotSupported(Killed, CloneATable(TableS), Order, color, i, j, ii, jj);


				}
				if ((!IsNextMovemntIsCheckOrCheckMateForCurrent) && (!SelfNotSupported) && (!IsPrviousMovemntIsDangrousForCurr) && (!IsGardForCurrentMovmentsAndIsNotMova) && (!IsNotSafeToMoveAenemeyToAttackMoreThanTowObj) && (!EnemyNotSupported) && (!IsDangerous))
				{
					EnemyNotSupported = InAttackEnemyThatIsNotSupportedAll(IsTowValuableObjectEnemy, CloneATable(TableS), Order, color, i, j, ii, jj, ValuableEnemyNotSupported);


				}
				if (CurrentAStarGredyMax == 0 && (!IsNextMovemntIsCheckOrCheckMateForCurrent) && (!SelfNotSupported) && (!IsPrviousMovemntIsDangrousForCurr) && (!IsGardForCurrentMovmentsAndIsNotMova) && (!IsNotSafeToMoveAenemeyToAttackMoreThanTowObj) && (!EnemyNotSupported) && (!IsDangerous))
				{
					//when is true must regard.
					IsCurrentCanGardHighPriorityEne = IsCurrentCanGardHighPriorityEnemy(0, CloneATable(TableS), Order, color, i, j, ii, jj, Order);


				}
				if (SelfNotSupported || IsNextMovemntIsCheckOrCheckMateForCurrent || IsPrviousMovemntIsDangrousForCurr || IsGardForCurrentMovmentsAndIsNotMova && IsDangerous)
				{
					IsCurrentCanGardHighPriorityEne = false;
					EnemyNotSupported = false;
					IsNextMovemntIsCheckOrCheckMateForEnemy = false;
				}
				////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OO)
				{
					LearningV[0] = IsCurrentCanGardHighPriorityEne;
					LearningV[1] = IsNextMovemntIsCheckOrCheckMateForCurrent;
					LearningV[2] = IsDangerous;
					LearningV[3] = CanKillerAnUnSupportedEnemy;
					LearningV[4] = InDangrousUnSupported;
					LearningV[5] = Support;
					LearningV[6] = IsNextMovemntIsCheckOrCheckMateForEnemy;
					LearningV[7] = IsPrviousMovemntIsDangrousForCurr;
					LearningV[8] = PDo;
					LearningV[9] = RDo;
					LearningV[10] = SelfNotSupported;
					LearningV[11] = EnemyNotSupported;
					LearningV[12] = IsGardForCurrentMovmentsAndIsNotMova;
					LearningV[13] = IsNotSafeToMoveAenemeyToAttackMoreThanTowObj;
					//if (IsNextMovemntIsCheckOrCheckMateForCurrent)
					CanKillerAnUnSupportedEnemy = Support || EnemyNotSupported || IsCurrentCanGardHighPriorityEne || IsNextMovemntIsCheckOrCheckMateForEnemy || IsNextMovemntIsCheckOrCheckMateForCurrent;
					P = IsNotSafeToMoveAenemeyToAttackMoreThanTowObj || IsGardForCurrentMovmentsAndIsNotMova || IsPrviousMovemntIsDangrousForCurr || SelfNotSupported || IsDangerous || IsCurrentCanGardHighPriorityEne || IsNextMovemntIsCheckOrCheckMateForEnemy || IsNextMovemntIsCheckOrCheckMateForCurrent;
					R = CanKillerAnUnSupportedEnemy;
					InDangrousUnSupported = P && (!R);
					PDo = P & (!R);
					//B+C
					RDo = R && (!P);
				}
			}
			return LearningV;
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::CastlesThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o22 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O22)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{

				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);


				if (!Sup)
				{
					///Add Table to List of Private.
					HitNumberCastle.push_back(TableS[RowDestination][ColumnDestination]);
					////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}
				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);



				{
				//if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;

					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListCastle.push_back(Hu);
						}
						////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O4)
						{
							ThinkingLevel++;
							ThinkingAtRun = false;
						}
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);


					ThinkingAtRun = false;
				}
			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::HourseThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);

				if (!Sup)
				{
					///Add Table to List of Private.
					HitNumberHourse.push_back(TableS[RowDestination][ColumnDestination]);
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}
				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);



				{
				// if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;

					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListHourse.push_back(Hu);
						}
						////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O4)
						{
							ThinkingLevel++;
							ThinkingAtRun = false;
						}
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);

					ThinkingAtRun = false;
				}
			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ElephantThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);

				if (!Sup)
				{
					///Add Table to List of Private.
					HitNumberElefant.push_back(TableS[RowDestination][ColumnDestination]);
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}
				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);



				{
				//if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);


						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListElefant.push_back(Hu);
						}
						////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O4)
						{
							ThinkingLevel++;
							ThinkingAtRun = false;
						}
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);


					ThinkingAtRun = false;
				}
			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;
	}

	bool ThinkingHybridizerRefrigitz::EqualitTow(bool PenRegStrore, int kind)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Equality = false;
			if (kind == 1 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListSolder.size() == TableListSolder.size())
			{
				Equality = true;
			}
			else
			{
				if (kind == 2 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListElefant.size() == TableListElefant.size())
				{
				Equality = true;
				}
			else
			{
					if (kind == 3 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListHourse.size() == TableListHourse.size())
					{
				Equality = true;
					}
			else
			{
						if (kind == 4 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListCastle.size() == TableListCastle.size())
						{
				Equality = true;
						}
			else
			{
							if (kind == 5 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListMinister.size() == TableListMinister.size())
							{
				Equality = true;
							}
			else
			{
								if (kind == 6 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListKing.size() == TableListKing.size())
								{
				Equality = true;
								}
			}
			}
			}
			}
			}
			return Equality;
		}
	}

	bool ThinkingHybridizerRefrigitz::EqualitOne(QuantumAtamata* Current, int kind)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Equality = false;
			if (kind == 1 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListSolder.size() > 0 && PenaltyRegardListSolder.size() == TableListSolder.size())
			{
				Equality = true;
			}
			else
			{
				if (kind == 2 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListElefant.size() > 0 && PenaltyRegardListElefant.size() == TableListElefant.size())
				{
				Equality = true;
				}
			else
			{
					if (kind == 3 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListHourse.size() > 0 && PenaltyRegardListHourse.size() == TableListHourse.size())
					{
				Equality = true;
					}
			else
			{
			if (kind == 4 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListCastle.size() > 0 && PenaltyRegardListCastle.size() == TableListCastle.size())
			{
				Equality = true;
			}
			else
			{
						if (kind == 5 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListMinister.size() > 0 && PenaltyRegardListMinister.size() == TableListMinister.size())
						{
				Equality = true;
						}
			else
			{
								 if (kind == 6 && Current->IsPenaltyAction() != 0 && UsePenaltyRegardMechnisamT && PenaltyRegardListKing.size() > 0 && PenaltyRegardListKing.size() == TableListKing.size())
								 {
				Equality = true;
								 }
			}
			}
			}
			}
			}
			return Equality;
		}
	}

	void ThinkingHybridizerRefrigitz::AddAtList(int kind, QuantumAtamata* Current)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Adding Autamata Object to Specified List.
			if (kind == 1)
			{
				//Soldier
				PenaltyRegardListSolder.push_back(Current);
			}
			else
			{
			if (kind == 2)
			{
				//Elefant
				PenaltyRegardListElefant.push_back(Current);
			}
			else
			{
				if (kind == 3)
				{
				//Hourse
				PenaltyRegardListHourse.push_back(Current);
				}
			else
			{
					if (kind == 4)
					{
				//Castles.
				PenaltyRegardListCastle.push_back(Current);
					}
			else
			{
						if (kind == 5)
						{
				//Minister.
				PenaltyRegardListMinister.push_back(Current);
						}
			else
			{
							if (kind == 6)
							{
				//King.
				PenaltyRegardListKing.push_back(Current);
							}
			}
			}
			}
			}
			}
		}

	}

	void ThinkingHybridizerRefrigitz::eraseList(int kind)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Remove Last Atutamata Object.
			if (kind == 1)
			{
				//Soldier
				PenaltyRegardListSolder.pop_back();
			}
			else
			{
			if (kind == 2)
			{
				//Elefant
				PenaltyRegardListElefant.pop_back();
			}
			else
			{
				if (kind == 3)
				{
				//Hourse
				PenaltyRegardListHourse.pop_back();
				}
			else
			{
					if (kind == 4)
					{
				//Castles
				PenaltyRegardListCastle.pop_back();
					}
			else
			{
						if (kind == 5)
						{
				//Minister
				PenaltyRegardListMinister.pop_back();
						}
			else
			{
							if (kind == 6)
							{
				//King.
				PenaltyRegardListKing.pop_back();
							}
			}
			}
			}
			}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::PenaltyMechanisam(bool &RETURN, int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int &CheckedM, int Killed, bool Before, int kind, int** TableS, int ii, int jj, QuantumAtamata* Current, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int i, int j, bool Castle_Renamed)
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			RETURN = false;
			////auto o3 = new Object();
			ChessRules *AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TableS[ii][jj], CloneATable(TableS), Order, ii, jj);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				if (!UsePenaltyRegardMechnisamT || (GoldenFinished))
				{
					RETURN = true;
					AddAtList(kind, Current);

				}
				//Consideration to go to Check.  
				//if (!UsePenaltyRegardMechnisamT)
				AA->CheckMate(CloneATable(TableS), Order);
				{
					if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateBLACK)
					{
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							IsThereMateOfEnemy.push_back(true);
							IsThereCheckOfSelf.push_back(false);
							IsThereCheckOfEnemy.push_back(false);
							IsThereMateOfSelf.push_back(false);
							KishEnemy.push_back(true);
							KishSelf.push_back(false);
							FoundFirstMating++;
							if (Order == AllDraw::OrderPlateDraw)
							{
								WinChiled.push_back(2);
								LoseChiled.push_back(0);
								WinOcuuredatChiled = 2;
							}
							if (!(!UsePenaltyRegardMechnisamT || (GoldenFinished)))
							{
								Current->LearningAlgorithmRegard();
								eraseList(kind);
								AddAtList(kind, Current);
							}
							CheckedM = 3;
							RETURN = true;
							return;
						}

					}
					if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateWHITE)
					{
						DoEnemySelf = false;
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							IsThereMateOfEnemy.push_back(true);
							IsThereCheckOfSelf.push_back(false);
							IsThereCheckOfEnemy.push_back(false);
							IsThereMateOfSelf.push_back(false);
							KishEnemy.push_back(true);
							KishSelf.push_back(false);
							FoundFirstMating++;
							if (Order == AllDraw::OrderPlateDraw)
							{
								WinChiled.push_back(2);
								LoseChiled.push_back(0);
								WinOcuuredatChiled = 2;
							}
							if (!(!UsePenaltyRegardMechnisamT || (GoldenFinished)))
							{
								eraseList(kind);
								Current->LearningAlgorithmRegard();
								AddAtList(kind, Current);
							}
							CheckedM = 3;
							RETURN = true;
							return;
						}
					}
					if ((AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)) //(AllDraw.OrderPlateDraw == -1 && AA->CheckBLACK)||
					{
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							IsThereMateOfEnemy.push_back(false);
							IsThereMateOfSelf.push_back(true);
							IsThereCheckOfSelf.push_back(false);
							IsThereCheckOfEnemy.push_back(false);
							KishEnemy.push_back(false);
							KishSelf.push_back(true);
							FoundFirstSelfMating++;
							if (Order == AllDraw::OrderPlateDraw)
							{
								WinChiled.push_back(0);
								LoseChiled.push_back(-2);
								LoseOcuuredatChiled[0] = -2;
							}
							if (!(!UsePenaltyRegardMechnisamT || (GoldenFinished)))
							{
								Current->LearningAlgorithmPenalty();
								eraseList(kind);
								AddAtList(kind, Current);
							}
							CheckedM = 3;
							RETURN = true;
							return;
						}

					}
					if ((AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)) //(AllDraw.OrderPlateDraw == 1 && AA->CheckWHITE) ||
					{
						DoEnemySelf = false;
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							IsThereMateOfEnemy.push_back(false);
							IsThereMateOfSelf.push_back(true);
							IsThereCheckOfSelf.push_back(false);
							IsThereCheckOfEnemy.push_back(false);
							KishEnemy.push_back(false);
							KishSelf.push_back(true);
							FoundFirstSelfMating++;
							if (Order == AllDraw::OrderPlateDraw)
							{
								WinChiled.push_back(0);
								LoseChiled.push_back(-2);
								LoseOcuuredatChiled[0] = -2;
							}
							if (!(!UsePenaltyRegardMechnisamT || (GoldenFinished)))
							{
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							CheckedM = 3;
							RETURN = true;
							return;
						}
					}
					/*  if (Order == 1 && AA->CheckMateBLACK)
					  {
					      IsThereCheckOfEnemy.Add(true);
					      IsThereMateOfEnemy.Add(false);
					      IsThereMateOfSelf.Add(false);
					      IsThereCheckOfSelf.Add(false);
					      KishEnemy.Add(true);
					      KishSelf.Add(false);
					      DoEnemySelf = false;
					      EnemyCheckMateActionsString = true;
					      CheckedM = -2;
					  }
					  if (Order == -1 && AA->CheckMateWHITE)
					  {
	
					      IsThereCheckOfEnemy.Add(true);
					      IsThereMateOfEnemy.Add(false);
					      IsThereMateOfSelf.Add(false);
					      IsThereCheckOfSelf.Add(false);
					      KishEnemy.Add(true);
					      KishSelf.Add(false);
					      DoEnemySelf = false;
					      EnemyCheckMateActionsString = true;
					      CheckedM = -2;
					  }
					  if (Order == 1 && AA->CheckMateWHITE)
					  {
					      IsThereCheckOfEnemy.Add(false);
					      IsThereMateOfEnemy.Add(false);
					      IsThereMateOfSelf.Add(true);
					      IsThereCheckOfSelf.Add(false);
					      KishEnemy.Add(false);
					      KishSelf.Add(true);
					      EnemyCheckMateActionsString = false;
					      CheckedM = -2;
					  }
					  if (Order == -1 && AA->CheckMateBLACK)
					  {
					      IsThereCheckOfEnemy.Add(false);
					      IsThereMateOfEnemy.Add(false);
					      IsThereMateOfSelf.Add(true);
					      IsThereCheckOfSelf.Add(false);
					      KishEnemy.Add(false);
					      KishSelf.Add(true);
					      EnemyCheckMateActionsString = false;
					      CheckedM = -2;
					  }
					*/
					if (AllDraw::OrderPlateDraw == 1 && AA->CheckWHITE)
					{
						IsThereCheckOfEnemy.push_back(false);
						IsThereMateOfEnemy.push_back(false);
						IsThereMateOfSelf.push_back(false);
						IsThereCheckOfSelf.push_back(false);
						KishSelf.push_back(true);
						KishEnemy.push_back(false);

						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							NumberOfPenalties++;
						}
						CheckedM = -1;
					}
					else
					{
						if (AllDraw::OrderPlateDraw == -1 && AA->CheckBLACK)
						{
						IsThereCheckOfEnemy.push_back(false);
						IsThereMateOfEnemy.push_back(false);
						IsThereMateOfSelf.push_back(false);
						IsThereCheckOfSelf.push_back(false);
						KishSelf.push_back(true);
						KishEnemy.push_back(false);
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							NumberOfPenalties++;
						}
						CheckedM = -1;
						}
					}
					if (AllDraw::OrderPlateDraw == 1 && AA->CheckBLACK)
					{
						IsThereCheckOfEnemy.push_back(false);
						IsThereMateOfEnemy.push_back(false);
						IsThereMateOfSelf.push_back(false);
						IsThereCheckOfSelf.push_back(false);
						KishEnemy.push_back(true);
						KishSelf.push_back(false);
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							NumberOfPenalties++;
						}
						CheckedM = -1;
					}
					if (AllDraw::OrderPlateDraw == -1 && AA->CheckWHITE)
					{
						IsThereCheckOfEnemy.push_back(false);
						IsThereMateOfEnemy.push_back(false);
						IsThereMateOfSelf.push_back(false);
						IsThereCheckOfSelf.push_back(false);
						KishEnemy.push_back(true);
						KishSelf.push_back(false);
						////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A)
						{
							NumberOfPenalties++;
						}
						CheckedM = -1;
					}
					{
					//if (FoundFirstSelfMating > 0)
					}

				}
				if (CheckedM != 3)
				{
					WinChiled.push_back(0);
					LoseChiled.push_back(0);
				}
				if (CheckedM != -2 && CheckedM != -1)
				{
					IsThereCheckOfEnemy.push_back(false);
					IsThereMateOfEnemy.push_back(false);
					IsThereMateOfSelf.push_back(false);
					IsThereCheckOfSelf.push_back(false);
					KishEnemy.push_back(false);
					KishSelf.push_back(false);
				}
				if (RETURN)
				{
					return;
				}
				if (AllDraw::OrderPlateDraw != Order)
				{
					return;
				}

			}
			//Initiate Local Variables.
			bool IsCurrentCanGardHighPriorityEne = bool();
			bool IsNextMovemntIsCheckOrCheckMateForCurrent = bool();
			bool IsNextMovemntIsCheckOrCheckMateForEnemy = bool();
			bool IsDangerous = bool();
			bool CanKillerAnUnSupportedEnemy = bool();
			bool InDangrousUnSupported = bool();
			bool Support = bool();
			bool IsPrviousMovemntIsDangrousForCurr = bool();
			bool PDo = bool(), RDo = bool();
			bool SelfNotSupported = bool();
			bool EnemyNotSupported = bool();
			bool IsGardForCurrentMovmentsAndIsNotMova = bool();
			bool IsNotSafeToMoveAenemeyToAttackMoreThanTowObj = bool();
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: bool* LearningV = nullptr;
			bool *LearningV = nullptr;
			//Mechanisam of Regrad.  
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				if (kind == 1 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListSolder.size() > 0 && PenaltyRegardListSolder.size() == TableListSolder.size())
				{
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


				}
				else
				{
				 if (kind == 2 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListElefant.size() > 0 && PenaltyRegardListElefant.size() == TableListElefant.size())
				 {
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


				 }
				else
				{
					if (kind == 3 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListHourse.size() > 0 && PenaltyRegardListHourse.size() == TableListHourse.size())
					{
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


					}
				else
				{
					if (kind == 4 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListCastle.size() > 0 && PenaltyRegardListCastle.size() == TableListCastle.size())
					{
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


					}
				else
				{
						if (kind == 5 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListMinister.size() > 0 && PenaltyRegardListMinister.size() == TableListMinister.size())
						{
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


						}
				else
				{
							if (kind == 6 && PenRegStrore && UsePenaltyRegardMechnisamT && PenaltyRegardListKing.size() > 0 && PenaltyRegardListKing.size() == TableListKing.size())
							{
					LearningV = CalculateLearningVars(Killed, CloneATable(TableS), ii, jj, i, j);


							}
				}
				}
				}
				}
				}
			}
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				IsCurrentCanGardHighPriorityEne = LearningV[0];
				IsNextMovemntIsCheckOrCheckMateForCurrent = LearningV[1];
				IsDangerous = LearningV[2];
				CanKillerAnUnSupportedEnemy = LearningV[3];
				InDangrousUnSupported = LearningV[4];
				Support = LearningV[5];
				IsNextMovemntIsCheckOrCheckMateForEnemy = LearningV[6];
				IsPrviousMovemntIsDangrousForCurr = LearningV[7];
				PDo = LearningV[8];
				RDo = LearningV[9];
				SelfNotSupported = LearningV[10];
				EnemyNotSupported = LearningV[11];
				IsGardForCurrentMovmentsAndIsNotMova = LearningV[12];
				IsNotSafeToMoveAenemeyToAttackMoreThanTowObj = LearningV[13];
			}
			//Consideration of Itterative Movments to ignore.
			//Operation of Penalty Regard Mechanisam on Check and mate speciffically.
			bool Equality = EqualitOne(Current, kind);
			////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O4)
			{
				if (Equality)
				{
					ChessRules *A = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TableS[ii][jj], CloneATable(TableS), Order, Row, Column);
					if (A->Check(CloneATable(TableS), Order))
					{
						if (Order == 1 && (A->CheckWHITE))
						{
							NumberOfPenalties++;
							Current->LearningAlgorithmPenalty();
						}
						else
						{
							if (Order == -1 && (A->CheckBLACK))
							{
							NumberOfPenalties++;
							Current->LearningAlgorithmPenalty();
							}
						}
						AddAtList(kind, Current);
					}
					else
					{
						if (IsCurrentStateIsDangreousForCurrentOrder(CloneATable(TableS), Order, color, i, j) && DoEnemySelf)
						{
							NumberOfPenalties++;
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
						}
						else
						{
							AddAtList(kind, Current);
						}
					}
					//When There is Penalty or Regard.To Side can not be equal.
					if (PDo || RDo)
					{
						//Penalty.
						if (PDo)
						{
							////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OO1)
							{
								for (int  ik = 0; ik < abs(TableS[i][j]); ik++)
								{
									LearniningTable->LearningAlgorithmPenaltyNet(0, jj);
								}
							}
							//When previous Move of Enemy goes to Dangoure Current Object.
							if (IsPrviousMovemntIsDangrousForCurr && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							//For Not Suppored In Attacked.
							if (SelfNotSupported && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							//When Current Move Dos,'t Supporte.
							//For Ocuuring in Enemy CheckMate.
							if (SelfNotSupported && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsGardForCurrentMovmentsAndIsNotMova && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsNotSafeToMoveAenemeyToAttackMoreThanTowObj && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsDangerous && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}

							if (EnemyNotSupported && Current->IsPenaltyAction() != 0 && Current->IsRewardAction() != 1)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmRegard();
								AddAtList(kind, Current);
							}

						}
						else if (RDo)
						{
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								for (int  ik = 0; ik < abs(TableS[i][j]); ik++)
								{
									LearniningTable->LearningAlgorithmRegardNet(0, jj);
								}
							}
							if (SelfNotSupported && Current->IsPenaltyAction() != 0)
							{
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsGardForCurrentMovmentsAndIsNotMova && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsNotSafeToMoveAenemeyToAttackMoreThanTowObj && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (IsDangerous && Current->IsPenaltyAction() != 0)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmPenalty();
								AddAtList(kind, Current);
							}
							if (EnemyNotSupported && Current->IsPenaltyAction() != 0 && Current->IsRewardAction() != 1)
							{
								NumberOfPenalties++;
								eraseList(kind);
								Current->LearningAlgorithmRegard();
								AddAtList(kind, Current);
							}

							if (IsCurrentCanGardHighPriorityEne && Current->IsPenaltyAction() != 0 && Current->IsRewardAction() != 1)
							{
								eraseList(kind);
								Current->LearningAlgorithmRegard();
								AddAtList(kind, Current);
							}
							//For Ocuuring Enemy Garding Objects.
							if (Support && Current->IsPenaltyAction() != 0 && Current->IsRewardAction() != 1)
							{
								eraseList(kind);
								Current->LearningAlgorithmRegard();
								AddAtList(kind, Current);
							}
						}

					}
					else
					{
						//#pragma warning disable CS0219 // The variable 'Added' is assigned but its value is never used
	#pragma warning disable CS0219 // The variable 'Added' is assigned but its value is never used
						bool Added = false;
	#pragma warning restore CS0219 // The variable 'Added' is assigned but its value is never used
						//#pragma warning restore CS0219 // The variable 'Added' is assigned but its value is never used
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{
							for (int  ik = 0; ik < abs(TableS[i][j]); ik++)
							{
								LearniningTable->LearningAlgorithmRegardNet(0, jj);
								LearniningTable->LearningAlgorithmPenaltyNet(0, jj);
							}
						}
						if (IsNextMovemntIsCheckOrCheckMateForCurrent && Current->IsPenaltyAction() != 0)
						{
							NumberOfPenalties++;
							eraseList(kind);
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
							Added = true;
						}
						if (SelfNotSupported && Current->IsPenaltyAction() != 0)
						{
							eraseList(kind);
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
							Added = true;
						}
						if (IsGardForCurrentMovmentsAndIsNotMova && Current->IsPenaltyAction() != 0)
						{
							NumberOfPenalties++;
							eraseList(kind);
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
							Added = true;
						}
						if (IsNotSafeToMoveAenemeyToAttackMoreThanTowObj && Current->IsPenaltyAction() != 0)
						{
							NumberOfPenalties++;
							eraseList(kind);
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
							Added = true;
						}
						if (IsDangerous && Current->IsPenaltyAction() != 0)
						{
							NumberOfPenalties++;
							eraseList(kind);
							Current->LearningAlgorithmPenalty();
							AddAtList(kind, Current);
							Added = true;
						}
						if (IsNextMovemntIsCheckOrCheckMateForEnemy && Current->IsPenaltyAction() != 0)
						{
							eraseList(kind);
							Current->LearningAlgorithmRegard();
							AddAtList(kind, Current);
							Added = true;
						}
						if (IsCurrentCanGardHighPriorityEne && Current->IsPenaltyAction() != 0)
						{
							eraseList(kind);
							Current->LearningAlgorithmRegard();
							AddAtList(kind, Current);
							Added = true;
						}
						if (EnemyNotSupported && Current->IsPenaltyAction() != 0 && Current->IsRewardAction() != 1)
						{
							NumberOfPenalties++;
							eraseList(kind);
							Current->LearningAlgorithmRegard();
							AddAtList(kind, Current);
							Added = true;
						}
					}
				}
			}
			return;
		}
	}

	void ThinkingHybridizerRefrigitz::SoldierConversion(ThingsConverter *&t, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, int** TableS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			t->ConvertOperation(static_cast<int>(RowSource), static_cast<int>(ColumnSource), color, CloneATable(TableS), Order, false, 0);
			int **TableCon; *TableCon = new int[8]; for (int b = 0; b < 8; b++)TableCon[b] = new int[8];

			if (t->Convert)
			{
				TableS[RowSource][ColumnSource] = 0;
				if (t->ConvertedToMinister)
				{
					TableS[RowDestination][ColumnDestination] = 5;
				}
				else if (t->ConvertedToCastle)
				{
					TableS[RowDestination][ColumnDestination] = 4;
				}
				else if (t->ConvertedToHourse)
				{
					TableS[RowDestination][ColumnDestination] = 3;
				}
				else if (t->ConvertedToElefant)
				{
					TableS[RowDestination][ColumnDestination] = 2;
				}
				if (Order == -1)
				{
					TableS[RowDestination][ColumnDestination] *= -1;
				}

			}
		}
	}

	int ThinkingHybridizerRefrigitz::KilledBool(int row1, int col1, int row2, int col2, int** tab)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (tab[row1][col1] != 0 && tab[row2][col2] != 0)
			{
				if (tab[row2][col2] > 0)
				{
					return 1;
				}
				if (tab[row2][col2] < 0)
				{
					return -1;
				}
			}
			return 0;
		}
	}

	void ThinkingHybridizerRefrigitz::SupMethod(int** TableS, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, bool &Sup)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (TableS[RowDestination][ColumnDestination] > 0 && TableS[RowSource][ColumnSource] > 0)
			{
				IsSup.push_back(true);
				IsSupHu.push_back(true);
				Sup = true;
			}
			else
			{
				  if (TableS[RowDestination][ColumnDestination] < 0 && TableS[RowSource][ColumnSource] < 0)
				  {
				IsSup.push_back(true);
				IsSupHu.push_back(true);
				Sup = true;
				  }
			else
			{
				IsSup.push_back(false);
				IsSupHu.push_back(false);
				Sup = false;
			}
			}
		}
	}

	void ThinkingHybridizerRefrigitz::KilledMethod(int &Killed, bool Sup, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, int** TableS, ThingsConverter *t = nullptr)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			Killed = 0;
			if (!Sup)
			{
				if (t != nullptr)
				{
					if ((!t->Convert))
					{
						////auto a2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (A2)
						{
							MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1);
							Killed = TableConst[RowDestination][ColumnDestination];
							TableS[RowDestination][ColumnDestination] = TableS[RowSource][ColumnSource];
							TableS[RowSource][ColumnSource] = 0;
						}
					}
					else
					{
						int con = 1;
						if (t->ConvertedToMinister)
						{
							con = 5;
						}
						else
						{
						if (t->ConvertedToCastle)
						{
							con = 4;
						}
						else
						{
						if (t->ConvertedToHourse)
						{
							con = 3;
						}
						else
						{
						if (t->ConvertedToElefant)
						{
							con = 2;
						}
						}
						}
						}

						MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, con);
						Killed = TableConst[RowDestination][ColumnDestination];
						TableS[RowDestination][ColumnDestination] = (abs(TableS[RowSource][ColumnSource]) / TableS[RowSource][ColumnSource]) * con;
						TableS[RowSource][ColumnSource] = 0;
					}
				}
				else
				{
					////auto a2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A2)
					{
						MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1);
						Killed = TableConst[RowDestination][ColumnDestination];
						TableS[RowDestination][ColumnDestination] = TableS[RowSource][ColumnSource];
						TableS[RowSource][ColumnSource] = 0;
					}
				}
			}
			KillerAtThinking.push_back(KilledBool(RowSource, ColumnSource, RowDestination, ColumnDestination, TableS));
			return;
		}
	}

	void ThinkingHybridizerRefrigitz::ObjectIndexes(int Kind, bool Sup, int RowDestination, int ColumnDestination, int** TableS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!Sup)
			{
				if (Kind == 1)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnSoldier.push_back(AS);

						TableListSolder.push_back(CloneATable(TableS));
						IndexSoldier++;
					}
				}
				else
				{
				if (Kind == 2)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnElefant.push_back(AS);

						TableListElefant.push_back(CloneATable(TableS));
						IndexElefant++;
					}
				}
				else
				{
				if (Kind == 3)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnHourse.push_back(AS);

						TableListHourse.push_back(CloneATable(TableS));
						IndexHourse++;
					}
				}
				else
				{
				if (Kind == 4)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnCastle.push_back(AS);

						TableListCastle.push_back(CloneATable(TableS));
						IndexCastle++;
					}
				}
				}
				}
				}
				if (Kind == 5)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnMinister.push_back(AS);

						TableListMinister.push_back(CloneATable(TableS));
						IndexMinister++;
					}
				}
				else
				{
				if (Kind == 6)
				{
					////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A4)
					{
						int AS[2];
						AS[0] = RowDestination;
						AS[1] = ColumnDestination;
						RowColumnKing.push_back(AS);

						TableListKing.push_back(CloneATable(TableS));
						IndexKing++;
					}
				}
				}
			}
		}
	}

	void ThinkingHybridizerRefrigitz::HeuristicInsertion(int Kind, int RowDestination, int ColumnDestination, int** TableS, int *Hu)
	{
		////auto a4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (A4)
		{
			if (Kind == 1)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnSoldier.push_back(AS);

				TableListSolder.push_back(CloneATable(TableS));
				IndexSoldier++;
				HeuristicListSolder.push_back(Hu);
				HitNumberSoldier.push_back(TableS[RowDestination][ColumnDestination]);
			}
			else
			{
			if (Kind == 2)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnElefant.push_back(AS);

				TableListElefant.push_back(CloneATable(TableS));
				IndexElefant++;
				HeuristicListElefant.push_back(Hu);
				HitNumberElefant.push_back(TableS[RowDestination][ColumnDestination]);
			}
			else
			{
			if (Kind == 3)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnHourse.push_back(AS);

				TableListHourse.push_back(CloneATable(TableS));
				IndexHourse++;
				HeuristicListHourse.push_back(Hu);
				HitNumberHourse.push_back(TableS[RowDestination][ColumnDestination]);
			}
			else
			{
			if (Kind == 4)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnCastle.push_back(AS);

				TableListCastle.push_back(CloneATable(TableS));
				IndexCastle++;
				HeuristicListCastle.push_back(Hu);
				HitNumberCastle.push_back(TableS[RowDestination][ColumnDestination]);
			}
			else
			{
			if (Kind == 5)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnMinister.push_back(AS);

				TableListMinister.push_back(CloneATable(TableS));
				IndexSoldier++;
				HeuristicListMinister.push_back(Hu);
				HitNumberMinister.push_back(TableS[RowDestination][ColumnDestination]);

			}
			else
			{
			if (Kind == 6)
			{
				int AS[2];
				AS[0] = RowDestination;
				AS[1] = ColumnDestination;
				RowColumnKing.push_back(AS);

				TableListKing.push_back(CloneATable(TableS));
				IndexKing++;
				HeuristicListKing.push_back(Hu);
				HitNumberKing.push_back(TableS[RowDestination][ColumnDestination]);
			}
			}
			}
			}
			}
			}
		}
	}

	bool ThinkingHybridizerRefrigitz::HybridizerRefrigitzRuleThinking(int** TableS, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			return (new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TableS[RowSource][ColumnSource], CloneATable(TableS), Order, RowSource, ColumnSource))->Rules(RowSource, ColumnSource, RowDestination, ColumnDestination, color, TableS[RowSource][ColumnSource], false);
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::SolderThinkingHybridizerRefrigitz(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			///When There is Movments.
			bool ab = false;
			ab = HybridizerRefrigitzRuleThinking(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination);


			if (ab)
			{
				ThingsConverter *t = new ThingsConverter(ArrangmentsChanged, RowSource, ColumnSource, color, CloneATable(TableS), Order, false, 0);
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				ThinkingAtRun = true;
				int CheckedM = 0;
				bool PenaltyVCar = false;
				bool Sup = false;
				SupMethod(CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, Sup);


				if (!Sup)
				{
					SoldierConversion(t, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS);

					///Add Table to List of Private.
					HitNumberSoldier.push_back(TableS[RowDestination][ColumnDestination]);
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						ThinkingRun = true;
					}
				}
				///Predict Heuristic.
				////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A1)
				{
					if (!Sup)
					{
						NumbersOfAllNode++;
					}
				}

				int Killed = 0;
				KilledMethod(Killed, Sup, RowSource, ColumnSource, RowDestination, ColumnDestination, TableS, t);


				{
				//if (!Sup)
					////auto a3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A3)
					{
						PenaltyVCar = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
				///Store of Indexes Changes and Table in specific List.
				ObjectIndexes(Kind, Sup, RowDestination, ColumnDestination, TableS);

				///Wehn Predict of Operation Do operate a Predict of this movments.
				////auto a5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (A5)
				{
					//Caused this for Stachostic results.
					if (!Sup)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;

					}
				}
				//Calculate Heuristic and Add to List and Cal Syntax.
				if (!Sup)
				{
					//std::wstring H = L"";
					////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (A6)
					{
						AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
						int Hu[10];
						//if (!(IsSup[j]))
						{
							//if (IgnoreFromCheckandMateHeuristic)

							HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
							//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
							HeuristicListSolder.push_back(Hu);
						}
					}
					////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O4)
					{
						ThinkingLevel++;
						ThinkingAtRun = false;
					}
				}
				else
				{
					HuMethodSup(HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

					int Hu[10];
					HuMethodSup(Hu);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
					//std::wstring //H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
					HeuristicInsertion(Kind, RowDestination, ColumnDestination, CloneATable(TableS), Hu);


					ThinkingAtRun = false;
				}

			}
			else
			{
				MovableAllObjectsListMethos(CloneATable(TableS), true, RowSource, ColumnSource, RowDestination, ColumnDestination, 1, -1);
			}
		}
		ThinkingAtRun = false;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::CastleThinkingBLACK(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			ThinkingAtRun = true;
			int CheckedM = 0;
			bool PenaltyVCar = false;
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//When is BLACK Castles King.

			if (TableS[RowDestination][ColumnDestination] > 0 && TableS[RowSource][ColumnSource] > 0)
			{
				IsSup.push_back(true);
				IsSupHu.push_back(true);
			}
			else
			{
		 if (TableS[RowDestination][ColumnDestination] < 0 && TableS[RowSource][ColumnSource] < 0)
		 {
				IsSup.push_back(true);
				IsSupHu.push_back(true);
		 }
			else
			{
				IsSup.push_back(false);
				IsSupHu.push_back(false);
			}
			}
			//Calcuilate Heuristic Before Movment.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				ThinkingRun = true;
			}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;
			////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (A)
			{
				NumbersOfAllNode++;
			}
			int Killed = 0;
			if (RowDestination < RowSource)
			{
				TableS[RowSource - 1][ColumnDestination] = -4;
				TableS[RowSource - 2][ColumnDestination] = -6;
				TableS[RowSource][ColumnSource] = 0;

			}
			else
			{
				TableS[RowSource + 1][ColumnDestination] = -4;
				TableS[RowSource + 2][ColumnDestination] = -6;
				TableS[RowSource][ColumnSource] = 0;

			}
			PenaltyVCar = false;
			TmpL = LoseOcuuredatChiled;
			TmpW = WinOcuuredatChiled;
			PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;
			//Store Movments Items. 
			int AS[2];
			AS[0] = RowDestination;
			AS[1] = ColumnDestination;
			RowColumnKing.push_back(AS);
			TableListKing.push_back(CloneATable(TableS));
			IndexKing++;
			//Calculate Heuristic Sumation and Store in Specific List.
			AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
			int Hu[10];
			//std::wstring H = L"";
			////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (A6)
			{
				//if (IgnoreFromCheckandMateHeuristic)

				HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
				//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
				HeuristicListKing.push_back(Hu);
			}
			Castle_Renamed = true;
			////auto o7 = new Object();
			SetObjectNumbersInList(TableS);
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O7)
			{
				if (RowDestination < RowSource)
				{
					if (Order == 1)
					{
						//else
						ThinkingLevel++;
					}
				}
				else
				{
					if (Order == 1)
					{
						//else
						ThinkingLevel++;
					}
				}

				ThinkingAtRun = false;
			}
		}
		ThinkingAtRun = false;

	}

	int ThinkingHybridizerRefrigitz::HeuristicBetterSpace(int** TableSS, int colorS, int colorE, int OrderS, int OrderE)
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			int HA = 0;
			int SpaceSelf = 0, SpaceEnemy = 0;
			for (int RowS = 0; RowS < 8; RowS++)
			{
				for (int ColS = 0; ColS < 8; ColS++)
				{
					for (int RowD = 0; RowD < 8; RowD++)
					{
						for (int ColD = 0; ColD < 8; ColD++)
						{
							if ((Order == 1 && TableSS[RowS][ColS] > 0) || (Order == -1 && TableSS[RowS][ColS] < 0))
							{
								if (Attack(CloneATable(TableSS), RowS, ColS, RowD, ColD, colorS, OrderS))
								{
									SpaceSelf++;
								}
							}
							if ((Order == 1 && TableSS[RowD][ColD] < 0) || (Order == -1 && TableSS[RowD][ColD] > 0))
							{
								if (Attack(CloneATable(TableSS), RowD, ColD, RowS, ColS, colorE, OrderE))
								{
									SpaceEnemy++;
								}
							}
						}
					}
				}
			}
			if (SpaceSelf > SpaceEnemy)
			{
				HA = RationalRegard;
			}
			else
			{
				if (SpaceSelf < SpaceEnemy)
				{
				HA = RationalPenalty;
				}
			}
			return HA;
		}
	}

	bool ThinkingHybridizerRefrigitz::SubOfHeuristicAllIsPositive(int *Heuristic)
	{
		bool Is = true;
		if (Heuristic[0] + Heuristic[1] + Heuristic[2] + Heuristic[3] + Heuristic[4] + Heuristic[5] > 0)
		{
			Is = true;
		}
		else
		{
			Is = false;
		}
		return Is;
	}

	int *ThinkingHybridizerRefrigitz::CalculateHeuristicsParallel(bool Before, int Killed, int** TableS, int RowS, int ColS, int RowD, int ColD, int color)
	{
		int hu[15];
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* Heuristic = nullptr;
			int *Heuristic = nullptr;
			int *Exchange=new int[3];
			int HeuristicRemain[6];

			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableSS = CloneATable(TableS);
				int **TableSS = CloneATable(TableS);
				int RoS = RowS, CoS = ColS, RoD = RowD, CoD = ColD;
				Heuristic = HeuristicAll(Before, Killed, TableSS, color, Order);



				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				Exchange = HeuristicExchange(Before, Killed, TableSS, color, Order, RowS, ColS, RowD, ColD);






				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				HeuristicRemain[0] = HeuristicCheckAndCheckMate(RoS, CoS, RoD, CoD, TableSS, color); //, ref HeuristicReducedMovementValue



				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				HeuristicRemain[1] = HeuristicDistribution(Before, TableSS, Order, color, RowS, ColS, RowD, ColD); //, ref HeuristicDistributionValue



				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				HeuristicRemain[2] = HeuristicKingSafety(TableSS, Order, color, CurrentAStarGredyMax, RoS, CoS, RoD, CoD); //, ref HeuristicKingSafe



				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				HeuristicRemain[3] = HeuristicKingPreventionOfCheckedAtBegin(TableSS, Order, color, CurrentAStarGredyMax, RoS, CoS, RoD, CoD); //, ref HeuristicKingSafe



				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				HeuristicRemain[4] = HeuristicObjectAtCenterAndPawnAttackTraversalObjectsAndDangourForEnemy(TableSS, color, Order, RoS, CoS, RoD, CoD);


				if (!Scop(RowS, ColS, RowD, ColD, Kind))
				{
					return hu;
				}

				TableSS = CloneATable(TableS);
				RoS = RowS;
				CoS = ColS;
				RoD = RowD;
				CoD = ColD;
				int colorE = 1;
				if (Order == -1)
				{
					colorE = 1;
				}
				else
				{
					colorE = -1;
				}
				HeuristicRemain[5] = HeuristicBetterSpace(TableSS, color, colorE, Order, Order * -1);


			}

			//Central control befor attack
			bool A = (Heuristic[1] > 0);
			bool B = (HeuristicRemain[4] > 0);
			if (A || (!B))
			{
				Heuristic[1] = 0;
			}
			for (int i = 0; i < 6; i++)
			{
				hu[i] = Heuristic[i];
			}
			for (int i = 6; i < 12; i++)
			{
				hu[i] = HeuristicRemain[i - 6];
			}
			for (int i = 12; i < 15; i++)
			{
				hu[i] = Exchange[i - 12];
			}
			return hu;
		}
	}

	void ThinkingHybridizerRefrigitz::SetSupHuTrue()
	{
		IsSupHu[IsSupHu.size() - 1] = true;
	}

	void ThinkingHybridizerRefrigitz::ClearSupHuTrue()
	{
		if (IsSup[IsSup.size() - 1] != true)
		{
			IsSupHu[IsSupHu.size() - 1] = false;
			IsSup[IsSup.size() - 1] = false;
		}
	}

	bool ThinkingHybridizerRefrigitz::DisturbeOnHugeTraversalExchangePrevention(bool Before, int** TableS, int Order)
	{
		bool Is = false;
		if (!Before)
		{
			if (HeuristicAllReducedAttackedMidel > 0 && HeuristicAllReducedAttackedMidel < HeuristicAllReducedAttacked.size())
			{
				for (int i = HeuristicAllReducedAttackedMidel; i < HeuristicAllReducedAttacked.size(); i++)
				{
					if (Order == 1)
					{
						if (((abs(TableS[HeuristicAllReducedAttacked[i][2]][HeuristicAllReducedAttacked[i][3]]) > abs(TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]]))) && TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]] < 0)
						{
						//|| (System.Math.Abs(TableS[HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]]) > 0 && NoOfExistInSupportList(Before, HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]) == 0)
							HeuristicReducedAttackedIndexInOnGame.push_back(i);
							return true;
						}
					}
					else
					{
						if (((abs(TableS[HeuristicAllReducedAttacked[i][2]][HeuristicAllReducedAttacked[i][3]]) > abs(TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]]))) && TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]] > 0)
						{
						//|| (System.Math.Abs(TableS[HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]]) > 0 && NoOfExistInSupportList(Before, HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]) == 0)
							HeuristicReducedAttackedIndexInOnGame.push_back(i);
							return true;
						}
					}
				}
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::DisturbeOnNonSupportedTraversalExchangePrevention(int Killded, bool Before, int** TableS, int Order)
	{
		bool Is = false;
		if (!Before)
		{
			if (HeuristicAllReducedAttackedMidel > 0 && HeuristicAllReducedAttackedMidel < HeuristicAllReducedAttacked.size())
			{
				for (int i = HeuristicAllReducedAttackedMidel; i < HeuristicAllReducedAttacked.size(); i++)
				{
					if (Order == 1)
					{
						std::vector<int*> Valuable = std::vector<int*>();
						bool DD = InAttackEnemyThatIsNotSupported(Killded, CloneATable(TableS), Order, OrderColor(Order), HeuristicAllReducedAttacked[i][0], HeuristicAllReducedAttacked[i][1], HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]);
						if (DD || (abs(TableS[HeuristicAllReducedAttacked[i][2]][HeuristicAllReducedAttacked[i][3]]) > abs(TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]]) && TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]] < 0))
						{
							HeuristicReducedAttackedIndexInOnGame.push_back(i);
							return true;
						}
					}
					else
					{
						std::vector<int*> Valuable = std::vector<int*>();
						bool DD = InAttackEnemyThatIsNotSupported(Killded, CloneATable(TableS), Order, OrderColor(Order), HeuristicAllReducedAttacked[i][0], HeuristicAllReducedAttacked[i][1], HeuristicAllReducedAttacked[i][2], HeuristicAllReducedAttacked[i][3]);
						if (DD || (abs(TableS[HeuristicAllReducedAttacked[i][2]][HeuristicAllReducedAttacked[i][3]]) > abs(TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]]) && TableS[HeuristicAllReducedAttacked[i][0]][HeuristicAllReducedAttacked[i][1]] > 0))
						{
							HeuristicReducedAttackedIndexInOnGame.push_back(i);
							return true;
						}
					}
				}
			}
		}
		return Is;
	}

	int ThinkingHybridizerRefrigitz::AchmazPuredBefore(bool Before, int** Table, int Level = 1)
	{
		if (!Before)
		{
			return 0;
		}
		if (Level == 0)
		{
			return 0;
		}
		int No = 0;
		if (Level == 1)
		{
			if (Order == 1)
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[0][i][j][0]][AchmazPure[0][i][j][1]] > 0 && Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] < 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]))
								{
									int Killed = abs(Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]]);
									Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order), Order, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3], Order);


									No += t->AchmazPuredBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}
			}
			else
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
							if (AchmazPure[0][i].size() <= 1)
							{
								continue;
							}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[0][i][j][0]][AchmazPure[0][i][j][1]] < 0 && Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] > 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]))
								{
									int Killed = abs(Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]]);
									Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order), Order, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3], Order);


									No += t->AchmazPuredBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}

			}
		}
		else if (Level == 2)
		{
			if (Order == 1)
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[0][i][j][0]][AchmazPure[0][i][j][1]] > 0 && Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] < 0))
							{
								return 1;
							}
						}
					}
				}
			}
			else
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[0][i][j][0]][AchmazPure[0][i][j][1]] < 0 && Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] > 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		return No;
	}

	int ThinkingHybridizerRefrigitz::AchmazPuredAfter(bool Before, int** Table, int Level = 1)
	{
		if (Before)
		{
			return 0;
		}
		if (Level == 0)
		{
			return 0;
		}
		int No = 0;
		if (Level == 1)
		{
			if (Order == 1)
			{
				if (AchmazPure.size() > 1)
				{
					for (int i = 0; i < AchmazPure[1].size(); i++)
					{
						for (int j = 0; j < AchmazPure[1][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[1][i][j][0]][AchmazPure[1][i][j][1]] > 0 && Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]] < 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]))
								{
									int Killed = abs(Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]]);
									Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order), Order, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], AchmazPure[1][i][j][2], AchmazPure[1][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], AchmazPure[1][i][j][2], AchmazPure[1][i][j][3], Order);


									No += t->AchmazPuredBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}
			}
			else
			{
				if (AchmazPure.size() > 1)
				{
					for (int i = 0; i < AchmazPure[1].size(); i++)
					{
						for (int j = 0; j < AchmazPure[1][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[1][i][j][0]][AchmazPure[1][i][j][1]] > 0 && Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]] < 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazPure[0][i][j][0], AchmazPure[0][i][j][1], AchmazPure[0][i][j][2], AchmazPure[0][i][j][3]))
								{
									int Killed = abs(Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]]);
									Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order), Order, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], AchmazPure[1][i][j][2], AchmazPure[1][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazPure[1][i][j][0], AchmazPure[1][i][j][1], AchmazPure[1][i][j][2], AchmazPure[1][i][j][3], Order);


									No += t->AchmazPuredBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}

			}
		}
		else if (Level == 2)
		{
			if (Order == 1)
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[1][i][j][0]][AchmazPure[1][i][j][1]] > 0 && Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]] < 0))
							{
								return 1;
							}
						}
					}
				}
			}
			else
			{
				if (AchmazPure.size() > 0)
				{
					for (int i = 0; i < AchmazPure.size(); i++)
					{
						for (int j = 0; j < AchmazPure[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazPure[1][i][j][0]][AchmazPure[1][i][j][1]] < 0 && Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]] > 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		return No;
	}

	int ThinkingHybridizerRefrigitz::AchmazReducedBefore(bool Before, int** Table, int Level = 1)
	{
		if (!Before)
		{
			return 0;
		}
		if (Level == 0)
		{
			return 0;
		}
		int No = 0;
		if (Level == 1)
		{
			if (Order == 1)
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] < 0 && Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] > 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3], AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1]))
								{
									int Killed = abs(Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]]);
									Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, abs(Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]]), CloneATable(Tab), OrderColor(Order * -1), Order * -1, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3], Order);


									No += t->AchmazReducedBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}
			}
			else
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] > 0 && Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] < 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3], AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1]))
								{
									int Killed = abs(Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]]);
									Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] = 0;
									t->HeuristicExchange(Before, abs(Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]]), CloneATable(Tab), OrderColor(Order * -1), Order * -1, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3], Order);


									No += t->AchmazReducedBefore(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}

			}
		}
		else if (Level == 2)
		{
			if (Order == 1)
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] < 0 && Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] > 0))
							{
								return 1;
							}
						}
					}
				}
			}
			else
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] > 0 && Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] < 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		return No;
	}

	int ThinkingHybridizerRefrigitz::AchmazReducedAfter(bool Before, int** Table, int Level = 1)
	{
		if (Before)
		{
			return 0;
		}
		if (Level == 0)
		{
			return 0;
		}
		int No = 0;
		if (Level == 1)
		{
			if (Order == 1)
			{
				if (AchmazReduced.size() > 1)
				{
					for (int i = 0; i < AchmazReduced[1].size(); i++)
					{
						for (int j = 0; j < AchmazReduced[1][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]] < 0 && Tab[AchmazReduced[1][i][j][0]][AchmazReduced[1][i][j][1]] > 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], AchmazReduced[1][i][j][0], AchmazReduced[1][i][j][1]))
								{
									int Killed = abs(Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]]);
									Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order * -1), Order * -1, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazReduced[1][i][j][0], AchmazReduced[1][i][j][1], AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], Order * -1);


									No += t->AchmazReducedAfter(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}
			}
			else
			{
				if (AchmazReduced.size() > 1)
				{
					for (int i = 0; i < AchmazReduced[1].size(); i++)
					{
						for (int j = 0; j < AchmazReduced[1][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]] > 0 && Tab[AchmazReduced[1][i][j][0]][AchmazReduced[1][i][j][1]] < 0))
							{
								ThinkingHybridizerRefrigitz *t = new ThinkingHybridizerRefrigitz(0, Kind, CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], OrderColor(Order), CloneATable(Table), 0, Order, false, 0, 0, Kind);
								if (Scop(AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], AchmazReduced[1][i][j][0], AchmazReduced[1][i][j][1]))
								{
									int Killed = abs(Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]]);
									Tab[AchmazReduced[1][i][j][2]][AchmazReduced[1][i][j][3]] = 0;
									t->HeuristicExchange(Before, Killed, CloneATable(Tab), OrderColor(Order * -1), Order * -1, AchmazReduced[0][i][j][0], AchmazReduced[0][i][j][1], AchmazReduced[0][i][j][2], AchmazReduced[0][i][j][3]);


									t->Achmaz(CloneATable(Tab), Before, AchmazReduced[1][i][j][0], AchmazReduced[1][i][j][1], AchmazReduced[1][i][j][2], AchmazReduced[1][i][j][3], Order * -1);


									No += t->AchmazReducedAfter(Before, CloneATable(Tab), 2);


								}
							}

						}
					}
				}

			}
		}
		else if (Level == 2)
		{
			if (Order == 1)
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] < 0 && Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] > 0))
							{
								return 1;
							}
						}
					}
				}
			}
			else
			{
				if (AchmazReduced.size() > 0)
				{
					for (int i = 0; i < AchmazReduced.size(); i++)
					{
						for (int j = 0; j < AchmazReduced[0][i].size(); j++)
						{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
							int **Tab = CloneATable(Table);
							if ((Tab[AchmazReduced[0][i][j][2]][AchmazReduced[0][i][j][3]] > 0 && Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]] < 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		return No;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazReducedElephasnt(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;

		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != -2)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != 2)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInReducedAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}
		//===============================


		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazReducedCastle(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, i =>
			for (int  i = 0; i < 8; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto j = jj;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != -4)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != 4)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInReducedAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}
		//===============================

		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto i = ii;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != -4)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != 4)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInReducedAttackList(Before, i, j, RowS, ColS);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}

		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazElephasnt(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		if (Order == 1 && Tabl[RowS][ColS] != 2)
		{
			return Existence;
		}
		if (Order == -1 && Tabl[RowS][ColS] != -2)
		{
			return Existence;
		}
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}
		//===============================
		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazCastle(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		if (Order == 1 && Tabl[RowS][ColS] != 4)
		{
			return Existence;
		}
		if (Order == -1 && Tabl[RowS][ColS] != -4)
		{
			return Existence;
		}
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, i =>
			for (int  i = 0; i < 8; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto j = jj;

					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}

		}
		//===============================
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{

			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto i = ii;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}

		}

		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazHourse(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		if (Order == 1 && Tabl[RowS][ColS] != 3)
		{
			return Existence;
		}
		if (Order == -1 && Tabl[RowS][ColS] != -3)
		{
			return Existence;
		}
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, i =>
			for (int  i = RowS - 3; i < RowS + 4; i++)
			{
				for (int  j = ColS - 3; j < ColS + 4; j++)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						if (!Scop(0, jj, i, j))
						{
							continue;
						}
						std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
						if (Exist.size() >= 1)
						{

							Existence.push_back(Exist);
						}

					}
				}
			}
		}


		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazReducedHourse(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, i =>
			for (int  i = RowS - 3; i < RowS + 4; i++)
			{
				for (int  j = ColS - 3; j < ColS + 4; j++)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						if (!Scop(0, jj, i, j))
						{
							continue;
						}
						if (Order == 1 && Tabl[i][j] != 3)
						{
							continue;
						}
						if (Order == -1 && Tabl[i][j] != -3)
						{
							continue;
						}
						std::vector<int*> Exist = ListOfExistInReducedAttackList(Before, RowS, ColS, i, j);
						if (Exist.size() >= 1)
						{

							Existence.push_back(Exist);
						}

					}
				}
			}
		}
		//===============================


		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazMinister(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		if (Order == 1 && Tabl[RowS][ColS] != 5)
		{
			return Existence;
		}
		if (Order == -1 && Tabl[RowS][ColS] != -5)
		{
			return Existence;
		}
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{

						if (!Scop(0, jj, i, j))
						{
							continue;
						}
						std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
						if (Exist.size() >= 1)
						{

							Existence.push_back(Exist);
						}

					}
				}
			}
		}

		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazKing(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;
		if (Order == 1 && Tabl[RowS][ColS] != 6)
		{
			return Existence;
		}
		if (Order == -1 && Tabl[RowS][ColS] != -6)
		{
			return Existence;
		}
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			for (int  i = ii - 1; i < ii + 2; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					auto j = i + ii - jj;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
			//===============================
			////auto oOOo1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOo1)
			{


				for (int  i = ii - 1; i < ii + 2; i++)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						auto j = i * -1 + ii - jj;
						if (!Scop(0, jj, i, j))
						{
							continue;
						}
						std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
						if (Exist.size() >= 1)
						{

							Existence.push_back(Exist);
						}

					}
				}
			}
			//=============================================
			////Parallel.For(0, 8, i =>


			for (int  i = ii - 1; i < ii + 2; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto j = jj;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}
		//===============================
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{


			for (int  j = ii - 1; j < ii + 2; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto i = ii;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}


		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazReducedKing(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			for (int  i = ii - 1; i < ii + 2; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					auto j = i + ii - jj;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != 6)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != -6)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
			//===============================
			////auto oOOo1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOo1)
			{


				for (int  i = ii - 1; i < ii + 2; i++)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						auto j = i * -1 + ii - jj;
						if (!Scop(0, jj, i, j))
						{
							continue;
						}
						if (Order == 1 && Tabl[i][j] != 6)
						{
							continue;
						}
						if (Order == -1 && Tabl[i][j] != -6)
						{
							continue;
						}
						std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
						if (Exist.size() >= 1)
						{

							Existence.push_back(Exist);
						}

					}
				}
			}
			//=============================================
			////Parallel.For(0, 8, i =>


			for (int  i = ii - 1; i < ii + 2; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto j = jj;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}

					if (Order == 1 && Tabl[i][j] != 6)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != -6)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}
		//===============================
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{


			for (int  j = ii - 1; j < ii + 2; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto i = ii;
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != 6)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != -6)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}


		return Existence;
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::AchMazReducedMinister(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> Existence = std::vector<std::vector<int*>>();

		int ii = RowS, jj = ColS;

		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					if (!Scop(0, jj, i, j))
					{
						continue;
					}
					if (Order == 1 && Tabl[i][j] != -5)
					{
						continue;
					}
					if (Order == -1 && Tabl[i][j] != 5)
					{
						continue;
					}
					std::vector<int*> Exist = ListOfExistInReducedAttackList(Before, RowS, ColS, i, j);
					if (Exist.size() >= 1)
					{

						Existence.push_back(Exist);
					}

				}
			}
		}

		return Existence;
	}

	void ThinkingHybridizerRefrigitz::Achmaz(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		std::vector<std::vector<int*>> EleRedAchmaz, EleAchmaz, HourAchmaz, HourRedAchmaz, CastRedAchmaz, CastAchmaz, MiniRedAchmaz, MiniAchmaz, KingRedAchmaz, KingAchmaz;

		EleRedAchmaz = AchMazReducedElephasnt(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);



		EleAchmaz = AchMazElephasnt(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);



		CastRedAchmaz = AchMazReducedCastle(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);



		CastAchmaz = AchMazCastle(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);



		MiniRedAchmaz = AchMazReducedMinister(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);



		MiniAchmaz = AchMazMinister(CloneATable(Table), Before, RowS, ColS, RowD, ColD, Order);





		AchmazPure.push_back(CollectionSummation(EleAchmaz, HourAchmaz, CastAchmaz, MiniAchmaz, KingAchmaz));



		AchmazReduced.push_back(CollectionSummation(EleRedAchmaz, HourRedAchmaz, CastRedAchmaz, MiniRedAchmaz, KingRedAchmaz));


	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::CollectionSortation(std::vector<std::vector<int*>> &A)
	{
		std::vector<std::vector<int*>> Col = std::vector<std::vector<int*>>();

		std::vector<int*> Co = std::vector<int*>();
		CollectionSummation(A, -4, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}
		Co = std::vector<int*>();
		CollectionSummation(A, -3, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}
		Co = std::vector<int*>();
		CollectionSummation(A, -2, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}
		Co = std::vector<int*>();
		CollectionSummation(A, -1, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}
		Co = std::vector<int*>();
		CollectionSummation(A, 1, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}

		Co = std::vector<int*>();
		CollectionSummation(A, 2, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}

		Co = std::vector<int*>();
		CollectionSummation(A, 3, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}

		Co = std::vector<int*>();
		CollectionSummation(A, 4, Co);
		if (Co.size() > 0)
		{
			Col.push_back(Co);
		}
		return Col;
	}

	void ThinkingHybridizerRefrigitz::CollectionSummation(std::vector<std::vector<int*>> &A, int Sum, std::vector<int*> &Co)
	{
		if (A.empty())
		{
			return;
		}
		for (int i = 0; i < A.size(); i++)
		{
			for (int j = 0; j < A[i].size(); j++)
			{
				if (A[i][j][4] == Sum && (!Exist(Co, A[i][j])))
				{
					Co.push_back(A[i][j]);
				}
			}
		}
	}

	std::vector<std::vector<int*>> ThinkingHybridizerRefrigitz::CollectionSummation(std::vector<std::vector<int*>> &A, std::vector<std::vector<int*>> &B, std::vector<std::vector<int*>> &C, std::vector<std::vector<int*>> &D, std::vector<std::vector<int*>> &E)
	{
		std::vector<std::vector<int*>> Col = std::vector<std::vector<int*>>();

		std::vector<int*> Co1 = std::vector<int*>();
		CollectionSummation(A, -4, Co1);

		CollectionSummation(C, -4, Co1);
		CollectionSummation(D, -4, Co1);

		if (Co1.size() > 0)
		{
			Col.push_back(Co1);
		}
		std::vector<int*> Co2 = std::vector<int*>();
		CollectionSummation(A, -3, Co2);

		CollectionSummation(C, -3, Co2);
		CollectionSummation(D, -3, Co2);

		if (Co2.size() > 0)
		{
			Col.push_back(Co2);
		}
		std::vector<int*> Co3 = std::vector<int*>();
		CollectionSummation(A, -2, Co3);

		CollectionSummation(C, -2, Co3);
		CollectionSummation(D, -2, Co3);

		if (Co3.size() > 0)
		{
			Col.push_back(Co3);
		}
		std::vector<int*> Co4 = std::vector<int*>();
		CollectionSummation(A, -1, Co4);

		CollectionSummation(C, -1, Co4);
		CollectionSummation(D, -1, Co4);

		if (Co4.size() > 0)
		{
			Col.push_back(Co4);
		}
		std::vector<int*> Co5 = std::vector<int*>();
		CollectionSummation(A, 1, Co5);

		CollectionSummation(C, 1, Co5);
		CollectionSummation(D, 1, Co5);

		if (Co5.size() > 0)
		{
			Col.push_back(Co5);
		}

		std::vector<int*> Co6 = std::vector<int*>();
		CollectionSummation(A, 2, Co6);

		CollectionSummation(C, 2, Co6);
		CollectionSummation(D, 2, Co6);

		if (Co6.size() > 0)
		{
			Col.push_back(Co6);
		}

		std::vector<int*> Co7 = std::vector<int*>();
		CollectionSummation(A, 3, Co7);

		CollectionSummation(C, 3, Co7);
		CollectionSummation(D, 3, Co7);

		if (Co7.size() > 0)
		{
			Col.push_back(Co7);
		}

		std::vector<int*> Co8 = std::vector<int*>();
		CollectionSummation(A, 4, Co8);

		CollectionSummation(C, 4, Co8);
		CollectionSummation(D, 4, Co8);

		if (Co8.size() > 0)
		{
			Col.push_back(Co8);
		}

		return Col;
	}

	int ThinkingHybridizerRefrigitz::SignBeforNext(int Row, int Col, int i, int j)
	{
		int Sign = 0;
		if (Row < i && Col > j)
		{
			Sign = -4;
		}
		if (Row > i && Col > j)
		{
			Sign = 4;
		}
		if (Row > i && Col < j)
		{
			Sign = 3;
		}
		if (Row < i && Col > j)
		{
			Sign = -3;
		}
		if (Row == i && Col < j)
		{
			Sign = -2;
		}
		if (Row == i && Col > j)
		{
			Sign = 2;
		}
		if (Row > i && Col == j)
		{
			Sign = 1;
		}
		if (Row < i && Col == j)
		{
			Sign = -1;
		}
		return Sign;
	}

	int ThinkingHybridizerRefrigitz::SumAbsSrcPure(bool Before, int** Tab)
	{
		int Sum = 0;
		if (AchmazPure.size() == 1)
		{
			for (int i = 0; i < AchmazPure.size(); i++)
			{
				for (int j = 0; j < AchmazPure[0][i].size(); j++)
				{
					Sum += abs(Tab[AchmazPure[0][i][j][2]][AchmazPure[0][i][j][3]]);
				}
			}
		}
		return Sum;
	}

	int ThinkingHybridizerRefrigitz::SumAbsSrcReduced(bool Before, int** Tab)
	{
		int Sum = 0;
		if (AchmazReduced.size() == 1)
		{
			for (int i = 0; i < AchmazReduced.size(); i++)
			{
				for (int j = 0; j < AchmazReduced[0][i].size(); j++)
				{
					Sum += abs(Tab[AchmazReduced[0][i][j][0]][AchmazReduced[0][i][j][1]]);
				}
			}
		}
		return Sum;
	}

	int ThinkingHybridizerRefrigitz::SumAbsDesPure(bool Before, int** Tab)
	{
		int Sum = 0;
		if (AchmazPure.size() == 2)
		{
			for (int i = 0; i < AchmazPure[1].size(); i++)
			{
				for (int j = 0; j < AchmazPure[1][i].size(); j++)
				{
					Sum += abs(Tab[AchmazPure[1][i][j][2]][AchmazPure[1][i][j][3]]);
				}
			}

		}

		return Sum;
	}

	int ThinkingHybridizerRefrigitz::SumAbsDesReduced(bool Before, int** Tab)
	{
		int Sum = 0;
		if (AchmazReduced.size() == 2)
		{
			for (int i = 0; i < AchmazReduced[1].size(); i++)
			{
				for (int j = 0; j < AchmazReduced[1][i].size(); j++)
				{
					Sum += abs(Tab[AchmazReduced[1][i][j][0]][AchmazReduced[1][i][j][1]]);
				}
			}
		}

		return Sum;
	}

	int ThinkingHybridizerRefrigitz::DoubleAttack(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		int DD = 0;
		std::vector<std::vector<int*>> DDL = std::vector<std::vector<int*>>();
		for (int RowSS = 0; RowSS < 8; RowSS++)
		{
			for (int ColSS = 0; ColSS < 8; ColSS++)
			{
				for (int RowDD = 0; RowDD < 8; RowDD++)
				{
					for (int ColDD = 0; ColDD < 8; ColDD++)
					{
						std::vector<int*> DDA = ListOfExistInAttackList(Before, RowSS, ColSS, RowDD, ColDD);
						if (DDA.size() > 0)
						{
							DDL.push_back(DDA);
						}
					}
				}
			}
		}
		std::vector<int*> DDE = std::vector<int*>();
		for (int i = 0; i < DDL.size(); i++)
		{
			for (int j = 0; j < DDL[i].size(); j++)
			{
				if (!ExistFull(DDE, DDL[i][j]))
				{
					DDE.push_back(DDL[i][j]);
				}
			}
		}
		if (DDE.size() > 1)
		{
			for (int RowSS = 0; RowSS < 8; RowSS++)
			{
				for (int ColSS = 0; ColSS < 8; ColSS++)
				{
					for (int RowDD = 0; RowDD < 8; RowDD++)
					{
						for (int ColDD = 0; ColDD < 8; ColDD++)
						{
							for (int i = 0; i < DDE.size(); i++)
							{
								if (DDE[i][0] == RowSS && DDE[i][1] == ColSS && DDE[i][2] == RowDD && DDE[i][3] == ColDD)
								{
									DD += abs(Table[DDE[i][2]][DDE[i][3]]);
								}
							}
						}
					}
				}
			}
		}

		DD = (RationalRegard) * (DD);
		return DD;
	}

	int ThinkingHybridizerRefrigitz::DoubleDefence(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order)
	{
		int DD = 0;
		std::vector<std::vector<int*>> DDL = std::vector<std::vector<int*>>();
		for (int RowSS = 0; RowSS < 8; RowSS++)
		{
			for (int ColSS = 0; ColSS < 8; ColSS++)
			{
				for (int RowDD = 0; RowDD < 8; RowDD++)
				{
					for (int ColDD = 0; ColDD < 8; ColDD++)
					{
						std::vector<int*> DDA = ListOfExistInReducedAttackList(Before, RowSS, ColSS, RowDD, ColDD);
						if (DDA.size() > 0)
						{
							DDL.push_back(DDA);
						}
					}
				}
			}
		}
		std::vector<int*> DDE = std::vector<int*>();
		for (int i = 0; i < DDL.size(); i++)
		{
			for (int j = 0; j < DDL[i].size(); j++)
			{
				if (!ExistFull(DDE, DDL[i][j]))
				{
					DDE.push_back(DDL[i][j]);
				}
			}
		}
		if (DDE.size() > 1)
		{
			for (int RowDD = 0; RowDD < 8; RowDD++)
			{
				for (int ColDD = 0; ColDD < 8; ColDD++)
				{
					std::vector<int*> DDEE = std::vector<int*>();
					for (int RowSS = 0; RowSS < 8; RowSS++)
					{
						for (int ColSS = 0; ColSS < 8; ColSS++)
						{
							for (int i = 0; i < DDE.size(); i++)
							{
								if (DDE[i][0] == RowDD && DDE[i][1] == ColDD && DDE[i][2] == RowSS && DDE[i][3] == ColSS)
								{
									int SS[4];
									SS[0] = RowDD;
									SS[1] = ColDD;
									SS[2] = RowSS;
									SS[3] = ColSS;
									if (!ExistFull(DDEE, SS))
									{
										DDEE.push_back(SS);
										DD += abs(Table[DDE[i][0]][DDE[i][1]]);
									}
								}
							}
						}
					}
					if (DDEE.size() > 1)
					{
						if (!ExistFullDoubleList(HeuristicDoubleDefenceIndexInOnGame, DDEE))
						{
							HeuristicDoubleDefenceIndexInOnGame.push_back(DDEE);
						}
					}
				}
			}
		}
		if (HeuristicDoubleDefenceIndexInOnGame.empty())
		{
			DD = 0;
		}
		DD = (RationalPenalty) * (DD);
		return DD;
	}

	bool ThinkingHybridizerRefrigitz::MidleIndex()
	{
		bool Is = true;
		if (HeuristicAllAttackedMidel != 0)
		{
			return false;
		}
		if (HeuristicAllMoveMidel != 0)
		{
			return false;
		}
		if (HeuristicAllReducedAttackedMidel != 0)
		{
			return false;
		}
		if (HeuristicAllReducedMoveMidel != 0)
		{
			return false;
		}
		if (HeuristicAllReducedSupportMidel != 0)
		{
			return false;
		}
		if (HeuristicAllSupportMidel != 0)
		{
			return false;
		}
		if (HeuristicReducedAttackedIndexInOnGameMidle != 0)
		{
			return false;
		}
		if (HeuristicDoubleDefenceIndexInOnGameMidle != 0)
		{
			return false;
		}
		return Is;
	}

	void ThinkingHybridizerRefrigitz::CalculateHeuristics(int * LoseOcuuredatChiled, int WinOcuuredatChiled, bool Before, int Order, int Killed, int** TableS, int RowS, int ColS, int RowD, int ColD, int color, int &HeuristicAttackValue, int &HeuristicMovementValue, int &HeuristicSelfSupportedValue, int &HeuristicReducedMovementValue, int &HeuristicReducedSupport, int &HeuristicReducedAttackValue, int &HeuristicDistributionValue, int &HeuristicKingSafe, int &HeuristicFromCenter, int &HeuristicKingDangour, int &HeuristicCheckedMate)
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			if (!Scop(RowS, ColS, RowD, ColD, Kind))
			{
				return;
			}
			int Heuristic[6];
			int HCheck = int();
			int HDistance = int();
			int HKingSafe = int();
			int HKingDangour = int();
			int HFromCenter = 0;
			int HExchangeInnovation = 0;
			int HExchangeSupport = 0;
			if (!Before && MidleIndex())
			{
				HeuristicAllAttackedMidel = HeuristicAllAttacked.size();
				HeuristicAllMoveMidel = HeuristicAllMove.size();
				HeuristicAllReducedAttackedMidel = HeuristicAllReducedAttacked.size();
				HeuristicAllReducedMoveMidel = HeuristicAllReducedMove.size();
				HeuristicAllReducedSupportMidel = HeuristicAllReducedSupport.size();
				HeuristicAllSupportMidel = HeuristicAllSupport.size();
				HeuristicReducedAttackedIndexInOnGameMidle = HeuristicReducedAttackedIndexInOnGame.size();
				HeuristicDoubleDefenceIndexInOnGameMidle = HeuristicDoubleDefenceIndexInOnGame.size();
				AchmazPureMidle = AchmazPure.size();
				AchmazReducedMidle = AchmazReduced.size();
			}
			if (Order !=  AllDraw::OrderPlateDraw)
			{
				return;
			}

//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* Hu = nullptr;
			int *Hu = nullptr;
			 Hu = CalculateHeuristicsParallel(Before, Killed, CloneATable(TableS), RowS, ColS, RowD, ColD, color);

			 //if (UsePenaltyRegardMechnisamT)


			Heuristic[0] = Hu[0];
			Heuristic[1] = Hu[1];
			Heuristic[2] = Hu[2];
			Heuristic[3] = Hu[3];
			Heuristic[4] = Hu[4];
			Heuristic[5] = Hu[5];
			HCheck = Hu[6];
			HDistance = Hu[7];
			HKingSafe = Hu[8];
			HKingDangour = Hu[9];
			HFromCenter = Hu[10];
			HExchangeInnovation = Hu[11] + Hu[12] + Hu[13];
			HExchangeSupport = Hu[14];
			int HAchmaz = 0;
			int HDoubleAttack = 0, HDoubleDefense = 0;
			int HWin = 0, HLose = 0;

			 HDoubleAttack = DoubleAttack(CloneATable(TableS), Before, RowS, ColS, RowD, ColD, Order);
			 HDoubleDefense = DoubleDefence(CloneATable(TableS), Before, RowS, ColS, RowD, ColD, Order);




			bool IsS = false;
			if (HDoubleDefense < 0)
			{
				SetSupHuTrue();
				IsS = true;
			}
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				if (!IsSupHu[IsSupHu.size() - 1])
				{
					if (Before)
					{
						if (Order == AllDraw::OrderPlateDraw)
						{
							if ((abs(TableS[RowS][ColS]) > abs(TableS[RowD][ColD])) && TableS[RowD][ColD] != 0 && NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0)
							{
								//if (Before)
								SetSupHuTrue();
								IsS = true;
							}
						}
						if (!GoldenFinished && WinOcuuredatChiled == 0)
						{ //Disturbe on huge traversal exchange prevention
						   //Ignore of atack and checkedmate at first until all move
							bool A = false, B = false, C = false;
							if (Order == 1)
							{
								A = ColleralationWHITE < 30;
								if (Order == AllDraw::OrderPlateDraw)
								{
									B = NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) > 0 && (abs(TableS[RowD][ColD]) != 0 && abs(TableS[RowS][ColS]) > 1);
									C = HeuristicCheckedMate != 0 && (IsThereMateOfSelf[IsThereMateOfSelf.size() - 1] || IsThereMateOfEnemy[IsThereMateOfEnemy.size() - 1]);
								}
							}
							else
							{
								A = ColleralationBLACK < 30;
								if (Order == AllDraw::OrderPlateDraw)
								{
									B = NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) > 0 && (abs(TableS[RowD][ColD]) != 0 && abs(TableS[RowS][ColS]) > 1);
									C = HeuristicCheckedMate != 0 && (IsThereMateOfSelf[IsThereMateOfSelf.size() - 1] || IsThereMateOfEnemy[IsThereMateOfEnemy.size() - 1]);
								}
							}
							if (A && ((B) || (C)))
							{
								SetSupHuTrue();
								IsS = true;
							}
							//Every objects one move at game begin
							int Total = 0;
							int Is = 0;
							NoOfObjectNotMovable(CloneATable(TableS), Order, OrderColor(Order), Total, Is);
							if (Order == 1)
							{
								if (TableInitiationPreventionOfMultipleMove[RowS][ColS] >= NoOfMovableAllObjectMove)
										//((NoOfBoardMoved + Is >= Total) && 
								//)&& A && TableS[RowS, ColS] < 0 && TableS[RowD, ColD] >= 0
								{
									IsS = true;
									SetSupHuTrue();
								}
							}
							else
							{
								if (TableInitiationPreventionOfMultipleMove[RowS][ColS] >= NoOfMovableAllObjectMove)
										//((NoOfBoardMoved + Is >= Total) && 
								//)&& A && TableS[RowS, ColS] < 0 && TableS[RowD, ColD] >= 0
								{
									IsS = true;
									SetSupHuTrue();
								}
							}
							//Empire more
							if (A)
							{
								if (ColleralationWHITE < 16)
								{
									if (NoOfExistInSupportList(Before, RowS, ColS, RowD, ColD) + NoOfExistInMoveList(Before, RowS, ColS, RowD, ColD) + NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) - NoOfExistInReducedSupportList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedMoveList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) >= DifOfNoOfSupporteAndReducedSupportWHITE)
									{
										DifOfNoOfSupporteAndReducedSupportWHITE = NoOfExistInSupportList(Before, RowS, ColS, RowD, ColD) + NoOfExistInMoveList(Before, RowS, ColS, RowD, ColD) + NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) - NoOfExistInReducedSupportList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedMoveList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS);
									}
									else
									{
									if (DifOfNoOfSupporteAndReducedSupportWHITE < 64)
									{
										IsS = true;
										SetSupHuTrue();
									}
									}
								}
							}
							//Hourse before elephants
							if (((RowS == 2 && ColS == 7 && TableInitiation[RowS][ColS] == TableS[2][7] && TableS[2][7] == 2) && TableInitiationPreventionOfMultipleMove[2][7] == 0) || ((RowS == 5 && ColS == 7 && TableInitiation[RowS][ColS] == TableS[5][7] && TableS[5][7] == 2) && TableInitiationPreventionOfMultipleMove[5][7] == 0))
							{
								int a = 1;
								if (Order == -1)
								{
									a = -1;
								}
								if (((TableInitiation[1][7] == TableS[1][7] && TableS[1][7] == 3) && TableInitiationPreventionOfMultipleMove[1][7] == 0 && ObjectMovable(1, 7, CloneATable(TableS), Order, a)) || ((TableInitiation[6][7] == TableS[6][7] && TableS[6][7] == 3) && TableInitiationPreventionOfMultipleMove[6][7] == 0 && ObjectMovable(6, 7, CloneATable(TableS), Order, a)))
								{
									IsS = true;
									SetSupHuTrue();
								}
							}
						}
						//when thre is most reduced support finding
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IsNo = MostOfFindMostHeuristicAllReducedSupportInList(Before, RowD, ColD);
						int *IsNo = MostOfFindMostHeuristicAllReducedSupportInList(Before, RowD, ColD);
						if (IsNo != nullptr)
						{
							if (IsNo[1] < HeuristicAllReducedSupport.size())
							{
								if (NoOfExistInAttackList(Before, RowS, ColS, HeuristicAllReducedSupport[IsNo[1]][0], HeuristicAllReducedSupport[IsNo[1]][1]) > 0)
								{
									ClearSupHuTrue();
								}
							}
						}
						if (HDoubleAttack > 0)
						{
							if (!IsSupHu[IsSupHu.size() - 1])
							{
								WinOcuuredatChiled = 5;
							}
						}
					}
					else
					{
						//Disturbe on huge traversal exchange prevention 
						//if ((System.Math.Abs(TableConst[RowS, ColS]) > System.Math.Abs(Killed)) && Killed != 0 && NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) > 0)
						if (Order == AllDraw::OrderPlateDraw)
						{
							if (DisturbeOnNonSupportedTraversalExchangePrevention(Killed, Before, CloneATable(TableS), Order))
							{
								//if (Before)
								SetSupHuTrue();
								IsS = true;
							}
							if (DisturbeOnHugeTraversalExchangePrevention(Before, CloneATable(TableS), Order))
							{
								//if (Before)
								SetSupHuTrue();
								IsS = true;
							}
							else
							{
								if (TableInitiationPreventionOfMultipleMove[RowS][ColS] == NoOfMovableAllObjectMove && IsSupHu[IsSupHu.size() - 1] && IsS)
								{
									TableInitiationPreventionOfMultipleMove[RowS][ColS] = NoOfMovableAllObjectMove - 1;
									IsS = false;
								}
							}
						}
						if (!GoldenFinished)
						{ //Ignore of atack and checkedmate at first until all move
							bool A = false, B = false, C = false;
							if (Order == 1)
							{
								A = ColleralationWHITE < 30;
								if (Order == AllDraw::OrderPlateDraw)
								{
									B = NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) > 0 && (Killed != 0 && Killed < TableS[RowD][ColD]);
									C = HeuristicCheckedMate != 0 && (IsThereMateOfSelf[IsThereMateOfSelf.size() - 1] || IsThereMateOfEnemy[IsThereMateOfEnemy.size() - 1]);
								}
							}
							else
							{
								A = ColleralationBLACK < 30;
								if (Order == AllDraw::OrderPlateDraw)
								{
									B = NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) > 0 && (Killed != 0 && Killed < TableS[RowD][ColD]);
									C = HeuristicCheckedMate != 0 && (IsThereMateOfSelf[IsThereMateOfSelf.size() - 1] || IsThereMateOfEnemy[IsThereMateOfEnemy.size() - 1]);
								}
							}
							if (A && ((B) || (C)))
							{
								SetSupHuTrue();
								IsS = true;
							}
							else
							{
								if (Order == AllDraw::OrderPlateDraw)
								{ //if (TableInitiationPreventionOfMultipleMove[RowS, ColS] == NoOfMovableAllObjectMove && IsSupHu[IsSupHu.Count - 1] && (!IsS))

									//Empire more
									if (A)
									{
										if (ColleralationBLACK < 16)
										{
											if (NoOfExistInSupportList(Before, RowS, ColS, RowD, ColD) + NoOfExistInMoveList(Before, RowS, ColS, RowD, ColD) + NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) - NoOfExistInReducedSupportList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedMoveList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS) >= DifOfNoOfSupporteAndReducedSupportBLACK)
											{
												DifOfNoOfSupporteAndReducedSupportBLACK = NoOfExistInSupportList(Before, RowS, ColS, RowD, ColD) + NoOfExistInMoveList(Before, RowS, ColS, RowD, ColD) + NoOfExistInAttackList(Before, RowS, ColS, RowD, ColD) - NoOfExistInReducedSupportList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedMoveList(Before, RowD, ColD, RowS, ColS) - NoOfExistInReducedAttackList(Before, RowD, ColD, RowS, ColS);
											}
											else
											{
											if (DifOfNoOfSupporteAndReducedSupportBLACK < 64)
											{
												{
													SetSupHuTrue();
													IsS = true;
												}
											}
											}
										}
									}
									//Hourse before elephants
									if (((RowS == 2 && ColS == 0 && TableInitiation[RowS][ColS] == TableS[RowS][ColS] && TableS[RowS][ColS] == -2) && TableInitiationPreventionOfMultipleMove[2][0] == 0) || ((RowS == 5 && ColS == 0 && TableInitiation[RowS][ColS] == TableS[RowS][ColS] && TableConst[RowS][ColS] == -2) && TableInitiationPreventionOfMultipleMove[5][0] == 0))
									{
										int a = 1;
										if (Order == -1)
										{
											a = -1;
										}
										if (((TableInitiation[1][0] == TableS[1][0] && TableS[1][0] == -3) && TableInitiationPreventionOfMultipleMove[1][0] == 0 && ObjectMovable(1, 0, CloneATable(TableS), Order, a)) || ((TableInitiation[6][0] == TableS[6][0] && TableS[6][0] == -3) && TableInitiationPreventionOfMultipleMove[6][0] == 0 && ObjectMovable(6, 0, CloneATable(TableS), Order, a)))
										{
											SetSupHuTrue();
											IsS = true;
										}
									}
									//Every objects one move at game begin
									int Total = 0;
									int Is = 0;
									NoOfObjectNotMovable(CloneATable(TableS), Order, OrderColor(Order), Total, Is);
									if (Order == 1)
									{
										if (TableInitiationPreventionOfMultipleMove[RowS][ColS] >= NoOfMovableAllObjectMove)
											 //((NoOfBoardMoved + Is >= Total) && 
									 //)&& A && TableS[RowS, ColS] == 0 && TableS[RowD, ColD] > 0
										{
											IsS = true;
											SetSupHuTrue();
										}
									}
									else
									{
										if (TableInitiationPreventionOfMultipleMove[RowS][ColS] >= NoOfMovableAllObjectMove)
											  //((NoOfBoardMoved + Is >= Total) && 
									  //)&& A && TableS[RowS, ColS] == 0 && TableS[RowD, ColD] < 0
										{
											IsS = true;
											SetSupHuTrue();
										}
									}
								}
								//when thre is most reduced support finding
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IsNo = MostOfFindMostHeuristicAllReducedSupportInList(Before, RowD, ColD);
								int *IsNo = MostOfFindMostHeuristicAllReducedSupportInList(Before, RowD, ColD);
								if (IsNo != nullptr)
								{
									if (IsNo[1] < HeuristicAllReducedSupport.size() && IsNo[1] >= HeuristicAllReducedSupportMidel)
									{
										if (NoOfExistInAttackList(Before, RowS, ColS, HeuristicAllReducedSupport[IsNo[1]][0], HeuristicAllReducedSupport[IsNo[1]][1]) > 0)
										{
											ClearSupHuTrue();
										}
									}
								}

								if (!IsS)
								{
									ClearSupHuTrue();
								}
							}
						}
						if (HDoubleAttack > 0)
						{
							if (!IsSupHu[IsSupHu.size() - 1])
							{
								WinOcuuredatChiled = 5;
							}
							else
							{
								WinOcuuredatChiled = 0;
							}
						}
					}
				}
				if (!IsSupHu[IsSupHu.size() - 1] && IsSupHu.size() > 0 && (Order == AllDraw::OrderPlateDraw))
				{
					 Achmaz(CloneATable(TableS), Before, RowS, ColS, RowD, ColD, Order);


					if (Before)
					{
						int TotalS = 0;
						int IsSC = 0;
						NoOfObjectNotMovable(CloneATable(TableS), Order, OrderColor(Order), TotalS, IsSC);
						if ((16 - ColleralationWHITE) + IsSC >= TotalS)
						{
							GoldenFinished = true;
						}
						HAchmaz = (RationalPenalty * (AchmazReducedBefore(Before, CloneATable(TableS)))) + (RationalRegard * (AchmazPuredBefore(Before, CloneATable(TableS))));
					}
					else
					{
						int TotalS = 0;
						int IsSC = 0;
						NoOfObjectNotMovable(CloneATable(TableS), Order, OrderColor(Order), TotalS, IsSC);
						if ((16 - ColleralationBLACK) + IsSC >= TotalS)
						{
							GoldenFinished = true;
						}
						HAchmaz = (RationalPenalty * (AchmazReducedAfter(Before, CloneATable(TableS)))) + (RationalRegard * (AchmazPuredAfter(Before, CloneATable(TableS))));
					}
					if (HAchmaz > 0)
					{
						WinOcuuredatChiled = 7;
					}
					else
					{
						if (HAchmaz < 0)
						{
						LoseOcuuredatChiled[0] = -7;
						}
					}
				}
				if (Before)
				{
					HeuristicReducedAttackValue = (Heuristic[0] * SignOrderToPlate(Order));
					HeuristicAttackValue = (Heuristic[1] * SignOrderToPlate(Order));
					HeuristicReducedSupport = (Heuristic[2] * SignOrderToPlate(Order));
					HeuristicSelfSupportedValue = (Heuristic[3] * SignOrderToPlate(Order));
					HeuristicMovementValue = (Heuristic[4] * SignOrderToPlate(Order));
					HeuristicReducedMovementValue = ((Heuristic[5] + HExchangeInnovation + HExchangeSupport) * SignOrderToPlate(Order));
					HeuristicCheckedMate = (((HCheck + HAchmaz + HWin + HLose) * SignOrderToPlate(Order)));
					HeuristicDistributionValue = ((HDistance + HAchmaz + HDoubleAttack + HDoubleDefense) * SignOrderToPlate(Order));
					HeuristicKingSafe = (HKingSafe * SignOrderToPlate(Order));
					HeuristicKingDangour = (HKingDangour * SignOrderToPlate(Order));
					HeuristicFromCenter = (HFromCenter * SignOrderToPlate(Order));
				}
				else
				{
					HeuristicReducedAttackValue += (Heuristic[0] * SignOrderToPlate(Order));
					HeuristicAttackValue += (Heuristic[1] * SignOrderToPlate(Order));
					HeuristicReducedSupport += (Heuristic[2] * SignOrderToPlate(Order));
					HeuristicSelfSupportedValue += (Heuristic[3] * SignOrderToPlate(Order));
					HeuristicMovementValue += (Heuristic[4] * SignOrderToPlate(Order));
					HeuristicReducedMovementValue += ((Heuristic[5] + HExchangeInnovation + HExchangeSupport) * SignOrderToPlate(Order));
					HeuristicCheckedMate += (((HCheck) * SignOrderToPlate(Order)));
					HeuristicDistributionValue += ((HDistance + HAchmaz + HDoubleAttack) * SignOrderToPlate(Order));
					HeuristicKingSafe += (HKingSafe * SignOrderToPlate(Order));
					HeuristicKingDangour += (HKingDangour * SignOrderToPlate(Order));
					HeuristicFromCenter += (HFromCenter * SignOrderToPlate(Order));
				}
			}
		}
	}

	int *ThinkingHybridizerRefrigitz::MostOfFindMostHeuristicAllReducedSupportInList(bool Before, int RowS, int ColS)
	{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* IsNo = FindMostHeuristicAllReducedSupportIsCurrent(Before, RowS, ColS);
		int *IsNo = FindMostHeuristicAllReducedSupportIsCurrent(Before, RowS, ColS);

		for (int ii = 0; ii < 8; ii++)
		{
			for (int jj = 0; jj < 8; jj++)
			{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* Is = FindMostHeuristicAllReducedSupportIsCurrent(Before, ii, jj);
				int *Is = FindMostHeuristicAllReducedSupportIsCurrent(Before, ii, jj);
				if (Is[0] > IsNo[0])
				{
					return nullptr;
				}
			}
		}
		return IsNo;
	}

	int *ThinkingHybridizerRefrigitz::FindMostHeuristicAllReducedSupportIsCurrent(bool Before, int RowS, int ColS)
	{
		int IsNo[2];
		if (!Before)
		{
			if (HeuristicAllReducedSupportMidel > 0 && HeuristicAllReducedSupportMidel < HeuristicAllReducedSupport.size())
			{
				for (int i = HeuristicAllReducedSupportMidel; i < HeuristicAllReducedSupport.size(); i++)
				{
					if (HeuristicAllReducedSupport[i][2] == RowS && HeuristicAllReducedSupport[i][3] == ColS)
					{
						for (int ii = 0; ii < 8; ii++)
						{
							for (int jj = 0; jj < 8; jj++)
							{
								IsNo[0] += NoOfExistInReducedSupportList(Before, RowS, ColS, ii, jj);
							}
						}
						IsNo[1] = i;
					}
				}
			}
		}
		else
		{
			for (int i = 0; i < HeuristicAllReducedSupport.size(); i++)
			{
				if (HeuristicAllReducedSupport[i][2] == RowS && HeuristicAllReducedSupport[i][3] == ColS)
				{
					for (int ii = 0; ii < 8; ii++)
					{
						for (int jj = 0; jj < 8; jj++)
						{
							IsNo[0] += NoOfExistInReducedSupportList(Before, RowS, ColS, ii, jj);
						}
					}
					IsNo[1] = i;
				}
			}
		}
		return IsNo;
	}

	bool ThinkingHybridizerRefrigitz::ObjectMovable(int Row, int Col, int** Tab, int Order, int a)
	{
		bool Is = false;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (Movable(CloneATable(Tab), Row, Col, i, j, a, Order))
				{
					return true;
				}
				if (Attack(CloneATable(Tab), Row, Col, i, j, a, Order))
				{
					return true;
				}
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::Exist(std::vector<int*> &A, int* s)
	{
		bool Is = false;
		for (int h = 0; h < A.size(); h++)
		{
			if (A[h][0] == s[0] && A[h][1] == s[1])
			{
				Is = true;
				break;
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::ExistFull(std::vector<int*> &A, int *s)
	{
		bool Is = false;
		for (int h = 0; h < A.size(); h++)
		{
			if (A[h][0] == s[0] && A[h][1] == s[1] && A[h][2] == s[2] && A[h][3] == s[3])
			{
				Is = true;
				break;
			}
		}
		return Is;
	}

	bool ThinkingHybridizerRefrigitz::ExistFullDoubleList(std::vector<std::vector<int*>> &A, std::vector<int*> &s)
	{
		bool Is = true;
		for (int t = 0; t < s.size(); t++)
		{
			bool IsI = false;
			for (int h = 0; h < A.size(); h++)
			{
				if (ExistFull(A[h], s[t]))
				{
					IsI = true;
				}
			}
			Is = IsI && Is;
		}
		return Is;
	}

	int ThinkingHybridizerRefrigitz::NoOfObjectNotMovable(int** Tab, int Order, int a, int &Total, int &Is)
	{
		std::vector<int*> IsThere = std::vector<int*>();
		for (int Row = 0; Row < 8; Row++)
		{
			for (int Col = 0; Col < 8; Col++)
			{
				if (Order == 1 && Tab[Row][Col] > 0)
				{
					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							if (Movable(CloneATable(Tab), Row, Col, i, j, a, Order) && ((TableInitiationPreventionOfMultipleMove[Row][Col] == 0 && TableInitiation[Row][Col] == Tab[Row][Col])))
							{
								int ij[2];
								ij[0] = Row;
								ij[1] = Col;
								if (!(Exist(IsThere, ij)))
								{
									IsThere.push_back(ij);
									Is++;
								}
							}

						}
					}
					Total++;
				}
				if (Order == -1 && Tab[Row][Col] < 0)
				{
					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							if (Movable(CloneATable(Tab), Row, Col, i, j, a, Order) && ((TableInitiationPreventionOfMultipleMove[Row][Col] == 0 && TableInitiation[Row][Col] == Tab[Row][Col])))
							{
								int ij[2];
								ij[0] = Row;
								ij[1] = Col;
								if (!(Exist(IsThere, ij)))
								{
									IsThere.push_back(ij);
									Is++;
								}
							}
						}
					}
					Total++;
				}
			}
		}
		Is = Total - Is;
		return Is;
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::CastleThinkingWHITE(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			TableS = CloneATable(TableConst);
			int HeuristicAttackValue = int();
			int HeuristicMovementValue = int();
			int HeuristicSelfSupportedValue = int();
			int HeuristicReducedMovementValue = int();
			int HeuristicReducedSupport = int();
			int HeuristicReducedAttackValue = int();
			int HeuristicDistributionValue = int();
			int HeuristicKingSafe = int();
			int HeuristicFromCenter = int();
			int HeuristicKingDangour = int();
			int HeuristicCheckedMate = int();
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			ThinkingAtRun = true;
			int CheckedM = 0;
			bool PenaltyVCar = false;
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//When is Castles WHITE King.
			//Predict Heuristic Caluculatio Before Movments.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				ThinkingRun = true;
			}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			CalculateHeuristics(TmpL, TmpW, true, Order, 0, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

			////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (A)
			{
				NumbersOfAllNode++;
			}
			if (TableS[RowDestination][ColumnDestination] > 0 && TableS[RowSource][ColumnSource] > 0)
			{
				IsSup.push_back(true);
				IsSupHu.push_back(true);
			}
			else
			{
		 if (TableS[RowDestination][ColumnDestination] < 0 && TableS[RowSource][ColumnSource] < 0)
		 {
				IsSup.push_back(true);
				IsSupHu.push_back(true);
		 }
			else
			{
				IsSup.push_back(false);
				IsSupHu.push_back(false);
			}
			}
			int Killed = 0;
			if (RowDestination < RowSource)
			{
				TableS[RowSource - 1][ColumnDestination] = 4;
				TableS[RowSource - 2][ColumnDestination] = 6;
				TableS[RowSource][ColumnSource] = 0;

			}
			else
			{
				TableS[RowSource + 1][ColumnDestination] = 4;
				TableS[RowSource + 2][ColumnDestination] = 6;
				TableS[RowSource][ColumnSource] = 0;

			}
			PenaltyVCar = false;
			TmpL = LoseOcuuredatChiled;
			TmpW = WinOcuuredatChiled;
			 PenaltyMechanisam(PenaltyVCar, TmpL, TmpW, CheckedM, Killed, false, Kind, CloneATable(TableS), RowSource, ColumnSource, Current, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, RowDestination, ColumnDestination, Castle_Renamed);


			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;
			//Store Movments Items.
			int AS[2];
			AS[0] = RowDestination;
			AS[1] = ColumnDestination;
			RowColumnKing.push_back(AS);
			TableListKing.push_back(CloneATable(TableS));
			IndexKing++;
			//Calculate Movment Heuristic After Movments.
			//Caused this for Stachostic results.
			TmpL = LoseOcuuredatChiled;
			TmpW = WinOcuuredatChiled;
			 CalculateHeuristics(TmpL, TmpW, false, Order, Killed, CloneATable(TableS), RowSource, ColumnSource, RowDestination, ColumnDestination, color, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

			//std::wstring H = L"";
			AsS(RowSource, ColumnSource, RowDestination, ColumnDestination);
			int Hu[10];
			////auto a6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (A6)
			{
				//if (IgnoreFromCheckandMateHeuristic)

				 HuMethod(Hu, HeuristicAttackValue, HeuristicMovementValue, HeuristicSelfSupportedValue, HeuristicReducedMovementValue, HeuristicReducedSupport, HeuristicReducedAttackValue, HeuristicDistributionValue, HeuristicKingSafe, HeuristicFromCenter, HeuristicKingDangour, HeuristicCheckedMate);


//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
				//H = std::wstring(L" HAttack:" + ((Hu[0])).ToString() + std::wstring(L" HMove:" + ((Hu[1])).ToString() + std::wstring(L" HSelSup:" + ((Hu[2])).ToString() + std::wstring(L" HCheckedMateDang:" + ((Hu[3])).ToString() + std::wstring(L" HKiller:" + ((Hu[4])).ToString() + std::wstring(L" HReduAttack:" + ((Hu[5])).ToString() + std::wstring(L" HDisFromCurrentEnemyking:" + ((Hu[6])).ToString() + std::wstring(L" HKingSafe:" + ((Hu[7])).ToString() + std::wstring(L" HObjFromCeneter:" + ((Hu[8])).ToString() + std::wstring(L" HKingDang:" + ((Hu[9])).ToString();
			}
			////auto o7 = new Object();
			SetObjectNumbersInList(TableS);
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O7)
			{
				if (RowDestination < RowSource)
				{
					//if (Order == 1)
					//else
					ThinkingLevel++;
				}
				else
				{
					//if (Order == 1)
					//else
					ThinkingLevel++;
				}
				HeuristicListKing.push_back(Hu);
				ThinkingAtRun = false;
			}
		}
		ThinkingAtRun = false;
	}

	void ThinkingHybridizerRefrigitz::HeuristicPenaltyValuePerform(QuantumAtamata* Current, int Order, int &HeuristicAttackValue, bool AllDrawClass = false)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (LearningVarsObject.empty() || AllDrawClass)
			{
				if (Order !=  AllDraw::OrderPlateDraw)
				{
					if (Current->IsPenaltyAction() == 0)
					{
						HeuristicAttackValue--;
					}
				}
				else
				{
					if (AllDraw::OrderPlateDraw != Order)
					{
					if (Current->IsPenaltyAction() == 0)
					{
						HeuristicAttackValue++;
					}
					}
				}
				if (Order !=  AllDraw::OrderPlateDraw)
				{
					if (Current->IsRewardAction() == 1)
					{
						HeuristicAttackValue++;
					}
				}
				else
				{
					if (AllDraw::OrderPlateDraw != Order)
					{
					if (Current->IsRewardAction() == 1)
					{
						HeuristicAttackValue++;
					}
					}
				}
			}
			else
			{
				if ((LearningVarsObject[LearningVarsObject.size() - 1][1] && !LearningVarsObject[LearningVarsObject.size() - 1][4]))
				{
					if (Order !=  AllDraw::OrderPlateDraw)
					{
						if (Current->IsPenaltyAction() == 0)
						{
							HeuristicAttackValue -= 2;
						}
					}
					else
					{
					  if (AllDraw::OrderPlateDraw != Order)
					  {
						if (Current->IsPenaltyAction() == 0)
						{
							HeuristicAttackValue += 2;
						}
					  }
					}
					if (Order !=  AllDraw::OrderPlateDraw)
					{
						if (Current->IsRewardAction() == 1)
						{
							HeuristicAttackValue += 2;
						}
					}
					else
					{
						if (AllDraw::OrderPlateDraw != Order)
						{
						if (Current->IsRewardAction() == 1)
						{
							HeuristicAttackValue -= 2;
						}
						}
					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingSoldierbase(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);
			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			if (Scop(0, jj, i, j, 1) && abs(TableS[ii][jj]) == 1 && abs(Kind) == 1)
			{
				Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
				int *TmpL = LoseOcuuredatChiled;
				int TmpW = WinOcuuredatChiled;
				 SolderThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);



				LoseOcuuredatChiled[0] += TmpL[0];
				WinOcuuredatChiled += TmpW;
			}
		}
	}

	void ThinkingHybridizerRefrigitz::ThinkWait()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			do
			{
			} while (ThinkingAtRun);
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingSoldier(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(ii - 2, ii + 3, i =>
			for (int  i = ii - 2; i < ii + 3; i++)
			{
				////Parallel.For(jj - 2, jj + 3, j =>
				for (int  j = jj - 2; j < jj + 3; j++)
				{
					int **TableS; *TableS = new int[8]; for (int b = 0; b < 8; b++)TableS[b] = new int[8];
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						if (Scop(0, jj, i, j, 1))
						{
							for (int  RowS = 0; RowS < 8; RowS++)
							{
								for (int  ColS = 0; ColS < 8; ColS++)
								{
									TableS[RowS][ColS] = TableConst[RowS][ColS];
								}
							}
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
							int *TmpL = LoseOcuuredatChiled;
							int TmpW = WinOcuuredatChiled;
							 ThinkingSoldierbase(TmpL, TmpW, ord, ii, jj, i, j, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



							LoseOcuuredatChiled[0] += TmpL[0];
							WinOcuuredatChiled += TmpW;

						}
					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingElephantbase(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);

			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				///Else for Elephant Thinking->
				if (Scop(0, jj, i, j, 2) && abs(TableS[ii][jj]) == 2 && abs(Kind) == 2)
				{
					Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 ElephantThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingElephant(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O2)
		{
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				////Parallel.For(0, 8, i =>
				for (int  i = 0; i < 8; i++)
				{ ////Parallel.For(0, 8, i =>
					for (int  j = 0; j < 8; j++)
					{
						////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O)
						{

							if (Scop(0, jj, i, j, 2))
							{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
								int *TmpL = LoseOcuuredatChiled;
								int TmpW = WinOcuuredatChiled;
								 ThinkingElephantbase(TmpL, TmpW, ord, ii, jj, i, j, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



								LoseOcuuredatChiled[0] += TmpL[0];
								WinOcuuredatChiled += TmpW;

							}
						}
					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseOne(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);

			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = ord;
				if (Scop(0, jj, ii + 2, jj + 1, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii + 2, jj + 1, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseTwo(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);


			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);

			Order = ord;
			if (Scop(0, jj, ii - 2, jj - 1, 3))
			{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
				int *TmpL = LoseOcuuredatChiled;
				int TmpW = WinOcuuredatChiled;
				 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii - 2, jj - 1, Castle_Renamed);



				LoseOcuuredatChiled[0] += TmpL[0];
				WinOcuuredatChiled += TmpW;
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseThree(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);

			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{

				Order = ord;
				if (Scop(0, jj, ii + 2, jj - 1, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii + 2, jj - 1, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseFour(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);

			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);

			Order = ord;
			if (Scop(0, jj, ii - 2, jj + 1, 3))
			{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
				int *TmpL = LoseOcuuredatChiled;
				int TmpW = WinOcuuredatChiled;
				 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii - 2, jj + 1, Castle_Renamed);



				LoseOcuuredatChiled[0] += TmpL[0];
				WinOcuuredatChiled += TmpW;
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseFive(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);


			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = ord;
				if (Scop(0, jj, ii + 1, jj + 2, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii + 1, jj + 2, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseSix(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);


			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = ord;
				if (Scop(0, jj, ii - 1, jj - 2, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii - 1, jj - 2, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseSeven(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);


			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o111 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O111)
			{
				Order = ord;
				if (Scop(0, jj, ii + 1, jj - 2, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii + 1, jj - 2, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourseEight(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o111 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O111)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);

			///Initiate a Local Variables.
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = ord;
				if (Scop(0, jj, ii - 1, jj + 2, 3))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 HourseThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, ii - 1, jj + 2, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingHourse(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseOne(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseTwo(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O2)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseThree(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O3)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseFour(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o4 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O4)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseFive(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o5 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O5)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseSix(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o6 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O6)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseSeven(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
		////auto o7 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O7)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingHourseEight(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;

		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingCastleOne(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, i =>
			for (int  i = 0; i < 8; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto j = jj;
					///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
					int **TableS = CloneATable(TableConst);
					///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
					QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
					if (Scop(0, jj, i, j, 4) && abs(TableS[ii][jj]) == 4 && abs(Kind) == 4)
					{
						Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						 CastlesThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);



						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingCastleTow(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		//==================
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////Parallel.For(0, 8, j =>
			for (int  j = 0; j < 8; j++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

					auto i = ii;
					///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
					int **TableS = CloneATable(TableConst);
					///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
					QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);

					if (Scop(0, jj, i, j, 4) && abs(TableS[ii][jj]) == 4 && abs(Kind) == 4)
					{
						Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						 CastlesThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);

						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;
					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingCastle(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
			int *TmpL = LoseOcuuredatChiled;
			int TmpW = WinOcuuredatChiled;
			 ThinkingCastleOne(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;
			 ThinkingCastleTow(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);

			LoseOcuuredatChiled[0] += TmpL[0];
			WinOcuuredatChiled += TmpW;
		}

	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingMinisterbase(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{

			///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
			int **TableS = CloneATable(TableConst);
			///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
			QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{

				if (Scop(0, jj, i, j, 5) && abs(TableS[ii][jj]) == 5 && abs(Kind) == 5)
				{
					Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 MinisterThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;

				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingMinister(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			int **TableS; *TableS = new int[8]; for (int b = 0; b < 8; b++)TableS[b] = new int[8];
			////Parallel.For(0, 8, i =>
			for (int  i = 0; i < 8; i++)
			{
				////Parallel.For(0, 8, j =>
				for (int  j = 0; j < 8; j++)
				{
					TableS = CloneATable(TableConst);
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
						int *TmpL = LoseOcuuredatChiled;
						int TmpW = WinOcuuredatChiled;
						 ThinkingMinisterbase(TmpL, TmpW, ord, ii, jj, i, j, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						LoseOcuuredatChiled[0] += TmpL[0];
						WinOcuuredatChiled += TmpW;

					}
				}
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingCastleBLACK(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			for (int  i = ii - 2; i < ii + 2; i++)
			{


				///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
				int **TableS = CloneATable(TableConst);

				///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);

				///Calculate of Castles of BLACK.
				if ((new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, -7, CloneATable(TableS), Order, ii, jj))->Rules(0, jj, i, jj, color, -7, true) && (ChessRules::CastleKingAllowedBLACK))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 CastleThinkingBLACK(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, jj, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				ThinkingAtRun = false;
			}
		}

	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingCastleWHITE(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			for (int  i = ii - 2; i < ii + 2; i++)
			{

				///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
				int **TableS = CloneATable(TableConst);

				///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);

				if ((new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 7, CloneATable(TableS), Order, ii, jj))->Rules(0, jj, i, jj, color, 7, true) && (ChessRules::CastleKingAllowedWHITE))
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
					int *TmpL = LoseOcuuredatChiled;
					int TmpW = WinOcuuredatChiled;
					 CastleThinkingWHITE(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, jj, Castle_Renamed);



					LoseOcuuredatChiled[0] += TmpL[0];
					WinOcuuredatChiled += TmpW;
				}
				ThinkingAtRun = false;
			}
		}
	}

//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
	void ThinkingHybridizerRefrigitz::ThinkingKing(int * LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				////Parallel.For(ii - 1, ii + 2, i =>
				for (int  i = ii - 1; i < ii + 2; i++)
				{
					////Parallel.For(jj - 1, jj + 2, j =>
					for (int  j = jj - 1; j < jj + 2; j++)
					{

						if (i == ii && j == jj)
						{
							continue;
						}
						///Initiate a Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int[,] TableS = CloneATable(TableConst);
						int **TableS = CloneATable(TableConst);
						///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
						QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
						if (Scop(0, jj, i, j, 6) && abs(TableS[ii][jj]) == 6 && abs(Kind) == 6)
						{
							Order = ord;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
							int *TmpL = LoseOcuuredatChiled;
							int TmpW = WinOcuuredatChiled;
							 KingThinkingHybridizerRefrigitz(TmpL, TmpW, DummyOrder, DummyCurrentOrder, CloneATable(TableS), ii, jj, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, i, j, Castle_Renamed);



							LoseOcuuredatChiled[0] += TmpL[0];
							WinOcuuredatChiled += TmpW;

						}
					}
				}
			}
		}
	}

	void ThinkingHybridizerRefrigitz::ThinkingWaite()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			while (!ThinkingBegin)
			{
				if (AllDraw::NumberOfLeafComputation != -1)
				{
					break;
				}
			}
		}
	}

	void ThinkingHybridizerRefrigitz::FullGameThinkingTreeInitialization(AllDraw *THIS, int ik, int j, int Order, int kind)
	{
		//soldier
		if (kind == 1)
		{
			//when valid do create of deeper node and string making
			if (TableListSolder.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListSolder[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
		else if (kind == 2) //elephant
		{
			//when valid do create of deeper node and string making
			if (TableListElefant.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListElefant[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
		else if (kind == 3) //hourse
		{
			//when valid do create of deeper node and string making
			if (TableListHourse.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListHourse[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
		else if (kind == 4) //Castle
		{
			//when valid do create of deeper node and string making
			if (TableListCastle.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListCastle[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
		else if (kind == 5) //minister
		{
			//when valid do create of deeper node and string making
			if (TableListMinister.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListMinister[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
		else if (kind == 6) //king
		{
			//when valid do create of deeper node and string making
			if (TableListKing.size() > AStarGreedy.size())
			{
				if (AStarGreedy.empty())
				{
					//AStarGreedy = std::vector<AllDraw>();
				}
				AStarGreedy.push_back(new AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				AStarGreedy[AStarGreedy.size() - 1]->TableList.clear();
				AStarGreedy[AStarGreedy.size() - 1]->TableList.push_back(CloneATable(TableListKing[j]));
				AStarGreedy[AStarGreedy.size() - 1]->SetRowColumn(0,false);
				AStarGreedy[AStarGreedy.size() - 1]->AStarGreedyStringNode  =THIS;
			}
		}
	}

	void ThinkingHybridizerRefrigitz::ThinkingFullGame(int iAStarGreedy, AllDraw *THIS)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (AllDraw::Deeperthandeeper)
			{
				FullGameAllow = true;
				if (Kind == 1)
				{
					for (int i = 0;i < TableListSolder.size(); i++)
					{
						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListSolder[i], Order * -1, false, false, 0);
					}
				}
				else
				{
				if (Kind == 2)
				{
				  for (int i = 0; i < TableListElefant.size(); i++)
				  {

						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListElefant[i], Order * -1, false, false, 0);
				  }
				}
				else
				{
				if (Kind == 3)
				{
				   for (int i = 0; i < TableListHourse.size(); i++)
				   {

						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListHourse[i], Order * -1, false, false, 0);
				   }
				}
				else
				{
				if (Kind == 4)
				{
				   for (int i = 0; i < TableListCastle.size(); i++)
				   {

						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListCastle[i], Order * -1, false, false, 0);
				   }
				}
				else
				{
				if (Kind == 5)
				{
				   for (int i = 0; i < TableListMinister.size(); i++)
				   {

						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListMinister[i], Order * -1, false, false, 0);
				   }
				}
				else
				{
					if (Kind == 6)
					{

					for (int i = 0; i < TableListKing.size(); i++)
					{
						FullGameThinkingTreeInitialization(THIS, iIndex, i, Order, Kind);
						AStarGreedy[i]->InitiateAStarGreedyt(iAStarGreedy, 0, 0, ColorOpposite(color), TableListKing[i], Order * -1, false, false, 0);
					}
					}
				}
				}
				}
				}
				}
				FullGameAllow = false;
			}
		}
	}

	int ThinkingHybridizerRefrigitz::ColorOpposite(int a)
	{
		if (a == 1)
		{
			return -1;
		}
		return 1;
	}

	bool ThinkingHybridizerRefrigitz::MovableAllObjectsListMethos(int RowS, int ColS)
	{
		bool Is = false;
		if (MovableAllObjectsList.size() == 8)
		{
			if (MovableAllObjectsList[RowS].size() == 8)
			{
				for (int i = 0; i < MovableAllObjectsList[RowS][ColS].size(); i++)
				{
					if (MovableAllObjectsList[RowS][ColS][i][5] == 1)
					{
						Is = true;
					}
				}
			}
		}
		return Is;
	}

	void ThinkingHybridizerRefrigitz::MovableAllObjectsListMethos(int** TableS, bool Before, int RowS, int ColS, int RowD, int ColD, int con, int movable = 1)
	{
		if (Before)
		{
			if (MovableAllObjectsList.empty())
			{
				for (int i = 0; i < 8; i++)
				{
					MovableAllObjectsList.push_back(std::vector<std::vector<int*>>());
					for (int k = 0; k < 8; k++)
					{
						MovableAllObjectsList[i].push_back(std::vector<int*>());
					}
				}
			}
			int B[6];
			B[0] = RowS;
			B[1] = ColS;
			B[2] = RowD;
			B[3] = ColD;
			if (con == 1)
			{
				B[4] = TableS[RowS][ColS];
			}
			else
			{
				B[4] = con;
			}
			B[5] = movable;

			for (int i = 0; i < MovableAllObjectsList[RowS][ColS].size(); i++)
			{
				if (MovableAllObjectsList[RowS][ColS][i][2] == RowS && MovableAllObjectsList[RowS][ColS][i][3] == ColS && MovableAllObjectsList[RowS][ColS][i][4] == TableS[RowS][ColS])
				{
					MovableAllObjectsList[RowS][ColS].erase(MovableAllObjectsList[RowS][ColS].at[i]);
				}
			}
			MovableAllObjectsList[RowS][ColS].push_back(B);

		}
		else
		{
			if (MovableAllObjectsList.empty())
			{
				for (int i = 0; i < 8; i++)
				{
					MovableAllObjectsList.push_back(std::vector<std::vector<int*>>());
					for (int k = 0; k < 8; k++)
					{
						MovableAllObjectsList[i].push_back(std::vector<int*>());
					}
				}
			}
			int B[6];
			B[0] = RowS;
			B[1] = ColS;
			B[2] = RowD;
			B[3] = ColD;
			if (con == 1)
			{
				B[4] = TableS[RowD][ColD];
			}
			else
			{
				B[4] = con;
			}
			B[5] = movable;

			for (int i = 0; i < MovableAllObjectsList[RowS][ColS].size(); i++)
			{
				if (MovableAllObjectsList[RowS][ColS][i][2] == RowS && MovableAllObjectsList[RowS][ColS][i][3] == ColS && MovableAllObjectsList[RowS][ColS][i][4] == TableS[RowS][ColS])
				{
					MovableAllObjectsList[RowS][ColS].erase(MovableAllObjectsList[RowS][ColS].at[i]);
				}
			}
			MovableAllObjectsList[RowD][ColD].push_back(B);

		}
	}

	void ThinkingHybridizerRefrigitz::Thinking(int iAStarGreedy, AllDraw *THIS, int * LoseOcuuredatChiled, int &WinOcuuredatChiled)
	{
		try
		{
			if (Order !=  AllDraw::OrderPlateDraw)
			{
				//Combination of tow elephant s powerfull of tow hourse
				if (Kind == 2)
				{
					RationalPenalty *= 2;
					RationalRegard *= 2;
				}
				if (Kind == 3)
				{
					RationalPenalty /= 2;
					RationalRegard /= 2;
				}
			}
			else
			{
				//defensive of tow elephant and primitative of tow hourse
				if (Kind == 2)
				{
					RationalPenalty /= 2;
					RationalRegard /= 2;
				}
				if (Kind == 3)
				{
					RationalPenalty *= 2;
					RationalRegard *= 2;
				}
			}


			int ord = Order;
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				if (CurrentAStarGredyMax > AllDraw::MaxAStarGreedy)
				{
					ThinkingBegin = false;
					ThinkingFinished = true;

					return;
				}
				ThinkingWaite();


				NumberOfPenalties = 0;
				SetObjectNumbers(CloneATable(TableConst));
				bool PenRegStrore = true;
				// if (Order == new AllDraw.OrderPlateDraw)

				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					BeginThread++;
				}
				{
					if (FoundFirstSelfMating > AllDraw::MaxAStarGreedy) //CheckMateOcuured ||
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{

							ThinkingBegin = false;
							ThinkingFinished = true;
							EndThread++;
						}
						return;
					}
					if (FoundFirstMating > AllDraw::MaxAStarGreedy) //CheckMateOcuured ||
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{

							ThinkingBegin = false;
							ThinkingFinished = true;
							EndThread++;
						}
						return;
					}
				}
				int DummyOrder = Order;
				int DummyCurrentOrder = ChessRules::CurrentOrder;
				//Initiate Locallly Global Variables. 
				IndexSoldier = 0;
				IndexElefant = 0;
				IndexHourse = 0;
				IndexCastle = 0;
				IndexMinister = 0;
				IndexKing = 0;
				int **TableS; *TableS = new int[8]; for (int b = 0; b < 8; b++)TableS[b] = new int[8];
				///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
				///Most Dot Net FrameWork Hot Path
				///Create A Clone of Current Table Constant in ThinkingHybridizerRefrigitz Object Tasble.
				///For Stored Location of Objects.
				auto ii = Row;
				auto jj = Column;
				if (FoundFirstMating > AllDraw::MaxAStarGreedy) //CheckMateOcuured ||
				{
					////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O2)
					{

						ThinkingFinished = true;
						ThinkingBegin = false;
						EndThread++;
					}
					return;
				}
				if (FoundFirstSelfMating > AllDraw::MaxAStarGreedy) //CheckMateOcuured ||
				{
					////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O2)
					{

						ThinkingFinished = true;
						ThinkingBegin = false;
						EndThread++;
					}
					return;
				}
				IgnoreObjectDangour = -1;
				///Initiate a Local Variables.
				*TableS = new int[8]; for (int b = 0; b < 8; b++)TableS[b] = new int[8];
				///"Inizialization of This New Class (Current is Dynamic class Object) is MalFunction (Constant Variable Count).
				QuantumAtamata* Current =new QuantumAtamata(3, 3, 3);
				///Most Dot Net FrameWork Hot Path
				///Create A Clone of Current Table Constant in ThinkingHybridizerRefrigitz Object Tasble.
				for (int  RowS = 0; RowS < 8; RowS++)
				{
					for (int  ColS = 0; ColS < 8; ColS++)
					{
						TableS[RowS][ColS] = TableConst[RowS][ColS];
					}
				}
				///Deterimine for Castle King Wrongly Desision.
//C# TO C++ CONVERTER NOTE: The variable Castle was renamed since it is named the same as a user-defined type:
				bool Castle_Renamed = false;
				bool DoEnemySelf = true;
				ChessRules *AAA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, TableS[ii][jj], CloneATable(TableS), Order, ii, jj);
				if (AAA->CheckMate(CloneATable(TableS), Order))
				{
					if (AAA->CheckMateWHITE || AAA->CheckMateBLACK)
					{
						////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O2)
						{
							ThinkingFinished = true;
							CheckMateOcuured = true;
							if ((AAA->CheckMateWHITE && AllDraw::OrderPlateDraw == 1) || (AAA->CheckMateBLACK && AllDraw::OrderPlateDraw == -1)) //(AAA->CheckWHITE && AllDraw.OrderPlateDraw == 1) || (AAA->CheckBLACK && AllDraw.OrderPlateDraw == -1) ||
							{
								FoundFirstSelfMating++;
								if (Order == AllDraw::OrderPlateDraw)
								{
									LoseOcuuredatChiled[0] = -2;
								}
								IsThereMateOfSelf.push_back(true);
							}
							if ((AAA->CheckMateWHITE && AllDraw::OrderPlateDraw == -1) || (AAA->CheckMateBLACK && AllDraw::OrderPlateDraw == 1))
							{
								if (Order == AllDraw::OrderPlateDraw)
								{
									WinOcuuredatChiled = 3;
								}
								FoundFirstMating++;
								IsThereMateOfEnemy.push_back(true);
							}
							EndThread++;
						}
						return;
					}
				}
				if (Order == -1 && AAA->CheckBLACK)
				{
					IgnoreObjectDangour = 0;
					IsCheck = true;
					DoEnemySelf = false;
				}
				if (Order == -1 && AAA->CheckWHITE)
				{
					IgnoreObjectDangour = 0;
					IsCheck = true;
					DoEnemySelf = false;
				}
				if (Order == -1 && AAA->CheckWHITE)
				{
					IgnoreObjectDangour = 0;
					IsCheck = true;
					DoEnemySelf = false;
				}
				if (Order == 1 && AAA->CheckBLACK)
				{
					IgnoreObjectDangour = 0;
					IsCheck = true;
					DoEnemySelf = false;
				}
				//When Root is CheckMate Benefit of Current Order No Consideration.
				int CDumnmy = ChessRules::CurrentOrder;
				bool EnemyCheckMateActionsString = false;
				DummyOrder = Order;
				DummyCurrentOrder = Order;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				///Calculate Castles of WHITE King.
				///
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* TmpL = LoseOcuuredatChiled;
				int *TmpL = LoseOcuuredatChiled;
				int TmpW = WinOcuuredatChiled;
				switch (Kind)
				{
					case 7:

						 this->ThinkingCastleWHITE(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					case -7:

						 this->ThinkingCastleBLACK(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					case 1: ///For Soldier Thinking

						 ThinkingSoldier(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					case 2: ///For Elephant Thinking

						 ThinkingElephant(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					case 3: ///For Hourse Thinking

						 ThinkingHourse(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					///Else For Castles Thinking->
					case 4: ///For Castle Thinking
						 ThinkingCastle(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					///Else for Minister Thinkings.
					case 5: ///For Minister Thinking

						 ThinkingMinister(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
					///Else For Kings Thinkings.
					case 6: ///For King Thinking
						 ThinkingKing(TmpL, TmpW, ord, ii, jj, DummyOrder, DummyCurrentOrder, DoEnemySelf, PenRegStrore, EnemyCheckMateActionsString, Castle_Renamed);



						break;
				}
				LoseOcuuredatChiled[0] += TmpL[0];
				WinOcuuredatChiled += TmpW;
				////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O3)
				{
					///Initiate Global Varibales at END.
					ThinkingBegin = false;
					///This Variable Not Work! 
					ThinkingFinished = true;
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					EndThread++;
				}
				//
				///Return at End.
			}
			ThinkingFullGame(iAStarGreedy, THIS);
			TowDistrurbProperUsePreferNotToClose(LoseOcuuredatChiled, TableConst);
			TowDistrurbProperUse(LoseOcuuredatChiled);
		}
		catch (std::exception &t)
		{
			
			ThinkingBegin = false;
			ThinkingFinished = true;
			ThinkingAtRun = false;
		}
		return;
	}

	bool ThinkingHybridizerRefrigitz::IsTheeAtleastMAteSelf()
	{
		bool Is = false;
		for (int i = 0; i < IsThereMateOfSelf.size(); i++)
		{
			Is = Is || IsThereMateOfSelf[i];
		}
		return Is;

	}

	void ThinkingHybridizerRefrigitz::TowDistrurbProperUse(int * LoseOcuuredatChiled)
	{
		////auto oI = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OI)
		{
			if (!IsTheeAtleastMAteSelf())
			{
				if (RemoveOfDisturbIndex == -1)
				{
					if (IsSupHu.size() > 0)
					{
						bool IsSup = true;
						for (int i = 0; i < IsSupHu.size(); i++)
						{
							//if (IsThereMateOfSelf[i])
							//LoseChiled[i] = -8;
							IsSup = IsSup && IsSupHu[i];
						}
						if (IsSup)
						{
							if (HeuristicAllReducedAttackedMidel - 1 == (HeuristicAllReducedAttacked.size() - HeuristicAllReducedAttackedMidel))
							{
								int i = IndexOfMoved();
								if (i != -1)
								{
									RemoveOfDisturbIndex = IndexOfIsSupTRUE(Kind, HeuristicAllReducedAttacked[i][0], HeuristicAllReducedAttacked[i][1]);
									if (RemoveOfDisturbIndex != -1)
									{
										IsSupHu[RemoveOfDisturbIndex] = false;
									}
									else
									{
										if (Order == AllDraw::OrderPlateDraw)
										{
											LoseOcuuredatChiled[0] = -4;
										}
									}
								}
								else
								{
									if (Order == AllDraw::OrderPlateDraw)
									{
										LoseOcuuredatChiled[0] = -4;
									}
								}

							}
							else
							{
								if (Order == AllDraw::OrderPlateDraw)
								{
									LoseOcuuredatChiled[0] = -4;
								}
							}
						}
					}

				}
			}
		}
	}

	void ThinkingHybridizerRefrigitz::TowDistrurbProperUsePreferNotToClose(int * LoseOcuuredatChiled, int** Tab)
	{
		////auto oI = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OI)
		{
			if (!IsTheeAtleastMAteSelf())
			{
				if (RemoveOfDisturbIndex == -1)
				{
					if (IsSupHu.size() > 0)
					{
						bool IsSup = true;
						for (int i = 0; i < IsSupHu.size(); i++)
						{
							//if (IsThereMateOfSelf[i])
							//LoseChiled[i] = -8;
							IsSup = IsSup && IsSupHu[i];
						}
						if (IsSup)
						{
							if (HeuristicDoubleDefenceIndexInOnGameMidle > (HeuristicDoubleDefenceIndexInOnGame.size() - HeuristicDoubleDefenceIndexInOnGameMidle))
							{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: int* i = IndexOfMovedDoubleDefence(Tab);
								int *i = IndexOfMovedDoubleDefence(Tab);
								if (*i!= -1 & i[1] != -1)
								{
									if (Kind != i[2])
									{
										return;
									}
									RemoveOfDisturbIndex = IndexOfIsSupTRUE(abs(TableConst[HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][2]][HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][3]]), HeuristicDoubleDefenceIndexInOnGame[i[0]]);
									bool a = MovableAllObjectsListMethos(HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][2], HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][3]);
									if (RemoveOfDisturbIndex != -1 && a)
									{
										IsSupHu[RemoveOfDisturbIndex] = false;
									}
									else if (!a)
									{
										if (Order == AllDraw::OrderPlateDraw)
										{
											LoseOcuuredatChiled[0] = 5;
											LoseOcuuredatChiled[1] = HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][2];
											LoseOcuuredatChiled[2] = HeuristicDoubleDefenceIndexInOnGame[i[0]][i[1]][3];
										}
									}
								}
								else
								{
									if (Order == AllDraw::OrderPlateDraw)
									{
										LoseOcuuredatChiled[0] = -4;
									}
								}

							}
						}
					}
				}
			}
		}
	}

	int ThinkingHybridizerRefrigitz::IndexOfMoved()
	{
	#pragma warning disable CS0219 // The variable 'i' is assigned but its value is never used
		int i = -1;
	#pragma warning restore CS0219 // The variable 'i' is assigned but its value is never used
		for (int j = 0; j < HeuristicAllReducedAttackedMidel; j++)
		{
			bool Is = false;
			for (int k = HeuristicAllReducedAttackedMidel; k < HeuristicAllReducedAttacked.size(); k++)
			{
				if (HeuristicAllReducedAttacked[j][0] == HeuristicAllReducedAttacked[k][0] && HeuristicAllReducedAttacked[j][1] == HeuristicAllReducedAttacked[k][1] && HeuristicAllReducedAttacked[j][2] == HeuristicAllReducedAttacked[k][2] && HeuristicAllReducedAttacked[j][3] == HeuristicAllReducedAttacked[k][3])
				{
					Is = true;
				}
			}
			if (!Is)
			{
				return j;
			}
		}
		return -1;
	}

	int *ThinkingHybridizerRefrigitz::IndexOfMovedDoubleDefence(int** Tab)
	{
		int Object = 0;
		int ObjectIndex[3] = {-1, -1, -1};
		bool Is = false;
		for (int i = 0; i < HeuristicDoubleDefenceIndexInOnGameMidle; i++)
		{
			if (HeuristicDoubleDefenceIndexInOnGame[i].size() == 1)
			{
				continue;
			}
			for (int j = 0; j < HeuristicDoubleDefenceIndexInOnGame[i].size(); j++)
			{
				if (abs(Tab[HeuristicDoubleDefenceIndexInOnGame[i][j][2]][HeuristicDoubleDefenceIndexInOnGame[i][j][3]]) > ObjectIndex[2])
				{
					Is = true;
					ObjectIndex[0] = i;
					ObjectIndex[1] = j;
					ObjectIndex[2] = abs(Tab[HeuristicDoubleDefenceIndexInOnGame[i][j][2]][HeuristicDoubleDefenceIndexInOnGame[i][j][3]]);
				}
			}
		}
		if (HeuristicDoubleDefenceIndexInOnGameMidle > 0 && HeuristicDoubleDefenceIndexInOnGameMidle != HeuristicDoubleDefenceIndexInOnGame.size())
		{
			Is = false;
			for (int i = HeuristicDoubleDefenceIndexInOnGameMidle; i < HeuristicDoubleDefenceIndexInOnGame.size(); i++)
			{
				for (int j = 0; j < HeuristicDoubleDefenceIndexInOnGame[i].size(); j++)
				{
					if (abs(Tab[HeuristicDoubleDefenceIndexInOnGame[i][j][2]][HeuristicDoubleDefenceIndexInOnGame[i][j][3]]) == Object)
					{
						Is = true;
					}
				}
			}
		}
		else
		{
			Is = false;
		}
		if (Is)
		{
			ObjectIndex[0] = -1;
			ObjectIndex[1] = -1;
		}
		return ObjectIndex;


	}

	int ThinkingHybridizerRefrigitz::IndexOfIsSupTRUE(int Kind, int RowD, int ColD)
	{
	#pragma warning disable CS0219 // The variable 'i' is assigned but its value is never used
		int i = -1;
	#pragma warning restore CS0219 // The variable 'i' is assigned but its value is never used
	#pragma warning disable CS0219 // The variable 'Is' is assigned but its value is never used
		bool Is = false;
	#pragma warning restore CS0219 // The variable 'Is' is assigned but its value is never used
		if (Kind == 1)
		{
			for (int j = 0; j < RowColumnSoldier.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnSoldier[j][0], RowColumnSoldier[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		else
		{
		if (Kind == 2)
		{
			for (int j = 0; j < RowColumnElefant.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnElefant[j][0], RowColumnElefant[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		else
		{
		if (Kind == 3)
		{
			for (int j = 0; j < RowColumnHourse.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnHourse[j][0], RowColumnHourse[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		else
		{
		if (Kind == 4)
		{
			for (int j = 0; j < RowColumnCastle.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnCastle[j][0], RowColumnCastle[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		else
		{
		if (Kind == 5)
		{
			for (int j = 0; j < RowColumnMinister.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnMinister[j][0], RowColumnMinister[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		else
		{
		if (Kind == 6)
		{
			for (int j = 0; j < RowColumnKing.size(); j++)
			{
				if (IsSup[j])
				{
					continue;
				}
				if (NoOfExistInReducedAttackList(false, RowColumnKing[j][0], RowColumnKing[j][1], RowD, ColD) == 0)
				{
					return j;
				}
			}
		}
		}
		}
		}
		}
		}
		return -1;
	}

	int ThinkingHybridizerRefrigitz::IndexOfIsSupTRUE(int Kind, std::vector<int*> &Row)
	{
		int jj = -1;
		bool Is = false;
		if (Kind == 1)
		{
			for (int j = 0; j < RowColumnSoldier.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (IsSup[j])
					{
						continue;
					}
					if (NoOfExistInReducedAttackList(false, RowColumnSoldier[j][0], RowColumnSoldier[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}

				}
			}
		}
		else
		{
		if (Kind == 2)
		{
			for (int j = 0; j < RowColumnElefant.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (IsSup[j])
					{
						continue;
					}
					if (NoOfExistInReducedAttackList(false, RowColumnElefant[j][0], RowColumnElefant[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}
				}
			}
		}
		else
		{
		if (Kind == 3)
		{
			for (int j = 0; j < RowColumnHourse.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (IsSup[j])
					{
						continue;
					}
					if (NoOfExistInReducedAttackList(false, RowColumnHourse[j][0], RowColumnHourse[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}
				}
			}
		}
		else
		{
		if (Kind == 4)
		{
			for (int j = 0; j < RowColumnCastle.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (NoOfExistInReducedAttackList(false, RowColumnCastle[j][0], RowColumnCastle[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}
				}
			}
		}
		else
		{
		if (Kind == 5)
		{
			for (int j = 0; j < RowColumnMinister.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (IsSup[j])
					{
						continue;
					}
					if (NoOfExistInReducedAttackList(false, RowColumnMinister[j][0], RowColumnMinister[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}
				}
			}
		}
		else
		{
		if (Kind == 6)
		{
			for (int j = 0; j < RowColumnKing.size(); j++)
			{
				for (int i = 0; i < Row.size(); i++)
				{
					if (IsSup[j])
					{
						continue;
					}
					if (NoOfExistInReducedAttackList(false, RowColumnKing[j][0], RowColumnKing[j][1], Row[i][0], Row[i][1]) != 0)
					{
						Is = true;
					}
					else
					{
						jj = j;
					}
				}
			}
		}
		}
		}
		}
		}
		}
		if (!Is)
		{
			return jj;
		}
		return -1;
	} //objects value main method

	int ThinkingHybridizerRefrigitz::RetrunValValue(int RowS, int ColS, int RowO, int ColO, int** Tab, int Sign)
	{
		int O = 0;
		if (RowO == -1 && ColO == -1)
		{
			O = abs(Tab[RowS][ColS]);
		}
		else
		{
			O = abs(Tab[RowS][ColS]) + abs(Tab[RowO][ColO]);
		}
		O *= Sign;
		return O;
	}

	int ThinkingHybridizerRefrigitz::ObjectValueCalculator(int** Table, int RowS, int ColS, int RowO, int ColumnO)
	{
		int Val = 1;
		if (Table[RowS][ColS] / Order > 0)
		{
			if (abs(Table[RowS][ColS]) == 2)
			{
				Val = Val * 3;
			}
			else
			{
					if (abs(Table[RowS][ColS]) == 3)
					{
				Val = Val * 3;
					}
			else
			{
						if (abs(Table[RowS][ColS]) == 4)
						{
				Val = Val * 5;
						}
			else
			{
							if (abs(Table[RowS][ColS]) == 5)
							{
				Val = Val * 9;
							}
			else
			{
							if (abs(Table[RowS][ColS]) == 6)
							{
				Val = Val * 10;
							}
			}
			}
			}
			}
		}
		else
		{
		if (Table[RowO][ColumnO] / Order > 0)
		{
			if (abs(Table[RowO][ColumnO]) == 2)
			{
				Val = Val * 3;
			}
			else
			{
			   if (abs(Table[RowO][ColumnO]) == 3)
			   {
				Val = Val * 3;
			   }
			else
			{
				   if (abs(Table[RowO][ColumnO]) == 4)
				   {
				Val = Val * 5;
				   }
			else
			{
					   if (abs(Table[RowO][ColumnO]) == 5)
					   {
				Val = Val * 9;
					   }
			else
			{
					   if (abs(Table[RowO][ColumnO]) == 6)
					   {
				Val = Val * 10;
					   }
			}
			}
			}
			}
		}
		}
		//}
		//       if (Val < 0)

		return Val;



	}

	int ThinkingHybridizerRefrigitz::ObjectValueCalculator(int** Table, int RowS, int ColS)
	{
		int Val = 1;

		if (abs(Table[RowS][ColS]) == 1)
		{
			Val = 1;
		}
		else
		{
		if (abs(Table[RowS][ColS]) == 2)
		{
			Val = 3;
		}
		else
		{
					if (abs(Table[RowS][ColS]) == 3)
					{
			Val = 3;
					}
		else
		{
						if (abs(Table[RowS][ColS]) == 4)
						{
			Val = 5;
						}
		else
		{
							if (abs(Table[RowS][ColS]) == 5)
							{
			Val = 9;
							}
		else
		{
							if (abs(Table[RowS][ColS]) == 6)
							{
			Val = 10;
							}
		}
		}
		}
		}
		}
		return Val;
	}

	bool ThinkingHybridizerRefrigitz::SignSelfEmpty(int Obj1, int Obj2, int Order, int &Ord, int &A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (Order == 1)
			{
				if (Obj1 > 0 && Obj2 == 0)
				{
					Is = true;
					A = 1;
					Ord = 1;
				}
			}
			else
			{
				if (Obj1 < 0 && Obj2 == 0)
				{
					Is = true;
					A = -1;
					Ord = -1;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::SignEnemyEmpty(int Obj1, int Obj2, int Order, int &Ord, int &A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (Order == 1)
			{
				if (Obj1 < 0 && Obj2 == 0)
				{
					Is = true;
					A = -1;
					Ord = -1;
				}
			}
			else
			{
				if (Obj1 > 0 && Obj2 == 0)
				{
					Is = true;
					A = 1;
					Ord = 1;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::SignNotEqualEnemy(int Obj1, int Obj2, int Order, int &Ord, int &A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;

			if (Order == 1)
			{
				if (Obj1 < 0 && Obj2 > 0)
				{
					Is = true;
					A = -1;
					Ord = -1;
				}
			}
			else
			{
				if (Obj1 > 0 && Obj2 < 0)
				{
					Is = true;
					A = 1;
					Ord = 1;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::SignEqualSelf(int Obj1, int Obj2, int Order, int &Ord, int &A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;

			if (Order == 1)
			{
				if (Obj1 > 0 && Obj2 > 0)
				{
					Is = true;
					A = 1;
					Ord = 1;
				}
			}
			else
			{
				if (Obj1 < 0 && Obj2 < 0)
				{
					Is = true;
					A = -1;
					Ord = -1;
				}
			}
			return Is;
		}
	}

	bool ThinkingHybridizerRefrigitz::SignNotEqualSelf(int Obj1, int Obj2, int Order, int &Ord, int &A)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool Is = false;
			if (Order == 1)
			{
				if (Obj1 > 0 && Obj2 < 0)
				{
					Is = true;
					A = 1;
					Ord = 1;
				}
			}
			else
			{
				if (Obj1 < 0 && Obj2 > 0)
				{
					Is = true;
					A = -1;
					Ord = -1;
				}
			}
			return Is;
		}
	}

	void ThinkingHybridizerRefrigitz::InitializeInstanceFields()
	{
		MovableAllObjectsList = std::vector<std::vector<std::vector<int*>>>();
		RemoveOfDisturbIndex = -1;
		HeuristicDoubleDefenceIndexInOnGameMidle = 0;
		HeuristicDoubleDefenceIndexInOnGame = std::vector<std::vector<int*>>();
		HeuristicReducedAttackedIndexInOnGameMidle = 0;
		HeuristicReducedAttackedIndexInOnGame = std::vector<int>();
		AchmazPure = std::vector<std::vector<std::vector<int*>>>();
		AchmazPureMidle = 0;
		AchmazReduced = std::vector<std::vector<std::vector<int*>>>();
		AchmazReducedMidle = 0;
		WinChiled = std::vector<int>();
		LoseChiled = std::vector<int>();
		IKIsCentralPawnIsOk = false;
		HeuristicAllSupport = std::vector<int*>();
		HeuristicAllSupportMidel = 0;
		HeuristicAllReducedSupport = std::vector<int*>();
		HeuristicAllReducedSupportMidel = 0;
		HeuristicAllAttacked = std::vector<int*>();
		HeuristicAllAttackedMidel = 0;
		HeuristicAllReducedAttacked = std::vector<int*>();
		HeuristicAllReducedAttackedMidel = 0;
		HeuristicAllMove = std::vector<int*>();
		HeuristicAllMoveMidel = 0;
		HeuristicAllReducedMove = std::vector<int*>();
		HeuristicAllReducedMoveMidel = 0;
		DifOfNoOfSupporteAndReducedSupportWHITE = -DBL_MAX;
		DifOfNoOfSupporteAndReducedSupportBLACK = -DBL_MAX;
		RationalRegard = 10;
		RationalPenalty = -10;
		//RationalWin = 1000;
		//RationalLose = -1000;
		KishSelf = std::vector<bool>();
		KishEnemy = std::vector<bool>();
		HeuristicAttackValueSup = int();
		HeuristicMovementValueSup = int();
		HeuristicSelfSupportedValueSup = int();
		HeuristicReducedMovementValueSup = int();
		HeuristicReducedSupportSup = int();
		HeuristicReducedAttackValueSup = int();
		HeuristicDistributionValueSup = int();
		HeuristicKingSafeSup = int();
		HeuristicFromCenterSup = int();
		HeuristicKingDangourSup = int();
		IsSup = std::vector<bool>();
		IsSupHu = std::vector<bool>();
		IsThereMateOfEnemy = std::vector<bool>();
		IsThereMateOfSelf = std::vector<bool>();
		IsThereCheckOfEnemy = std::vector<bool>();
		IsThereCheckOfSelf = std::vector<bool>();
		ThinkingAtRun = false;
		ThinkingLevel = 0;
		//LearningVarsObject = std::vector<bool*>();
		IsGardHighPriority = false;
		MovementsAStarGreedyHeuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = false;
		BestMovmentsT = false;
		PredictHeuristicT = true;
		OnlySelfT = false;
		AStarGreedyHeuristicT = false;
		ArrangmentsChanged = true;
		NumberOfPenalties = 0;
		SodierMidle = 0;
		SodierHigh = 0;
		ElefantMidle = 0;
		ElefantHigh = 0;
		HourseMidle = 0;
		HourseHight = 0;
		CastleMidle = 0;
		CastleHigh = 0;
		MinisterMidle = 0;
		MinisterHigh = 0;
		KingMidle = 0;
		KingHigh = 0;
		SodierValue = 1 * 3;
		ElefantValue = 2 * 16;
		HourseValue = 3 * 8;
		CastleValue = 5 * 16;
		MinisterValue = 8 * 32;
		KingValue = 10 * 8;
		ExistingOfEnemyHiiting = false;
		IgnoreObjectDangour = -1;
		CheckMateAStarGreedy = 0;
		CheckMateOcuured = false;
		CurrentRow = -1;
		CurrentColumn = -1;
		IsCheck = false;
		Kind = 0;
		HitNumber = std::vector<int>();
		ThingsNumber = 0;
		CurrentArray = 0;
		ThinkingBegin = false;
		ThinkingFinished = false;
		IndexSoldier = 0;
		IndexElefant = 0;
		IndexHourse = 0;
		IndexCastle = 0;
		IndexMinister = 0;
		IndexKing = 0;
		RowColumnSoldier ;
		RowColumnElefant ;
		RowColumnHourse ;
		RowColumnCastle ;
		RowColumnMinister ;
		RowColumnKing ;
		HitNumberSoldier ;
		HitNumberElefant ;
		HitNumberHourse ;
		HitNumberCastle ;
		HitNumberMinister ;
		HitNumberKing ;
		TableListSolder ;
		TableListElefant ;
		TableListHourse ;
		TableListCastle ;
		TableListMinister ;
		TableListKing ;
		HeuristicListSolder ;
		HeuristicListElefant ;
		HeuristicListHourse ;
		HeuristicListCastle ;
		HeuristicListMinister ;
		HeuristicListKing ;
		KillerAtThinking ;
		PenaltyRegardListSolder ;
		PenaltyRegardListElefant ;
		PenaltyRegardListHourse ;
		PenaltyRegardListCastle ;
		PenaltyRegardListMinister ;
		PenaltyRegardListKing ;
		Max = 0;
		Row = 0;
		Column = 0;
		color = (int)0;
		Order = 0;
		//AStarGreedy = std::vector<AllDraw>();
		AStarGreedyMove = std::vector<bool>();
		CurrentAStarGredyMax = -1;
		ObjectNumbers = std::vector<int**>();
	}

