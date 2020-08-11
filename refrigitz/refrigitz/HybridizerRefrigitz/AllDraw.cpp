#include "AllDraw.h"
#include "ChessRules.h"
#include "ThinkingHybridizerRefrigitz.h"
#include "ThingsConverter.h"
#include "HybridizerRefrigitzGeneticAlgorithm.h"
#include "DrawSoldire.h"
#include "DrawElefant.h"
#include "DrawHourse.h"
#include "DrawCastle.h"
#include "DrawMinister.h"
#include "DrawKing.h"

/*
#include "ChessRules.h"
#include "ThinkingHybridizerRefrigitz.h"
#include "ThingsConverter.h"
#include "ChessGeneticAlgorithm.h"
*/
/*
inline AllDraw operator[](const AllDraw lhs, const int rhs) { return (sizeof(lhs)*rhs); }
inline DrawSoldier operator[](const DrawSoldier lhs, const int rhs) { return (sizeof(lhs)*rhs); }
inline DrawCastle operator[](const DrawCastle lhs, const int rhs) { return (sizeof(lhs)*rhs); }
inline DrawElefant operator[](const DrawElefant lhs, const int rhs) { return (sizeof(lhs)*rhs); }
inline DrawHourse operator[](const DrawHourse lhs, const int rhs) { return !(sizeof(lhs)*rhs); }
inline DrawKing operator[](const DrawKing lhs, const int rhs) { return (sizeof(lhs)*rhs); }
inline ThinkingHybridizerRefrigitz operator[](const ThinkingHybridizerRefrigitz lhs, const int rhs) { return (sizeof(lhs)*rhs); }*/
/*
inline bool operator==(const AllDraw* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const AllDraw* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawSoldier* lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawSoldier* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
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
inline bool operator!=(const ThinkingHybridizerRefrigitz* lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
*/
/*
inline bool operator==(const AllDraw& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const AllDraw& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawSoldier& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawSoldier& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawCastle& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawCastle& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawElefant& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawElefant& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawHourse& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawHourse& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawMinister& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawMinister& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const DrawKing& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const DrawKing& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
inline bool operator==(const ThinkingHybridizerRefrigitz& lhs, const std::nullptr_t rhs) { return (lhs == rhs); }
inline bool operator!=(const ThinkingHybridizerRefrigitz& lhs, const std::nullptr_t rhs) { return !(lhs == rhs); }
*/

inline bool operator==(const AllDraw lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const AllDraw lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const DrawSoldier lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const DrawSoldier lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
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
inline bool operator!=(const ThinkingHybridizerRefrigitz lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }

/*
inline bool operator==(const std::vector<AllDraw> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<AllDraw> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawSoldier> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawSoldier> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawCastle> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawCastle> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawElefant> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawElefant> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawHourse> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawHourse> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawMinister> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawMinister> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<DrawKing> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<DrawKing> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
inline bool operator==(const std::vector<ThinkingHybridizerRefrigitz> lhs, const std::nullptr_t rhs) { return ((&lhs) == rhs); }
inline bool operator!=(const std::vector<ThinkingHybridizerRefrigitz> lhs, const std::nullptr_t rhs) { return !((&lhs) == rhs); }
*//*
inline std::wstring* operator+=(const std::wstring *out, const std::wstring *course)
{
	std::wstring* lef =new std::wstring();
	*lef = (*out) + (*course); // for example
	return lef;

}
inline std::wstring operator+=(const std::wstring &out, const std::wstring &course)
{
	std::wstring& lef = std::wstring();
	lef = out + course; // for example
	return lef;

}*/
Timer *AllDraw::Wtime = nullptr;
Timer *AllDraw::Btime = nullptr;
int AllDraw::wtime = 4 * 60 * 1000;
int AllDraw::btime = 4 * 60 * 1000;
int AllDraw::winc = 1000;
int AllDraw::binc = 1000;
int AllDraw::TimeMax = 0;
bool AllDraw::ChangedInTreeOccured = false;
bool AllDraw::ThinkingRunInBothSide = false;
bool AllDraw::IdleInWork = true;
const float AllDraw::MaxTimeInMillisseconds = 10;
float AllDraw::TimeInitiation = 0;
int AllDraw::CalIdle = 1;
int AllDraw::PlatformHelperProcessorCount = 2;
int AllDraw::CompleteNumber = 300;
bool AllDraw::CompleteTreeDo = false;
bool AllDraw::CompleteTreeCancel = false;
int AllDraw::QuntumTable[2][8][8] =
{
	{
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1}
	},
	{
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1},
		{-1, -1, - 1, -1, -1, -1, -1, -1}
	}
};
bool AllDraw::AllowedSupTrue = false;
int AllDraw::OrderPlateDraw = -1;
bool AllDraw::UniqueLeafDetection = false;
bool AllDraw::LeafSemaphoreIndex = false;
bool AllDraw::Deeperthandeeper = false;
bool AllDraw::FirstTraversalTree = true;
int AllDraw::NumberOfLeafComputation = 0;
int AllDraw::DepthIterative = 0;
std::string *AllDraw::OutPut;
std::string *AllDraw::ActionString;
bool AllDraw::ActionStringReady = false;
bool AllDraw::RegardOccurred = false;
int AllDraw::SuppportCountStaticWHITE = 0;
int AllDraw::SuppportCountStaticBLACK = 0;
int AllDraw::TaskBegin = 0;
int AllDraw::TaskEnd = 0;
//std::wstring AllDraw::Root = System::IO::Path::GetDirectoryName(Environment::GetCommandLineArgs()[0]);
int AllDraw::OrderPlate = 1;
bool AllDraw::Blitz = true;
int AllDraw::ConvertedKind = -2;
bool AllDraw::ConvertWait = true;
bool AllDraw::Stockfish = false;
bool AllDraw::Person = true;
bool AllDraw::THISSecradioButtonWHITEOrderChecked = false;
bool AllDraw::THISSecradioButtonBLACKOrderChecked = false;
std::wstring AllDraw::THIScomboBoxMaxLevelText = L"";
AllDraw AllDraw::THISDummy;
bool AllDraw::StateCP = false;
bool AllDraw::StateCC = false;
int AllDraw::LastRow = -1;
int AllDraw::LastColumn = -1;
int AllDraw::NextRow = -1;
int AllDraw::NextColumn = -1;
int AllDraw::MovmentsNumber = 0;
int AllDraw::MaxAStarGreedyHeuristicProgress = 0;
bool AllDraw::EndOfGame = false;
int AllDraw::MinThinkingTreeDepth = DBL_MAX;
int AllDraw::MaxDuringLevelThinkingCreation = 0;
int AllDraw::AStarGreedytMaxCount = 0;
bool AllDraw::FoundATable = false;
int AllDraw::Less = -DBL_MAX;
int AllDraw::increasedProgress = 0;
int AllDraw::CurrentHeuristic = -DBL_MAX;
int AllDraw::SignAttack = 1;
int AllDraw::SignObjectDangour = 1;
int AllDraw::SignReducedAttacked = -1;
int AllDraw::SignSupport = 1;
int AllDraw::SignKiller = 1;
int AllDraw::SignMovments = 1;
int AllDraw::SignDistance = -1;
int AllDraw::SignKingSafe = -1;
int AllDraw::SignKingDangour = -1;
bool AllDraw::DrawTable = true;
int AllDraw::MaxAStarGreedy = 2;
std::vector<int**> AllDraw::TableCurrent = std::vector<int**>();
bool AllDraw::NoTableFound = false;
bool AllDraw::DynamicAStarGreedytPrograming = false;
std::vector<AllDraw> AllDraw::StoreADraw = std::vector<AllDraw>();
std::vector<int> AllDraw::StoreADrawAStarGreedy = std::vector<int>();
bool AllDraw::UseDoubleTime = false;
int AllDraw::AStarGreedyiLevelMax = 0;
bool AllDraw::AStarGreadyFirstSearch = true;
std::wstring AllDraw::ImageRoot = AllDraw::Root + std::wstring(L"\\Images");
std::wstring AllDraw::ImagesSubRoot = AllDraw::ImageRoot + std::wstring(L"\\Fit\\Small\\");
bool AllDraw::RedrawTable = true;
std::wstring AllDraw::SyntaxToWrite = L"";
bool AllDraw::SodierConversionOcuured = false;
int AllDraw::SodierMovments = 1;
int AllDraw::ElefantMovments = 1;
int AllDraw::HourseMovments = 1;
int AllDraw::CastleMovments = 1;
int AllDraw::MinisterMovments = 1;
int AllDraw::KingMovments = 1;
int AllDraw::LoopHeuristicIndex = 0;
std::vector<int> AllDraw::RWList = std::vector<int>();
std::vector<int> AllDraw::ClList = std::vector<int>();
std::vector<int> AllDraw::KiList = std::vector<int>();
std::vector<int**> AllDraw::TableListAction = std::vector<int**>();
int AllDraw::MouseClick = 0;

	
	

	void AllDraw::SetObjectNumbers(int** TabS)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//Initiate
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
					//Cal Solider WHITE
					if (TabS[h][s] == 1)
					{
						//Increase
						SodierMidle++;
						SodierHigh++;
					} //Elephant WHITE
					else if (TabS[h][s] == 2)
					{
						//Increase
						ElefantMidle++;
						ElefantHigh++;
					}
					//Hoirse WHITE
					else if (TabS[h][s] == 3)
					{
						//Increase
						HourseMidle++;
						HourseHight++;
					}
					//Castle WHITE
					else if (TabS[h][s] == 4)
					{
						//Increase
						CastleMidle++;
						CastleHigh++;
					}
					//Minister WHITE
					else if (TabS[h][s] == 5)
					{
						//Increase
						MinisterMidle++;
						MinisterHigh++;
					}
					//King WHITE
					else if (TabS[h][s] == 6)
					{
						//Increase
						KingMidle++;
						KingHigh++;
					}
					else //Solder BLACK
					{
						if (TabS[h][s] == -1)
						{
						//Increase
						SodierHigh++;
						}
					else if (TabS[h][s] == -2) //Elepant BLACK
					{
						//Increase
						ElefantHigh++;
					}
					else if (TabS[h][s] == -3) //Hourse BLACK
					{
						//Increase
						HourseHight++;
					}
					else if (TabS[h][s] == -4) //Castle BLACK
					{
						//Increase
						CastleHigh++;
					}
					else if (TabS[h][s] == -5) //Mincter BLACK
					{
						//Increase
						MinisterHigh++;
					}
					else if (TabS[h][s] == -6) //King BLACK
					{
						//Incrrease
						KingHigh++;
					}
					}
				}
			}
		}

	}

	float *AllDraw::FoundLocationOfObject(int** Tabl, int Kind, bool IsWHITE)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//Initaite
			float Location[2] = {-1, -1};
			//Locate and search
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					//When is WHITE
					if (IsWHITE)
					{
						//When object found
						if (Tabl[i][j] == Kind)
						{
							//Srote location
							Location[0] = i;
							Location[1] = j;
							//Clear Objects from table
							Tabl[i][j] = 0;
						}
					}
					else //Is BLACK
					{
						//When Found
						if (Tabl[i][j] * -1 == Kind)
						{
							//Store Location
							Location[0] = i;
							Location[1] = j;
							//Clear from table
							Tabl[i][j] = 0;
						}
					}
				}
			}

			//returnb location
			return Location;
		}
	}

	AllDraw::~AllDraw()
	{
		InitializeInstanceFields();
		this->Dispose(true);

	}

	void AllDraw::Dispose(bool disposing)
	{
		if (disposing)
		{




		}
	}

	AllDraw::AllDraw(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments)
	{

		InitializeInstanceFields();
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			ThinkingAllowed = new bool[12];
			MaxHeuristicxT = -DBL_MAX;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			ArrangmentsChanged = Arrangments;
			////auto om = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Om)
			{
				FoundATable = false;
			}
			CastlesKing = false;
			increasedProgress = 0;
			////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (ol)
			{
				CurrentHeuristic = -DBL_MAX;
				DrawTable = false;
				*TableVeryfy = new int[8]; for (int b = 0; b < 8; b++)TableVeryfy[b] = new int[8];
			    *TableVeryfyConst = new int[8]; for (int b = 0; b < 8; b++)TableVeryfyConst[b] = new int[8];
				TableCurrent.clear();
				NoTableFound = false;
				DynamicAStarGreedytPrograming = false;
				UseDoubleTime = false;
				AStarGreadyFirstSearch = true;
				ImageRoot = AllDraw::Root + std::wstring(L"\\Images");
				ImagesSubRoot = AllDraw::ImageRoot + std::wstring(L"\\Fit\\Small\\");
			}
			RedrawTable = true;
			SodierConversionOcuured = false;
			SodierMovments = 1;
			ElefantMovments = 1;
			HourseMovments = 1;
			CastleMovments = 1;
			MinisterMovments = 1;
			KingMovments = 1;


			RW = 0;
			CL = 0;
			Ki = 0;
			RW1 = 0;
			CL1 = 0;
			Ki1 = 0;
			MaxLess1 = 0;
			RW2 = 0;
			CL2 = 0;
			Ki2 = 0;
			MaxLess2 = 0;
			RW3 = 0;
			CL3 = 0;
			Ki3 = 0;
			MaxLess3 = 0;
			RW4 = 0;
			CL4 = 0;
			Ki4 = 0;
			MaxLess4 = 0;
			RW5 = 0;
			CL5 = 0;
			Ki5 = 0;
			MaxLess5 = 0;
			RW6 = 0;
			CL6 = 0;
			Ki6 = 0;
			MaxLess6 = 0;
			LoopHeuristicIndex = 0;
			Move_Renamed = 0;

			AStarGreedyIndex = new int[20];
			MaxHeuristicAStarGreedytBackWard.clear();
			//Initiayte Locally Variables.
			TableList = std::vector<int**>();
			//APredict = new ChessPerdict(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged//, ref th

			OrderP = Order;

		}
	}
	/*
	void AllDraw::Clone(AllDraw AA)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

			if (AA == nullptr)
			{
				AA = AllDraw(OrderP, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				AA.TableList.push_back(CloneATable(TableList[0]));
			}
			AA->Tabl = new int[8][8];
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					AA->Tabl[i][j] = Tabl[i][j];
				}
			}
			AA->OrderP = OrderP;
			AA->PerceptionCount = PerceptionCount;
			AA->OutPutAction = OutPutAction;
			//static variable to be Initiate
			AA->ValuableSelfSupported = std::vector<int*>();
			for (int  i = 0; i < 8; i++)
			{
				for (int  j = 0; j < 8; j++)
				{
					AA->ValuableSelfSupported.push_back(ValuableSelfSupported[i]);
				}
			}
			AA->CurrentAStarGredyMax = CurrentAStarGredyMax;
			for (int  i = 0; i < 6; i++)
			{
				AA->Index[i] = Index[i];
			}
			for (int  i = 0; i < 6; i++)
			{
				AA->jindex[i] = jindex[i];
			}
			for (int  i = 0; i < 6; i++)
			{
				AA->Kind[i] = Kind[i];
			}
			if (AStarGreedyStringNode != nullptr)
			{
				AStarGreedyStringNode->Clone(AA->AStarGreedyStringNode);
			}
			if (TableList.size() == 1)
			{
				SetObjectNumbers(TableList[0]);
			}
			MaxHeuristicxT = -DBL_MAX;
			AA->MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicFoundT;
			AA->IgnoreSelfObjectsT = IgnoreSelfObjectsT;
			AA->UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisamT;
			AA->BestMovmentsT = BestMovmentsT;
			AA->PredictHeuristicT = PredictHeuristicT;
			AA->OnlySelfT = OnlySelfT;
			AA->AStarGreedyHeuristicT = AStarGreedyHeuristicT;
			AA->ArrangmentsChanged = ArrangmentsChanged;
			AA->CastlesKing = CastlesKing;

			AA->SodierMidle = SodierMidle;
			AA->SodierHigh = SodierHigh;
			AA->ElefantMidle = ElefantMidle;
			AA->ElefantHigh = ElefantHigh;
			AA->HourseMidle = HourseMidle;
			AA->HourseHight = HourseHight;
			AA->CastleMidle = CastleMidle;
			AA->CastleHigh = CastleHigh;
			AA->MinisterMidle = MinisterMidle;
			AA->MinisterHigh = MinisterHigh;
			AA->KingMidle = KingMidle;
			AA->KingHigh = KingHigh;
			//Initiate a new class object and clone a copy.
			AA->SolderesOnTable = DrawSoldier[SodierHigh];
			AA->ArrangmentsChanged = ArrangmentsChanged;
			for (int  i = 0; i < SodierHigh; i++)
			{
				SolderesOnTable[i].Clone(AA->SolderesOnTable[i]);
			}
			AA->ElephantOnTable = DrawElefant[ElefantHigh];
			for (int  i = 0; i < ElefantHigh; i++)
			{
				ElephantOnTable[i].Clone(AA->ElephantOnTable[i]);

			}
			AA->HoursesOnTable = DrawHourse[HourseHight];
			for (int  i = 0; i < HourseHight; i++)
			{
				HoursesOnTable[i].Clone(AA->HoursesOnTable[i]);

			}
			AA->CastlesOnTable = DrawCastle[CastleHigh];
			for (int  i = 0; i < CastleHigh; i++)
			{
				CastlesOnTable[i].Clone(AA->CastlesOnTable[i]);

			}
			AA->MinisterOnTable = DrawMinister[MinisterHigh];
			for (int  i = 0; i < MinisterHigh; i++)
			{
				MinisterOnTable[i].Clone(AA->MinisterOnTable[i]);

			}
			AA->KingOnTable = DrawKing[KingHigh];
			for (int  i = 0; i < KingHigh; i++)
			{
				KingOnTable[i].Clone(AA->KingOnTable[i]);

			}
			AA->AStarGreedy = AStarGreedy;
			if (AA.TableList.size() > 0)
			{
				AA.TableList.clear();
			}
			for (int  i = 0; i < TableList.size(); i++)
			{
				AA.TableList.push_back(CloneATable(TableList[i]));
			}
			if (AA.TableList.size() > 0)
			{
				AA->SetObjectNumbers(AA.TableList[0]);
			}
			AA->AStarGreedy = AStarGreedy;
		}

	}
	*/
	AllDraw::AllDraw(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, AllDraw THi)
	{

		InitializeInstanceFields();
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{ThinkingAllowed = new bool[12];

			OrderP = Order;
			MaxHeuristicxT = -DBL_MAX;
			MovementsAStarGreedyHeuristicFoundT = MovementsAStarGreedyHeuristicTFou;
			IgnoreSelfObjectsT = IgnoreSelfObject;
			UsePenaltyRegardMechnisamT = UsePenaltyRegardMechnisa;
			BestMovmentsT = BestMovment;
			PredictHeuristicT = PredictHurist;
			OnlySelfT = OnlySel;
			AStarGreedyHeuristicT = AStarGreedyHuris;
			if (!Arrangments)
			{
				ArrangmentsChanged = Arrangments;
			}
			else
			{
				ArrangmentsChanged = Arrangments;
			}
			////auto om = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Om)
			{
				AStarGreedytMaxCount = 0;
			}
			////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Omm)
			{
				FoundATable = false;
			}
			CastlesKing = false;
			increasedProgress = 0;
			////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (ol)
			{
				CurrentHeuristic = -DBL_MAX;
				DrawTable = false;
				*TableVeryfy = new int[8]; for (int b = 0; b < 8; b++)TableVeryfy[b] = new int[8];
				*TableVeryfyConst = new int[8]; for (int b = 0; b < 8; b++)TableVeryfyConst[b] = new int[8];
				TableCurrent.clear();
				NoTableFound = false;
				DynamicAStarGreedytPrograming = false;
				UseDoubleTime = false;
				AStarGreadyFirstSearch = true;
				ImageRoot = AllDraw::Root + std::wstring(L"\\Images");
				ImagesSubRoot = AllDraw::ImageRoot + std::wstring(L"\\Fit\\Small\\");
			}
			RedrawTable = true;
			SodierConversionOcuured = false;
			SodierMovments = 1;
			ElefantMovments = 1;
			HourseMovments = 1;
			CastleMovments = 1;
			MinisterMovments = 1;
			KingMovments = 1;
			SodierMidle = 8;
			SodierHigh = 16;
			ElefantMidle = 2;
			ElefantHigh = 4;
			HourseMidle = 2;
			HourseHight = 4;
			CastleMidle = 2;
			CastleHigh = 4;
			MinisterMidle = 1;
			MinisterHigh = 2;
			KingMidle = 1;
			KingHigh = 2;

			RW = 0;
			CL = 0;
			Ki = 0;
			RW1 = 0;
			CL1 = 0;
			Ki1 = 0;
			MaxLess1 = 0;
			RW2 = 0;
			CL2 = 0;
			Ki2 = 0;
			MaxLess2 = 0;
			RW3 = 0;
			CL3 = 0;
			Ki3 = 0;
			MaxLess3 = 0;
			RW4 = 0;
			CL4 = 0;
			Ki4 = 0;
			MaxLess4 = 0;
			RW5 = 0;
			CL5 = 0;
			Ki5 = 0;
			MaxLess5 = 0;
			RW6 = 0;
			CL6 = 0;
			Ki6 = 0;
			MaxLess6 = 0;
			LoopHeuristicIndex = 0;
			Move_Renamed = 0;

			AStarGreedyIndex = new int[20];
			AStarGreedy = 0;

			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{
				MaxDuringLevelThinkingCreation = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
			}
		}

	}

	bool AllDraw::AllCurrentAStarGreedyThinkingFinished(AllDraw Dum, int i, int j, int Kind)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//For All kind of Current Thinking depend of current type consider finshing state Thinking.
			bool Finished = false;
			{
				//For Soldier
				if (Kind == 1)
				{
					if (Dum.SolderesOnTable[i].SoldierThinking.ThinkingFinished)
					{
						return true;
					}
				}
				//For Elephant
				else if (Kind == 2)
				{
					if (Dum.ElephantOnTable[i].ElefantThinking.ThinkingFinished)
					{
						return true;
					}
				}
				//For Hourse.
				else if (Kind == 3)
				{
					if (Dum.HoursesOnTable[i].HourseThinking.ThinkingFinished)
					{
						return true;
					}
				}
				//For Castles.
				else if (Kind == 4)
				{
					if (Dum.CastlesOnTable[i].CastleThinking.ThinkingFinished)
					{
						return true;
					}
				}
				//For Minsters.
				else if (Kind == 5)
				{
					if (Dum.MinisterOnTable[i].MinisterThinking.ThinkingFinished)
					{
						return true;
					}
				}
				//For Kings.
				else if (Kind == 6)
				{
					if (Dum.KingOnTable[i].KingThinking.ThinkingFinished)
					{
						return true;
					}
				}
			}

			return Finished;
		}

	}

	void AllDraw::SetRowColumn(int index, bool Verify = false)
	{
		SolderesOnTableMove.clear();
		ElephantOnTableMove.clear();
		HoursesOnTableMove.clear();
		CastlesOnTableMove.clear();
		MinisterOnTableMove.clear();
		KingOnTableMove.clear();

		if (Verify)
		{
			if (SetRowColumn())
			{
				return;
			}
			int Dummy = OrderP;
			////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (a1)
			{
				SetObjectNumbers(TableList[0]);
				int So1 = 0;
				int So2 = SodierMidle;
				for (int i = 0; i < SodierHigh; i++)
				{
					SolderesOnTableMove.push_back(false);
				}
				int El1 = 0;
				int El2 = ElefantMidle;
				for (int i = 0; i < ElefantHigh; i++)
				{
					ElephantOnTableMove.push_back(false);
				}
				int Ho1 = 0;
				int Ho2 = HourseMidle;
				for (int i = 0; i < HourseHight; i++)
				{
					HoursesOnTableMove.push_back(false);
				}
				int Br1 = 0;
				int Br2 = CastleMidle;
				for (int i = 0; i < CastleHigh; i++)
				{
					CastlesOnTableMove.push_back(false);
				}
				int Mi1 = 0;
				int Mi2 = MinisterMidle;
				for (int i = 0; i < MinisterHigh; i++)
				{
					MinisterOnTableMove.push_back(false);
				}
				int Ki1 = 0;
				int Ki2 = KingMidle;
				for (int i = 0; i < KingHigh; i++)
				{
					KingOnTableMove.push_back(false);
				}
				SetRowColumnFinished = false;
				Move_Renamed = 0;
				//Intiate Dummy Variables.
				//When Conversion Occured.
				//When Table Exist.
				if (TableList.size() > 0)
				{
					//For Every Table Things.
					for (int Column = 0; Column < 8; Column++)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (CloneATable(TableList[index])[Row][Column] == 0)
							{
								continue;
							}
							//When Things are Soldiers.
							if (abs(CloneATable(TableList[index])[Row][Column]) == 1)
							{
								//Determine int
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //When int is WHITE.
								if (a == 1)
								{
									//Construct Soder WHITE.
									SolderesOnTable[So1].Row = Row;
									SolderesOnTable[So1].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(So1, OrderP, 1);


									//Increase So1.
									So1++;
									if (So1 > SodierMidle)
									{
										SodierMidle++;
										SodierHigh++;
									}
								}
								//When int is BLACK
								else
								{
									//Construct Soldeir BLACK.
									SolderesOnTable[So2].Row = Row;
									SolderesOnTable[So2].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(So2, OrderP, 1);


									//Increase So2.
									So2++;
									if (So2 > SodierHigh)
									{
										SodierHigh++;
									}
								}
							}
							else //For Elephant Objects.
							{
								if (abs(CloneATable(TableList[index])[Row][Column]) == 2)
								{
								//Initiate Local Variables.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //If WHITE Elepahnt
								if (a == 1)
								{
									//Construction of Draw Object.
									ElephantOnTable[El1].Row = Row;
									ElephantOnTable[El1].Column = Column;
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(El1, OrderP, 2);




									//Increament of WHITE Index.
									El1++;
									//If New Object Increament WHITE Objects.
									if (El1 > ElefantMidle)
									{
										ElefantMidle++;
										ElefantHigh++;
									}
								}
								else //For BLACK Elephant .Objects
								{
									//Construction of Draw BLACK Elephant Object. 
									ElephantOnTable[El2].Row = Row;
									ElephantOnTable[El2].Column = Column;
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(El2, OrderP, 2);
									 BlitzNotValidFullGameThinkingTreePartThree(El2, OrderP, 2);



									//Increament of Index.
									El2++;
									//When New BLACK Elephant Object Increament of Index.
									if (El2 > ElefantHigh)
									{
										ElefantHigh++;
									}
								}
								}
							else //For Hourse Objects.
							{
									if (abs(CloneATable(TableList[index])[Row][Column]) == 3)
									{
								//Initiate Local Varibale and int.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //If WHITE Hourse.
								if (a == 1)
								{
									//Construction of Draw BLACK Hourse.
									HoursesOnTable[Ho1].Row = Row;
									HoursesOnTable[Ho1].Column = Column;
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Ho1, OrderP, 3);



									//Increament of Index.
									Ho1++;
									//when There is New WHITE Hourse Increase.
									if (Ho1 > HourseMidle)
									{
										HourseMidle++;
										HourseHight++;
									}
								} //For BLACK Hourses.
								else
								{
									//Construction of Draw BLACK Hourse.
									HoursesOnTable[Ho2].Row = Row;
									HoursesOnTable[Ho2].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Ho2, OrderP, 3);



									//Increament of Index.
									Ho2++;
									//When New BLACK Hourse Exist Exist Index.
									if (Ho2 > HourseHight)
									{
										HourseHight++;
									}
								}
									}
							else //For Castles Objects.
							{
										if (abs(CloneATable(TableList[index])[Row][Column]) == 4)
										{
								//Initiate of Local Variables.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //For WHITE int.
								if (a == 1)
								{
									//Construction of Draw WHITE Castles.
									CastlesOnTable[Br1].Row = Row;
									CastlesOnTable[Br1].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Br1, OrderP, 4);



									//Increamnt of Index.
									Br1++;
									//When New WHITE Briges Increamnt Max Index.
									if (Br1 > CastleMidle)
									{
										CastleMidle++;
										CastleHigh++;
									}
								} //For BLACK Castles.
								else
								{
									//Construction Draw of New BLACK Castles.
									CastlesOnTable[Br2].Row = Row;
									CastlesOnTable[Br2].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Br2, OrderP, 4);



									//Increament of Index.
									Br2++;
									//wehn BLACK New Castles Detected Increament Max Index.
									if (Br2 > CastleHigh)
									{
										CastleHigh++;
									}
								}
										}
							else //For Minister Objects.
							{
											if (abs(CloneATable(TableList[index])[Row][Column]) == 5)
											{
								//Initiate Local int Varibales.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //For WHITE ints.
								if (a == 1)
								{

									//construction of Draw WHITE Minster.
									MinisterOnTable[Mi1].Row = Row;
									MinisterOnTable[Mi1].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Mi1, OrderP, 5);



									//Increament of Index.
									Mi1++;
									//Wehn New WHITE Minster Detected Increament Max Indexes.
									if (Mi1 > MinisterMidle)
									{
										MinisterMidle++;
										MinisterHigh++;
									}
								} //For BLACK  ints.
								else
								{
									//Construction of Draw BLACK Minster.
									MinisterOnTable[Mi2].Row = Row;
									MinisterOnTable[Mi2].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Mi2, OrderP, 5);



									//Increament Index.
									Mi2++;
									//When New BLACK Minister Detected Increament Max Index.
									if (Mi2 > MinisterHigh)
									{
										MinisterHigh++;
									}
								}
											}
							else //for King Objects.
							{
							if (abs(CloneATable(TableList[index])[Row][Column]) == 6)
							{
								//Initiate Of int.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //int consideration.
								if (a == 1)
								{
									//Construction of Draw WHITE King.
									KingOnTable[Ki1].Row = Row;
									KingOnTable[Ki1].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Ki1, OrderP, 6);



									//Increament of Index.
									Ki1++;
									//when Draw  Object Detected Increament Max Index.
									if (Ki1 > KingMidle)
									{
										KingMidle++;
										KingHigh++;
									}
								} //For BLACK King int
								else
								{
									//Construction of Draw King BLACK Object.
									KingOnTable[Ki2].Row = Row;
									KingOnTable[Ki2].Column = Column;
									 BlitzNotValidFullGameThinkingTreePartThree(Ki2, OrderP, 6);



									//Increament of Index.
									Ki2++;
									//When New Object Detected Increament Of BLACK King Max Index.
									if (Ki2 > KingHigh)
									{
										KingHigh++;
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
					//Make Empty Remaining.
				}
				SetObjectNumbers(TableList[0]);
			/*	for (int  i = So1; i < SodierMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete SolderesOnTable[i];
				}
				for (int  i = So2; i < SodierHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete SolderesOnTable[i];
				}
				for (int  i = El1; i < ElefantMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete ElephantOnTable[i];
				}
				for (int  i = El2; i < ElefantHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete ElephantOnTable[i];
				}
				for (int  i = Ho1; i < HourseMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete HoursesOnTable[i];
				}
				for (int  i = Ho2; i < HourseHight; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete HoursesOnTable[i];
				}
				for (int  i = Br1; i < CastleMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete CastlesOnTable[i];
				}
				for (int  i = Br2; i < CastleHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete CastlesOnTable[i];
				}
				for (int  i = Mi1; i < MinisterMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete MinisterOnTable[i];
				}
				for (int  i = Mi2; i < MinisterHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete MinisterOnTable[i];
				}
				for (int  i = Ki1; i < KingMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete KingOnTable[i];
				}
				for (int  i = Ki2; i < KingHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete KingOnTable[i];
				}*/
				if (TableList.size() > 0)
				{
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 0; j < 8; j++)
						{
							Tabl[i][j] = TableList[0][i][j];
						}
					}
				}
				SetRowColumnFinished = true;
			}
			Spaces--;

			OrderP = Dummy;
		}
		else
		{
			int Dummy = OrderP;
			////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (a1)
			{
				SetObjectNumbers(TableList[0]);
				int So1 = 0;
				int So2 = SodierMidle;
				for (int i = 0; i < SodierHigh; i++)
				{
					SolderesOnTableMove.push_back(false);
				}
				int El1 = 0;
				int El2 = ElefantMidle;
				for (int i = 0; i < ElefantHigh; i++)
				{
					ElephantOnTableMove.push_back(false);
				}
				int Ho1 = 0;
				int Ho2 = HourseMidle;
				for (int i = 0; i < HourseHight; i++)
				{
					HoursesOnTableMove.push_back(false);
				}
				int Br1 = 0;
				int Br2 = CastleMidle;
				for (int i = 0; i < CastleHigh; i++)
				{
					CastlesOnTableMove.push_back(false);
				}
				int Mi1 = 0;
				int Mi2 = MinisterMidle;
				for (int i = 0; i < MinisterHigh; i++)
				{
					MinisterOnTableMove.push_back(false);
				}
				int Ki1 = 0;
				int Ki2 = KingMidle;
				for (int i = 0; i < KingHigh; i++)
				{
					KingOnTableMove.push_back(false);
				}
				SetRowColumnFinished = false;
				Move_Renamed = 0;
				//Intiate Dummy Variables.
				//When Conversion Occured.
				/*SolderesOnTable = DrawSoldier();
				*ElephantOnTable = DrawElefant();
				*HoursesOnTable = DrawHourse();
				*CastlesOnTable = DrawCastle();
				*MinisterOnTable = DrawMinister();
				*KingOnTable = DrawKing();*/
				AllDraw::SodierConversionOcuured = false;
				//When Table Exist.
				if (TableList.size() > 0)
				{
					//For Every Table Things.
					for (int Column = 0; Column < 8; Column++)
					{
						for (int Row = 0; Row < 8; Row++)
						{
							if (CloneATable(TableList[index])[Row][Column] == 0)
							{
								continue;
							}
							//When Things are Soldiers.
							if (abs(CloneATable(TableList[index])[Row][Column]) == 1)
							{
								//Determine int
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //When int is WHITE.
								if (a == 1)
								{
									//Construct Soder WHITE.
									SolderesOnTable[So1] =  DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, So1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(So1, OrderP, 1);


									//Increase So1.
									So1++;
									if (So1 > SodierMidle)
									{
										SodierMidle++;
										SodierHigh++;
									}
								}
								//When int is BLACK
								else
								{
									//Construct Soldeir BLACK.
									SolderesOnTable[So2] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, So2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(So2, OrderP, 1);


									//Increase So2.
									So2++;
									if (So2 > SodierHigh)
									{
										SodierHigh++;
									}
								}
							}
							else //For Elephant Objects.
							{
								if (abs(CloneATable(TableList[index])[Row][Column]) == 2)
								{
								//Initiate Local Variables.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //If WHITE Elepahnt
								if (a == 1)
								{
									//Construction of Draw Object.
									ElephantOnTable[El1] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, El1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(El1, OrderP, 2);


									//Increament of WHITE Index.
									El1++;
									//If New Object Increament WHITE Objects.
									if (El1 > ElefantMidle)
									{
										ElefantMidle++;
										ElefantHigh++;
									}
								}
								else //For BLACK Elephant .Objects
								{
									//Construction of Draw BLACK Elephant Object. 
									ElephantOnTable[El2] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, El2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(El2, OrderP, 2);


									//Increament of Index.
									El2++;
									//When New BLACK Elephant Object Increament of Index.
									if (El2 > ElefantHigh)
									{
										ElefantHigh++;
									}
								}
								}
							else //For Hourse Objects.
							{
									if (abs(CloneATable(TableList[index])[Row][Column]) == 3)
									{
								//Initiate Local Varibale and int.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //If WHITE Hourse.
								if (a == 1)
								{
									//Construction of Draw BLACK Hourse.
									HoursesOnTable[Ho1] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, Ho1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Ho1, OrderP, 3);


									//Increament of Index.
									Ho1++;
									//when There is New WHITE Hourse Increase.
									if (Ho1 > HourseMidle)
									{
										HourseMidle++;
										HourseHight++;
									}
								} //For BLACK Hourses.
								else
								{
									//Construction of Draw BLACK Hourse.
									HoursesOnTable[Ho2] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, Ho2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Ho2, OrderP, 3);


									//Increament of Index.
									Ho2++;
									//When New BLACK Hourse Exist Exist Index.
									if (Ho2 > HourseHight)
									{
										HourseHight++;
									}
								}
									}
							else //For Castles Objects.
							{
										if (abs(CloneATable(TableList[index])[Row][Column]) == 4)
										{
								//Initiate of Local Variables.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //For WHITE int.
								if (a == 1)
								{
									//Construction of Draw WHITE Castles.
									CastlesOnTable[Br1] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, Br1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Br1, OrderP, 4);



									//Increamnt of Index.
									Br1++;
									//When New WHITE Briges Increamnt Max Index.
									if (Br1 > CastleMidle)
									{
										CastleMidle++;
										CastleHigh++;
									}
								} //For BLACK Castles.
								else
								{
									//Construction Draw of New BLACK Castles.
									CastlesOnTable[Br2] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, Br2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Br2, OrderP, 4);



									//Increament of Index.
									Br2++;
									//wehn BLACK New Castles Detected Increament Max Index.
									if (Br2 > CastleHigh)
									{
										CastleHigh++;
									}
								}
										}
							else //For Minister Objects.
							{
											if (abs(CloneATable(TableList[index])[Row][Column]) == 5)
											{
								//Initiate Local int Varibales.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //For WHITE ints.
								if (a == 1)
								{

									//construction of Draw WHITE Minster.
									MinisterOnTable[Mi1] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, Mi1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Mi1, OrderP, 5);



									//Increament of Index.
									Mi1++;
									//Wehn New WHITE Minster Detected Increament Max Indexes.
									if (Mi1 > MinisterMidle)
									{
										MinisterMidle++;
										MinisterHigh++;
									}
								} //For BLACK  ints.
								else
								{
									//Construction of Draw BLACK Minster.
									MinisterOnTable[Mi2] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, Mi2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Mi2, OrderP, 5);



									//Increament Index.
									Mi2++;
									//When New BLACK Minister Detected Increament Max Index.
									if (Mi2 > MinisterHigh)
									{
										MinisterHigh++;
									}
								}
											}
							else //for King Objects.
							{
							if (abs(CloneATable(TableList[index])[Row][Column]) == 6)
							{
								//Initiate Of int.
								int a;
								if (CloneATable(TableList[index])[Row][Column] > 0)
								{
									OrderP = 1;
									a = 1;
								}
								else
								{
									OrderP = -1;
									a = -1;
								} //int consideration.
								if (a == 1)
								{
									//Construction of Draw WHITE King.
									KingOnTable[Ki1] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), 1, false, Ki1);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Ki1, OrderP, 6);



									//Increament of Index.
									Ki1++;
									//when Draw  Object Detected Increament Max Index.
									if (Ki1 > KingMidle)
									{
										KingMidle++;
										KingHigh++;
									}
								} //For BLACK King int
								else
								{
									//Construction of Draw King BLACK Object.
									KingOnTable[Ki2] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Row, Column, a, CloneATable(TableList[index]), -1, false, Ki2);
									//satisfied of created deeper three
									 BlitzNotValidFullGameThinkingTreePartThree(Ki2, OrderP, 6);



									//Increament of Index.
									Ki2++;
									//When New Object Detected Increament Of BLACK King Max Index.
									if (Ki2 > KingHigh)
									{
										KingHigh++;
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
					//Make Empty Remaining.
				}
				SetObjectNumbers(TableList[0]);
				/*for (int  i = So1; i < SodierMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete SolderesOnTable[i];
				}
				for (int  i = So2; i < SodierHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete SolderesOnTable[i];
				}
				for (int  i = El1; i < ElefantMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete ElephantOnTable[i];
				}
				for (int  i = El2; i < ElefantHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete ElephantOnTable[i];
				}
				for (int  i = Ho1; i < HourseMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete HoursesOnTable[i];
				}
				for (int  i = Ho2; i < HourseHight; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete HoursesOnTable[i];
				}
				for (int  i = Br1; i < CastleMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete CastlesOnTable[i];
				}
				for (int  i = Br2; i < CastleHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete CastlesOnTable[i];
				}
				for (int  i = Mi1; i < MinisterMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete MinisterOnTable[i];
				}
				for (int  i = Mi2; i < MinisterHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete MinisterOnTable[i];
				}
				for (int  i = Ki1; i < KingMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete KingOnTable[i];
				}
				for (int  i = Ki2; i < KingHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
					delete KingOnTable[i];
				}*/
				if (TableList.size() > 0)
				{
					for (int  i = 0; i < 8; i++)
					{
						for (int  j = 0; j < 8; j++)
						{
							Tabl[i][j] = TableList[0][i][j];
						}
					}
				}
				SetRowColumnFinished = true;
			}
			Spaces--;

			OrderP = Dummy;
			SetObjectNumbers(Tabl);
		}
	}

	bool AllDraw::SetRowColumn()
	{
		int Dummy = OrderP;

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			SetObjectNumbers(TableList[0]);
			int So1 = 0;
			int So2 = SodierMidle;
			int El1 = 0;
			int El2 = ElefantMidle;
			int Ho1 = 0;
			int Ho2 = HourseMidle;
			int Br1 = 0;
			int Br2 = CastleMidle;
			int Mi1 = 0;
			int Mi2 = MinisterMidle;
			int Ki1 = 0;
			int Ki2 = KingMidle;

			SetRowColumnFinished = false;
			Move_Renamed = 0;
			//When Table Exist.
			if (TableList.size() > 0)
			{
				//For Every Table Things.
				for (int Column = 0; Column < 8; Column++)
				{
					for (int Row = 0; Row < 8; Row++)
					{
						if (CloneATable(TableList[0])[Row][Column] == 0)
						{
							continue;
						}
						//When Things are Soldiers.
						if (abs(CloneATable(TableList[0])[Row][Column]) == 1)
						{
							//Determine int
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //When int is WHITE.
							if (a == 1)
							{
								if (TableList[0][static_cast<int>(SolderesOnTable[So1].Row)][static_cast<int>(SolderesOnTable[So1].Column)] != 1)
								{
									return false;
								}
								//IncreASe So1.
								So1++;
								if (So1 > SodierMidle)
								{
									SodierMidle++;
									SodierHigh++;
								}

							}
							//When int is BLACK
							else
							{
								if (TableList[0][static_cast<int>(SolderesOnTable[So2].Row)][static_cast<int>(SolderesOnTable[So2].Column)] != -1)
								{
									return false;
								}
								//IncreASe So2.
								So2++;
								if (So2 > SodierHigh)
								{
									SodierHigh++;
								}

							}
						}
						else //For Elephant Objects.
						{
							if (abs(CloneATable(TableList[0])[Row][Column]) == 2)
							{
							//Initiate Local Variables.
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //If WHITE Elepahnt
							if (a == 1)
							{

								if (TableList[0][static_cast<int>(ElephantOnTable[El1].Row)][static_cast<int>(ElephantOnTable[El1].Column)] != 2)
								{
									return false;
								}
								//Increament of WHITE 0.
								El1++;
								//If New Object Increament WHITE Objects.
								if (El1 > ElefantMidle)
								{
									ElefantMidle++;
									ElefantHigh++;
								}
							}
							else //For BLACK Elephant .Objects
							{

								if (TableList[0][static_cast<int>(ElephantOnTable[El2].Row)][static_cast<int>(ElephantOnTable[El2].Column)] != -2)
								{
									return false;
								}
								//Increament of 0.
								El2++;
								//When New BLACK Elephant Object Increament of 0.
								if (El2 > ElefantHigh)
								{
									ElefantHigh++;
								}

							}
							}
						else //For Hourse Objects.
						{
								if (abs(CloneATable(TableList[0])[Row][Column]) == 3)
								{
							//Initiate Local Varibale and int.
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //If WHITE Hourse.
							if (a == 1)
							{

								if (TableList[0][static_cast<int>(HoursesOnTable[Ho1].Row)][static_cast<int>(HoursesOnTable[Ho1].Column)] != 3)
								{
									return false;
								}
								//Increament of 0.
								Ho1++;
								//when There is New WHITE Hourse IncreASe.
								if (Ho1 > HourseMidle)
								{
									HourseMidle++;
									HourseHight++;
								}
							} //For BLACK Hourses.
							else
							{

								if (TableList[0][static_cast<int>(HoursesOnTable[Ho2].Row)][static_cast<int>(HoursesOnTable[Ho2].Column)] != -3)
								{
									return false;
								}
								//Increament of 0.
								Ho2++;
								//When New BLACK Hourse Exist Exist 0.
								if (Ho2 > HourseHight)
								{
									HourseHight++;
								}
							}
								}
						else //For Castles Objects.
						{
									if (abs(CloneATable(TableList[0])[Row][Column]) == 4)
									{
							//Initiate of Local Variables.
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //For WHITE int.
							if (a == 1)
							{

								if (TableList[0][static_cast<int>(CastlesOnTable[Br1].Row)][static_cast<int>(CastlesOnTable[Br1].Column)] != 4)
								{
									return false;
								}
								//Increamnt of 0.
								Br1++;
								//When New WHITE Briges Increamnt Max 0.
								if (Br1 > CastleMidle)
								{
									CastleMidle++;
									CastleHigh++;
								}
							} //For BLACK Castles.
							else
							{

								if (TableList[0][static_cast<int>(CastlesOnTable[Br2].Row)][static_cast<int>(CastlesOnTable[Br2].Column)] != -4)
								{
									return false;
								}
								//Increament of 0.
								Br2++;
								//wehn BLACK New Castles Detected Increament Max 0.
								if (Br2 > CastleHigh)
								{
									CastleHigh++;
								}
							}
									}
						else //For Minister Objects.
						{
										if (abs(CloneATable(TableList[0])[Row][Column]) == 5)
										{
							//Initiate Local int Varibales.
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //For WHITE ints.
							if (a == 1)
							{


								if (TableList[0][static_cast<int>(MinisterOnTable[Mi1].Row)][static_cast<int>(MinisterOnTable[Mi1].Column)] != 5)
								{
									return false;
								}
								//Increament of 0.
								Mi1++;
								//Wehn New WHITE Minster Detected Increament Max 0es.
								if (Mi1 > MinisterMidle)
								{
									MinisterMidle++;
									MinisterHigh++;
								}

							} //For BLACK  ints.
							else
							{

								if (TableList[0][static_cast<int>(MinisterOnTable[Mi2].Row)][static_cast<int>(MinisterOnTable[Mi2].Column)] != -5)
								{
									return false;
								}
								//Increament 0.
								Mi2++;
								//When New BLACK Minister Detected Increament Max 0.
								if (Mi2 > MinisterHigh)
								{
									MinisterHigh++;
								}
							}
										}
						else //for King Objects.
						{
						if (abs(CloneATable(TableList[0])[Row][Column]) == 6)
						{
							//Initiate Of int.
							int a;
							if (CloneATable(TableList[0])[Row][Column] > 0)
							{
								OrderP = 1;
								a = 1;
							}
							else
							{
								OrderP = -1;
								a = -1;
							} //int consideration.
							if (a == 1)
							{

								if (TableList[0][static_cast<int>(KingOnTable[Ki1].Row)][static_cast<int>(KingOnTable[Ki1].Column)] != 6)
								{
									return false;
								}
								//Increament of 0.
								Ki1++;
								//when Draw  Object Detected Increament Max 0.
								if (Ki1 > KingMidle)
								{
									KingMidle++;
									KingHigh++;
								}
							} //For BLACK King int
							else
							{

								if (TableList[0][static_cast<int>(KingOnTable[Ki2].Row)][static_cast<int>(KingOnTable[Ki2].Column)] != -6)
								{
									return false;
								}
								//Increament of 0.
								Ki2++;
								//When New Object Detected Increament Of BLACK King Max 0.
								if (Ki2 > KingHigh)
								{
									KingHigh++;
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
				//Make Empty Remaining.

			}

			SetObjectNumbers(TableList[0]);
			
			if (TableList.size() > 0)
			{
				for (int  i = 0; i < 8; i++)
				{
					for (int  j = 0; j < 8; j++)
					{
						Tabl[i][j] = TableList[0][i][j];
					}
				}
			}
			SetRowColumnFinished = true;
		}
		Spaces--;

		OrderP = Dummy;
		return true;
	}

	void AllDraw::SetRowColumnFinishedWait()
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			do
			{

			} while (!SetRowColumnFinished);
		}

	}

	void AllDraw::BeginIndexFoundingMaxLessofMaxList(int ListIndex, std::vector<int> &Founded, int &LessB)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//When There is Maximum Huristsic AStar Gredy Back Ward in Blitz Games.
			if (MaxHeuristicAStarGreedytBackWard.size() > 0)
			{
				//When List Index is LessB than Founded.
				if (ListIndex < MaxHeuristicAStarGreedytBackWard.size())
				{
					return;
				}
				//Initiate Variable.
				bool Added = false;
				//Recursive Method.
				int Le = LessB;
				 BeginIndexFoundingMaxLessofMaxList(ListIndex++, Founded, Le);


				LessB = Le;

				//When Greater LessB of First index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][1])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][1];
					Added = true;
					Founded.push_back(2);
				}
				//When Greater LessB of Second index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][5])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][5];
					if (Added)
					{
						Founded.pop_back();
					}
					Added = true;
					Founded.push_back(6);
				}
				//When Greater LessB of Third index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][9])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][9];
					if (Added)
					{
						Founded.pop_back();
					}
					Added = true;
					Founded.push_back(10);
				}
				//When Greater LessB of Foutrh index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][13])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][13];
					if (Added)
					{
						Founded.pop_back();
					}
					Added = true;
					Founded.push_back(14);
				}
				//When Greater LessB of Fifth index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][18])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][18];
					if (Added)
					{
						Founded.pop_back();
					}
					Added = true;
					Founded.push_back(19);
				}
				//When Greater LessB of Sith index Object Found.
				if (LessB < MaxHeuristicAStarGreedytBackWard[ListIndex][22])
				{
					LessB = MaxHeuristicAStarGreedytBackWard[ListIndex][22];
					if (Added)
					{
						Founded.pop_back();
					}
					Added = true;
					Founded.push_back(23);
				}
			}
		}

	}

	bool AllDraw::IsToCheckMateHasLessDeeperThanForCheckMate(AllDraw A, int Order, int &ToCheckMate, int &ForCheckMate, int AStarGreedy)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//Initiate variables.
			bool AA = false;
			int CDummy = Order;
			//For WHITE One.
			if (Order == 1)
			{
				//For Solderis.
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == -1)
						{
							//Set.
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}

						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}

							}
						}
						Order *= -1;
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.KingOnTable[i].KingThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.KingOnTable[i].KingThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
			}
			else
			{

				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}
						Order *= -1;
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}

						Order *= -1;
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{

						//When there is BLACK checked mate.
						if (A.KingOnTable[i].KingThinking.CheckMateAStarGreedy == -1)
						{
							ForCheckMate = AStarGreedy;
							if (ToCheckMate >= 0)
							{
								if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
								{
									AA = true;
								}
							}
						}
						else
						{
							//When there is WHITE Checked mate.
							if (A.KingOnTable[i].KingThinking.CheckMateAStarGreedy == 1)
							{
								ToCheckMate = AStarGreedy;
								if (ForCheckMate >= 0)
								{
									if (ToCheckMate < ForCheckMate && ToCheckMate >= 0)
									{
										AA = true;
									}
								}
							}
						}

						Order *= -1;
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							AA = AA || IsToCheckMateHasLessDeeperThanForCheckMate(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order, ToCheckMate, ForCheckMate, AStarGreedy++);
						}
						Order = CDummy;
					}
				}
			}

			ChessRules::CurrentOrder = CDummy;
			return AA;
		}
	}

	void AllDraw::IsPenaltyRegardCheckMateAtBranch(int Order, int &Do, AllDraw Base)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			int CDummy = ChessRules::CurrentOrder;
			int COrder = Order;
			//For WHITE Order.
			if (Order == 1)
			{
				ChessRules *AA = nullptr;

				//For  Soldeirs.
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{

						//Create Rules Objects For Soldiers.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j])[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]], CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]), Order, SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
						//When CheckMate Occured for Current Sodiers
						bool ac = false;
						 ac = AA->CheckMate(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order);


						if (ac)
						{
							//When Self CheckMate
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Return Ignore
								Do = -1;
								//Set Superposition.
								SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);



							}
							else
							{
								//When Enemy CheckMate
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Set Regard and Set Movements.
									Do = 1;
									//Regard Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


									//Set Superpostion.
									SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = 1;
								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//For Subbranchs.
							for (int  ii = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;
								 SolderesOnTable[ii].SoldierThinking.AStarGreedy[i].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}
							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}

				//For Elephant.
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{

						//Create Elephant Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j])[ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]], CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order, ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0], ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
						//When CheckMate Occured for Current Elephant.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order);


						if (ac)
						{
							//For Self Order CheckMate.
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Set Penalty Ignore.
								Do = -1;
								//Set Superposition.
								ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);



							}
							else
							{
								//For Enemy Order CheckMate.
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Set Regard Continue.
									Do = 1;
									//Regard Subolders.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


									//Set Superposition.
									ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = 1;
								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//For Subbranchs.
							for (int  ii = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 ElephantOnTable[ii].ElefantThinking.AStarGreedy[i].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//For Hourse.
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{

						//Set Hourse Rules Objects.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j])[HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]], CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order, HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0], HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
						//When CheckMate Occured.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order);


						if (ac)
						{
							//For Self CheckMate.
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Set Ignore.
								Do = -1;
								//Set Superposition.
								HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//For Enemy CheckMate.
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Set Regard.
									Do = 1;
									//Superposition.
									HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = 1;
									//Set Regard For Sub Branches.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//Sub branchs For Hourse.
							for (int  ii = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//For WHITE Briges.
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{

						//Castles WHITE Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j])[CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]], CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order, CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0], CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);
						//When Current WHITE Castles CheckMate.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order);


						if (ac)
						{
							//For Self CheckMate
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Set Penalty Ignore.
								Do = -1;
								//Set Superposition.
								CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = -1;
								//Penalty Sub branchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}

							else
							{
								//For Enemy CheckMate.
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Set Regard.
									Do = 1;
									//Superpoistion.
									CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = 1;
									//Set Regard Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//For Castles WHITE Subbranchs.
							for (int  ii = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//For Ministers WHITE.
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{

						//Minister WHITE Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j])[MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]], CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order, MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0], MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);
						//When M ate Occured in Minister WHITE.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Penalty Ignore.
								Do = -1;
								//Superpostion.
								MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//For Enemy CheckMate.
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Regard Setting.
									Do = 1;
									//Superpoistion.
									MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = 1;
									//Set Subbranchs Regard.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//For WHITE Ministers Subbranchs.
							for (int  ii = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//For WHITE King.
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{

						//WHITE King Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(KingOnTable[i].KingThinking.TableListKing[j])[KingOnTable[i].KingThinking.RowColumnKing[j][0]][KingOnTable[i].KingThinking.RowColumnKing[j][1]], CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order, KingOnTable[i].KingThinking.RowColumnKing[j][0], KingOnTable[i].KingThinking.RowColumnKing[j][1]);
						//When CheckMate Occured in King WHITE.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
							{
								//Penalty Ignore.
								Do = -1;
								//Superposition.
								KingOnTable[i].KingThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//Self CheckMate.
								if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
								{
									//Regard Setting.
									Do = 1;
									//Superpoistion.
									KingOnTable[i].KingThinking.CheckMateAStarGreedy = 1;
									//Regard Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//For King WHITE Subbranchs.
							for (int  ii = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 KingOnTable[i].KingThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
			}
			//For BLACK Order.
			else
			{
				ChessRules *AA = nullptr;

				//For Solders BLACK.
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{

						//Solders BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j])[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]], CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]), Order, SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]);
						//When Solders BLACK CheckMate Occured.
						bool ac = false;
						 ac = AA->CheckMate(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order);


						if (ac)
						{ //Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Ignore Penalty.
								Do = -1;
								//Supperpoistion.
								SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs Soders BLACK.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//Self CheckMate.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regard.
									Do = 1;
									//Superpoition.
									SolderesOnTable[i].SoldierThinking.CheckMateAStarGreedy = 1;
									//Penalty Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//Solders BLACK Subbranchs Calling.
							for (int  ii = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//Elephant BLACK 
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{

						//Elephant BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j])[ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0]][ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]], CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order, ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0], ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1]);
						//CheckMate Occured in Elephenat BLACK.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Ignore Penalty.
								Do = -1;
								//Superpoistion.
								ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//CheckMate Enemy.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regrading.
									Do = 1;
									//Superposition.
									ElephantOnTable[i].ElefantThinking.CheckMateAStarGreedy = 1;
									//Regrad Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//Subbranchs Elephenat BLACK Calling.
							for (int  ii = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//Hourse BLACK 
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{

						//Hourse BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j])[HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0]][HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]], CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order, HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0], HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1]);
						//When Hourse Broin CheckMate Ocuucred.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order);


						if (ac)
						{

							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Ignore Penalty.
								Do = -1;
								//Superposition.
								HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranchs.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//CheckMate Enemy.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regrad.
									Do = 1;
									//Superposition.
									HoursesOnTable[i].HourseThinking.CheckMateAStarGreedy = 1;
									//Regrad Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//Hourse BLACK Calling Subbranchs.
							for (int  ii = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//Castles BLACK 
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{

						//Castles BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j])[CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0]][CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]], CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order, CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0], CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1]);
						//When BLACK Castles CheckMate Occured.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Ignore CheckMate.
								Do = -1;
								//Superpoistion.
								CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = -1;
								//Subbranchs Penalty.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//CheckMate Enemy.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regard.
									Do = 1;
									//Superpoistion.
									CastlesOnTable[i].CastleThinking.CheckMateAStarGreedy = 1;
									//Regard Subbranchs.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//BLACK Castles Calling Subbranches.
							for (int  ii = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}

							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//Minister BLACK 
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{

						//Minister BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j])[MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0]][MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]], CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order, MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0], MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1]);
						//When Minister Borwn CheckMate Occcured.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Set Ignore.
								Do = -1;
								//Superpoistion.
								MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = -1;
								//Penalty Subbranches.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//CheckMate Enemy.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regard.
									Do = 1;
									//Superposition.
									MinisterOnTable[i].MinisterThinking.CheckMateAStarGreedy = 1;
									//Regard SubBranches.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//Minister BLACK SubBranches Calling.
							for (int  ii = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}
							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
				//King BLACK
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{

						//King BLACK Rules.
						AA = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CloneATable(KingOnTable[i].KingThinking.TableListKing[j])[KingOnTable[i].KingThinking.RowColumnKing[j][0]][KingOnTable[i].KingThinking.RowColumnKing[j][1]], CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order, KingOnTable[i].KingThinking.RowColumnKing[j][0], KingOnTable[i].KingThinking.RowColumnKing[j][1]);
						//When King BLACK Rules CheckMate Occcured.
						bool ac = false;
						 ac = AA->CheckMate(CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order);


						if (ac)
						{
							//Self CheckMate.
							if (AllDraw::OrderPlateDraw == -1 && AA->CheckMateBLACK)
							{
								//Set Ignore.
								Do = -1;
								//Superposition.
								KingOnTable[i].KingThinking.CheckMateAStarGreedy = -1;
								//Penalty SubBranches.
								 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


							}
							else
							{
								//CheckMate Enemy.
								if (AllDraw::OrderPlateDraw == 1 && AA->CheckMateWHITE)
								{
									//Set Regard.
									Do = 1;
									//Superposition.
									KingOnTable[i].KingThinking.CheckMateAStarGreedy = 1;
									//Regard Subbranches.
									 MakePenaltyAllCheckMateBranches(Base, AllDraw::OrderPlate);


								}
							}
						}
						if (Do != -1)
						{
							Order *= -1;
							ChessRules::CurrentOrder *= -1;
							//King BLACK Subbranches Calling.
							for (int  ii = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
							{
								int D = Do;

								 KingOnTable[i].KingThinking.AStarGreedy[ii].IsPenaltyRegardCheckMateAtBranch(Order, D, Base);


								Do = D;
							}
							Order = COrder;
							ChessRules::CurrentOrder = CDummy;
						}
					}
				}
			}
			ChessRules::CurrentOrder = CDummy;
		}

	}

	void AllDraw::MakePenaltyAllCheckMateBranches(AllDraw A, int Order)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			int COrder = Order;
			int CDummy = ChessRules::CurrentOrder;
			if (Order == 1)
			{
				//For Solider WHITE
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//make penalty
						A.SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmPenalty();
						//For deeper chiled.
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//For Elephant WHITE 
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//make penalty
						A.ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
						//For Depper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//For Hourse WHITE
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//make penalty
						A.HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();

						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);


						}

						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for Castle WHITE
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//make penalty
						A.CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);


						}

						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for minister WHITE
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//make penalty
						A.MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for WHITE king
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//make penalty  
						A.KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
			}
			else //BLACK
			{
				//for soldier BLACK
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//make penalty
						A.SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for elephant BLACK
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//make penalty
						A.ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for hourse BLACK
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//make penalty
						A.HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();

						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for casytle BLACK
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//make penalty
						A.CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for minsiter BLACK
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//make penalty
						A.MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
						//fopfor weeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//for king BLACK
				for (int  i = KingMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//make penalty
						A.KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
						//for deeper chiled
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							 MakePenaltyAllCheckMateBranches(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
			}
		}

	}

	AllDraw AllDraw::RemovePenalltyFromFirstBranches(int Order)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//WHITE
			if (Order == 1)
			{
				//for WHITE solder
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;
						 SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();


						for (int k = 0; k < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); k++)
						{
							 SolderesOnTable[i].SoldierThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
				//for WHITE elephant
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].Initiate();


						for (int k = 0; k < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); k++)
						{
							 ElephantOnTable[i].ElefantThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
				//for WHITE hourse
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;
						 HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();


						for (int k = 0; k < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); k++)
						{
							 HoursesOnTable[i].HourseThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
				//for Castle WHITE
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].Initiate();


						for (int k = 0; k < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); k++)
						{
							 CastlesOnTable[i].CastleThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
				//for WHITE minsiter
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();


						for (int k = 0; k < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); k++)
						{
							 MinisterOnTable[i].MinisterThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
				//for WHITE minster
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();


						for (int k = 0; k < KingOnTable[i].KingThinking.AStarGreedy.size(); k++)
						{
							 KingOnTable[i].KingThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}

					}
				}
			}
			else
			{
				//for BLACK soldeir
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();


						for (int k = 0; k < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); k++)
						{
							 SolderesOnTable[i].SoldierThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
				//for BLACK elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].Initiate();


						for (int k = 0; k < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); k++)
						{
							 ElephantOnTable[i].ElefantThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
				//for BLACK hourse
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();


						for (int k = 0; k < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); k++)
						{
							 HoursesOnTable[i].HourseThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
				//for BLACK Castle
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].Initiate();


						for (int k = 0; k < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); k++)
						{
							 CastlesOnTable[i].CastleThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
				//for BLACK ,minster
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;

						 MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();


						for (int k = 0; k < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); k++)
						{
							 MinisterOnTable[i].MinisterThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
				//for BLACK king
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//iniatite penalty vars to false.
						UsePenaltyRegardMechnisamT = false;
						 KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();


						for (int k = 0; k < KingOnTable[i].KingThinking.AStarGreedy.size(); k++)
						{
							 KingOnTable[i].KingThinking.AStarGreedy[k].RemovePenalltyFromFirstBranches(Order * -1);


						}
					}
				}
			}

			return *this;
		}
	}

	bool AllDraw::BondryObjectNumber(int i, int Kind, int Order)
	{
		bool Is = true;
		if (Order == 1)
		{
			if (Kind == 1)
			{
				if (i >= SodierMidle)
				{
					Is = false;
				}
			}
			else
			{
				if (Kind == 2)
				{
				if (i >= ElefantMidle)
				{
					Is = false;
				}
				}
			else
			{
				if (Kind == 3)
				{
				if (i >= HourseMidle)
				{
					Is = false;
				}
				}
			else
			{
				if (Kind == 4)
				{
				if (i >= CastleMidle)
				{
					Is = false;
				}
				}
			else
			{
				if (Kind == 5)
				{
				if (i >= MinisterMidle)
				{
					Is = false;
				}
				}
			else
			{
				if (Kind == 6)
				{
				if (i >= KingMidle)
				{
					Is = false;
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
			if (Kind == 1)
			{
				if (i < SodierMidle || i >= SodierHigh)
				{
					Is = false;
				}
			}
			else
			{
			   if (Kind == 2)
			   {
				if (i < ElefantMidle || i >= ElefantHigh)
				{
					Is = false;
				}
			   }
			else
			{
			   if (Kind == 3)
			   {
				if (i < HourseMidle || i >= HourseHight)
				{
					Is = false;
				}
			   }
			else
			{
			   if (Kind == 4)
			   {
				if (i < CastleMidle || i >= CastleHigh)
				{
					Is = false;
				}
			   }
			else
			{
			   if (Kind == 5)
			   {
				if (i < MinisterMidle || i >= MinisterHigh)
				{
					Is = false;
				}
			   }
			else
			{
			   if (Kind == 6)
			   {
				if (i < KingMidle || i >= KingHigh)
				{
					Is = false;
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

	AllDraw AllDraw::FoundOfCurrentTableNodeAstardGreedy(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//soldier
		bool ac = false;
		 ac = BondryObjectNumber(i, 1, Order);


		if (ac && SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
		{


			if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 SolderesOnTable[i].SoldierThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}
		}
		//elephant
		 ac = BondryObjectNumber(i, 2, Order);


		if (ac && ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
		{


			if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 ElephantOnTable[i].ElefantThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}
		}
		//hourse
		 ac = BondryObjectNumber(i, 3, Order);


		if (ac && HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && j < HoursesOnTable[i].HourseThinking.TableListHourse.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
		{


			if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 HoursesOnTable[i].HourseThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}

		}
		//Castle
		 ac = BondryObjectNumber(i, 4, Order);


		if (ac && CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && j < CastlesOnTable[i].CastleThinking.TableListCastle.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
		{

			if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 CastlesOnTable[i].CastleThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}
		}
		//minster
		 ac = BondryObjectNumber(i, 5, Order);


		if (ac && MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
		{


			if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 MinisterOnTable[i].MinisterThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}

		}
		//king
		ac = BondryObjectNumber(i, 6, Order);


		if (ac && KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && j < KingOnTable[i].KingThinking.TableListKing.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > j && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
		{
			if (KingOnTable[i].KingThinking.AStarGreedy.size() > j && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
			{
				AllDraw This = THIS;
				bool fou = Found;
				 KingOnTable[i].KingThinking.AStarGreedy[j].FoundOfCurrentTableNode(CloneATable(Tab), Order * -1, This, fou);


				THIS = This;
				Found = fou;

			}
		}

		return THIS;
	}

	AllDraw AllDraw::FoundOfCurrentTableNode(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when current stisgied
			bool ac = false;
			AllDraw This = THIS;
			bool fou = Found;
			 ac = (TableList.size() > 0 && ThinkingHybridizerRefrigitz::TableEqual(TableList[0], Tab)) || FoundOfCurrentTableNodeFirstLevel(CloneATable(Tab), Order, This, fou);


			THIS = This;
			Found = fou;
			if (ac)
			{
				if (!Found)
				{
					THIS = *this;
					Found = true;
				}

				return THIS;
			}
			else //else WHITE
			{
			if (Order == 1)
			{
				//soldier
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 1);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//SolderesOnTable[i].SoldierThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}

						}
					}
				}
				//elephant
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 2);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{


							//ElephantOnTable[i].ElefantThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//hourse
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 3);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//HoursesOnTable[i].HourseThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//Castle
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 4);


						if (ac)
						{
							continue;
						}

						 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							// CastlesOnTable[i].CastleThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//minster
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 5);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//MinisterOnTable[i].MinisterThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//king
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 6);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//KingOnTable[i].KingThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
			} //BLACK
			else
			{
				//soldier
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 1);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//SolderesOnTable[i].SoldierThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}

						}
					}
				}
				//elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 2);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{


							//ElephantOnTable[i].ElefantThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//hourse
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 3);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//HoursesOnTable[i].HourseThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//Castle
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 4);


						if (ac)
						{
							continue;
						}

						 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							// CastlesOnTable[i].CastleThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//minster
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 5);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//MinisterOnTable[i].MinisterThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//king
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 6);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//KingOnTable[i].KingThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
			}
			}
			return THIS;
		}
	}

	AllDraw AllDraw::FoundOfCurrentTableNodeCreateAStarGreedy(int** Tab, int Order, AllDraw THIS, bool &Found)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{

			bool ac = false;
			AllDraw This = THIS;
			bool fou = Found;
			//else WHITE
			if (Order == 1)
			{
				//soldier
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 1);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//SolderesOnTable[i].SoldierThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}

						}
					}
				}
				//elephant
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 2);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{


							//ElephantOnTable[i].ElefantThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//hourse
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 3);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//HoursesOnTable[i].HourseThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//Castle
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 4);


						if (ac)
						{
							continue;
						}

						 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							// CastlesOnTable[i].CastleThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//minster
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 5);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//MinisterOnTable[i].MinisterThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//king
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 6);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//KingOnTable[i].KingThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
			} //BLACK
			else
			{
				//soldier
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 1);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//SolderesOnTable[i].SoldierThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}

						}
					}
				}
				//elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 2);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{


							//ElephantOnTable[i].ElefantThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//hourse
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 3);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//HoursesOnTable[i].HourseThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//Castle
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 4);


						if (ac)
						{
							continue;
						}

						 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							// CastlesOnTable[i].CastleThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//minster
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 5);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//MinisterOnTable[i].MinisterThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
				//king
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						 ac = IsSupHuTrue(i, j, 0, 6);


						if (ac)
						{
							continue;
						}
						 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


						if (ac)
						{
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
						else
						{

							//KingOnTable[i].KingThinking.AStarGreedy[k].
							This = THIS;
							fou = Found;
							 FoundOfCurrentTableNodeAstardGreedy(i, j, CloneATable(Tab), Order, This, fou);


							THIS = This;
							Found = fou;
							if (Found)
							{
								return THIS;
							}
						}
					}
				}
			}
			return THIS;
		}
	}

	bool AllDraw::FoundOfCurrentTableNodeFirstLevel(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeSoldeir(CloneATable(Tab), Order, This, fou);


		}
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeElephant(CloneATable(Tab), Order, This, fou);


		}
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeHourse(CloneATable(Tab), Order, This, fou);


		}
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeCastle(CloneATable(Tab), Order, This, fou);


		}
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeMinister(CloneATable(Tab), Order, This, fou);


		}
		if (!Found)
		{
			AllDraw This = THIS;
			bool fou = Found;
			 FoundOfCurrentTableNodeKing(CloneATable(Tab), Order, This, fou);


		}
		return Found;
	}

	bool AllDraw::IsAstargreedyHaveNode(int Kind, int Order)
	{
		bool Is = false;
		if (Order == 1)
		{
			if (Kind == 1)
			{
				for (int i = 0; SolderesOnTable != nullptr && i < SodierMidle; i++)
				{
					if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 2)
			{
				for (int i = 0; ElephantOnTable != nullptr && i < ElefantMidle; i++)
				{
					if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 3)
			{
				for (int i = 0; HoursesOnTable != nullptr && i < HourseMidle; i++)
				{
					if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 4)
			{
				for (int i = 0; CastlesOnTable != nullptr && i < CastleMidle; i++)
				{
					if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 5)
			{
				for (int i = 0; MinisterOnTable != nullptr && i < MinisterMidle; i++)
				{
					if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
					{
						Is = true;
					}
				}
			}
			else
			{
				if (Kind == 6)
				{
				for (int i = 0; KingOnTable != nullptr && i < KingMidle; i++)
				{
					if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
					{
						Is = true;
					}
				}
				}
			}
		}
		else
		{
			if (Kind == 1)
			{
				for (int i = SodierMidle; SolderesOnTable != nullptr && i < SodierHigh; i++)
				{
					if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 2)
			{
				for (int i = ElefantMidle; ElephantOnTable != nullptr && i < ElefantHigh; i++)
				{
					if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
					{
						Is = true;
					}
				}
			}
			else if (Kind == 3)
			{
				for (int i = HourseMidle; HoursesOnTable != nullptr && i < HourseHight; i++)
				{
					if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
					{
						Is = true;
					}
				}
			}
			else
			{
				if (Kind == 4)
				{
				for (int i = CastleMidle; CastlesOnTable != nullptr && i < CastleHigh; i++)
				{
					if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
					{
						Is = true;
					}
				}
				}
			else
			{
				if (Kind == 5)
				{
				for (int i = MinisterHigh; MinisterOnTable != nullptr && i < MinisterHigh; i++)
				{
					if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
					{
						Is = true;
					}
				}
				}
			else if (Kind == 6)
			{
				for (int i = KingMidle; KingOnTable != nullptr && i < KingHigh; i++)
				{
					if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
					{
						Is = true;
					}
				}
			}
			}
			}
		}
		return Is;

	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreWHITE(int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //soldier
			for (int i = 0; SolderesOnTable != nullptr && i < SodierMidle; i++)
			{
				if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
				{
					for (int j = 0; j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreSoldier(Order, i, j);



					}
				}
			}
			//elephant
			for (int i = 0; ElephantOnTable != nullptr && i < ElefantMidle; i++)
			{
				if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
				{
					for (int j = 0; j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreElephant(Order, i, j);


					}
				}
			}
			//hourse
			for (int i = 0; HoursesOnTable != nullptr && i < HourseMidle; i++)
			{
				if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
				{
					for (int j = 0; j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreHourse(Order, i, j);


					}
				}
			}
			//Castle
			for (int i = 0; CastlesOnTable != nullptr && i < CastleMidle; i++)
			{
				if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
				{
					for (int j = 0; j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreCastle(Order, i, j);


					}
				}
			}
			//minster
			for (int i = 0; MinisterOnTable != nullptr && i < MinisterMidle; i++)
			{
				if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
				{
					for (int j = 0; j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreMinister(Order, i, j);


					}
				}
			}
			//king
			for (int i = 0; KingOnTable != nullptr && i < KingMidle; i++)
			{
				if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
				{
					for (int j = 0; j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreKing(Order, i, j);


					}
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreBLACK(int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{ //soldier
			for (int i = SodierMidle; SolderesOnTable != nullptr && i < SodierHigh; i++)
			{
				if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
				{
					for (int j = 0; j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreSoldier(Order, i, j);


					}
				}
			}
			//elephant
			for (int i = ElefantMidle; ElephantOnTable != nullptr && i < ElefantHigh; i++)
			{
				if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
				{
					for (int j = 0; j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreElephant(Order, i, j);


					}
				}
			}
			//hourse
			for (int i = HourseMidle; HoursesOnTable != nullptr && i < HourseHight; i++)
			{
				if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
				{
					for (int j = 0; j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreHourse(Order, i, j);


					}
				}
			}
			//Castle
			for (int i = CastleMidle; CastlesOnTable != nullptr && i < CastleHigh; i++)
			{
				if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
				{
					for (int j = 0; j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreCastle(Order, i, j);


					}
				}
			}
			//minster
			for (int i = MinisterMidle; MinisterOnTable != nullptr && i < MinisterHigh; i++)
			{
				if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
				{
					for (int j = 0; j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreMinister(Order, i, j);


					}
				}
			}
			//king
			for (int i = KingMidle; KingOnTable != nullptr && i < KingHigh; i++)
			{
				if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
				{
					for (int j = 0; j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//when is not validity
						 ClearAllTablesHeuristicsAndMoreKing(Order, i, j);


					}
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMore(int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//WHITE
			if (Order == 1)
			{
				 ClearAllTablesHeuristicsAndMoreWHITE(Order);


			}
			else //BLACK
			{
				 ClearAllTablesHeuristicsAndMoreBLACK(Order);


			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreSoldier(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);


			if (ac)
			{
				//clear all lists
				SolderesOnTable[i].SoldierThinking.TableListSolder.clear();
				SolderesOnTable[i].SoldierThinking.HeuristicListSolder.clear();
				SolderesOnTable[i].SoldierThinking.RowColumnSoldier.clear();
				SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.clear();
				if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j)
				{
					SolderesOnTable[i].SoldierThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//SolderesOnTable[i].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreElephant(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(2, Order, i, j);


			if (ac)
			{
				//clear all lists
				ElephantOnTable[i].ElefantThinking.TableListElefant.clear();
				ElephantOnTable[i].ElefantThinking.HeuristicListElefant.clear();
				ElephantOnTable[i].ElefantThinking.RowColumnElefant.clear();
				ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.clear();
				if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j)
				{
					ElephantOnTable[i].ElefantThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//ElephantOnTable[i].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreHourse(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(3, Order, i, j);


			if (ac)
			{
				//clear all lists
				HoursesOnTable[i].HourseThinking.TableListHourse.clear();
				HoursesOnTable[i].HourseThinking.HeuristicListHourse.clear();
				HoursesOnTable[i].HourseThinking.RowColumnHourse.clear();
				HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.clear();
				if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j)
				{
					HoursesOnTable[i].HourseThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//HoursesOnTable[i].HourseThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreCastle(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(4, Order, i, j);


			if (ac)
			{
				//clear all lists
				CastlesOnTable[i].CastleThinking.TableListCastle.clear();
				CastlesOnTable[i].CastleThinking.HeuristicListCastle.clear();
				CastlesOnTable[i].CastleThinking.RowColumnCastle.clear();
				CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle.clear();
				if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j)
				{
					CastlesOnTable[i].CastleThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//CastlesOnTable[i].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreMinister(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(5, Order, i, j);


			if (ac)
			{
				//clear all lists
				MinisterOnTable[i].MinisterThinking.TableListMinister.clear();
				MinisterOnTable[i].MinisterThinking.HeuristicListMinister.clear();
				MinisterOnTable[i].MinisterThinking.RowColumnMinister.clear();
				MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.clear();
				if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j)
				{
					MinisterOnTable[i].MinisterThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//MinisterOnTable[i].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	void AllDraw::ClearAllTablesHeuristicsAndMoreKing(int Order, int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool ac = false;
			 ac = IsNonValidityAllTablesHeuristicsAndMore(6, Order, i, j);


			if (ac)
			{
				//clear all lists
				KingOnTable[i].KingThinking.TableListKing.clear();
				KingOnTable[i].KingThinking.HeuristicListKing.clear();
				KingOnTable[i].KingThinking.RowColumnKing.clear();
				KingOnTable[i].KingThinking.PenaltyRegardListKing.clear();
				if (KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() > j)
				{
					KingOnTable[i].KingThinking.AStarGreedy[j] = AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
				}
				else
				{
					//KingOnTable[i].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
			}
		}
	}

	bool AllDraw::A_B_C_D_E_ISNonEqual(int a, int b, int c, int d, int e, int i, int j, int Kind)
	{
		bool Is = false;
		//when deeper is grater and is not empty
		if (e > a && e != -1)
		{
			//soldier
			if (Kind == 1)
			{
				//remove extra
				for (int h = a; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); h++)
				{
					SolderesOnTable[i].SoldierThinking.AStarGreedy.erase(SolderesOnTable[i].SoldierThinking.AStarGreedy.at[h]);
				}
			}
			else //elephant
			{
				if (Kind == 2)
				{
				//remove extra
				for (int h = a; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); h++)
				{
					ElephantOnTable[i].ElefantThinking.AStarGreedy.erase(ElephantOnTable[i].ElefantThinking.AStarGreedy.at[h]);
				}
				}
			else //hourse
			{
				if (Kind == 3)
				{
				//remove extra
				for (int h = a; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); h++)
				{
					HoursesOnTable[i].HourseThinking.AStarGreedy.erase(HoursesOnTable[i].HourseThinking.AStarGreedy.at[h]);
				}
				}
			else //Castle
			{
				if (Kind == 4)
				{
				//remove extra
				for (int h = a; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); h++)
				{
					CastlesOnTable[i].CastleThinking.AStarGreedy.erase(CastlesOnTable[i].CastleThinking.AStarGreedy.at[h]);
				}
				}
			else //minster
			{
				if (Kind == 5)
				{
				//remove extra
				for (int h = a; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); h++)
				{
					MinisterOnTable[i].MinisterThinking.AStarGreedy.erase(MinisterOnTable[i].MinisterThinking.AStarGreedy.at[h]);
				}
				}
			else //king
			{
				if (Kind == 6)
				{
				//remove extra
				for (int h = a; h < KingOnTable[i].KingThinking.AStarGreedy.size(); h++)
				{
					KingOnTable[i].KingThinking.AStarGreedy.erase(KingOnTable[i].KingThinking.AStarGreedy.at[h]);
				}
				}
			}
			}
			}
			}
			}
		}
		//when therse is collision in lists number return true
		if ((!(a == b && b == c && c == d)) || j > e || a == 0 || e == 0 || e == -1)
		{
			Is = true;
		}
		//when there is not
		if (!Is)
		{
			//soldier
			if (Kind == 1)
			{
				//when current alldraw lists is collision of stored lists tables state return true
				if (SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList[0], CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]))))
				{
					Is = true;
				}
			}
			else //elephant
			{
								if (Kind == 2)
								{
				//when current alldraw lists is collision of stored lists tables state return true
				if (ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList[0], CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]))))
				{
					Is = true;
				}
								}
			else //hourse
			{
								if (Kind == 3)
								{
				//when current alldraw lists is collision of stored lists tables state return true
				if (HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList[0], CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]))))
				{
					Is = true;
				}
								}
			else //Castle
			{
								if (Kind == 4)
								{
				//when current alldraw lists is collision of stored lists tables state return true
				if (CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList[0], CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]))))
				{
					Is = true;
				}
								}
			else //minster
			{
								if (Kind == 5)
								{
				//when current alldraw lists is collision of stored lists tables state return true
				if (MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList[0], CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]))))
				{
					Is = true;
				}
								}
			else //king
			{
								if (Kind == 6)
								{
				//when current alldraw lists is collision of stored lists tables state return true
				if (KingOnTable[i].KingThinking.AStarGreedy[j].TableList.size() != 0 && (!ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.AStarGreedy[j].TableList[0], CloneATable(KingOnTable[i].KingThinking.TableListKing[j]))))
				{
					Is = true;
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

	bool AllDraw::IsNonValidityAllTablesHeuristicsAndMore(int Kind, int Order, int i, int j)
	{
		bool Is = true;
		//soldier
		if (Kind == 1)
		{
			//when there is
			if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = SolderesOnTable[i].SoldierThinking.TableListSolder.size();
				int b = SolderesOnTable[i].SoldierThinking.HeuristicListSolder.size();
				int c = SolderesOnTable[i].SoldierThinking.RowColumnSoldier.size();
				int d = SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.size();
				int e = 0;
				if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = SolderesOnTable[i].SoldierThinking.AStarGreedy.size();
				}

				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		else if (Kind == 2)
		{
			//when there is
			if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = ElephantOnTable[i].ElefantThinking.TableListElefant.size();
				int b = ElephantOnTable[i].ElefantThinking.HeuristicListElefant.size();
				int c = ElephantOnTable[i].ElefantThinking.RowColumnElefant.size();
				int d = ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.size();
				int e = 0;
				if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = ElephantOnTable[i].ElefantThinking.AStarGreedy.size();
				}
				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		else if (Kind == 3)
		{
			//when there is
			if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = HoursesOnTable[i].HourseThinking.TableListHourse.size();
				int b = HoursesOnTable[i].HourseThinking.HeuristicListHourse.size();
				int c = HoursesOnTable[i].HourseThinking.RowColumnHourse.size();
				int d = HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.size();
				int e = 0;
				if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = HoursesOnTable[i].HourseThinking.AStarGreedy.size();
				}
				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		else if (Kind == 4)
		{
			//when there is
			if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = CastlesOnTable[i].CastleThinking.TableListCastle.size();
				int b = CastlesOnTable[i].CastleThinking.HeuristicListCastle.size();
				int c = CastlesOnTable[i].CastleThinking.RowColumnCastle.size();
				int d = CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle.size();
				int e = 0;
				if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = CastlesOnTable[i].CastleThinking.AStarGreedy.size();
				}
				//if (a == b && b == c && d == c && a > 0)
				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		else if (Kind == 5)
		{
			//when there is
			if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = MinisterOnTable[i].MinisterThinking.TableListMinister.size();
				int b = MinisterOnTable[i].MinisterThinking.HeuristicListMinister.size();
				int c = MinisterOnTable[i].MinisterThinking.RowColumnMinister.size();
				int d = MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.size();
				int e = 0;
				if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = MinisterOnTable[i].MinisterThinking.AStarGreedy.size();
				}
				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		else if (Kind == 6)
		{
			//when there is
			if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
			{
				//calculate of lists count and dynamic micprogramming
				int a = KingOnTable[i].KingThinking.TableListKing.size();
				int b = KingOnTable[i].KingThinking.HeuristicListKing.size();
				int c = KingOnTable[i].KingThinking.RowColumnKing.size();
				int d = KingOnTable[i].KingThinking.PenaltyRegardListKing.size();
				int e = 0;
				if (KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() > j)
				{
					e = -1;
				}
				else
				{
					e = KingOnTable[i].KingThinking.AStarGreedy.size();
				}
				 Is = A_B_C_D_E_ISNonEqual(a, b, c, d, e, i, j, 1);


			}
		}
		return (Is);
	}

	bool AllDraw::FoundOfCurrentTableNodeSolderIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 1))

		//when is null creation enough but empty and create deeper node 
		if (SolderesOnTable[i].SoldierThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 1);


			}
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.clear();
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.push_back(CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]));
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SetRowColumn(0);
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
								if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() < j + 1)
								{
			for (int h = SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 1);


			}
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.clear();
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.push_back(CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]));
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SetRowColumn(0);
			SolderesOnTable[i].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
			Found = true;
			return true;
								} //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j)
			{
				THIS = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeSoldeir(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; SolderesOnTable != nullptr && i < SodierMidle; i++)
			{
				for (int j = 0; SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 1);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		else
		{
			for (int i = SodierMidle; SolderesOnTable != nullptr && i < SodierHigh; i++)
			{
				for (int j = 0; SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 1);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.TableListSolder[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeSolderIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	bool AllDraw::FoundOfCurrentTableNodeElephantIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 2))

		//when is null creation enough but empty and create deeper node 
		if (ElephantOnTable[i].ElefantThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 2);


			}
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.clear();
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.push_back(CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]));
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].SetRowColumn(0);
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
								if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() < j + 1)
								{
			for (int h = ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 2);


			}
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.clear();
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.push_back(CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]));
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].SetRowColumn(0);
			ElephantOnTable[i].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
			Found = true;
			return true;
								} //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j)
			{
				THIS = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeElephant(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; ElephantOnTable != nullptr && i < ElefantMidle; i++)
			{
				for (int j = 0; ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 2);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
			for (int i = ElefantMidle; ElephantOnTable != nullptr && i < ElefantHigh; i++)
			{
				for (int j = 0; ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 2);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.TableListElefant[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeElephantIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	bool AllDraw::FoundOfCurrentTableNodeHourseIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 3))

		//when is null creation enough but empty and create deeper node 
		if (HoursesOnTable[i].HourseThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 3);


			}
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.clear();
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.push_back(CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]));
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].SetRowColumn(0);
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
							   if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() < j + 1)
							   {
			for (int h = HoursesOnTable[i].HourseThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 3);


			}
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.clear();
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.push_back(CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]));
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].SetRowColumn(0);
			HoursesOnTable[i].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
			Found = true;
			return true;
							   } //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j)
			{
				THIS = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeHourse(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; HoursesOnTable != nullptr && i < ElefantMidle; i++)
			{
				for (int j = 0; HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 3);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		else
		{
			for (int i = HourseMidle; HoursesOnTable != nullptr && i < HourseHight; i++)
			{
				for (int j = 0; HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 3);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.TableListHourse[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeHourseIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	bool AllDraw::FoundOfCurrentTableNodeCastleIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 4))

		//when is null creation enough but empty and create deeper node 
		if (CastlesOnTable[i].CastleThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 4);


			}
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.clear();
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.push_back(CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]));
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].SetRowColumn(0);
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
				  if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() < j + 1)
				  {
			for (int h = CastlesOnTable[i].CastleThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 4);


			}
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.clear();
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.push_back(CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]));
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].SetRowColumn(0);
			CastlesOnTable[i].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
			Found = true;
			return true;
				  } //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j)
			{
				THIS = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeCastle(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; CastlesOnTable != nullptr && i < CastleMidle; i++)
			{
				for (int j = 0; CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 4);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		else
		{
			for (int i = CastleMidle; CastlesOnTable != nullptr && i < CastleHigh; i++)
			{
				for (int j = 0; CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 4);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.TableListCastle[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeCastleIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	bool AllDraw::FoundOfCurrentTableNodeMinisterIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 5))

		//when is null creation enough but empty and create deeper node 
		if (MinisterOnTable[i].MinisterThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 5);


			}
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.clear();
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.push_back(CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]));
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].SetRowColumn(0);
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
								if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() < j + 1)
								{
			for (int h = MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 5);


			}
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.clear();
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.push_back(CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]));
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].SetRowColumn(0);
			MinisterOnTable[i].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
			Found = true;
			return true;
								} //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j)
			{
				THIS = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeMinister(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; MinisterOnTable != nullptr && i < MinisterMidle; i++)
			{
				for (int j = 0; MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 5);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		else
		{
			for (int i = MinisterMidle; MinisterOnTable != nullptr && i < MinisterHigh; i++)
			{
				for (int j = 0; MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 5);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.TableListMinister[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeMinisterIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	bool AllDraw::FoundOfCurrentTableNodeKingIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		//if (IsSupHuTrue(i, j, 0, 6))

		//when is null creation enough but empty and create deeper node 
		if (KingOnTable[i].KingThinking.AStarGreedy.empty())
		{
			for (int h = 0; h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 6);


			}
			KingOnTable[i].KingThinking.AStarGreedy[j].TableList.clear();
			KingOnTable[i].KingThinking.AStarGreedy[j].TableList.push_back(CloneATable(KingOnTable[i].KingThinking.TableListKing[j]));
			KingOnTable[i].KingThinking.AStarGreedy[j].SetRowColumn(0);
			KingOnTable[i].KingThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = KingOnTable[i].KingThinking.AStarGreedy[j];
			Found = true;
			return true;
		} //when is not deeper null and is less than j index create empty but create deeper node table
		else
		{
								if (KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() < j + 1)
								{
			for (int h = KingOnTable[i].KingThinking.AStarGreedy.size(); h <= j; h++)
			{
			//satisfied of created deeper three
				 BlitzNotValidFullGameThinkingTreePartThree(i, Order, 6);


			}
			KingOnTable[i].KingThinking.AStarGreedy[j].TableList.clear();
			KingOnTable[i].KingThinking.AStarGreedy[j].TableList.push_back(CloneATable(KingOnTable[i].KingThinking.TableListKing[j]));
			KingOnTable[i].KingThinking.AStarGreedy[j].SetRowColumn(0);
			KingOnTable[i].KingThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			THIS = KingOnTable[i].KingThinking.AStarGreedy[j];
			Found = true;
			return true;
								} //when is enough and determine about creation of empty deeper than deeper or return exist
		else
		{
			if (KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() > j)
			{
				THIS = KingOnTable[i].KingThinking.AStarGreedy[j];
				Found = true;
				return true;
			}
		}
		}
		return false;
	}

	bool AllDraw::FoundOfCurrentTableNodeKing(int** Tab, int Order, AllDraw THIS, bool &Found)
	{
		if (Order == 1)
		{
			for (int i = 0; KingOnTable != nullptr && i < KingMidle; i++)
			{
				for (int j = 0; KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 6);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}

					}
				}
			}
		}
		else
		{
			for (int i = KingMidle; KingOnTable != nullptr && i < KingHigh; i++)
			{
				for (int j = 0; KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > j; j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 6);


					if (ac)
					{
						continue;
					}
					 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.TableListKing[j], Tab);


					if (ac)
					{
						AllDraw This = THIS;
						bool fou = Found;
						 FoundOfCurrentTableNodeKingIJ(i, j, CloneATable(Tab), Order, This, fou);


						Found = fou;
						THIS = This;
						if (Found)
						{
							return Found;
						}
						if (Found)
						{
							return Found;
						}
					}
				}
			}
		}
		return Found;
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindSoldier(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}

			for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 1);


				if (ac)
				{
					continue;
				}
				//when leaf found set refer bool and alldraw refer objects
				if ((!SolderesOnTableMove[i]) && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && k < SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SodierMidle; k++)
						{
							if (!SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SolderesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 SolderesOnTable[i].SoldierThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]), Order * -1, false, false, 0);


								SolderesOnTable[i].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SodierMidle; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && k < SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SodierHigh; k++)
						{
							if (!SolderesOnTable[i].SoldierThinking.AStarGreedy[j].SolderesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 SolderesOnTable[i].SoldierThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]), Order * -1, false, false, 0);


								SolderesOnTable[i].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = *this;

								Leaf = SolderesOnTable[i].SoldierThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
					{
						SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}

			}

			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindElephant(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}

			for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 2);


				if (ac)
				{
					continue;
				}
				//when leaf found set refer bool and alldraw refer objects
				if ((!ElephantOnTableMove[i]) && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && k < ElephantOnTable[i].ElefantThinking.AStarGreedy[j].ElefantMidle; k++)
						{
							if (!ElephantOnTable[i].ElefantThinking.AStarGreedy[j].ElephantOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 ElephantOnTable[i].ElefantThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order * -1, false, false, 0);


								ElephantOnTable[i].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = ElephantOnTable[i].ElefantThinking.AStarGreedy[j].ElefantMidle; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && k < ElephantOnTable[i].ElefantThinking.AStarGreedy[j].ElefantHigh; k++)
						{
							if (!ElephantOnTable[i].ElefantThinking.AStarGreedy[j].ElephantOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 ElephantOnTable[i].ElefantThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]), Order * -1, false, false, 0);
								ElephantOnTable[i].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = *this;


								Leaf = ElephantOnTable[i].ElefantThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
					{
						ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}

			}
			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindHourse(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}
			for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 3);


				if (ac)
				{
					continue;
				}
				//when leaf found set refer bool and alldraw refer objects
				if ((!HoursesOnTableMove[i]) && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && k < HoursesOnTable[i].HourseThinking.AStarGreedy[j].HourseMidle; k++)
						{
							if (!HoursesOnTable[i].HourseThinking.AStarGreedy[j].HoursesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 HoursesOnTable[i].HourseThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order * -1, false, false, 0);


								HoursesOnTable[i].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = HoursesOnTable[i].HourseThinking.AStarGreedy[j].HourseMidle; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && k < HoursesOnTable[i].HourseThinking.AStarGreedy[j].HourseHight; k++)
						{
							if (!HoursesOnTable[i].HourseThinking.AStarGreedy[j].HoursesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 HoursesOnTable[i].HourseThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]), Order * -1, false, false, 0);


								HoursesOnTable[i].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = HoursesOnTable[i].HourseThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
					{
						HoursesOnTable[i].HourseThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}

			}


			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindCastle(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}
			for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 4);


				if (ac)
				{
					continue;
				}

				//when leaf found set refer bool and alldraw refer objects
				if ((!CastlesOnTableMove[i]) && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && k < CastlesOnTable[i].CastleThinking.AStarGreedy[j].CastleMidle; k++)
						{
							if (!CastlesOnTable[i].CastleThinking.AStarGreedy[j].CastlesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 CastlesOnTable[i].CastleThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order * -1, false, false, 0);


								CastlesOnTable[i].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = CastlesOnTable[i].CastleThinking.AStarGreedy[j].CastleMidle; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && k < CastlesOnTable[i].CastleThinking.AStarGreedy[j].CastleHigh; k++)
						{
							if (!CastlesOnTable[i].CastleThinking.AStarGreedy[j].CastlesOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 CastlesOnTable[i].CastleThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]), Order * -1, false, false, 0);


								CastlesOnTable[i].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = CastlesOnTable[i].CastleThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
					{
						CastlesOnTable[i].CastleThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}
			}

			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindMinister(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}
			for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 5);


				if (ac)
				{
					continue;
				}
				//when leaf found set refer bool and alldraw refer objects
				if ((!MinisterOnTableMove[i]) && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && k < MinisterOnTable[i].MinisterThinking.AStarGreedy[j].MinisterMidle; k++)
						{
							if (!MinisterOnTable[i].MinisterThinking.AStarGreedy[j].MinisterOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 MinisterOnTable[i].MinisterThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order * -1, false, false, 0);


								MinisterOnTable[i].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = MinisterOnTable[i].MinisterThinking.AStarGreedy[j].MinisterMidle; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && k < MinisterOnTable[i].MinisterThinking.AStarGreedy[j].MinisterHigh; k++)
						{
							if (!MinisterOnTable[i].MinisterThinking.AStarGreedy[j].MinisterOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 MinisterOnTable[i].MinisterThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]), Order * -1, false, false, 0);


								MinisterOnTable[i].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = MinisterOnTable[i].MinisterThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
					{
						MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}

			}

			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKindKing(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			if (Found)
			{
				return Leaf;
			}
			for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 6);


				if (ac)
				{
					continue;
				}
				//when leaf found set refer bool and alldraw refer objects
				if ((!KingOnTableMove[i]) && KingOnTable[i].KingThinking.AStarGreedy.size() > j) // && Kind == 1
				{

					if (Order == 1)
					{
						for (int  k = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && k < KingOnTable[i].KingThinking.AStarGreedy[j].KingMidle; k++)
						{
							if (!KingOnTable[i].KingThinking.AStarGreedy[j].KingOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 KingOnTable[i].KingThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order * -1, false, false, 0);


								KingOnTable[i].KingThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = KingOnTable[i].KingThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
					else
					{
						for (int  k = KingOnTable[i].KingThinking.AStarGreedy[j].KingMidle; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && k < KingOnTable[i].KingThinking.AStarGreedy[j].KingHigh; k++)
						{
							if (!KingOnTable[i].KingThinking.AStarGreedy[j].KingOnTableMove[k])
							{
								int aa = 1;
								if (Order * -1 == -1)
								{
									aa = -1;
								}
								 KingOnTable[i].KingThinking.AStarGreedy[j].InitiateAStarGreedyt(MaxAStarGreedy, 0, 0, aa, CloneATable(KingOnTable[i].KingThinking.TableListKing[j]), Order * -1, false, false, 0);


								KingOnTable[i].KingThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
								Leaf = KingOnTable[i].KingThinking.AStarGreedy[j];
								Found = true;
								return Leaf;
							}
						}
					}
				}
				else //deeper
				{
					for (int  ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
					{
						KingOnTable[i].KingThinking.AStarGreedy[ii].FoundOfLeafDepenOfKind(Leaf, Found, Order * -1, LeafDeep, ik, jk, iii, jjj);
					}
				}

			}

			return Leaf;
		}
	}

	AllDraw AllDraw::FoundOfLeafDepenOfKind(AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			if (LeafDeep > MaxAStarGreedy)
			{
				return Leaf;
			}
			LeafDeep++;
			//when found return recursive
			if (UniqueLeafDetection)
			{
				if (Found)
				{
					return Leaf;
				}
			} //WHITE
			if (Order == 1)
			{
				for (int  i = 0; i < SodierMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindSoldier(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}

				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = 0; i < ElefantMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindElephant(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = 0; i < HourseMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindHourse(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = 0; i < CastleMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindCastle(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = 0; i < MinisterMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindMinister(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = 0; i < KingMidle; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindKing(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
			}
			else
			{
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindSoldier(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindElephant(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindHourse(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindCastle(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindMinister(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
				if (UniqueLeafDetection)
				{
					if (Found)
					{
						return Leaf;
					}
				}
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					AllDraw le = Leaf;
					bool fou = Found;
					 FoundOfLeafDepenOfKindKing(i, le, fou, Order, LeafDeep, ik, jk, iii, jjj);


					Leaf = le;
					Found = fou;
				}
			}

			return Leaf;
		}
	}

	bool AllDraw::IsFoundOfLeafDepenOfKindhaveVictory(int Kind, bool &Found, int Order)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recurve
			if (Found)
			{
				return true;
			}
			//WHITE
			if (Order == 1)
			{
				//soldier
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//when is victory
						if (SolderesOnTable[i].SoldierThinking.IsThereMateOfEnemy[j] && Kind == 1) // && SolderesOnTable[i].SoldierThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}


					}
				}
				//elephant
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//when is victory
						if (ElephantOnTable[i].ElefantThinking.IsThereMateOfEnemy[j] && Kind == 2) //&& ElephantOnTable[i].ElefantThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}

					}
				}
				//hourse
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//when is victory
						if (HoursesOnTable[i].HourseThinking.IsThereMateOfEnemy[j] && Kind == 3) //&& HoursesOnTable[i].HourseThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}

					}
				}
				//Castle
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//when is victory
						if (CastlesOnTable[i].CastleThinking.IsThereMateOfEnemy[j] && Kind == 4) //&& CastlesOnTable[i].CastleThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}

					}
				}
				//minister
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//when is victory
						if (MinisterOnTable[i].MinisterThinking.IsThereMateOfEnemy[j] && Kind == 5) //&& MinisterOnTable[i].MinisterThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}

					}
				}
				//king
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//when is victory
						if (KingOnTable[i].KingThinking.IsThereMateOfEnemy[j] && Kind == 6) //&& KingOnTable[i].KingThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 KingOnTable[i].KingThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}

					}
				}
			}
			else //BLACK
			{
				//soldier
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//when is victory
						if (SolderesOnTable[i].SoldierThinking.IsThereMateOfEnemy[j] && Kind == 1) //&& SolderesOnTable[i].SoldierThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
				//elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//when is victory
						if (ElephantOnTable[i].ElefantThinking.IsThereMateOfEnemy[j] && Kind == 2) //&& ElephantOnTable[i].ElefantThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
				//hourse
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//when is victory
						if (HoursesOnTable[i].HourseThinking.IsThereMateOfEnemy[j] && Kind == 3) //&& HoursesOnTable[i].HourseThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 HoursesOnTable[i].HourseThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
				//Castle
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//when is victory
						if (CastlesOnTable[i].CastleThinking.IsThereMateOfEnemy[j] && Kind == 4) //&& CastlesOnTable[i].CastleThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 CastlesOnTable[i].CastleThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
				//minister
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//when is victory
						if (MinisterOnTable[i].MinisterThinking.IsThereMateOfEnemy[j] && Kind == 5) //&& MinisterOnTable[i].MinisterThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
				//king
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//when is victory
						if (KingOnTable[i].KingThinking.IsThereMateOfEnemy[j] && Kind == 6) //&& KingOnTable[i].KingThinking.AStarGreedy.Count == 0
						{
							Found = true;

							return true;
						}
						else //deeper
						{
							for (int  ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
							{
								bool fou = Found;
								 KingOnTable[i].KingThinking.AStarGreedy[ii].IsFoundOfLeafDepenOfKindhaveVictory(Kind, fou, Order * -1);


								Found = fou;
							}
						}
					}
				}
			}

			return Found;
		}
	}

	int AllDraw::IsSuitableForInitiation(int i, int j, int Kind)
	{
		int Is = 0;
		//determine deeper have right contained
		bool a = false;
		 a = IsNotAStarGreedyConanaied(i, j, Kind);



		//determined deeper contained have computatinal list correctly.
		bool b = false;
		 b = IsNotComputationsConanaiedAStarGreedy(i, j, Kind);



		//when true
		if (a)
		{
			//when true
			if (b)
			{
				Is = 2;
			}
			else //when false
			{
				Is = 3;
			}
		}
		else //when false
		{
			//when true
			if (b)
			{
				Is = 1;
			}
			else //when false
			{
				Is = 4;
			}
		}
		//when is 2 consider determinstic results about contanied
		if (Is == 2)
		{
			 IsThereCalculatedAStarGreedyNode(i, Kind);


		}
		return Is;
	}

	bool AllDraw::IsNotAStarGreedyConanaied(int i, int j, int Kind)
	{
		bool Is = false;
		int e = 0;
		int d = 0;
		//Soldier
		if (Kind == 1)
		{
			//determine nodes is coorectly existence
			if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
			{
				//deeper count
				e = SolderesOnTable[i].SoldierThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList[0], CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]))))
				{
					Is = true;
				}
			}
		}
		else if (Kind == 2)
		{
			//determine nodes is coorectly existence
			if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
			{
				//deeper count
				e = ElephantOnTable[i].ElefantThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList[0], CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]))))
				{
					Is = true;
				}
			}
		}
		else if (Kind == 3)
		{
			//determine nodes is coorectly existence
			if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
			{
				//deeper count
				e = HoursesOnTable[i].HourseThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList[0], CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]))))
				{
					Is = true;
				}
			}
		}
		else if (Kind == 4)
		{
			//determine nodes is coorectly existence
			if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
			{
				//deeper count
				e = CastlesOnTable[i].CastleThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList[0], CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]))))
				{
					Is = true;
				}
			}
		}
		else if (Kind == 5)
		{
			//determine nodes is coorectly existence
			if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
			{
				//deeper count
				e = MinisterOnTable[i].MinisterThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList[0], CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]))))
				{
					Is = true;
				}
			}
		}
		else if (Kind == 6)
		{
			//determine nodes is coorectly existence
			if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
			{
				//deeper count
				e = KingOnTable[i].KingThinking.AStarGreedy.size();
				//when deeper count exist and index is not more than count of deeper
				if (e > 0 && j < e)
				{
					//alldraw table list count
					d = KingOnTable[i].KingThinking.AStarGreedy[j].TableList.size();
				}
				//alldraw tabale list and deeper count not staisfy validity or when there is not equallity retunr true
				if (d > 0 && e > j && (!ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.AStarGreedy[j].TableList[0], CloneATable(KingOnTable[i].KingThinking.TableListKing[j]))))
				{
					Is = true;
				}
			}
		}
		//when deeper not exist return true
		if (e == 0)
		{
			Is = true;
		}
		//when current alldraw tablelist not exist return true
		if (d == 0)
		{
			Is = true;
		}
		return Is;

	}

	bool AllDraw::IsAtLeastAllObjectIsNull()
	{
		bool Is = false;
		//Soldier
		if (SolderesOnTable == nullptr)
		{
			Is = true;
		}
		if (ElephantOnTable == nullptr)
		{
			Is = true;
		}
		if (HoursesOnTable == nullptr)
		{
			Is = true;
		}
		if (CastlesOnTable == nullptr)
		{
			Is = true;
		}
		if (MinisterOnTable == nullptr)
		{
			Is = true;
		}
		if (KingOnTable == nullptr)
		{
			Is = true;
		}
		return Is;

	}

	bool AllDraw::IsNotComputationsConanaiedAStarGreedy(int i, int j, int Kind)
	{
		bool Is = false;
		int e = 0;
		//soldier
		if (Kind == 1)
		{
			if (SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
			{
				//lists count
				int a = SolderesOnTable[i].SoldierThinking.TableListSolder.size();
				e = SolderesOnTable[i].SoldierThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(SolderesOnTable[i].SoldierThinking.AStarGreedy[j].TableList[0], CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); h++)
						{
							SolderesOnTable[i].SoldierThinking.AStarGreedy.erase(SolderesOnTable[i].SoldierThinking.AStarGreedy.at[h]);

						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		else if (Kind == 2) //elephant
		{
			if (ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
			{
				//lists count
				int a = ElephantOnTable[i].ElefantThinking.TableListElefant.size();
				e = ElephantOnTable[i].ElefantThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(ElephantOnTable[i].ElefantThinking.AStarGreedy[j].TableList[0], CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); h++)
						{
							ElephantOnTable[i].ElefantThinking.AStarGreedy.erase(ElephantOnTable[i].ElefantThinking.AStarGreedy.at[h]);
						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		else if (Kind == 3) //hourse
		{
			if (HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
			{
				//lists count
				int a = HoursesOnTable[i].HourseThinking.TableListHourse.size();
				e = HoursesOnTable[i].HourseThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(HoursesOnTable[i].HourseThinking.AStarGreedy[j].TableList[0], CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); h++)
						{
							HoursesOnTable[i].HourseThinking.AStarGreedy.erase(HoursesOnTable[i].HourseThinking.AStarGreedy.at[h]);
						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		else if (Kind == 4) //Castle
		{
			if (CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0 && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
			{
				//lists count
				int a = CastlesOnTable[i].CastleThinking.TableListCastle.size();
				e = CastlesOnTable[i].CastleThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(CastlesOnTable[i].CastleThinking.AStarGreedy[j].TableList[0], CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); h++)
						{
							CastlesOnTable[i].CastleThinking.AStarGreedy.erase(CastlesOnTable[i].CastleThinking.AStarGreedy.at[h]);
						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		else if (Kind == 5) //minister
		{
			if (MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
			{
				//lists count
				int a = MinisterOnTable[i].MinisterThinking.TableListMinister.size();
				e = MinisterOnTable[i].MinisterThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(MinisterOnTable[i].MinisterThinking.AStarGreedy[j].TableList[0], CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); h++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy.erase(MinisterOnTable[i].MinisterThinking.AStarGreedy.at[h]);
						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		else if (Kind == 6) //king
		{
			if (KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0 && KingOnTable[i].KingThinking.TableListKing.size() > 0)
			{
				//lists count
				int a = KingOnTable[i].KingThinking.TableListKing.size();
				e = KingOnTable[i].KingThinking.AStarGreedy.size();
				//when table state exist and there is equliity between lists and deeper count
				if (a == e && e > j && KingOnTable[i].KingThinking.AStarGreedy[j].TableList.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy[j].TableList.size() > 0)
				{
					//when tow lists tables not is equal return true
					bool ac = false;
					 ac = ThinkingHybridizerRefrigitz::TableEqual(KingOnTable[i].KingThinking.AStarGreedy[j].TableList[0], CloneATable(KingOnTable[i].KingThinking.TableListKing[j]));


					if (!ac)
					{
						Is = true;
					}
				}
				else
				{
					//when deeper count is larger than lists count
					if (e > a)
					{
						//remove extra
						for (int h = a; h < KingOnTable[i].KingThinking.AStarGreedy.size(); h++)
						{
							KingOnTable[i].KingThinking.AStarGreedy.erase(KingOnTable[i].KingThinking.AStarGreedy.at[h]);
						}
					}
					//when deeper dose not exist return true
					if (a == 0)
					{
						Is = true;
					}
				}
			}
		}
		//when deeper count is less than index deeper return true
		if (e < j)
		{
			Is = true;
		}
		return Is;

	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameSoldeir(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size() && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0 ; j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 1);


					if (ac)
					{
						continue;
					}
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);


				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 1);


				if (!IA)
				{
					Is = 4;
				}
				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						bool ac = false;
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[i].SoldierThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						SolderesOnTable[i].WinOcuuredatChiled += SumOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for leafer 
					if (Is == 2)
					{
						for (int  iii = 0; iii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].TableList.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;

								//when search finished stop and return
								bool ac = false;
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							SolderesOnTable[i].SoldierThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
						{
							SolderesOnTable[i].WinOcuuredatChiled += SumOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
						{
							SolderesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
						}
					}
					else if (Is == 3) //when deeper is suitable and  computational not
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							int Ord = Order, ii1 = ii, jj1 = jj, i1 = i, j1 = j;

							 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


							for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
							{
								SolderesOnTable[i].SoldierThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
								SolderesOnTable[i].WinOcuuredatChiled += SumOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
							}
							for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
							{
								SolderesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
							}
						}
					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{
							FullGameFound = true;

							a = 1;
							if (Order == -1)
							{
								a = -1;
							}

							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								FirstTraversalTree = false;

								//when search finished stop and return
								bool ac = false;
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}
							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}
			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameElepahnt(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size() && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0 ; j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 2);


					if (ac)
					{
						continue;
					}
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}

				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);


				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 2);


				if (!IA)
				{
					Is = 4;
				}

				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						bool ac = false;
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[i].ElefantThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						ElephantOnTable[i].WinOcuuredatChiled += SumOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for leafer 
					if (Is == 2)
					{
						for (int  iii = 0; iii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].TableList.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;
								//when search finished stop and return
								bool ac = false;
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							ElephantOnTable[i].ElefantThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
						{
							ElephantOnTable[i].WinOcuuredatChiled += SumOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
						{
							ElephantOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
						}
					}
					else if (Is == 3) //when is suitable for deeper
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							int Ord = Order, ii1 = ii, jj1 = jj, i1 = i, j1 = j;

							 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


							for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
							{
								ElephantOnTable[i].ElefantThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
								ElephantOnTable[i].WinOcuuredatChiled += SumOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
							}
							for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
							{
								ElephantOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
							}
						}
					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{

							a = 1;
							if (Order == -1)
							{
								a = -1;
							}

							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}
			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameHourse(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size() && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0 ; j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 3);


					if (ac)
					{
						continue;
					}
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);


				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 3);


				if (!IA)
				{
					Is = 4;
				}

				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						bool ac = false;
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[i].HourseThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						HoursesOnTable[i].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for leafer 
					if (Is == 2)
					{
						for (int  iii = 0; iii < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy[iii].TableList.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;
								//when search finished stop and return
								bool ac = false;
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							HoursesOnTable[i].HourseThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(HoursesOnTable[i].HourseThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							HoursesOnTable[i].HourseThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
						{
							HoursesOnTable[i].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
						{
							HoursesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
						}
					}
					else if (Is == 3) //when is suitable for deeper
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{

							 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


							for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
							{
								HoursesOnTable[i].HourseThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
								HoursesOnTable[i].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
							}
							for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
							{
								HoursesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
							}
						}
					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{
							int Ord = Order, iAStarGreedy1 = 0, ii1 = ii, jj1 = jj, i1 = i, j1 = j;
							a = 1;
							if (Order == -1)
							{
								a = -1;
							}

							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}


			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameCastle(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size() ; j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 4);


				if (ac)
				{
					continue;
				}
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);



				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 4);


				if (!IA)
				{
					Is = 4;
				}
				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[i].CastleThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						CastlesOnTable[i].WinOcuuredatChiled += SumOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for deeper
					if (Is == 2)
					{
						for (int  iii = 0; iii < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy[iii].TableList.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;
								//when search finished stop and return
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							CastlesOnTable[i].CastleThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(CastlesOnTable[i].CastleThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							CastlesOnTable[i].CastleThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
						{
							CastlesOnTable[i].WinOcuuredatChiled += SumOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
						{
							CastlesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
						}
					}
					else if (Is == 3) //when is suitable for leafer
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{

							 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


							for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
							{
								CastlesOnTable[i].CastleThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
								CastlesOnTable[i].WinOcuuredatChiled += SumOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
							}
							for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
							{
								CastlesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
							}
						}
					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{
							FullGameFound = true;

							a = 1;
							if (Order == -1)
							{
								a = -1;
							}
							int Ord = Order, iAStarGreedy1 = 0, ii1 = ii, jj1 = jj, i1 = i, j1 = j;

							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}

			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameMinister(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size() && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0 ; j++)
			{
				bool ac = false;
				 ac = IsSupHuTrue(i, j, 0, 5);


				if (ac)
				{
					continue;
				}
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);



				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 3);


				if (!IA)
				{
					Is = 4;
				}
				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[i].MinisterThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						MinisterOnTable[i].WinOcuuredatChiled += SumOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for leafer 
					if (Is == 2)
					{
						for (int  iii = 0; iii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].TableList.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;
								//when search finished stop and return
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							MinisterOnTable[i].MinisterThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
						{
							MinisterOnTable[i].WinOcuuredatChiled += SumOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
						{
							MinisterOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
						}
					}
					else if (Is == 3) //when is suitable for deeper
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}


						 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


						for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
						{
							MinisterOnTable[i].MinisterThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
							MinisterOnTable[i].WinOcuuredatChiled += SumOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
						{
							MinisterOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
						}

					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{
							FullGameFound = true;

							a = 1;
							if (Order == -1)
							{
								a = -1;
							}

							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}
			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGameKing(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (P)
		{
			for (int  j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && j < KingOnTable[i].KingThinking.TableListKing.size() && KingOnTable[i].KingThinking.TableListKing.size() > 0 ; j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 6);


					if (ac)
					{
						continue;
					}
					//when search finished stop and return
					 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
				//determine about validity of list on current and deeper return true when successfull
				bool IA = false;
				 IA = IsNonValidityAllTablesHeuristicsAndMore(1, Order, i, j);



				//determine about situation of deeper against other lists computation in 4 state
				int Is = 0;
				 Is = IsSuitableForInitiation(i, j, 3);


				if (!IA)
				{
					Is = 4;
				}
				//when is suitable for computational operation on lists
				if (Is == 4)
				{
					////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOO)
					{
						//when search finished stop and return
						bool ac = false;
						 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


						if (ac)
						{
							return;
						}
					}
					FullGameFound = true;


					 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


					for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[i].KingThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
						KingOnTable[i].WinOcuuredatChiled += SumOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
					}
					for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
					}
				}
				else
				{
					//when is suitable for leafer 
					if (Is == 2)
					{
						for (int  iii = 0; iii < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy[iii].TableList.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy[iii].TableList.size() > 0; iii++)
						{
							////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOOO)
							{
								FirstTraversalTree = false;

								//when search finished stop and return
								bool ac = false;
								 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


								if (ac)
								{
									return;
								}
							}


							KingOnTable[i].KingThinking.AStarGreedy[iii].FoundOfLeafDepenOfKindFullGame(CloneATable(KingOnTable[i].KingThinking.AStarGreedy[iii].TableList[0]), Order * -1, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);
							KingOnTable[i].KingThinking.AStarGreedy[iii].AStarGreedyStringNode = *this;
						}
						for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
						{
							KingOnTable[i].WinOcuuredatChiled += SumOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
						}
						for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
						{
							KingOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
						}

					}
					else if (Is == 3) //when is suitable for deeper
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							int Ord = Order, ii1 = ii, jj1 = jj, i1 = i, j1 = j;

							 InitiateAStarGreedyt(AllDraw::MaxAStarGreedy - LeafAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);


							for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
							{
								KingOnTable[i].KingThinking.AStarGreedy[h].AStarGreedyStringNode = *this;
								KingOnTable[i].WinOcuuredatChiled += SumOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
							}
							for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
							{
								KingOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
							}
						}
					}
					else //otherwise
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							 ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OO1)
						{

							a = 1;
							if (Order == -1)
							{
								a = -1;
							}

							 this->FullGameThinkingTree(Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
				}
			}
		}
	}

	void AllDraw::FoundOfLeafDepenOfKindFullGame(int** Table, int Order, int iAStarGreedy, int ii, int jj, int ik, int jjj, bool FOUND, int LeafAStarGreedy)
	{
		LeafSemaphoreIndex = true;

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Omm)
			{
				if (LeafAStarGreedy >= MaxAStarGreedy)
				{
					return;
				}
				////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOO)
				{
					//when search finished stop and return
					bool ac = false;
					ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}
				}
			}
			bool FullGameFound = false;
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				//WHITE
				if (Order == 1)
				{
					//parallel full game all deeper foundation
					int a = 1;

					//soldier
					for (int  i = 0; i < SodierMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameSoldeir(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);




						}
					}

					//elephant
					for (int  i = 0; i < ElefantMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameElepahnt(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//hourse
					for (int  i = 0; i < HourseMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameHourse(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//Castle
					for (int  i = 0; i < CastleMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameCastle(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//minister
					for (int  i = 0; i < MinisterMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameMinister(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//king
					for (int  i = 0; i < KingMidle; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameKing(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}



				}
				else //BLACK
				{
					int a = -1;

					//soldier
					for (int  i = SodierMidle; i < SodierHigh; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameSoldeir(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//elephant
					for (int  i = ElefantMidle; i < ElefantHigh; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameElepahnt(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}
					//hourse
					for (int  i = HourseMidle; i < HourseHight; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameHourse(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);


						}
					}

					//Castle
					for (int  i = CastleMidle; i < CastleHigh; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameCastle(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//minister
					for (int  i = MinisterMidle; i < MinisterHigh; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameMinister(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}

					//king
					for (int  i = KingMidle; i < KingHigh; i++)
					{
						////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (OOOO)
						{
							//when search finished stop and return
							bool ac = false;
							ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


							if (ac)
							{
								return;
							}
						}
						//auto P = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (P)
						{
							FoundOfLeafDepenOfKindFullGameKing(a, FullGameFound, CloneATable(Table), Order, iAStarGreedy, ii, jj, i, jjj, FOUND, LeafAStarGreedy);



						}
					}



				}
			}
			//when not occured untile now computational op
			if (!FullGameFound)
			{
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					//when search finished stop and return
					bool ac = false;
					ac = FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy);


					if (ac)
					{
						return;
					}

					int a = 1;
					if (Order == -1)
					{
						a = -1;
					}
					InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, ii, jj, a, CloneATable(Table), Order, false, false, LeafAStarGreedy);



				}
			}

			return;
		}
	}

	void AllDraw::MakeRegardAllCheckMateBranches(AllDraw A, int Order)
	{

		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			int COrder = Order;
			int CDummy = ChessRules::CurrentOrder;
			//WHITE
			if (Order == 1)
			{
				//soldier
				for (int  i = 0; i < SodierMidle; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//make regard
						 A.SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//elephant
				for (int  i = 0; i < ElefantMidle; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{

						//make regard
						 A.ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//hourse
				for (int  i = 0; i < HourseMidle; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//make regard
						 A.HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//Castle
				for (int  i = 0; i < CastleMidle; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//make regard
						 A.CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//minister
				for (int  i = 0; i < MinisterMidle; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//make regard
						 A.MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//king
				for (int  i = 0; i < KingMidle; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//make regard
						 A.KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();


						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
			}
			else //BLACK
			{
				//soldier
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					for (int  j = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && j < A.SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
					{
						//make regard
						 A.SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[i].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].SoldierThinking!= nullptr && ii < A.SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.SolderesOnTable[i].SoldierThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int  j = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && j < A.ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
					{
						//make regard
						 A.ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].ElefantThinking!= nullptr && ii < A.ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.ElephantOnTable[i].ElefantThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//hourse
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					for (int  j = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && j < A.HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
					{
						//make regard
						 A.HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].HourseThinking!= nullptr && ii < A.HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.HoursesOnTable[i].HourseThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//Castle
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					for (int  j = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && j < A.CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
					{
						//make regard
						 A.CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].CastleThinking!= nullptr && ii < A.CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.CastlesOnTable[i].CastleThinking.AStarGreedy[ii], Order);



						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//minister
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && j < A.MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
					{
						//make regard
						 A.MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmRegard();



						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].MinisterThinking!= nullptr && ii < A.MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.MinisterOnTable[i].MinisterThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
				//king
				for (int  i = KingMidle; i < MinisterHigh; i++)
				{
					for (int  j = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && j < A.KingOnTable[i].KingThinking.TableListKing.size(); j++)
					{
						//make regard
						 A.KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();


						A.KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmRegard();
						Order *= -1;
						ChessRules::CurrentOrder *= -1;
						//deeper call
						for (int  ii = 0; A.KingOnTable != nullptr && KingOnTable[i] != nullptr && A.KingOnTable[i].KingThinking!= nullptr && ii < A.KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
						{
							 MakeRegardAllCheckMateBranches(A.KingOnTable[i].KingThinking.AStarGreedy[ii], Order);


						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
					}
				}
			}
		}

	}
	/*
	void AllDraw::StringHeuristics(int Obj, int Sec, bool AA, int Do, int WinOcuuredatChiled, int *LoseOcuuredatChiled)
	{

		std::wstring SOut = L"";
		if (Obj == 1)
		{
			SOut = L"Soldier ";
		}
		else
		{
			if (Obj == 2)
			{
			SOut = L"Elephant ";
			}
		else
		{
			if (Obj == 3)
			{
			SOut = L"Hourse ";
			}
		else
		{
			if (Obj == 4)
			{
			SOut = L"Castle ";
			}
		else
		{
			if (Obj == 5)
			{
			SOut = L"Minister ";
			}
		else
		{
				if (Obj == 6)
				{
			SOut = L"King ";
				}
		}
		}
		}
		}
		}
		SOut += std::wstring(L"AStar Heuristics ");
		if (Sec == 1)
		{
			SOut += std::wstring(L" -Initiatetion- ");
		}
		if (Sec == 2)
		{
			SOut += std::wstring(L" -Regard- ");
		}
		if (Sec == 3)
		{
			SOut += std::wstring(L" -Foundation Greatest- ");
		}
		if (WinOcuuredatChiled >= 1)
		{
			SOut += std::wstring(L" At -WinKing Checked Mate- is active For Eneter Regard- ");
		}
		if (LoseOcuuredatChiled[0] <= -1)
		{
			SOut += std::wstring(L" At -LoseKing Checked Mate- is active For Eneter Penelty- ");
		}
		if (AA)
		{
			SOut += std::wstring(L" '-AA-' is Active due to Regard Enter- ");
		}
		if (Do == 1)
		{
			SOut += std::wstring(L" '-Do-' is Active due to Regard Enter- ");
		}
		SOut += std::wstring(L" With Heuristic Count ") + AllDraw::Less;
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

		}

	}
	*/
	bool AllDraw::IsSupHuTrue(int i, int j, int k, int Kind)
	{
		bool Is = false;
		if (!AllowedSupTrue)
		{
			if (Kind == 1)
			{
				Is = SolderesOnTable[i].SoldierThinking.IsSupHu[j];
			}
			else
			{
		   if (Kind == 2)
		   {
				Is = ElephantOnTable[i].ElefantThinking.IsSupHu[j];
		   }
			else
			{
		   if (Kind == 3)
		   {
				Is = HoursesOnTable[i].HourseThinking.IsSupHu[j];
		   }
			else
			{
		   if (Kind == 4)
		   {
				Is = CastlesOnTable[i].CastleThinking.IsSupHu[j];
		   }
			else
			{
		   if (Kind == 5)
		   {
				Is = MinisterOnTable[i].MinisterThinking.IsSupHu[j];
		   }
			else
			{
		   if (Kind == 6)
		   {
				Is = KingOnTable[i].KingThinking.IsSupHu[j];
		   }
			}
			}
			}
			}
			}
		}
		else
		{
			if (Kind == 1)
			{
				Is = SolderesOnTable[i].SoldierThinking.IsSup[j];
			}
			else
			{
	   if (Kind == 2)
	   {
				Is = ElephantOnTable[i].ElefantThinking.IsSup[j];
	   }
			else
			{
	   if (Kind == 3)
	   {
				Is = HoursesOnTable[i].HourseThinking.IsSup[j];
	   }
			else
			{
	   if (Kind == 4)
	   {
				Is = CastlesOnTable[i].CastleThinking.IsSup[j];
	   }
			else
			{
	   if (Kind == 5)
	   {
				Is = MinisterOnTable[i].MinisterThinking.IsSup[j];
	   }
			else
			{
	   if (Kind == 6)
	   {
				Is = KingOnTable[i].KingThinking.IsSupHu[j];
	   }
			}
			}
			}
			}
			}
		}
		return Is;
	}

	void AllDraw::SaveLess(int i, int j, int k, int Kind, int &Less, bool AA, int Order)
	{

		//soldier
		if (Kind == 1)
		{
			Less = SolderesOnTable[i].SoldierThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
		}
		else //elephant
		{
	if (Kind == 2)
	{
			Less = ElephantOnTable[i].ElefantThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
	}
		else //hourse
		{
	if (Kind == 3)
	{
			Less = HoursesOnTable[i].HourseThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
	}
		else //Castle
		{
	if (Kind == 4)
	{
			Less = CastlesOnTable[i].CastleThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
	}
		else //minister
		{
	if (Kind == 5)
	{
			Less = MinisterOnTable[i].MinisterThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
	}
		else //king
		{
	if (Kind == 6)
	{
			Less = KingOnTable[i].KingThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled);
	}
		}
		}
		}
		}
		}

	}

	void AllDraw::SaveTableHeuristic(int i, int j, int k, int Kind, int **TableHeuristic)
	{
		//soldier
		if (Kind == 1)
		{
			TableHeuristic = CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]);
		}
		else //elephant
		{
			if (Kind == 2)
			{
			TableHeuristic = CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]);
			}
		else //hourse
		{
			if (Kind == 3)
			{
			TableHeuristic = CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]);
			}
		else //Castle
		{
			if (Kind == 4)
			{
			TableHeuristic = CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]);
			}
		else //minister
		{
			if (Kind == 5)
			{
			TableHeuristic = CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]);
			}
		else //king
		{
			if (Kind == 6)
			{
			TableHeuristic = CloneATable(KingOnTable[i].KingThinking.TableListKing[j]);
			}
		}
		}
		}
		}
		}
	}

	void AllDraw::SaveBeginEndLocation(int i, int j, int k, int Kind)
	{
		//soldier
		if (Kind == 1)
		{
			AllDraw::LastRow = SolderesOnTable[i].SoldierThinking.Row;
			AllDraw::LastColumn = SolderesOnTable[i].SoldierThinking.Column;
			AllDraw::NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
			AllDraw::NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		}
		else //elephant
		{
			 if (Kind == 2)
			 {
			AllDraw::LastRow = ElephantOnTable[i].ElefantThinking.Row;
			AllDraw::LastColumn = ElephantOnTable[i].ElefantThinking.Column;
			AllDraw::NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
			AllDraw::NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];
			 }
		else //hourse
		{
			 if (Kind == 3)
			 {
			AllDraw::LastRow = HoursesOnTable[i].HourseThinking.Row;
			AllDraw::LastColumn = HoursesOnTable[i].HourseThinking.Column;
			AllDraw::NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
			AllDraw::NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
			 }
		else //Castle
		{
			 if (Kind == 4)
			 {
			AllDraw::LastRow = CastlesOnTable[i].CastleThinking.Row;
			AllDraw::LastColumn = CastlesOnTable[i].CastleThinking.Column;
			AllDraw::NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
			AllDraw::NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
			 }
		else //minister
		{
			 if (Kind == 5)
			 {
			AllDraw::LastRow = MinisterOnTable[i].MinisterThinking.Row;
			AllDraw::LastColumn = MinisterOnTable[i].MinisterThinking.Column;
			AllDraw::NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
			AllDraw::NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
			 }
		else //king
		{
			 if (Kind == 6)
			 {
			AllDraw::LastRow = KingOnTable[i].KingThinking.Row;
			AllDraw::LastColumn = KingOnTable[i].KingThinking.Column;
			AllDraw::NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
			AllDraw::NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
			 }
		}
		}
		}
		}
		}
	}

	bool AllDraw::RegardLessOptimized(int i, int j, int k, int Kind, int &Less, bool AA, int Order)
	{ //soldier
		if (Kind == 1)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < SolderesOnTable[i].SoldierThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;

			if (ac)
			{
				return true;
			}
		}
		else //elephant
		{
		if (Kind == 2)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < ElephantOnTable[i].ElefantThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;
			if (ac)
			{
				return true;
			}
		}
		else //hourse
		{
		if (Kind == 3)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < HoursesOnTable[i].HourseThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;

			if (ac)
			{
				return true;
			}
		}
		else //Castle
		{
		if (Kind == 4)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < CastlesOnTable[i].CastleThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;

			if (ac)
			{
				return true;
			}
		}
		else //minister
		{
		if (Kind == 5)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < MinisterOnTable[i].MinisterThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;

			if (ac)
			{
				return true;
			}
		}
		else //king
		{
		if (Kind == 6)
		{
			bool ac = false;
			int HaKild = HaveKilled;
			int Le = Less;
			 ac = Le < KingOnTable[i].KingThinking.ReturnHeuristic(i, j, Order, AA, HaKild);


			HaveKilled = HaKild;
			Less = Le;

			if (ac)
			{
				return true;
			}
		}
		}
		}
		}
		}
		}
		return false;
	}

	bool AllDraw::HeuristicRegardSection(int i, int j, int k, bool &Act, int **TableHeuristic, bool &AA, int a, int Kind, int &Do, int AStarGreedyi, int Order)
	{
		bool continued = false;
		if (IsSupHuTrue(i, j, k, Kind))
		{
			return true;
		}
		bool A = WinReturnValue(Kind, i, j);
		bool B = WinPerfromeRegardMethod(Kind, i, j);
		continued = A;
		if (!(A && B))
		{
			return continued;
		}
		//soldier
		if (Kind == 1)
		{
			if ((SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 && SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((((Do == 1 || AA) && UsePenaltyRegardMechnisamT)) && UsePenaltyRegardMechnisamT) || SolderesOnTable[i].WinOcuuredatChiled >= 1 || SolderesOnTable[i].WinOcuuredatChiled >= 2 || SolderesOnTable[i].WinOcuuredatChiled >= 3)
			{
				//Set Table and Heuristic Value and Syntax.
				Act = true;
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))


					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;

				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					ThingsConverter::ActOfClickEqualTow = true;
				}
				SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
				int Sign = 1;
				if (a == -1)
				{
					Sign = -1;
				}
				//If there is Soldier Convert.
				if (SolderesOnTable[i].Convert)
				{
					if (SolderesOnTable[i].ConvertedToMinister)
					{
						TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
					}
					else if (SolderesOnTable[i].ConvertedToCastle)
					{
						TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
					}
					else if (SolderesOnTable[i].ConvertedToHourse)
					{
						TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
					}
					else if (SolderesOnTable[i].ConvertedToElefant)
					{
						TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
					}
				}
				RegardOccurred = true;
				StringHeuristics(1, 2, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);
				continued = true;
			}
		}
		else //elephant
		{
		if (Kind == 2)
		{
			if ((ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 && ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || ElephantOnTable[i].WinOcuuredatChiled >= 1 || ElephantOnTable[i].WinOcuuredatChiled >= 2 || ElephantOnTable[i].WinOcuuredatChiled >= 3)
			{
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))

					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;
				}
				StringHeuristics(2, 2, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);
				RegardOccurred = true;
				continued = true;
			}
		}
		else //hourse
		{
		if (Kind == 3)
		{
			if ((HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 && HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || HoursesOnTable[i].WinOcuuredatChiled >= 1 || HoursesOnTable[i].WinOcuuredatChiled >= 2 || HoursesOnTable[i].WinOcuuredatChiled >= 3)
			{
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))

					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;
				}
				RegardOccurred = true;
				StringHeuristics(3, 2, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);
				continued = true;
			}
		}
		else //Castle
		{
		if (Kind == 4)
		{
			if ((CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 && CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || CastlesOnTable[i].WinOcuuredatChiled >= 1 || CastlesOnTable[i].WinOcuuredatChiled >= 2 || CastlesOnTable[i].WinOcuuredatChiled >= 3)
			{
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))

					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;
				}
				RegardOccurred = true;
				StringHeuristics(4, 2, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);
				continued = true;
			}
		}
		else //minister
		{
			if (Kind == 5)
			{
			if ((MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 && MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || MinisterOnTable[i].WinOcuuredatChiled >= 1 || MinisterOnTable[i].WinOcuuredatChiled >= 2 || MinisterOnTable[i].WinOcuuredatChiled >= 3)
			{
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))

					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;
				}
				TableHeuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
				RegardOccurred = true;
				StringHeuristics(5, 2, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);
				continued = true;
			}
			}
		else //king
		{
		if (Kind == 6)
		{
			if ((KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 && KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3)
			{
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{
					//if (!RegardLessOptimized(i, j, k, Kind, ref Less, AA, Order))

					 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
					int **Th = TableHeuristic;
					 SaveTableHeuristic(i, j, k, Kind, Th);


					TableHeuristic = Th;

					int le = Less;
					bool AAA = AA;
					 SaveLess(i, j, k, Kind, le, AAA, Order);


					Less = le;
					AA = AAA;
				}
				RegardOccurred = true;
				StringHeuristics(6, 2, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);
				//if (KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3)

				//if (((Do == 1 || AA)&&UsePenaltyRegardMechnisamT))
				continued = true;
			}
		}
		}
		}
		}
		}
		}
		if (continued)
		{
			OnlyWin = true;
		}
		return continued;
	}

	void AllDraw::InitiateVars(int i, int j, int k, int Kind)
	{

		RW1 = -1;
		CL1 = -1;
		Ki1 = -1;
		RW2 = -1;
		CL2 = -1;
		Ki2 = -1;
		RW3 = -1;
		CL3 = -1;
		Ki3 = -1;
		RW4 = -1;
		CL4 = -1;
		Ki4 = -1;
		RW5 = -1;
		CL5 = -1;
		Ki5 = -1;
		RW6 = -1;
		CL6 = -1;
		Ki6 = -1;
		//Sodleirs 
		if (Kind == 1)
		{
			RW1 = i;
			CL1 = k;
			Ki1 = j;
		}
		else //elephant
		{
			if (Kind == 2)
			{
			RW2 = i;
			CL2 = k;
			Ki2 = j;
			}
		else //hourse
		{
			if (Kind == 3)
			{
			RW3 = i;
			CL3 = k;
			Ki3 = j;
			}
		else //Castle
		{
			if (Kind == 4)
			{
			RW4 = i;
			CL4 = k;
			Ki4 = j;
			}
		else //minister
		{
			if (Kind == 5)
			{
			RW5 = i;
			CL5 = k;
			Ki5 = j;
			}
		else //king
		{
			if (Kind == 6)
			{
			RW6 = i;
			CL6 = k;
			Ki6 = j;
			}
		}
		}
		}
		}
		}

	}

	bool AllDraw::CheckeHuristci(int** TableS, int Order, int i, int j, int k)
	{

		bool continued = false;
		ChessRules *AB = new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 1, CloneATable(TableS), Order, SolderesOnTable[i].SoldierThinking.Row, SolderesOnTable[i].SoldierThinking.Column);
		//If there is kish or kshachamaz Order.
		bool ac = false;
		 ac = AB->Check(CloneATable(TableS), Order);



		if (ac)
		{
			//When Order is WHITE.
			if (Order == 1)
			{
				//Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
				if (AB->CheckWHITE)
				{
					continued = true;
				}
			}
			else
			{
				//Continue when CheckBLACK and AStarGreadyFirstSearch. 
				if (AB->CheckBLACK)
				{
					continued = true;
				}
			}
		}

		return continued;
	}

	void AllDraw::OutputHeuristic(int Order)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (Order == 1)
			{

			}
			else //If Order is BLACK.
			{

			}
		}

	}

	bool AllDraw::HeuristicMainBody(int i, int j, int k, bool &Act, int **TableHeuristic, bool &CurrentTableHeuristic, bool &AA, int a, int Kind, int &Do, int AStarGreedyi, int Order)
	{

		bool continued = false;
		if (IsSupHuTrue(i, j, k, Kind))
		{
			return true;
		}
		if (Kind == 1)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = SolderesOnTable[i].SoldierThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{

				////auto o11 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O11)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
					int **TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
					//checked for Legal Movments ArgumentOutOfRangeException curnt game.
					if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
					{
						if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
						{
							//if (Order == 1)

							//else

							return true;
						}

					}
					//When there is not Penalty regard mechanism.
					 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


					if (ac)
					{
						return true;
					}

					 InitiateVars(i, j, k, Kind);



					//Set Max of Soldier.
					AAA = AA;
					Havk = HaveKilled;
					 MaxLess1 = SolderesOnTable[RW1].SoldierThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


					AA = AAA;
					HaveKilled = Havk;

					if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
					{
						if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
						{
							return true;
						}
					}
					if (!KillerForce(HaveKilled))
					{
						return true;
					}
					//When Soldeirs is Greater than Others these Set Max.
					if (MaxLess1 > MaxLess2)
					{
						MaxLess2 = -1;
					}
					if (MaxLess1 > MaxLess3)
					{
						MaxLess3 = -1;
					}
					if (MaxLess1 > MaxLess4)
					{
						MaxLess4 = -1;
					}
					if (MaxLess1 > MaxLess5)
					{
						MaxLess5 = -1;
					}
					if (MaxLess1 > MaxLess6)
					{
						MaxLess6 = -1;
					}
					if (AStarGreedyi == 1)
					{
						OutputHeuristic(Order);
						//Set Table and Heuristic Value and Syntax.
						Act = true;
						////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (On)
						{
							 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
							int **Th = TableHeuristic;
							SaveTableHeuristic(i, j, k, Kind, Th);


							TableHeuristic = Th;

							int le = Less;
							AAA = AA;
							 SaveLess(i, j, k, Kind, le, AAA, Order);


							Less = le;
							AA = AAA;
						}
						StringHeuristics(1, 3, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							ThingsConverter::ActOfClickEqualTow = true;
						}
						SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
						int Sign = 1;
						if (a == -1)
						{
							Sign = -1;
						}
						//If there is Soldier Convert.
						if (SolderesOnTable[i].Convert)
						{
							if (SolderesOnTable[i].ConvertedToMinister)
							{
								TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToCastle)
							{
								TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToHourse)
							{
								TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
							}
							else if (SolderesOnTable[i].ConvertedToElefant)
							{
								TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0]][SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;
							}
						}
					}
				}
			}
		}
		else if (Kind == 2)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = ElephantOnTable[i].ElefantThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

				}
				//retrive table of current Heuristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
				int **TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
				//checked for Legal Movments ArgumentOutOfRangeException curnt game.
				if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
				{
					if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
					{
						//if (Order == 1)

						//else

						return true;
					}

				}
				//When there is not Penalty regard mechanism.
				 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


				if (ac)
				{
					return true;
				}

				 InitiateVars(i, j, k, Kind);



				AAA = AA;
				Havk = HaveKilled;
				 MaxLess2 = ElephantOnTable[RW2].ElefantThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


				AA = AAA;
				HaveKilled = Havk;

				if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
				{
					if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
					{
						return true;
					}
				}
				if (!KillerForce(HaveKilled))
				{
					return true;
				}
				if (MaxLess2 > MaxLess1)
				{
					MaxLess1 = -1;
				}
				if (MaxLess2 > MaxLess3)
				{
					MaxLess3 = -1;
				}
				if (MaxLess2 > MaxLess4)
				{
					MaxLess4 = -1;
				}
				if (MaxLess2 > MaxLess5)
				{
					MaxLess5 = -1;
				}
				if (MaxLess2 > MaxLess6)
				{
					MaxLess6 = -1;
				}
				if (AStarGreedyi == 1)
				{
					OutputHeuristic(Order);
					//Set Table and Heuristic Value and Syntax.
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
						int **Th = TableHeuristic;
						SaveTableHeuristic(i, j, k, Kind, Th);


						TableHeuristic = Th;

						int le = Less;
						AAA = AA;
						 SaveLess(i, j, k, Kind, le, AAA, Order);


						Less = le;
						AA = AAA;
					}
					Act = true;
					StringHeuristics(2, 3, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);

				}
			}
		}
		else if (Kind == 3)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = HoursesOnTable[i].HourseThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

				}
				//retrive table of current Heuristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
				int **TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
				//checked for Legal Movments ArgumentOutOfRangeException curnt game.
				if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
				{
					if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
					{
						if (Order == 1)
						{

						}
						else
						{

							return true;
						}
					}
				}
				//When there is not Penalty regard mechanism.
				 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


				if (ac)
				{
					return true;
				}

				 InitiateVars(i, j, k, Kind);



				AAA = AA;
				Havk = HaveKilled;
				 MaxLess3 = HoursesOnTable[RW3].HourseThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


				AA = AAA;
				HaveKilled = Havk;

				if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
				{
					if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
					{
						return true;
					}
				}
				if (!KillerForce(HaveKilled))
				{
					return true;
				}
				if (MaxLess3 > MaxLess1)
				{
					MaxLess1 = -1;
				}
				if (MaxLess3 > MaxLess2)
				{
					MaxLess2 = -1;
				}
				if (MaxLess3 > MaxLess4)
				{
					MaxLess4 = -1;
				}
				if (MaxLess3 > MaxLess5)
				{
					MaxLess5 = -1;
				}
				if (MaxLess3 > MaxLess6)
				{
					MaxLess6 = -1;
				}
				if (AStarGreedyi == 1)
				{
					OutputHeuristic(Order);
					//Set Table and Heuristic Value and Syntax.
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
						int **Th = TableHeuristic;
						SaveTableHeuristic(i, j, k, Kind, Th);


						TableHeuristic = Th;

						int le = Less;
						AAA = AA;
						 SaveLess(i, j, k, Kind, le, AAA, Order);


						Less = le;
						AA = AAA;
					}
					Act = true;
					StringHeuristics(3, 3, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);
				}
			}
		}
		else if (Kind == 4)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = CastlesOnTable[i].CastleThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

				}
				//retrive table of current Heuristic.
				//retrive table of current Heuristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
				int **TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
				//checked for Legal Movments ArgumentOutOfRangeException curnt game.
				if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
				{
					if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
					{
						//if (Order == 1)

						//else

						return true;
					}

				}
				//When there is not Penalty regard mechanism.
				 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


				if (ac)
				{
					return true;
				}

				 InitiateVars(i, j, k, Kind);



				AAA = AA;
				Havk = HaveKilled;
				 MaxLess4 = CastlesOnTable[RW4].CastleThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


				AA = AAA;
				HaveKilled = Havk;

				if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
				{
					if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
					{
						return true;
					}
				}
				if (!KillerForce(HaveKilled))
				{
					return true;
				}
				if (MaxLess4 > MaxLess1)
				{
					MaxLess1 = -1;
				}
				if (MaxLess4 > MaxLess2)
				{
					MaxLess2 = -1;
				}
				if (MaxLess4 > MaxLess3)
				{
					MaxLess3 = -1;
				}
				if (MaxLess4 > MaxLess5)
				{
					MaxLess5 = -1;
				}
				if (MaxLess4 > MaxLess6)
				{
					MaxLess6 = -1;
				}

				if (AStarGreedyi == 1)
				{
					OutputHeuristic(Order);
					//Set Table and Heuristic Value and Syntax.
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
						int **Th = TableHeuristic;
						SaveTableHeuristic(i, j, k, Kind, Th);


						TableHeuristic = Th;

						int le = Less;
						AAA = AA;
						 SaveLess(i, j, k, Kind, le, AAA, Order);


						Less = le;
						AA = AAA;
					}
					Act = true;
					StringHeuristics(4, 3, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);
				}
			}
			else //Set Table and Heuristic Value and Syntax.
			{
			}
		}
		else if (Kind == 5)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = MinisterOnTable[i].MinisterThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{

				}
				//retrive table of current Heuristic.
				//retrive table of current Heuristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
				int **TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
				//checked for Legal Movments ArgumentOutOfRangeException curnt game.
				if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
				{
					if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
					{
						//if (Order == 1)

						//else 

						return true;
					}
				}
				//When there is not Penalty regard mechanism.
				 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


				if (ac)
				{
					return true;
				}

				 InitiateVars(i, j, k, Kind);



				AAA = AA;
				Havk = HaveKilled;
				 MaxLess5 = MinisterOnTable[RW5].MinisterThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


				AA = AAA;
				HaveKilled = Havk;

				if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
				{
					if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
					{
						return true;
					}
				}
				if (!KillerForce(HaveKilled))
				{
					return true;
				}

				if (MaxLess5 > MaxLess1)
				{
					MaxLess1 = -1;
				}
				if (MaxLess5 > MaxLess2)
				{
					MaxLess2 = -1;
				}
				if (MaxLess5 > MaxLess3)
				{
					MaxLess3 = -1;
				}
				if (MaxLess5 > MaxLess4)
				{
					MaxLess4 = -1;
				}
				if (MaxLess5 > MaxLess6)
				{
					MaxLess6 = -1;
				}

				if (AStarGreedyi == 1)
				{
					OutputHeuristic(Order);
					//Set Table and Heuristic Value and Syntax.
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
						int **Th = TableHeuristic;
						SaveTableHeuristic(i, j, k, Kind, Th);


						TableHeuristic = Th;

						int le = Less;
						AAA = AA;
						 SaveLess(i, j, k, Kind, le, AAA, Order);


						Less = le;
						AA = AAA;
					}
					Act = true;
					StringHeuristics(5, 3, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);
				}
			}
		}
		else if (Kind == 6)
		{
			bool ac = false;
			bool AAA = AA;
			int Le = Less;
			int Havk = HaveKilled;
			 ac = KingOnTable[i].KingThinking.ReturnHeuristic(i, j, Order, AAA, Havk) > Le;


			AA = AAA;
			Less = Le;
			HaveKilled = Havk;
			if (ac)
			{
				////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OO)
				{

				}
				//retrive table of current Heuristic.
				//retrive table of current Heuristic.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableS = KingOnTable[i].KingThinking.TableListKing[j];
				int **TableS = KingOnTable[i].KingThinking.TableListKing[j];
				//checked for Legal Movments ArgumentOutOfRangeException curnt game.
				if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
				{
					if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::OrderPlate))
					{
						//if (Order == 1)

						//else

						return true;
					}
				}
				//When there is not Penalty regard mechanism.
				 ac = CheckeHuristci(CloneATable(TableS), Order, i, j, k);


				if (ac)
				{
					return true;
				}

				 InitiateVars(i, j, k, Kind);



				AAA = AA;
				Havk = HaveKilled;
				 MaxLess6 = KingOnTable[RW6].KingThinking.ReturnHeuristic(i, j, Order, AAA, Havk);


				AA = AAA;
				HaveKilled = Havk;

				if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
				{
					if ((!KiilledForce(HaveKilled)) && (HaveKilled < 0))
					{
						return true;
					}
				}
				if (!KillerForce(HaveKilled))
				{
					return true;
				}
				if (MaxLess6 > MaxLess1)
				{
					MaxLess1 = -1;
				}
				if (MaxLess6 > MaxLess2)
				{
					MaxLess2 = -1;
				}
				if (MaxLess6 > MaxLess3)
				{
					MaxLess3 = -1;
				}
				if (MaxLess6 > MaxLess4)
				{
					MaxLess4 = -1;
				}
				if (MaxLess6 > MaxLess5)
				{
					MaxLess5 = -1;
				}

				if (AStarGreedyi == 1)
				{
					OutputHeuristic(Order);
					//Set Table and Heuristic Value and Syntax.
					////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (On)
					{
						 SaveBeginEndLocation(i, j, k, Kind);



//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Th = TableHeuristic;
						int **Th = TableHeuristic;
						SaveTableHeuristic(i, j, k, Kind, Th);


						TableHeuristic = Th;

						int le = Less;
						AAA = AA;
						 SaveLess(i, j, k, Kind, le, AAA, Order);


						Less = le;
						AA = AAA;
					}
					Act = true;
					StringHeuristics(6, 3, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);
				}

			}
			else //Set Table and Heuristic Value and Syntax.
			{
			}
		}

		return continued;
	}

	bool AllDraw::KiilledForce(int HaveKiller)
	{
		if (ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw)
		{
			if (HaveKilled > 0)
			{
				return true;
			}
		}
		return false;
	}

	bool AllDraw::KillerForce(int HaveKiller)
	{
		return ((ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw) || (!(HaveKiller > 0)));
	}

	bool AllDraw::Lose(int Kind, int i, int j, int Order)
	{
		bool Is = false;
		if (Kind == 1)
		{
			if ((SolderesOnTable[i].SoldierThinking.LoseChiled[j] <= -1 || SolderesOnTable[i].SoldierThinking.LoseChiled[j] <= -2 || SolderesOnTable[i].SoldierThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((SolderesOnTable[i].LoseOcuuredatChiled[0] <= -1 || SolderesOnTable[i].LoseOcuuredatChiled[0] <= -2 || SolderesOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
				{
					return true;
				}
			}
		}
		else
		{
	if (Kind == 2)
	{
			if ((ElephantOnTable[i].ElefantThinking.LoseChiled[j] <= -1 || ElephantOnTable[i].ElefantThinking.LoseChiled[j] <= -2 || ElephantOnTable[i].ElefantThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((ElephantOnTable[i].LoseOcuuredatChiled[0] <= -1 || ElephantOnTable[i].LoseOcuuredatChiled[0] <= -2 || ElephantOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
				{
					return true;
				}
			}
	}
		else
		{
	if (Kind == 3)
	{
			if ((HoursesOnTable[i].HourseThinking.LoseChiled[j] <= -1 || HoursesOnTable[i].HourseThinking.LoseChiled[j] <= -2 || HoursesOnTable[i].HourseThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((HoursesOnTable[i].LoseOcuuredatChiled[0] <= -1 || HoursesOnTable[i].LoseOcuuredatChiled[0] <= -2 || HoursesOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
				{
					return true;
				}
			}
	}
		else
		{
	if (Kind == 4)
	{
			if ((CastlesOnTable[i].CastleThinking.LoseChiled[j] <= -1 || CastlesOnTable[i].CastleThinking.LoseChiled[j] <= -2 || CastlesOnTable[i].CastleThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((CastlesOnTable[i].LoseOcuuredatChiled[0] <= -1 || CastlesOnTable[i].LoseOcuuredatChiled[0] <= -2 || CastlesOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
				{
					return true;
				}
			}
	}
		else
		{
	if (Kind == 5)
	{
			if ((MinisterOnTable[i].MinisterThinking.LoseChiled[j] <= -1 || MinisterOnTable[i].MinisterThinking.LoseChiled[j] <= -2 || MinisterOnTable[i].MinisterThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((MinisterOnTable[i].LoseOcuuredatChiled[0] <= -1 || MinisterOnTable[i].LoseOcuuredatChiled[0] <= -2 || MinisterOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
				{
					return true;
				}
			}
	}
		else
		{
	if (Kind == 6)
	{
			if ((KingOnTable[i].KingThinking.LoseChiled[j] <= -1 || KingOnTable[i].KingThinking.LoseChiled[j] <= -2 || KingOnTable[i].KingThinking.LoseChiled[j] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
			{
				return true;
			}
			if (!AllowedSupTrue)
			{
				if ((KingOnTable[i].LoseOcuuredatChiled[0] <= -1 || KingOnTable[i].LoseOcuuredatChiled[0] <= -2 || KingOnTable[i].LoseOcuuredatChiled[0] <= -3) && UniqueCapableMoveIsTruSup(Kind, Order, i, j) != 1)
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
		return Is;
	}

	bool AllDraw::WinReturnValue(int Kind, int i, int j)
	{
		bool Is = false;
		if (Kind == 1)
		{



			bool B = SolderesOnTable[i].WinOcuuredatChiled >= 1 || SolderesOnTable[i].WinOcuuredatChiled >= 2 || SolderesOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		}
		else
		{
		  if (Kind == 2)
		  {



			bool B = ElephantOnTable[i].WinOcuuredatChiled >= 1 || ElephantOnTable[i].WinOcuuredatChiled >= 2 || ElephantOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		  }
		else
		{
		  if (Kind == 3)
		  {



			bool B = HoursesOnTable[i].WinOcuuredatChiled >= 1 || HoursesOnTable[i].WinOcuuredatChiled >= 2 || HoursesOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		  }
		else
		{
		  if (Kind == 4)
		  {



			bool B = CastlesOnTable[i].WinOcuuredatChiled >= 1 || CastlesOnTable[i].WinOcuuredatChiled >= 2 || CastlesOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		  }
		else
		{
		  if (Kind == 5)
		  {



			bool B = MinisterOnTable[i].WinOcuuredatChiled >= 1 || MinisterOnTable[i].WinOcuuredatChiled >= 2 || MinisterOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		  }
		else
		{
		  if (Kind == 6)
		  {



			bool B = KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3;
			Is = B;
		  }
		}
		}
		}
		}
		}
		return Is;
	}

	bool AllDraw::WinPerfromeRegardMethod(int Kind, int i, int j)
	{
		bool Is = false;
		if (Kind == 1)
		{
			bool A = false;

			A = A || SolderesOnTable[i].SoldierThinking.WinChiled[j] >= 1 || SolderesOnTable[i].SoldierThinking.WinChiled[j] >= 2 || SolderesOnTable[i].SoldierThinking.WinChiled[j] >= 3;

			Is = A;
		}
		else
		{
		if (Kind == 2)
		{
			bool A = false;

			A = A || ElephantOnTable[i].ElefantThinking.WinChiled[j] >= 1 || ElephantOnTable[i].ElefantThinking.WinChiled[j] >= 2 || ElephantOnTable[i].ElefantThinking.WinChiled[j] >= 3;

			Is = A;

		}
		else
		{
		if (Kind == 3)
		{
			bool A = false;

			A = A || HoursesOnTable[i].HourseThinking.WinChiled[j] >= 1 || HoursesOnTable[i].HourseThinking.WinChiled[j] >= 2 || HoursesOnTable[i].HourseThinking.WinChiled[j] >= 3;

			Is = A;

		}
		else
		{
		if (Kind == 4)
		{
			bool A = false;

			A = A || CastlesOnTable[i].CastleThinking.WinChiled[j] >= 1 || CastlesOnTable[i].CastleThinking.WinChiled[j] >= 2 || CastlesOnTable[i].CastleThinking.WinChiled[j] >= 3;

			Is = A;

		}
		else
		{
		if (Kind == 5)
		{
			bool A = false;

			A = A || MinisterOnTable[i].MinisterThinking.WinChiled[j] >= 1 || MinisterOnTable[i].MinisterThinking.WinChiled[j] >= 2 || MinisterOnTable[i].MinisterThinking.WinChiled[j] >= 3;

			Is = A;

		}
		else
		{
		if (Kind == 6)
		{
			bool A = false;

			A = A || KingOnTable[i].KingThinking.WinChiled[j] >= 1 || KingOnTable[i].KingThinking.WinChiled[j] >= 2 || KingOnTable[i].KingThinking.WinChiled[j] >= 3;

			Is = A;

		}
		}
		}
		}
		}
		}
		return Is;
	}

	int **AllDraw::HeuristicAStarGreadySearchSoldier(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{


		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{

			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;

			//For Every Soldier Movments AStarGreedy.
			for (int k = 0; k < AllDraw::SodierMovments; k++)
			{
			//When There is an Movment in such situation.
				for (j = 0; SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 1);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j && SolderesOnTable[i].SoldierThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 SolderesOnTable[i].SoldierThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;

						StringHeuristics(1, 1, AA, Do, SolderesOnTable[i].WinOcuuredatChiled, SolderesOnTable[i].LoseOcuuredatChiled);
						 ac = Lose(1, i, j, Order);


						if (ac)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)

						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 1, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}
						//When There is No Movments in Such Order Enemy continue.
						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (SolderesOnTable[i].SoldierThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							//When There is greater Heuristic Movments.
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 1, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}
						}
					}
				}
			}

			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchSoldierWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (SodierMidle != 0)
			{
				for (int  i = 0; i < SodierMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchSoldier(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchSoldierBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (SodierMidle != SodierHigh)
			{
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchSoldier(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchElephantWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (0 != ElefantMidle)
			{
				//Do For Remaining Objects same as Soldeir Documentation.
				for (int  i = 0; i < ElefantMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchElephant(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchElephantBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (ElefantHigh != ElefantMidle)
			{
				//Do For Remaining Objects same as Soldeir Documentation.
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchElephant(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchElephant(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{

			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;
			for (int k = 0; k < AllDraw::ElefantMovments; k++)
			{
				for (j = 0; ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 2);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j && ElephantOnTable[i].ElefantThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 ElephantOnTable[i].ElefantThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;

						StringHeuristics(2, 1, AA, Do, ElephantOnTable[i].WinOcuuredatChiled, ElephantOnTable[i].LoseOcuuredatChiled);
						 ac = Lose(2, i, j, Order);


						if (ac)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 2, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}

						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (ElephantOnTable[i].ElefantThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							//When There is greater Heuristic Movments.
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 2, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}

						}

					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}

	}

	int **AllDraw::HeuristicAStarGreadySearchHourseWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (0 != HourseMidle)
			{
				//For Every Soldeir
				for (int  i = 0; i < HourseMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchHourse(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			// else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchHourseBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{
			if (HourseHight != HourseMidle)
			{
				//For Every Soldeir
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchHourse(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchHourse(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto a1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a1)
		{

			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;

			for (int k = 0; k < AllDraw::HourseMovments; k++)
			{
				for (j = 0; HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking != nullptr && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 3);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j && HoursesOnTable[i].HourseThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 HoursesOnTable[i].HourseThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;
						StringHeuristics(3, 1, AA, Do, HoursesOnTable[i].WinOcuuredatChiled, HoursesOnTable[i].LoseOcuuredatChiled);
						 ac = Lose(3, i, j, Order);


						if (ac)
						{
							continue;
						}

						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 3, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}
						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (HoursesOnTable[i].HourseThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							//When There is greater Heuristic Movments.
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 3, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}

						}
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchCastleWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (0 != HourseMidle)
			{
				for (int  i = 0; i < CastleMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchCastle(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchCastleBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

			if (CastleMidle != CastleHigh)
			{
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchCastle(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchCastle(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{


			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;
			for (int k = 0; k < AllDraw::CastleMovments; k++)
			{
				for (j = 0; CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking != nullptr && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 4);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j && CastlesOnTable[i].CastleThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 CastlesOnTable[i].CastleThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Order = COrder;
						StringHeuristics(4, 1, AA, Do, CastlesOnTable[i].WinOcuuredatChiled, CastlesOnTable[i].LoseOcuuredatChiled);
						 ac = Lose(4, i, j, Order);


						if (ac)
						{
							continue;
						}
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)

						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 4, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}

						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (CastlesOnTable[i].CastleThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							//When There is greater Heuristic Movments.
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 4, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}
						}
					}
				}

			}

			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchMinsisterWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (0 != MinisterMidle)
			{
				for (int  i = 0; i < MinisterMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchMinsister(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchMinsisterBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (MinisterHigh != MinisterMidle)
			{
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchMinsister(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			//else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchMinsister(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O3)
		{

			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;
			for (int k = 0; k < AllDraw::MinisterMovments; k++)
			{
				for (j = 0; MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 5);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j && MinisterOnTable[i].MinisterThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 MinisterOnTable[i].MinisterThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;
						StringHeuristics(5, 1, AA, Do, MinisterOnTable[i].WinOcuuredatChiled, MinisterOnTable[i].LoseOcuuredatChiled);
						 ac = Lose(5, i, j, Order);


						if (ac)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)

						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 5, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}
						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (MinisterOnTable[i].MinisterThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 5, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}
						}
					}
				}

			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchKingWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (0 != KingMidle)
			{
				for (int  i = 0; i < KingMidle; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchKing(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			// else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchKingBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (KingHigh != KingMidle)
			{
				for (int  i = KingMidle; i < KingHigh; i++)
				{
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
					int **Ta = TableHeuristic;
					bool Ac = Act;
					 Ta = HeuristicAStarGreadySearchKing(Ta, i, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


					Act = Ac;
					TableHeuristic = Ta;

				}
			}
			// else


			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchKing(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{

			int j;
			std::vector<int> Founded = std::vector<int>();
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			bool AA = false;
			int Do = 0;
			for (int k = 0; k < AllDraw::KingMovments; k++)
			{
				for (j = 0; KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking != nullptr && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
				{
					bool ac = false;
					 ac = IsSupHuTrue(i, j, 0, 6);


					if (ac)
					{
						continue;
					}
					{
						//For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)
						if (KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0)
						{
							continue;
						}
						int CDummy = ChessRules::CurrentOrder;
						int COrder = Order;
						if (KingOnTable[i].KingThinking.AStarGreedy.size() > j && KingOnTable[i].KingThinking.AStarGreedy[j] != nullptr)
						{
							bool AAAA = AA;
							 KingOnTable[i].KingThinking.AStarGreedy[j].IsFoundOfLeafDepenOfKindhaveVictory(1, AAAA, Order * -1);


							AA = AAAA;
						}
						ChessRules::CurrentOrder *= -1;
						Order *= -1;
						Do = 0;
						StringHeuristics(6, 1, AA, Do, KingOnTable[i].WinOcuuredatChiled, KingOnTable[i].LoseOcuuredatChiled);

						 ac = Lose(6, i, j, Order);


						if (ac)
						{
							continue;
						}
						Order = COrder;
						ChessRules::CurrentOrder = CDummy;
						//if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
						//)

						bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
						int **Ta = TableHeuristic;
						bool AAA = AA;
						int D = Do;
						 ac = HeuristicRegardSection(i, j, k, Ac, Ta, AAA, a, 6, D, AStarGreedyi, Order);


						Act = ac;
						TableHeuristic = Ta;
						AA = AAA;
						if (ac)
						{
							continue;
						}
						////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (ol)
						{
							//When There is No Movments in Such Order Enemy continue.
							if (Order != AllDraw::OrderPlateDraw)
							{
								if (KingOnTable[i].KingThinking.ReturnHeuristic(i, j, Order, AA, HaveKilled) > Less)
								{
									continue;
								}
							}
							//When There is greater Heuristic Movments.
							Ac = Act;
							Ta = TableHeuristic;
							bool CuTH = CurrentTableHeuristic;
							AAA = AA;
							D = Do;
							ac = HeuristicMainBody(i, j, k, Ac, Ta, CuTH, AAA, a, 6, D, AStarGreedyi, Order);


							Act = ac;
							TableHeuristic = Ta;
							CurrentTableHeuristic = CuTH;
							AA = AAA;
							if (ac)
							{
								continue;
							}
						}
					}
				}
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchWHITE(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int **TableHeuristic; *TableHeuristic = new int[8]; for (int b = 0; b < 8; b++)TableHeuristic[b] = new int[8];
			bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
			int **Ta = TableHeuristic;
			 HeuristicAStarGreadySearchSoldierWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


			Act = Ac;
			TableHeuristic = Ta;

			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchElephantWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchHourseWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}

			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchCastleWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchMinsisterWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchKingWHITE(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreadySearchBLACK(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int **TableHeuristic; *TableHeuristic = new int[8]; for (int b = 0; b < 8; b++)TableHeuristic[b] = new int[8];
			bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
			int **Ta = TableHeuristic;
			 HeuristicAStarGreadySearchSoldierBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


			Act = Ac;
			TableHeuristic = Ta;

			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchElephantBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchHourseBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}

			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchCastleBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchMinsisterBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			if (!OnlyWin)
			{
				Ac = Act;
				Ta = TableHeuristic;
				 HeuristicAStarGreadySearchKingBLACK(Ta, AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}

			return TableHeuristic;
		}
	}

	int **AllDraw::HeuristicAStarGreedySearch(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int **TableHeuristic; *TableHeuristic = new int[8]; for (int b = 0; b < 8; b++)TableHeuristic[b] = new int[8];
			AStarGreedyi++;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;
			//Initiate For Dynamic Backward Current AStarGreedyi Non Minus Founded Max Movments Detection Global Variables.
			std::vector<int> Founded = std::vector<int>();
			//Initiateing Indicating Heuristic Multiple Same Value Best Found of Movments.
			MaxLess1 = -1;
			MaxLess2 = -1;
			MaxLess3 = -1;
			MaxLess4 = -1;
			MaxLess5 = -1;
			MaxLess6 = -1;
			RW1 = -1;
			CL1 = -1;
			Ki1 = -1;
			RW2 = -1;
			CL2 = -1;
			Ki2 = -1;
			RW3 = -1;
			CL3 = -1;
			Ki3 = -1;
			RW4 = -1;
			CL4 = -1;
			Ki4 = -1;
			RW5 = -1;
			CL5 = -1;
			Ki5 = -1;
			RW6 = -1;
			CL6 = -1;
			Ki6 = -1;
			int BacWard[25];
			////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Omm)
			{
				if (AStarGreedyi > MaxAStarGreedy)
				{
					return TableHeuristic;
				}
			}
			bool Act = false;
			if (Order == 1)
			{
				bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
				int **Ta = TableHeuristic;
				 Ta = HeuristicAStarGreadySearchWHITE(AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			else
			{
				bool Ac = Act;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Ta = TableHeuristic;
				int **Ta = TableHeuristic;
				 Ta = HeuristicAStarGreadySearchBLACK(AStarGreedyi, a, Order, CurrentTableHeuristic, Ac);


				Act = Ac;
				TableHeuristic = Ta;
			}
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			//Store In Local Variable and Dynamic Purpose Proccessing.
			//Every Non Minuse Non Idept in List Has Gretest Max Order.
			//Is Desired of Idept Oner Best Movments.
			BacWard[0] = AStarGreedyi;
			BacWard[1] = MaxLess1;
			BacWard[2] = RW1;
			BacWard[3] = RW1;
			BacWard[4] = Ki1;

			BacWard[5] = MaxLess2;
			BacWard[6] = RW2;
			BacWard[7] = RW2;
			BacWard[8] = Ki2;
			BacWard[9] = MaxLess3;
			BacWard[10] = RW3;
			BacWard[11] = RW3;
			BacWard[12] = Ki3;
			BacWard[13] = MaxLess4;
			BacWard[14] = RW4;
			BacWard[15] = RW4;
			BacWard[16] = Ki4;
			BacWard[17] = MaxLess5;
			BacWard[18] = RW5;
			BacWard[19] = RW5;
			BacWard[20] = Ki5;
			BacWard[21] = MaxLess6;
			BacWard[22] = RW6;
			BacWard[23] = RW6;
			BacWard[24] = Ki6;
			//We Have Information of Maximum of Heuristic in Each Level and Table.
			MaxHeuristicAStarGreedytBackWard.push_back(BacWard);
			MaxHeuristicAStarGreedytBackWardTable.push_back(TableHeuristic);
			Founded.clear();
			//If Found retrun table.
			if (Act)
			{
				return TableHeuristic;
			}
			//Return what found table.

			return TableHeuristic;
		}
	}/*

	void AllDraw::InitiateGenetic(int ii, int jj, int a, int** Table, int Order, bool TB)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//Initiate Local and Global Variables.
			int Current = ChessRules::CurrentOrder;
			int DummyOrder = Order;
			TableList.push_back(CloneATable(Table));

			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{
				ThinkingHybridizerRefrigitz::NotSolvedKingDanger = false;
			}
			LoopHeuristicIndex = 0;
			//For One time.
			for (int  i = 0; i < 1; i++)
			{
				//If Order is WHITE.
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					if (Order == 1)
					{

					}
					else //If Order is BLACK.
					{


					}
				}
				//Initiate Local Variables.
				int **TablInit; *TablInit = new int[8]; for (int b = 0; b < 8; b++)TablInit[b] = new int[8];

				
				if (Order == 1)
				{
					a = 1;
				}
				else
				{
					a = -1;
				}
				int In = 0;
				//Found Of Random Movments.
				do
				{
					if (Order == 1)
					{
						In = (new System::Random())->Next(0, 8);
					}
					else
					{
						In = (new System::Random())->Next(8, 16);
					}
				} while (SolderesOnTable[In] == nullptr);

				//If Order is WHITE.
				////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOO)
				{
					if (Order == 1)
					{

					}
					else //If Order is BLACK.
					{


					}
				}
				//Found Of Genetic Algorithm Movments By GeneticAlgorithm Call Objectsand Method.
				HybridizerRefrigitzGeneticAlgorithm *R = (new HybridizerRefrigitzGeneticAlgorithm(MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
					//0);
				//Found Table.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = R.GenerateTable(TableListAction, 0, Order);
				int **Tab = R->GenerateTable(TableListAction, 0, Order);
				//If Order is WHITE.
				////auto oOO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOO1)
				{
					if (Order == 1)
					{

					}
					else //If Order is BLACK.
					{


					}
				}
				//If Table Found.
				if (Tab != nullptr)
				{
					//Construct a Clone Copy of Table.
					for (int  iii = 0; iii < 8; iii++)
					{
						for (int  jjj = 0; jjj < 8; jjj++)
						{
							TablInit[iii][jjj] = Tab[iii][jjj];
						}
					}
					//Initiate a Table.
					*Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
					//Construct a Clone Copy of Table.
					for (int  iii = 0; iii < 8; iii++)
					{
						for (int  jjj = 0; jjj < 8; jjj++)
						{
							Table[iii][jjj] = TablInit[iii][jjj];
						}
					}
					//Initiate Local and Global Varibales.
					TableList.push_back(CloneATable(TablInit));
					ClList.push_back(CL);
					RWList.push_back(RW);
					KiList.push_back(Ki);


					AStarGreedy++;

				}
			}
		//Determination of CheckMate Consideration.
		(new ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 1, CloneATable(Table), Order, -1, -1))->CheckMate(CloneATable(Table), Order);
			//Reconstruction of Order Global Varibales.
			Order = DummyOrder;
			ChessRules::CurrentOrder = Current;

		}
	}
	*/
	AllDraw AllDraw::InitiateAStarGreedytOneNode(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, int iIndex, int KindIndex, int LeafAStarGreedy)
	{

		{
			 SetObjectNumbers(Tab);




			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  iii = 0; iii < 8; iii++)
			{
				for (int  jjj = 0; jjj < 8; jjj++)
				{
					Table[iii][jjj] = Tab[iii][jjj];
				}
			}
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				ThinkingHybridizerRefrigitz::BeginThread = 0;
				ThinkingHybridizerRefrigitz::EndThread = 0;
			}
			//Initiate of global Variables Byte Local Variables.
			int DummyOrder = int();
			DummyOrder = Order;
			int DummyCurrentOrder = int();
			DummyCurrentOrder = ChessRules::CurrentOrder;
			int **TablInit; *TablInit = new int[8]; for (int b = 0; b < 8; b++)TablInit[b] = new int[8];
			if (Order == 1)
			{
				a = 1;
			}
			else
			{
				a = -1;
			}
			auto j = 0;
			////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Omm)
			{
				if (iAStarGreedy >= MaxAStarGreedy)
				{
					return *this;

				}
			}



			//If Order is WHITE.
			if (Order == 1)
			{
				//For WHITE Soldeirs Objects. 

				if (KindIndex == 1)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					//If Solders Not Exist Continue and Traversal Back.
					//If There is no Thinking Movments on Current Object  

					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{
						//Thinking of WHITE Solder Operation.
						SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
						SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = SolderesOnTable[iIndex].WinOcuuredatChiled;
						 SolderesOnTable[iIndex].SoldierThinking.Thinking(iAStarGreedy, this, Lose, Win);


						SolderesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						SolderesOnTable[iIndex].WinOcuuredatChiled = Win;

					}
					else if (ASS)
					{
					//If There is A Soldeir Movments.                                   
						//Thinking of WHITE Soldeir Operations.
						SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
						SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = SolderesOnTable[iIndex].WinOcuuredatChiled;
						 SolderesOnTable[iIndex].SoldierThinking.Thinking(iAStarGreedy, this, Lose, Win);


						SolderesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						SolderesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				//Progressing.
				//For All WHITE Elephant Objects.
				if (KindIndex == 2)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					//Ignore of Non Exist Current Elephant WHITE Objects.
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{
						//Operational Thinking WHITE Elephant. 
						ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
						ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int Win = ElephantOnTable[iIndex].WinOcuuredatChiled;
						 ElephantOnTable[iIndex].ElefantThinking.Thinking(iAStarGreedy, this, Lose, Win);


						ElephantOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						ElephantOnTable[iIndex].WinOcuuredatChiled = Win;
					} //If There is Movment Thinking Gary Elphant Object List.
					else if (ASS)
					{
						//For Every WHITE Elephant Thinking Movments.
						//WHITE Elephant Object Thinking Operations.
						ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
						ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int Win = ElephantOnTable[iIndex].WinOcuuredatChiled;
						 ElephantOnTable[iIndex].ElefantThinking.Thinking(iAStarGreedy, this, Lose, Win);


						ElephantOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						ElephantOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				//Progressing.
				//For All WHITE Hourse Objects.
				if (KindIndex == 3)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{
						//Thinking of WHITE Hourse Oprational.
						HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
						HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = HoursesOnTable[iIndex].WinOcuuredatChiled;
						 HoursesOnTable[iIndex].HourseThinking.Thinking(iAStarGreedy, this, Lose, Win);


						HoursesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						HoursesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //If Table List Exist int The Thinking.
					{
						//Thinking Operation of WHITE Hourse.
						HoursesOnTable[iIndex].HourseThinking.TableT = HoursesOnTable[iIndex].HourseThinking.TableListHourse[j];
						HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
						HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = HoursesOnTable[iIndex].WinOcuuredatChiled;
						 HoursesOnTable[iIndex].HourseThinking.Thinking(iAStarGreedy, this, Lose, Win);


						HoursesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						HoursesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				//Progressing.

				if (KindIndex == 4)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{
						//When There is Possible Thinking Castle of WHITE Table
						//Thinking of WHITE Castles Operational.
						CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
						CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = CastlesOnTable[iIndex].WinOcuuredatChiled;
						 CastlesOnTable[iIndex].CastleThinking.Thinking(iAStarGreedy, this, Lose, Win);


						CastlesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						CastlesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS)
					{
						//When There is Possible Thinking Castle of WHITE Table
						//Thinking of WHITE Castles  Objective Movments.
						CastlesOnTable[iIndex].CastleThinking.TableT = CastlesOnTable[iIndex].CastleThinking.TableListCastle[j];
						CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
						CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
						CastlesOnTable[iIndex].CastleThinking.Thinking(iAStarGreedy, this, CastlesOnTable[iIndex].LoseOcuuredatChiled, CastlesOnTable[iIndex].WinOcuuredatChiled);
					}
				}
				if (KindIndex == 5)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Table WHITE Minister Count of Thinking.
					 //Thinking of WHITE Minister Operational.
						MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
						MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Table WHITE Minister Count of Thinking.
					{
						//Thinking.
						MinisterOnTable[iIndex].Table = MinisterOnTable[iIndex].MinisterThinking.TableListMinister[j];
						MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
						MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				if (KindIndex == 6)
				{

					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When Thinking WHITE King Count of Existing Operations.
					 //Thinking Of WHITE King Operatins.
						KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
						KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = KingOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = KingOnTable[iIndex].LoseOcuuredatChiled;
						int Win = KingOnTable[iIndex].WinOcuuredatChiled;
						 KingOnTable[iIndex].KingThinking.Thinking(iAStarGreedy, this, Lose, Win);


						KingOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						KingOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						KingOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						KingOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When Thinking WHITE King Count of Existing Operations.
					{
						//WHITE King Thinking Operations.                                        
						KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
						KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = KingOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = KingOnTable[iIndex].LoseOcuuredatChiled;
						int Win = KingOnTable[iIndex].WinOcuuredatChiled;
						 KingOnTable[iIndex].KingThinking.Thinking(iAStarGreedy, this, Lose, Win);


						KingOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						KingOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						KingOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						KingOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
			}
			else //BLACK Order Considarations.
			{
				if (KindIndex == -1)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{
						//Wheen BLACK King Object There is Not Continue Traversal Back.
						//Thinking Operations of BLACK Current Objects.
						SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
						SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = SolderesOnTable[iIndex].WinOcuuredatChiled;
						 SolderesOnTable[iIndex].SoldierThinking.Thinking(iAStarGreedy, this, Lose, Win);


						SolderesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						SolderesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{
						//Thinking of Thinking BLACK CurrentTable Objective Operations.
						SolderesOnTable[iIndex].SoldierThinking.ThinkingBegin = true;
						SolderesOnTable[iIndex].SoldierThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = SolderesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = SolderesOnTable[iIndex].WinOcuuredatChiled;
						 SolderesOnTable[iIndex].SoldierThinking.Thinking(iAStarGreedy, this, Lose, Win);


						SolderesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						SolderesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						SolderesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				if (KindIndex == -2)
				{
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Current BLACK Existing Objective Thinking Movments.
						Order = DummyOrder;
						ChessRules::CurrentOrder = DummyCurrentOrder;
						//Thinking Operations of BLACK Current Objects.
						ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
						ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int Win = ElephantOnTable[iIndex].WinOcuuredatChiled;
						 ElephantOnTable[iIndex].ElefantThinking.Thinking(iAStarGreedy, this, Lose, Win);


						ElephantOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						ElephantOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{
						//Inititae Local Varibale By Global WHITE Elephant Objects Varibales.
						//Thinking of Thinking BLACK CurrentTable Objective Operations.                                                   
						ElephantOnTable[iIndex].ElefantThinking.ThinkingBegin = true;
						ElephantOnTable[iIndex].ElefantThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = ElephantOnTable[iIndex].LoseOcuuredatChiled;
						int Win = ElephantOnTable[iIndex].WinOcuuredatChiled;
						 ElephantOnTable[iIndex].ElefantThinking.Thinking(iAStarGreedy, this, Lose, Win);


						ElephantOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						ElephantOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						ElephantOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}

				if (KindIndex == -3)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Current BLACK Existing Objective Thinking Movments.
					 //Thinking Operations of BLACK Current Objects.

						HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
						HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = HoursesOnTable[iIndex].WinOcuuredatChiled;
						 HoursesOnTable[iIndex].HourseThinking.Thinking(iAStarGreedy, this, Lose, Win);


						HoursesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						HoursesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{

						HoursesOnTable[iIndex].HourseThinking.ThinkingBegin = true;
						HoursesOnTable[iIndex].HourseThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = HoursesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = HoursesOnTable[iIndex].WinOcuuredatChiled;
						 HoursesOnTable[iIndex].HourseThinking.Thinking(iAStarGreedy, this, Lose, Win);


						HoursesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						HoursesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						HoursesOnTable[iIndex].WinOcuuredatChiled = Win;

					}
				}
				//Progressing.


				if (KindIndex == -4)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Current BLACK Existing Objective Thinking Movments.
					 //Thinking Operations of BLACK Current Objects.
						CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
						CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = CastlesOnTable[iIndex].WinOcuuredatChiled;
						 CastlesOnTable[iIndex].CastleThinking.Thinking(iAStarGreedy, this, Lose, Win);


						CastlesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						CastlesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{
						//Thinking of Thinking BLACK CurrentTable Objective Operations.        
						CastlesOnTable[iIndex].CastleThinking.ThinkingBegin = true;
						CastlesOnTable[iIndex].CastleThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = CastlesOnTable[iIndex].LoseOcuuredatChiled;
						int Win = CastlesOnTable[iIndex].WinOcuuredatChiled;
						 CastlesOnTable[iIndex].CastleThinking.Thinking(iAStarGreedy, this, Lose, Win);


						CastlesOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						CastlesOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						CastlesOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				if (KindIndex == -5)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Current BLACK Existing Objective Thinking Movments.
					 //Thinking Operations of BLACK Current Objects.
						MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
						MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{

						MinisterOnTable[iIndex].MinisterThinking.ThinkingBegin = true;
						MinisterOnTable[iIndex].MinisterThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;
					}
				}
				//Progressing.
				if (KindIndex == -6)
				{
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{ //When There is Current BLACK Existing Objective Thinking Movments.
					 //Thinking Operations of BLACK Current Objects.
						KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
						KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;
					}
					else if (ASS) //When There is Current BLACK Existing Objective Thinking Movments.
					{
						//Thinking of Thinking BLACK CurrentTable Objective Operations.       
						KingOnTable[iIndex].KingThinking.TableT = KingOnTable[iIndex].KingThinking.TableListKing[j];
						KingOnTable[iIndex].KingThinking.ThinkingBegin = true;
						KingOnTable[iIndex].KingThinking.ThinkingFinished = false;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[] Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int *Lose = MinisterOnTable[iIndex].LoseOcuuredatChiled;
						int Win = MinisterOnTable[iIndex].WinOcuuredatChiled;
						 MinisterOnTable[iIndex].MinisterThinking.Thinking(iAStarGreedy, this, Lose, Win);


						MinisterOnTable[iIndex].LoseOcuuredatChiled[0] = Lose[0];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[1] = Lose[1];
						MinisterOnTable[iIndex].LoseOcuuredatChiled[2] = Lose[2];
						MinisterOnTable[iIndex].WinOcuuredatChiled = Win;

					}

				}



			}



			bool FOUND = false;
			if (KindIndex == 1 || KindIndex == -1)
			{
				SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
				SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 SolderesOnTable[iIndex].SoldierThinking.AStarGreedy[SolderesOnTable[iIndex].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


			}
			else
			{
				if (KindIndex == 2 || KindIndex == -2)
				{
				ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
				ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 ElephantOnTable[iIndex].ElefantThinking.AStarGreedy[ElephantOnTable[iIndex].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


				}
			else
			{
					if (KindIndex == 3 || KindIndex == -3)
					{
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].TableList.clear();
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 HoursesOnTable[iIndex].HourseThinking.AStarGreedy[HoursesOnTable[iIndex].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


					}
			else
			{
						if (KindIndex == 4 || KindIndex == -4)
						{
				CastlesOnTable[iIndex].CastleThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
				CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 CastlesOnTable[iIndex].CastleThinking.AStarGreedy[CastlesOnTable[iIndex].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


						}
			else
			{
							if (KindIndex == 5 || KindIndex == -5)
							{
				MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
				MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 MinisterOnTable[iIndex].MinisterThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


							}
			else
			{
								if (KindIndex == 6 || KindIndex == -6)
								{
				KingOnTable[iIndex].KingThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
				KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(Tab));
				KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				 KingOnTable[iIndex].KingThinking.AStarGreedy[MinisterOnTable[iIndex].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order * -1, false, FOUND, LeafAStarGreedy);


								}
			}
			}
			}
			}
			}
			//                } 
			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;

			Order = DummyOrder;
			ChessRules::CurrentOrder = DummyCurrentOrder;
			return *this;
		}
	}

	int AllDraw::MaxWHITEMidle()
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Tab[6];
			Tab[0] = SodierMidle;
			Tab[1] = ElefantMidle;
			Tab[2] = HourseMidle;
			Tab[3] = CastleMidle;
			Tab[4] = MinisterMidle;
			Tab[5] = KingMidle;
			int Max = 0;
			for (int  i = 0; i < 6; i++)
			{
				if (Tab[i] > Max)
				{
					Max = Tab[i];
				}
			}

			return Max;
		}
	}

	int AllDraw::MaxBLACKHigh()
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Tab[6];
			Tab[0] = SodierHigh;
			Tab[1] = ElefantHigh;
			Tab[2] = HourseHight;
			Tab[3] = CastleHigh;
			Tab[4] = MinisterHigh;
			Tab[5] = KingHigh;
			int Max = 0;
			for (int  i = 0; i < 6; i++)
			{
				if (Tab[i] > Max)
				{
					Max = Tab[i];
				}
			}

			return Max;
		}
	}

	int AllDraw::MinBLACKMidle()
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int Tab[6];
			Tab[0] = SodierHigh;
			Tab[1] = ElefantHigh;
			Tab[2] = HourseHight;
			Tab[3] = CastleHigh;
			Tab[4] = MinisterHigh;
			Tab[5] = KingHigh;
			int Min = MaxBLACKHigh();
			for (int  i = 0; i < 6; i++)
			{
				if (Tab[i] < Min)
				{
					Min = Tab[i];
				}
			}

			return Min;
		}
	}

	int AllDraw::FoundTableIndex(std::vector<int**> &T, int ** TAab)
	{

		int C = -1;
		for (int  i = 0; i < T.size(); i++)
		{
			if (TableEqual(T[i], TAab))
			{
				C = i;
			}
		}

		return C;
	}

	bool AllDraw::TableEqual(int ** t1, int ** t2)
	{

		bool Is = true;
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				if (t1[i][j] != t2[i][j])
				{
					Is = false;
				}
			}
		}

		return Is;
	}

	bool AllDraw::ServeBoundryConditions(int i, int Kind, int Order)
	{
		bool Is = false;
		try
		{
			if (Kind == 1)
			{
				Is = Is || ServeBoundryConditionsSoldier(i, Kind, Order);
			}
	#pragma warning disable CS0642 // Possible mistaken empty statement
			else
			{
				;
			}
	#pragma warning restore CS0642 // Possible mistaken empty statement
			if (Kind == 2)
			{
				Is = Is || ServeBoundryConditionsElephant(i, Kind, Order);
			}
	#pragma warning disable CS0642 // Possible mistaken empty statement
			else
			{
				;
			}
	#pragma warning restore CS0642 // Possible mistaken empty statement
			if (Kind == 3)
			{
				Is = Is || ServeBoundryConditionsHourse(i, Kind, Order);
			}
	#pragma warning disable CS0642 // Possible mistaken empty statement
			else
			{
				;
			}
	#pragma warning restore CS0642 // Possible mistaken empty statement
			if (Kind == 4)
			{
				Is = Is || ServeBoundryConditionsCastle(i, Kind, Order);
			}
	#pragma warning disable CS0642 // Possible mistaken empty statement
			else
			{
				;
			}
	#pragma warning restore CS0642 // Possible mistaken empty statement
			if (Kind == 5)
			{
				Is = Is || ServeBoundryConditionsMinister(i, Kind, Order);
			}
	#pragma warning disable CS0642 // Possible mistaken empty statement
			else
			{
				;
			}
	#pragma warning restore CS0642 // Possible mistaken empty statement
			if (Kind == 6)
			{
				Is = Is || ServeBoundryConditionsKing(i, Kind, Order);
			}
		}
	#pragma warning disable CS0168 // The variable 't' is declared but never used
		catch (std::exception &t)
	#pragma warning restore CS0168 // The variable 't' is declared but never used
		{
			Is = true;
		}
		return Is;

	}

	bool AllDraw::ServeBoundryConditionsSoldier(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= SodierMidle)
		{
			return true;
		}
		if (Order == -1 && i >= SodierHigh)
		{
			return true;
		}
		if (SolderesOnTable == nullptr)
		{
			return true;
		}
		if (SolderesOnTable[i] == nullptr)
		{
			return true;
		}

		return false;

	}

	bool AllDraw::ServeBoundryConditionsElephant(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= ElefantHigh)
		{
			return true;
		}
		if (Order == -1 && i >= ElefantHigh)
		{
			return true;
		}
		if (ElephantOnTable == nullptr)
		{
			return true;
		}
		if (ElephantOnTable[i] == nullptr)
		{
			return true;
		}
		return false;

	}

	bool AllDraw::ServeBoundryConditionsHourse(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= HourseMidle)
		{
			return true;
		}
		if (Order == -1 && i >= HourseHight)
		{
			return true;
		}
		if (HoursesOnTable == nullptr)
		{
			return true;
		}
		if (HoursesOnTable[i] == nullptr)
		{
			return true;
		}
		return false;

	}

	bool AllDraw::ServeBoundryConditionsCastle(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= CastleMidle)
		{
			return true;
		}
		if (Order == -1 && i >= CastleHigh)
		{
			return true;
		}
		if (CastlesOnTable == nullptr)
		{
			return true;
		}
		if (CastlesOnTable[i] == nullptr)
		{
			return true;
		}
		return false;

	}

	bool AllDraw::ServeBoundryConditionsMinister(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= MinisterMidle)
		{
			return true;
		}
		if (Order == -1 && i >= MinisterHigh)
		{
			return true;
		}
		if (MinisterOnTable == nullptr)
		{
			return true;
		}
		if (MinisterOnTable[i] == nullptr)
		{
			return true;
		}
		return false;

	}

	bool AllDraw::ServeBoundryConditionsKing(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= KingMidle)
		{
			return true;
		}
		if (Order == -1 && i >= KingHigh)
		{
			return true;
		}
		if (KingOnTable == nullptr)
		{
			return true;
		}
		if (KingOnTable[i] == nullptr)
		{
			return true;
		}
		return false;

	}

	void AllDraw::Serve(int Order)
	{
		//WHITE
		if (Order == 1)
		{
			//sodier
			for (int  i = 0; i < SodierMidle; i++)
			{
				if (ServeBoundryConditions(i, 1, Order))
				{
					continue;
				}
				ServeISSup(Order, 1, i);
			}
			//elephant
			for (int  i = 0; i < ElefantMidle; i++)
			{
				if (ServeBoundryConditions(i, 2, Order))
				{
					continue;
				}
				ServeISSup(Order, 2, i);
			}
			//hourse
			for (int  i = 0; i < HourseMidle; i++)
			{
				if (ServeBoundryConditions(i, 3, Order))
				{
					continue;
				}
				ServeISSup(Order, 3, i);
			}
			//Castle
			for (int  i = 0; i < CastleMidle; i++)
			{
				if (ServeBoundryConditions(i, 4, Order))
				{
					continue;
				}
				ServeISSup(Order, 4, i);
			}
			//minister
			for (int  i = 0; i < MinisterMidle; i++)
			{
				if (ServeBoundryConditions(i, 5, Order))
				{
					continue;
				}
				ServeISSup(Order, 5, i);
			}
			//king
			for (int  i = 0; i < KingMidle; i++)
			{
				if (ServeBoundryConditions(i, 6, Order))
				{
					continue;
				}
				ServeISSup(Order, 6, i);
			}
		} //BLACK
		else
		{ //soldier
			for (int  i = SodierMidle; i < SodierHigh; i++)
			{
				if (ServeBoundryConditions(i, 1, Order))
				{
					continue;
				}
				ServeISSup(Order, 1, i);
			}
			//elephant
			for (int  i = ElefantMidle; i < ElefantHigh; i++)
			{
				if (ServeBoundryConditions(i, 2, Order))
				{
					continue;
				}
				ServeISSup(Order, 2, i);
			}
			///hourse
			for (int  i = HourseMidle; i < HourseHight; i++)
			{
				if (ServeBoundryConditions(i, 3, Order))
				{
					continue;
				}
				ServeISSup(Order, 3, i);
			}
			//Castle
			for (int  i = CastleMidle; i < CastleHigh; i++)
			{
				if (ServeBoundryConditions(i, 4, Order))
				{
					continue;
				}
				ServeISSup(Order, 4, i);
			}
			//minister
			for (int  i = MinisterMidle; i < MinisterHigh; i++)
			{
				if (ServeBoundryConditions(i, 5, Order))
				{
					continue;
				}
				ServeISSup(Order, 5, i);
			}
			//king
			for (int  i = KingMidle; i < KingHigh; i++)
			{
				if (ServeBoundryConditions(i, 6, Order))
				{
					continue;
				}
				ServeISSup(Order, 6, i);
			}
		}
	}

	void AllDraw::ServeISSup(int Order, int Kind, int ii)
	{

		//soldoer
		if (Kind == 1)
		{
			//WHITE
			if (Order == 1)
			{
				//soldier
				for (int  i = 0; i < SodierMidle; i++)
				{
					if (SolderesOnTable == nullptr || SolderesOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < SolderesOnTable[i].SoldierThinking.HeuristicListSolder.size(); j++)
					{
						if (!(SolderesOnTable[i].SoldierThinking.IsSup[j]))
						{
							continue;
						}

						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][0] += SolderesOnTable[ii].SoldierThinking.HeuristicAttackValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][1] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][2] += SolderesOnTable[ii].SoldierThinking.HeuristicSelfSupportedValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][3] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][4] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedSupportSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][5] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedAttackValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][6] += SolderesOnTable[ii].SoldierThinking.HeuristicDistributionValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][7] += SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][8] += SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][9] += SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup;


					}
				}
				SolderesOnTable[ii].SoldierThinking.HeuristicAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicSelfSupportedValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedSupportSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicDistributionValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup = 0;
			}
			else //BLACK
			{

				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					if (SolderesOnTable == nullptr || SolderesOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < SolderesOnTable[i].SoldierThinking.HeuristicListSolder.size(); j++)
					{
						if (!(SolderesOnTable[i].SoldierThinking.IsSup[j]))
						{
							continue;
						}

						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][0] += SolderesOnTable[ii].SoldierThinking.HeuristicAttackValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][1] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][2] += SolderesOnTable[ii].SoldierThinking.HeuristicSelfSupportedValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][3] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][4] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedSupportSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][5] += SolderesOnTable[ii].SoldierThinking.HeuristicReducedAttackValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][6] += SolderesOnTable[ii].SoldierThinking.HeuristicDistributionValueSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][7] += SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][8] += SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup;
						this->SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][9] += SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup;


					}
				}
				SolderesOnTable[ii].SoldierThinking.HeuristicAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicSelfSupportedValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedMovementValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedSupportSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicReducedAttackValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicDistributionValueSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingSafeSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicFromCenterSup = 0;
				SolderesOnTable[ii].SoldierThinking.HeuristicKingDangourSup = 0;
			}
		}
		else if (Kind == 2) //elephant
		{
			if (Order == 1) //WHITE
			{
				for (int  i = 0; i < ElefantMidle; i++)
				{
					if (ElephantOnTable == nullptr || ElephantOnTable[i] == nullptr)
					{
						continue;
					}

					for (int  j = 0; j < ElephantOnTable[i].ElefantThinking.HeuristicListElefant.size(); j++)
					{
						if (!(ElephantOnTable[i].ElefantThinking.IsSup[j]))
						{
							continue;
						}
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][0] += ElephantOnTable[ii].ElefantThinking.HeuristicAttackValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][1] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][2] += ElephantOnTable[ii].ElefantThinking.HeuristicSelfSupportedValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][3] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][4] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedSupportSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][5] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedAttackValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][6] += ElephantOnTable[ii].ElefantThinking.HeuristicDistributionValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][7] += ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][8] += ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][9] += ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup;


					}
				}
				ElephantOnTable[ii].ElefantThinking.HeuristicAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicSelfSupportedValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedSupportSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicDistributionValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup = 0;
			}
			else //BLACK
			{
				//elephant
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					if (ElephantOnTable == nullptr || ElephantOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < ElephantOnTable[i].ElefantThinking.HeuristicListElefant.size(); j++)
					{
						if (!(ElephantOnTable[i].ElefantThinking.IsSup[j]))
						{
							continue;
						}

						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][0] += ElephantOnTable[ii].ElefantThinking.HeuristicAttackValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][1] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][2] += ElephantOnTable[ii].ElefantThinking.HeuristicSelfSupportedValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][3] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][4] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedSupportSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][5] += ElephantOnTable[ii].ElefantThinking.HeuristicReducedAttackValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][6] += ElephantOnTable[ii].ElefantThinking.HeuristicDistributionValueSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][7] += ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][8] += ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup;
						this->ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][9] += ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup;


					}
				}
				ElephantOnTable[ii].ElefantThinking.HeuristicAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicSelfSupportedValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedMovementValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedSupportSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicReducedAttackValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicDistributionValueSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingSafeSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicFromCenterSup = 0;
				ElephantOnTable[ii].ElefantThinking.HeuristicKingDangourSup = 0;
			}
		}
		else if (Kind == 3) //hourse
		{
			if (Order == 1) //WHITE
			{
				for (int  i = 0; i < HourseMidle; i++)
				{
					if (HoursesOnTable == nullptr || HoursesOnTable[i] == nullptr)
					{
						continue;
					}

					for (int  j = 0; j < HoursesOnTable[i].HourseThinking.HeuristicListHourse.size(); j++)
					{
						if (!(HoursesOnTable[i].HourseThinking.IsSup[j]))
						{
							continue;
						}
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][0] += HoursesOnTable[ii].HourseThinking.HeuristicAttackValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][1] += HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][2] += HoursesOnTable[ii].HourseThinking.HeuristicSelfSupportedValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][3] += HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][4] += HoursesOnTable[ii].HourseThinking.HeuristicReducedSupportSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][5] += HoursesOnTable[ii].HourseThinking.HeuristicReducedAttackValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][6] += HoursesOnTable[ii].HourseThinking.HeuristicDistributionValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][7] += HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][8] += HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][9] += HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup;


					}
				}
				HoursesOnTable[ii].HourseThinking.HeuristicAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicSelfSupportedValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedSupportSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicDistributionValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup = 0;

			}
			else //BLACK
			{
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					if (HoursesOnTable == nullptr || HoursesOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < HoursesOnTable[i].HourseThinking.HeuristicListHourse.size(); j++)
					{
						if (!(HoursesOnTable[i].HourseThinking.IsSup[j]))
						{
							continue;
						}
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][0] += HoursesOnTable[ii].HourseThinking.HeuristicAttackValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][1] += HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][2] += HoursesOnTable[ii].HourseThinking.HeuristicSelfSupportedValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][3] += HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][4] += HoursesOnTable[ii].HourseThinking.HeuristicReducedSupportSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][5] += HoursesOnTable[ii].HourseThinking.HeuristicReducedAttackValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][6] += HoursesOnTable[ii].HourseThinking.HeuristicDistributionValueSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][7] += HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][8] += HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup;
						this->HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][9] += HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup;


					}
				}
				HoursesOnTable[ii].HourseThinking.HeuristicAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicSelfSupportedValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedMovementValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedSupportSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicReducedAttackValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicDistributionValueSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingSafeSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicFromCenterSup = 0;
				HoursesOnTable[ii].HourseThinking.HeuristicKingDangourSup = 0;
			}
		}
		else if (Kind == 4) //Castle
		{
			if (Order == 1) //WHITE
			{
				for (int  i = 0; i < CastleMidle; i++)
				{
					if (CastlesOnTable == nullptr || CastlesOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < CastlesOnTable[i].CastleThinking.HeuristicListCastle.size(); j++)
					{
						if (!(CastlesOnTable[i].CastleThinking.IsSup[j]))
						{
							continue;
						}
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][0] += CastlesOnTable[ii].CastleThinking.HeuristicAttackValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][1] += CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][2] += CastlesOnTable[ii].CastleThinking.HeuristicSelfSupportedValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][3] += CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][4] += CastlesOnTable[ii].CastleThinking.HeuristicReducedSupportSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][5] += CastlesOnTable[ii].CastleThinking.HeuristicReducedAttackValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][6] += CastlesOnTable[ii].CastleThinking.HeuristicDistributionValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][7] += CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][8] += CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][9] += CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup;


					}
				}
				CastlesOnTable[ii].CastleThinking.HeuristicAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicSelfSupportedValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedSupportSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicDistributionValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup = 0;
			}
			else //BLACK
			{
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					if (CastlesOnTable == nullptr || CastlesOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < CastlesOnTable[i].CastleThinking.HeuristicListCastle.size(); j++)
					{
						if (!(CastlesOnTable[i].CastleThinking.IsSup[j]))
						{
							continue;
						}

						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][0] += CastlesOnTable[ii].CastleThinking.HeuristicAttackValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][1] += CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][2] += CastlesOnTable[ii].CastleThinking.HeuristicSelfSupportedValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][3] += CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][4] += CastlesOnTable[ii].CastleThinking.HeuristicReducedSupportSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][5] += CastlesOnTable[ii].CastleThinking.HeuristicReducedAttackValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][6] += CastlesOnTable[ii].CastleThinking.HeuristicDistributionValueSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][7] += CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][8] += CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup;
						this->CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][9] += CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup;


					}
				}
				CastlesOnTable[ii].CastleThinking.HeuristicAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicSelfSupportedValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedMovementValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedSupportSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicReducedAttackValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicDistributionValueSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingSafeSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicFromCenterSup = 0;
				CastlesOnTable[ii].CastleThinking.HeuristicKingDangourSup = 0;
			}
		}
		else //minister
		{
		if (Kind == 5)
		{
			if (Order == 1) //WHITE
			{
				for (int  i = 0; i < MinisterMidle; i++)
				{
					if (MinisterOnTable == nullptr || MinisterOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < MinisterOnTable[i].MinisterThinking.HeuristicListMinister.size(); j++)
					{
						if (!(MinisterOnTable[i].MinisterThinking.IsSup[j]))
						{
							continue;
						}
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][0] += MinisterOnTable[ii].MinisterThinking.HeuristicAttackValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][1] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][2] += MinisterOnTable[ii].MinisterThinking.HeuristicSelfSupportedValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][3] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][4] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedSupportSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][5] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedAttackValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][6] += MinisterOnTable[ii].MinisterThinking.HeuristicDistributionValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][7] += MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][8] += MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][9] += MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup;



					}
				}
				MinisterOnTable[ii].MinisterThinking.HeuristicAttackValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicSelfSupportedValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedSupportSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedAttackValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicDistributionValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup = 0;
			}
			else
			{
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					if (MinisterOnTable == nullptr || MinisterOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < MinisterOnTable[i].MinisterThinking.HeuristicListMinister.size(); j++)
					{
						if (!(MinisterOnTable[i].MinisterThinking.IsSup[j]))
						{
							continue;
						}

						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][0] += MinisterOnTable[ii].MinisterThinking.HeuristicAttackValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][1] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][2] += MinisterOnTable[ii].MinisterThinking.HeuristicSelfSupportedValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][3] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][4] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedSupportSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][5] += MinisterOnTable[ii].MinisterThinking.HeuristicReducedAttackValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][6] += MinisterOnTable[ii].MinisterThinking.HeuristicDistributionValueSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][7] += MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][8] += MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup;
						this->MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][9] += MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup;


					}
				}
				MinisterOnTable[ii].MinisterThinking.HeuristicAttackValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicSelfSupportedValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedMovementValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedSupportSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicReducedAttackValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicDistributionValueSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicKingSafeSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicFromCenterSup = 0;
				MinisterOnTable[ii].MinisterThinking.HeuristicKingDangourSup = 0;
			}
		}
		else
		{
		if (Kind == 6) //king
		{
			if (Order == 1) //WHITE
			{
				for (int  i = 0; i < KingMidle; i++)
				{
					if (KingOnTable == nullptr || KingOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < KingOnTable[i].KingThinking.HeuristicListKing.size(); j++)
					{
						if (!(KingOnTable[i].KingThinking.IsSup[j]))
						{
							continue;
						}
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][0] += KingOnTable[ii].KingThinking.HeuristicAttackValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][1] += KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][2] += KingOnTable[ii].KingThinking.HeuristicSelfSupportedValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][3] += KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][4] += KingOnTable[ii].KingThinking.HeuristicReducedSupportSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][5] += KingOnTable[ii].KingThinking.HeuristicReducedAttackValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][6] += KingOnTable[ii].KingThinking.HeuristicDistributionValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][7] += KingOnTable[ii].KingThinking.HeuristicKingSafeSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][8] += KingOnTable[ii].KingThinking.HeuristicFromCenterSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][9] += KingOnTable[ii].KingThinking.HeuristicKingDangourSup;



					}
				}
				KingOnTable[ii].KingThinking.HeuristicAttackValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicSelfSupportedValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedSupportSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedAttackValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicDistributionValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicKingSafeSup = 0;
				KingOnTable[ii].KingThinking.HeuristicFromCenterSup = 0;
				KingOnTable[ii].KingThinking.HeuristicKingDangourSup = 0;

			}
			else //BLACK
			{
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					if (KingOnTable == nullptr || KingOnTable[i] == nullptr)
					{
						continue;
					}
					for (int  j = 0; j < KingOnTable[i].KingThinking.HeuristicListKing.size(); j++)
					{
						if (!(KingOnTable[i].KingThinking.IsSup[j]))
						{
							continue;
						}

						this->KingOnTable[i].KingThinking.HeuristicListKing[j][0] += KingOnTable[ii].KingThinking.HeuristicAttackValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][1] += KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][2] += KingOnTable[ii].KingThinking.HeuristicSelfSupportedValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][3] += KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][4] += KingOnTable[ii].KingThinking.HeuristicReducedSupportSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][5] += KingOnTable[ii].KingThinking.HeuristicReducedAttackValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][6] += KingOnTable[ii].KingThinking.HeuristicDistributionValueSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][7] += KingOnTable[ii].KingThinking.HeuristicKingSafeSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][8] += KingOnTable[ii].KingThinking.HeuristicFromCenterSup;
						this->KingOnTable[i].KingThinking.HeuristicListKing[j][9] += KingOnTable[ii].KingThinking.HeuristicKingDangourSup;



					}
				}
				KingOnTable[ii].KingThinking.HeuristicAttackValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicSelfSupportedValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedMovementValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedSupportSup = 0;
				KingOnTable[ii].KingThinking.HeuristicReducedAttackValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicDistributionValueSup = 0;
				KingOnTable[ii].KingThinking.HeuristicKingSafeSup = 0;
				KingOnTable[ii].KingThinking.HeuristicFromCenterSup = 0;
				KingOnTable[ii].KingThinking.HeuristicKingDangourSup = 0;

			}
		}
		}
		}

	}

	void AllDraw::ThinkingAllowedSemaphore(int i)
	{
		if (ThinkingAllowed == nullptr)
		{
			ThinkingAllowed = new bool[12];
		}
		do
		{
		} while (!ThinkingAllowed[i - 1]);

	}

	AllDraw AllDraw::InitiateAStarGreedytSodlerWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{

			//For WHITE Soldeirs Objects. 
			for (int i = 0;i < SodierMidle; i++)
			{
				 InitiateAStarGreedytSodler(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}

		}
		return *this;
	}

	bool AllDraw::InitiateAStarGreedyt(int i, int Kind, int Order)
	{
		bool Is = false;
		try
		{
			if (OrderPlateDraw == 1)
			{
				if (Wtime != nullptr)
				{
					if (Wtime->EndTime)
					{
						return true;
					}
				}
			}
			else
			{
				if (Btime != nullptr)
				{
					if (Btime->EndTime)
					{
						return true;
					}
				}
			}
			if (CalIdle == 2)
			{
				return true;
			}
			if (Kind == 1)
			{
				Is = Is || InitiateAStarGreedytSoldier(i, Kind, Order);
			}
			else
			{
	 if (Kind == 2)
	 {
				Is = Is || InitiateAStarGreedytElephant(i, Kind, Order);
	 }
			else
			{
	 if (Kind == 3)
	 {
				Is = Is || InitiateAStarGreedytHourse(i, Kind, Order);
	 }
			else
			{
	 if (Kind == 4)
	 {
				Is = Is || InitiateAStarGreedytCastle(i, Kind, Order);
	 }
			else
			{
	 if (Kind == 5)
	 {
				Is = Is || InitiateAStarGreedytMinidter(i, Kind, Order);
	 }
			else
			{
	 if (Kind == 6)
	 {
				Is = Is || InitiateAStarGreedytKing(i, Kind, Order);
	 }
			}
			}
			}
			}
			}
		}
	#pragma warning disable CS0168 // The variable 't' is declared but never used
		catch (std::exception &t)
	#pragma warning restore CS0168 // The variable 't' is declared but never used
		{

		}
		return Is;

	}

	bool AllDraw::InitiateAStarGreedytSoldier(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= SodierMidle)
		{
			return false;
		}
		if (Order == -1 && i >= SodierHigh)
		{
			return false;
		}
		if (SolderesOnTable != nullptr)
		{
			if (SolderesOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	bool AllDraw::InitiateAStarGreedytElephant(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= ElefantMidle)
		{
			return false;
		}
		if (Order == -1 && i >= ElefantHigh)
		{
			return false;
		}
		if (ElephantOnTable != nullptr)
		{
			if (ElephantOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	bool AllDraw::InitiateAStarGreedytHourse(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= HourseMidle)
		{
			return false;
		}
		if (Order == -1 && i >= HourseHight)
		{
			return false;
		}

		if (HoursesOnTable != nullptr)
		{
			if (HoursesOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	bool AllDraw::InitiateAStarGreedytCastle(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= CastleMidle)
		{
			return false;
		}
		if (Order == -1 && i >= CastleHigh)
		{
			return false;
		}

		if (CastlesOnTable != nullptr)
		{
			if (CastlesOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	bool AllDraw::InitiateAStarGreedytMinidter(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= MinisterMidle)
		{
			return false;
		}
		if (Order == -1 && i >= MinisterHigh)
		{
			return false;
		}

		if (MinisterOnTable != nullptr)
		{
			if (MinisterOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	bool AllDraw::InitiateAStarGreedytKing(int i, int Kind, int Order)
	{
		if (Order == 1 && i >= KingMidle)
		{
			return false;
		}
		if (Order == -1 && i >= KingHigh)
		{
			return false;
		}

		if (KingOnTable != nullptr)
		{
			if (KingOnTable[i] != nullptr)
			{
				return true;
			}
		}
		return false;

	}

	AllDraw AllDraw::InitiateAStarGreedytSodler(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For WHITE Soldeirs Objects. 
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If Solders Not Exist Continue and Traversal Back.
				if (InitiateAStarGreedyt(i, 1, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Initiate of Local Variables By Global Objective WHITE Current Solder.
					int ik = static_cast<int>(SolderesOnTable[i].Row);
					int jk = static_cast<int>(SolderesOnTable[i].Column);
					//Construction of Thinking WHITE Soldier By Local Variables.
					//if (SolderesOnTable[i].SoldierThinking.TableListSolder.Count == 0)
					//If There is no Thinking Movments on Current Object  
					if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
					{
						//For All Movable WHITE Solders.
						////Parallel.For(0, AllDraw.SodierMovments, j =>
						{
							//Thinking of WHITE Solder Operation.
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
								SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
								 SolderesOnTable[i].SoldierThinking.Thinking(iAStarGreedy, this, SolderesOnTable[i].LoseOcuuredatChiled, SolderesOnTable[i].WinOcuuredatChiled);

								if (SolderesOnTable[i].SoldierThinking.TableListSolder.size() != 0)
								{
									SolderesOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						SolderesOnTable[i].SoldierThinking.ThinkingBegin = false;
						SolderesOnTable[i].SoldierThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedytElephantWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			for (int i = 0;i < ElefantMidle; i++)
			{
				 InitiateAStarGreedytElephant(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedytElephant(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{

			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current Elephant WHITE Objects.
				if (InitiateAStarGreedyt(i, 2, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Inititae Local Varibale By Global WHITE Elephant Objects Varibales.
					int ik = static_cast<int>(ElephantOnTable[i].Row);
					int jk = static_cast<int>(ElephantOnTable[i].Column);
					//Construction of Thinking Objects By Local Varibales.
					//if (ElephantOnTable[i].ElefantThinking.TableListElefant.Count == 0)
					//If There is Not Thinking Objetive List Elephant WHITE. 
					if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw.ElefantMovments, j =>
						{
							//Operational Thinking WHITE Elephant. 
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
								ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
								 ElephantOnTable[i].ElefantThinking.Thinking(iAStarGreedy, this, ElephantOnTable[i].LoseOcuuredatChiled, ElephantOnTable[i].WinOcuuredatChiled);

								if (ElephantOnTable[i].ElefantThinking.TableListElefant.size() != 0)
								{
									ElephantOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						ElephantOnTable[i].ElefantThinking.ThinkingBegin = false;
						ElephantOnTable[i].ElefantThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythHourseWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All WHITE Hourse Objects.
			for (int i = 0;i < HourseMidle; i++)
			{
				 InitiateAStarGreedythHourse(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythHourse(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All WHITE Hourse Objects.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//Ignore of Non Exist Current WHITE Hourse Objects.
				if (InitiateAStarGreedyt(i, 3, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Initiate of Local Variables By Global WHITE Hourse Objectives.
					int ik = static_cast<int>(HoursesOnTable[i].Row);
					int jk = static_cast<int>(HoursesOnTable[i].Column);
					//Construction of WHITE Hourse Thinking Objects..
					//if (HoursesOnTable[i].HourseThinking.TableListHourse.Count == 0)
					//When There is Not HourseList Count. 
					if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw.HourseMovments, j =>
						{
							//Thinking of WHITE Hourse Oprational.
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
								HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
								 HoursesOnTable[i].HourseThinking.Thinking(iAStarGreedy, this, HoursesOnTable[i].LoseOcuuredatChiled, HoursesOnTable[i].WinOcuuredatChiled);

								if (HoursesOnTable[i].HourseThinking.TableListHourse.size() != 0)
								{
									HoursesOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						HoursesOnTable[i].HourseThinking.ThinkingBegin = false;
						HoursesOnTable[i].HourseThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythCastleWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE Castles Objects.
			for (int i = 0;i < CastleMidle; i++)
			{
				 InitiateAStarGreedythCastle(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythCastle(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE Castles Objects.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//When Current Castles WHITE Not Exist Continue Traversal Back.
				if (InitiateAStarGreedyt(i, 4, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Initaiate of Local Varibales By Global Varoiables.
					int ik = static_cast<int>(CastlesOnTable[i].Row);
					int jk = static_cast<int>(CastlesOnTable[i].Column);
					//Construction of Thinking Variables By Local Variables.
					//if (CastlesOnTable[i].CastleThinking.TableListCastle.Count == 0)
					//When Count of Table Castles of Thinking Not Exist Do Operational.
					if (CastlesOnTable[i].CastleThinking.TableListCastle.empty())
					{
						//For All Possible Movments.
						////Parallel.For(0, AllDraw.CastleMovments, j =>
						{
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								//Thinking of WHITE Castles Operational.
								CastlesOnTable[i].CastleThinking.ThinkingBegin = true;
								CastlesOnTable[i].CastleThinking.ThinkingFinished = false;
								 CastlesOnTable[i].CastleThinking.Thinking(iAStarGreedy, this, CastlesOnTable[i].LoseOcuuredatChiled, CastlesOnTable[i].WinOcuuredatChiled);


								if (CastlesOnTable[i].CastleThinking.TableListCastle.size() != 0)
								{
									CastlesOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						CastlesOnTable[i].CastleThinking.ThinkingBegin = false;
						CastlesOnTable[i].CastleThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythMinisterWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE Minister Movments.
			for (int i = 0;i < MinisterMidle; i++)
			{
				 InitiateAStarGreedythMinister(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythMinister(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE Minister Movments.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//For Each Non Exist WHITE Minister Objectives.
				if (InitiateAStarGreedyt(i, 5, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Inititate Local Variables By Global Varibales.
					int ik = static_cast<int>(MinisterOnTable[i].Row);
					int jk = static_cast<int>(MinisterOnTable[i].Column);
					//Construction of Thinking Objects WHITE Minister.
					//if (MinisterOnTable[i].MinisterThinking.TableListMinister.Count == 0)
					//If There is Not Minister Of WHITE In The Thinking Table List.   
					if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
					{
						//For All Possible Movments.
						// //Parallel.For(0, AllDraw.MinisterMovments, j =>
						{
							//Thinking of WHITE Minister Operational.
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
								MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
								 MinisterOnTable[i].MinisterThinking.Thinking(iAStarGreedy, this, MinisterOnTable[i].LoseOcuuredatChiled, MinisterOnTable[i].WinOcuuredatChiled);

								if (MinisterOnTable[i].MinisterThinking.TableListMinister.size() != 0)
								{
									MinisterOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						MinisterOnTable[i].MinisterThinking.ThinkingBegin = false;
						MinisterOnTable[i].MinisterThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythKingWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE King Objects.
			for (int i = 0;i < KingMidle; i++)
			{
				 InitiateAStarGreedythKing(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythKing(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			//For All Possible WHITE King Objects.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				Order = DummyOrder;
				ChessRules::CurrentOrder = DummyCurrentOrder;
				//If There is Not Current Object Continue Traversal Back.
				if (InitiateAStarGreedyt(i, 6, Order))
				{
					AllDraw Th = AStarGreedyStringNode;
					if (IsAtLeastAllObjectIsNull())
					{
						TableList.clear();
						TableList.push_back(CloneATable(Table));
						SetRowColumn(0);
						IsCurrentDraw = true;
					}
					AStarGreedyStringNode = Th;

					//Initiate Local varibale By Global Objective Varibales.
					int ik = static_cast<int>(static_cast<int>(KingOnTable[i].Row));
					int jk = static_cast<int>(KingOnTable[i].Column);
					//Construction of WHITE King Thinking Objects.
					//if (KingOnTable[i].KingThinking.TableListKing.Count == 0)
					//When There is Not Thinking Table WHITE King Movments.
					if (KingOnTable[i].KingThinking.TableListKing.empty())
					{
						//For All Possible WHITE King Movments.
						////Parallel.For(0, AllDraw.KingMovments, j =>
						{
							//Thinking Of WHITE King Operatins.
							////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (OOO)
							{
								KingOnTable[i].KingThinking.ThinkingBegin = true;
								KingOnTable[i].KingThinking.ThinkingFinished = false;
								;
								KingOnTable[i].KingThinking.Thinking(iAStarGreedy, this, KingOnTable[i].LoseOcuuredatChiled, KingOnTable[i].WinOcuuredatChiled);

								if (KingOnTable[i].KingThinking.TableListKing.size() != 0)
								{
									KingOnTableMove[i] = true;
									AllDraw::ChangedInTreeOccured = true;

								}
							}
						}
					}
					else
					{
						KingOnTable[i].KingThinking.ThinkingBegin = false;
						KingOnTable[i].KingThinking.ThinkingFinished = true;
					}
				}
			}
		}
		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythSoldierBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{


			//For Each Objects of BLACK Sodiers.
			for (int i = SodierMidle; i < SodierHigh;i++)

			{
				 InitiateAStarGreedytSodler(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}

		}

		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythElephantBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{



			for (int i = ElefantMidle;i < ElefantHigh; i++)

			{
				 InitiateAStarGreedytElephant(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}

		}

		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythHourseBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{


			for (int i = HourseMidle;i < HourseHight; i++)

			{
				 InitiateAStarGreedythHourse(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}

		}

		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythCastleBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{


			for (int i = CastleMidle;i < CastleHigh; i++)

			{
				 InitiateAStarGreedythCastle(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}

		}

		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythMinisterBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{



		   for (int i = MinisterMidle;i < MinisterHigh; i++)
		   {
				 InitiateAStarGreedythMinister(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


		   }
		}

		return *this;
	}

	AllDraw AllDraw::InitiateAStarGreedythKingBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{



			for (int i = KingMidle;i < KingHigh; i++)

			{
				 InitiateAStarGreedythKing(i, iii, jjj, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);


			}
		}

		return *this;
	}

	bool AllDraw::FullBoundryConditionsSoldierIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (SolderesOnTable == nullptr)
				{
					return true;
				}
				if (SolderesOnTable[ikk] == nullptr)
				{
					return true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsElephantIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (ElephantOnTable == nullptr)
				{
					return true;
				}
				if (ElephantOnTable[ikk] == nullptr)
				{
					return true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsHourseIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (HoursesOnTable == nullptr)
				{
					return true;
				}
				if (HoursesOnTable[ikk] == nullptr)
				{
					return true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsCastleIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (CastlesOnTable == nullptr)
				{
					return true;
				}
				if (CastlesOnTable[ikk] == nullptr)
				{
					return true;
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsMinisterIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (MinisterOnTable == nullptr)
				{
					return true;
				}
				if (MinisterOnTable[ikk] == nullptr)
				{
					return true;
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsKingIgnore(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (KingOnTable == nullptr)
				{
					return true;
				}
				if (KingOnTable[ikk] == nullptr)
				{
					return true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsSoldier(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{

				if (FullBoundryConditionsSoldierIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (SolderesOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsElephant(int ikk, int Current, int Order, int iAStarGreedy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (FullBoundryConditionsElephantIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (ElephantOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsHourse(int ikk, int Current, int Order, int iAStarGreedy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (FullBoundryConditionsHourseIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (HoursesOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsCastle(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (FullBoundryConditionsCastleIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (CastlesOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsMinister(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (FullBoundryConditionsMinisterIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (MinisterOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsKing(int ikk, int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				if (FullBoundryConditionsKingIgnore(ikk, Current, Order, iAStarGreedy))
				{
					return false;
				}
				if (KingOnTable[ikk].LoseOcuuredatChiled[0] < -1 && (!AllowedSupTrue))
				{
					IS = true;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditions(int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			if (!CompleteTreeDo)
			{
				try
				{
					if (iAStarGreedy < 0) //&& iAStarGreedy < MaxDuringLevelThinkingCreation
					{
						IS = true;
					}
					//WHITE
					if (Order == 1)
					{
						IS = IS || FullBoundryConditionsWHITE(Current, Order, iAStarGreedy);
						//when vicrory count satisfied
						if ((ThinkingHybridizerRefrigitz::FoundFirstMating > (MaxAStarGreedy))) //|| (SetDeptIgnore))
						{
							IS = true;
						}
					}
					else
					{
						IS = IS || FullBoundryConditionsBLACK(Current, Order, iAStarGreedy);
						//when victory count satisfied
						if ((ThinkingHybridizerRefrigitz::FoundFirstMating > (MaxAStarGreedy))) //|| (SetDeptIgnore))
						{
							IS = true;
						}
					}
					//when nu,bers of computational leafs satisfied 
					if (((ThinkingHybridizerRefrigitz::NumbersOfAllNode - AllDraw::NumberOfLeafComputation) > 100) && AllDraw::NumberOfLeafComputation != -1)
					{
						IS = true;
					}


				}
				catch (std::exception &t)
				{
					Log(t);
				}
			}
			else
			{
				if (ThinkingHybridizerRefrigitz::NumbersOfAllNode > CompleteNumber)
				{
					return true;
				}
				if (CompleteTreeCancel)
				{
					return true;
				}

			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsBLACK(int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				//soldier
				for (int ikk = SodierMidle; ikk < SodierHigh; ikk++)
				{
					IS = IS || FullBoundryConditionsSoldier(ikk, Current, Order, iAStarGreedy);
				}
				//elephant
				for (int ikk = ElefantMidle; ikk < ElefantHigh; ikk++)
				{
					IS = IS || FullBoundryConditionsElephant(ikk, Current, Order, iAStarGreedy);
				}
				//hourse
				for (int ikk = HourseMidle; ikk < HourseHight; ikk++)
				{
					IS = IS || FullBoundryConditionsHourse(ikk, Current, Order, iAStarGreedy);
				}
				//Castle
				for (int ikk = CastleMidle; ikk < CastleHigh; ikk++)
				{
					IS = IS || FullBoundryConditionsCastle(ikk, Current, Order, iAStarGreedy);
				}
				//minister
				for (int ikk = MinisterMidle; ikk < MinisterHigh; ikk++)
				{
					IS = IS || FullBoundryConditionsMinister(ikk, Current, Order, iAStarGreedy);
				}
				//king
				for (int ikk = KingMidle; ikk < KingHigh; ikk++)
				{
					IS = IS || FullBoundryConditionsKing(ikk, Current, Order, iAStarGreedy);
				}
				//when victory count satisfied
				if ((ThinkingHybridizerRefrigitz::FoundFirstMating > (MaxAStarGreedy))) //|| (SetDeptIgnore))
				{
					IS = true;
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	bool AllDraw::FullBoundryConditionsWHITE(int Current, int Order, int iAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool IS = false;
			try
			{
				//soldier
				for (int ikk = 0; ikk < SodierMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsSoldier(ikk, Current, Order, iAStarGreedy);
				}
				//elephant
				for (int ikk = 0; ikk < ElefantMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsElephant(ikk, Current, Order, iAStarGreedy);
				}
				//hourse
				for (int ikk = 0; ikk < HourseMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsHourse(ikk, Current, Order, iAStarGreedy);
				}
				//Castle
				for (int ikk = 0; ikk < CastleMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsCastle(ikk, Current, Order, iAStarGreedy);
				}
				//minister
				for (int ikk = 0; ikk < MinisterMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsMinister(ikk, Current, Order, iAStarGreedy);
				}
				//king
				for (int ikk = 0; ikk < KingMidle; ikk++)
				{
					IS = IS || FullBoundryConditionsKing(ikk, Current, Order, iAStarGreedy);
				}
				//when vicrory count satisfied
				if ((ThinkingHybridizerRefrigitz::FoundFirstMating > (MaxAStarGreedy))) //|| (SetDeptIgnore))
				{
					IS = true;
				}

			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return IS;
		}
	}

	void AllDraw::AstarGreedyThinking(int Order, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int i, int j, int ii, int jj, int** Table, int a, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			//If Order is WHITE.
			if (Order == 1)
			{
				int i1 = i, j1 = j;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
				int **Tab = CloneATable(Table);
				int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = OrderP;
				bool TB1 = TB;
				int aa = a;
				 //For All WHITE Soldier Objects.
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								 this->InitiateAStarGreedytSodlerWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedytElephantWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythHourseWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);




								 this->InitiateAStarGreedythCastleWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythMinisterWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythKingWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);


							}

			}
			else //BLACK Order Considarations.
			{
				int i1 = i, j1 = j;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(Table);
				int **Tab = CloneATable(Table);
				int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = OrderP;
				bool TB1 = TB;
				int aa = a;
				//If Order is WHITE.

							//For All WHITE Soldier Objects.
							////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O)
							{
								 this->InitiateAStarGreedythSoldierBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythElephantBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythHourseBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythCastleBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);


								 this->InitiateAStarGreedythMinisterBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);



								 this->InitiateAStarGreedythKingBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tab), Ord1, TB1, FOUND, LeafAStarGreedy);


							}

			}
		}

	}

	bool AllDraw::InitiateAStarGreedytCreationThinking(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			if (ThinkingAllowed == nullptr)
			{
				ThinkingAllowed = new bool[12];
			}
			for (int iii = 0; iii < 12; iii++)
			{
				ThinkingAllowed[iii] = true;
			}
			int DummyOrder = int();
			DummyOrder = Order;
			int DummyCurrentOrder = int();
			DummyCurrentOrder = ChessRules::CurrentOrder;
			//#pragma warning disable CS0219 // The variable 'ik' is assigned but its value is never used
	#pragma warning disable CS0219 // The variable 'ik' is assigned but its value is never used
			int i = 0, ik = 0;
	#pragma warning restore CS0219 // The variable 'ik' is assigned but its value is never used
			//#pragma warning restore CS0219 // The variable 'ik' is assigned but its value is never used
			auto j = 0;
			int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
			for (int  iii = 0; iii < 8; iii++)
			{
				for (int  jjj = 0; jjj < 8; jjj++)
				{
					Table[iii][jjj] = Tab[iii][jjj];
				}
			}
			AllDraw thiB = AStarGreedyStringNode;
			if (IsAtLeastAllObjectIsNull())
			{
				TableList.clear();
				TableList.push_back(CloneATable(Table));
				SetRowColumn(0);
				IsCurrentDraw = true;
			}
			AStarGreedyStringNode = thiB;
			//If Order is WHITE.
			if (Order == 1)
			{
				 InitiateAStarGreedytCreationThinkingWHITE(DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, i, j, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);



			}
			else //BLACK Order Considarations.
			{
				 InitiateAStarGreedytCreationThinkingBLACK(DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, i, j, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);



			}
		}

		return true;
	}

	bool AllDraw::InitiateAStarGreedytCreationThinkingWHITE(int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int i, int j, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			int i1 = i, j1 = j;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tabl = CloneATable(Table);
			int **Tabl = CloneATable(Table);
			int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = OrderP;
			bool TB1 = TB;
			int aa = a;

						//For All WHITE Soldier Objects.
						////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O)
						{
							 this->InitiateAStarGreedytSodlerWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedytElephantWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythHourseWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythCastleWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythMinisterWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);


						   this->InitiateAStarGreedythKingWHITE(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);


						}

		}
		return true;
	}

	bool AllDraw::InitiateAStarGreedytCreationThinkingBLACK(int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int i, int j, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			int i1 = i, j1 = j;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tabl = CloneATable(Table);
			int **Tabl = CloneATable(Table);
			int DummyOrder1 = DummyOrder, DummyCurrentOrder1 = DummyCurrentOrder, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, Ord1 = OrderP;
			bool TB1 = TB;
			int aa = a;
			//If Order is WHITE.

						//For All WHITE Soldier Objects.
						////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O)
						{
							 this->InitiateAStarGreedythSoldierBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythElephantBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythHourseBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythCastleBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythMinisterBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);



							 this->InitiateAStarGreedythKingBLACK(i1, j1, CloneATable(Tabl), DummyOrder1, DummyCurrentOrder1, iAStarGreedy1, ii1, jj1, aa, CloneATable(Tabl), Ord1, TB1, FOUND, LeafAStarGreedy);


						}

		}
		return true;
	}

	AllDraw AllDraw::InitiateAStarGreedyt(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy)
	{

		ThinkingRunInBothSide = true;
		OrderP = Order;
		SetObjectNumbers(Tab);
		int **Table; *Table = new int[8]; for (int b = 0; b < 8; b++)Table[b] = new int[8];
		for (int  iii = 0; iii < 8; iii++)
		{
			for (int  jjj = 0; jjj < 8; jjj++)
			{
				Table[iii][jjj] = Tab[iii][jjj];
			}
		}
		////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (oo)
		{
			ThinkingHybridizerRefrigitz::BeginThread = 0;
			ThinkingHybridizerRefrigitz::EndThread = 0;
		}
		//Initiate of global Variables Byte Local Variables.
		int DummyOrder = int();
		DummyOrder = Order;
		int DummyCurrentOrder = int();
		DummyCurrentOrder = ChessRules::CurrentOrder;
		//#pragma warning disable CS0219 // The variable 'i' is assigned but its value is never used
	#pragma warning disable CS0219 // The variable 'i' is assigned but its value is never used
		int i = 0, ik = 0;
	#pragma warning restore CS0219 // The variable 'i' is assigned but its value is never used
		//#pragma warning restore CS0219 // The variable 'i' is assigned but its value is never used
		int **TablInit; *TablInit = new int[8]; for (int b = 0; b < 8; b++)TablInit[b] = new int[8];
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		auto j = 0;
		//Fairness conditions for perposive astar greedy search.
		////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (Omm)
		{
			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return *this;
				}
				if (LeafSemaphoreIndex)
				{
					LeafAStarGreedy++;
				}

			}
			CurrentAStarGredyMax = AStarGreedyiLevelMax - iAStarGreedy;
		}
		bool Do = false;
		if (iAStarGreedy >= 0 && iAStarGreedy < MaxDuringLevelThinkingCreation)
		{
			MaxDuringLevelThinkingCreation = iAStarGreedy;
			////auto o = new Object();
			DepthIterative++;
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
			}
		}




		if (!FOUND)
		{
			//Initiate Of Local Variables.
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (o)
			{

				 InitiateAStarGreedytCreationThinking(iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);




			}

		}
		Order = DummyOrder;
		ChessRules::CurrentOrder = DummyCurrentOrder;
		 Serve(Order);


		if (FOUND)
		{
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				FOUND = false;
				AllDraw Leaf=*this;
				Tabl = CloneATable(Table);
				int LeafDeep = MaxAStarGreedy;
				 FoundOfLeafDepenOfKind(Leaf, FOUND, Order, LeafDeep, 0, 0, 0, 0);



			}
		}
		else
		{
			if (!Deeperthandeeper || ThinkingHybridizerRefrigitz::FullGameAllow)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					NumberOfnewMove = 0;
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;
					int Ord = Order, iAStarGreedy1 = iAStarGreedy, ii1 = ii, jj1 = jj, ik1 = ik, j1 = j;

					 Do = this->FullGameThinkingTree(Ord, iAStarGreedy1 - 1, ii1, jj1, ik1, j1, false, LeafAStarGreedy);




					if (NumberOfnewMove == 0)
					{
						UsedRestrictedMoveBlitzAndFull = false;
						 Do = this->FullGameThinkingTree(Ord, iAStarGreedy1, ii1, jj1, ik1, j1, false, LeafAStarGreedy);


					}
					FullGameThinkingTreeWin(Order);


					 FullGameThinkingTreeLose(Order);



				}
			}
		}
		////auto om = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (Om)
		{
			if (!Do)
			{
				if (iAStarGreedy < MinThinkingTreeDepth)
				{
					MinThinkingTreeDepth = iAStarGreedy;
				}
			}
		}



		return *this;
	}

	bool AllDraw::KingDan(int** Tab, int Order)
	{

		bool IsDang = false;
		ChessRules *A = new ChessRules(0, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, Order);
		IsDang = A->ObjectDangourKingMove(Order, Tab);
		if (Order == 1 && (IsDang))
		{
			if (A->CheckBLACKObjectDangour && ((!A->CheckWHITEObjectDangour)))
			{
				IsDang = false;
			}
		}
		if (Order == -1 && (IsDang))
		{
			if (A->CheckWHITEObjectDangour && ((!A->CheckBLACKObjectDangour)))
			{
				IsDang = false;
			}
		}

		return IsDang;
	}

	void AllDraw::ClearAStarGreadyWhenListsAreEmpy(int Kind, int i)
	{
		//soldier
		if (Kind == 1 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
		{
			SolderesOnTable[i].SoldierThinking.AStarGreedy.clear();
		}
		else //elephant
		{
	if (Kind == 2 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
	{
			ElephantOnTable[i].ElefantThinking.AStarGreedy.clear();
	}
		else //hourse
		{
			if (Kind == 3 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
			{
			HoursesOnTable[i].HourseThinking.AStarGreedy.clear();
			}
		else //Castle
		{
			if (Kind == 4 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
			{
			CastlesOnTable[i].CastleThinking.AStarGreedy.clear();
			}
		else //minister
		{
			if (Kind == 5 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
			{
			MinisterOnTable[i].MinisterThinking.AStarGreedy.clear();
			}
		else //king
		{
			if (Kind == 6 && KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
			{
			KingOnTable[i].KingThinking.AStarGreedy.clear();
			}
		}
		}
		}
		}
		}
	}

	bool AllDraw::IsThereCalculatedAStarGreedyNode()
	{
		bool Is = false;
		//soldier
		for (int i = 0; i < SodierHigh; i++)
		{
			if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
			{
				if (SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
				{
					Is = true;
					break;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(1, i);
				}
			}
		}
		if (!Is)
		{
			//elephant
			for (int i = 0; i < ElefantHigh; i++)
			{
				if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
				{
					if (ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
					{
						Is = true;
						break;
					}
					else
					{
						ClearAStarGreadyWhenListsAreEmpy(2, i);
					}
				}
			}
		}
		if (!Is)
		{
			//hourse
			for (int i = 0; i < HourseHight; i++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
				{
					if (HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
					{
						Is = true;
						break;
					}
					else
					{
						ClearAStarGreadyWhenListsAreEmpy(3, i);
					}
				}
			}
		}
		if (!Is)
		{
			//Castle
			for (int i = 0; i < CastleHigh; i++)
			{
				if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
				{
					if (CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
					{
						Is = true;
						break;
					}
					else
					{
						ClearAStarGreadyWhenListsAreEmpy(4, i);
					}
				}
			}
		}
		if (!Is)
		{
			//minister
			for (int i = 0; i < MinisterHigh; i++)
			{
				if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
				{
					if (MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
					{
						Is = true;
						break;
					}
					else
					{
						ClearAStarGreadyWhenListsAreEmpy(5, i);
					}

				}
			}
		}
		if (!Is)
		{
			//king
			for (int i = 0; i < KingHigh; i++)
			{
				if (KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0)
				{
					if (KingOnTable[i].KingThinking.TableListKing.size() > 0)
					{
						Is = true;
						break;
					}
					else
					{
						ClearAStarGreadyWhenListsAreEmpy(6, i);
					}

				}
			}
		}
		return Is;
	}

	bool AllDraw::IsThereCalculatedAStarGreedyNode(int i, int Kind)
	{
		bool Is = false;
		//soldier
		if (Kind == 1)
		{
			if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
			{
				if (SolderesOnTable[i].SoldierThinking.TableListSolder.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(1, i);
				}

			}
		}
		else
		{
		if (Kind == 2)
		{
			//elephant
			if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
			{
				if (ElephantOnTable[i].ElefantThinking.TableListElefant.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(2, i);
				}
			}
		}
		else
		{
		if (Kind == 3)
		{
			//hourse
			if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
			{
				if (HoursesOnTable[i].HourseThinking.TableListHourse.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(3, i);
				}

			}
		}
		else
		{
		if (Kind == 4)
		{
			//Castle
			if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
			{
				if (CastlesOnTable[i].CastleThinking.TableListCastle.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(4, i);
				}

			}
		}
		else
		{
		if (Kind == 5)
		{
			//minister
			if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
			{
				if (MinisterOnTable[i].MinisterThinking.TableListMinister.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(5, i);
				}

			}
		}
		else
		{
		if (Kind == 6)
		{
			//king
			if (KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.TableListKing.size() > 0)
			{
				if (KingOnTable[i].KingThinking.TableListKing.size() > 0)
				{
					Is = true;
				}
				else
				{
					ClearAStarGreadyWhenListsAreEmpy(6, i);
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

	bool AllDraw::IsThereNotAllOfEmptyOrNonCalculatedAStarGreedyNode(int Order, int Kind, int i)
	{
		bool Is = true;
		//soldier
		if (Kind == 1)
		{
			if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); j++)
				{
					Is = Is && SolderesOnTable[i].SoldierThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
		}
		else //elephant
		{
			if (Kind == 2)
			{
			if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); j++)
				{
					Is = Is && ElephantOnTable[i].ElefantThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			}
		else //hourse
		{
			if (Kind == 3)
			{
			if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); j++)
				{
					Is = Is && HoursesOnTable[i].HourseThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			}
		else //Castle
		{
			if (Kind == 4)
			{
			if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); j++)
				{
					Is = Is && CastlesOnTable[i].CastleThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			}
		else //minister
		{
			if (Kind == 5)
			{
			if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); j++)
				{
					Is = Is && MinisterOnTable[i].MinisterThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			}
		else //king
		{
		if (Kind == 6)
		{
			if (KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.AStarGreedy.size() > 0)
			{
				for (int j = 0; j < KingOnTable[i].KingThinking.AStarGreedy.size(); j++)
				{
					Is = Is && KingOnTable[i].KingThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
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

	bool AllDraw::IsThereEmptyOrNonCalculatedAStarGreedyNode(int Order, int Kind, int i, int j)
	{
		bool Is = false;
		if (!IsThereNotAllOfEmptyOrNonCalculatedAStarGreedyNode(Order, Kind, i))
		{
			//soldier
			if (Kind == 1)
			{
				if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr && SolderesOnTable[i].SoldierThinking != nullptr && SolderesOnTable[i].SoldierThinking!= nullptr && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0 && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > j)
				{
					Is = SolderesOnTable[i].SoldierThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			else //elephant
			{
				if (Kind == 2)
				{
				if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr && ElephantOnTable[i].ElefantThinking != nullptr && ElephantOnTable[i].ElefantThinking!= nullptr && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0 && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > j)
				{
					Is = ElephantOnTable[i].ElefantThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
				}
			else //hourse
			{
				if (Kind == 3)
				{
				if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr && HoursesOnTable[i].HourseThinking != nullptr && HoursesOnTable[i].HourseThinking!= nullptr && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0 && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > j)
				{
					Is = HoursesOnTable[i].HourseThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
				}
			else //Castle
			{
				if (Kind == 4)
				{
				if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr && CastlesOnTable[i].CastleThinking != nullptr && CastlesOnTable[i].CastleThinking!= nullptr && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0 && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > j)
				{
					Is = CastlesOnTable[i].CastleThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
				}
			else //minister
			{
				if (Kind == 5)
				{
				if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr && MinisterOnTable[i].MinisterThinking != nullptr && MinisterOnTable[i].MinisterThinking!= nullptr && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0 && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > j)
				{
					Is = MinisterOnTable[i].MinisterThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
				}
			else //king
			{
			if (Kind == 6)
			{
				if (KingOnTable != nullptr && KingOnTable[i] != nullptr && KingOnTable[i].KingThinking != nullptr && KingOnTable[i].KingThinking!= nullptr && KingOnTable[i].KingThinking.AStarGreedy.size() > 0 && KingOnTable[i].KingThinking.AStarGreedy.size() > j)
				{
					Is = KingOnTable[i].KingThinking.AStarGreedy[j].IsThereCalculatedAStarGreedyNode();
				}
			}
			}
			}
			}
			}
			}
		}
		return (!Is);
	}

	bool AllDraw::BlitzGameThinkingTreeBoundryConditions(int ik, int Kind)
	{
		if (Kind == 1)
		{
			if (SolderesOnTable == nullptr)
			{
				return true;
			}
			if (SolderesOnTable[ik] == nullptr)
			{
				return true;
			}
			if (SolderesOnTable[ik].SoldierThinking == nullptr)
			{
				return true;
			}
			if (SolderesOnTable[ik].SoldierThinking == nullptr)
			{
				return true;
			}
			if (SolderesOnTable[ik].SoldierThinking.HeuristicListSolder.empty())
			{
				return true;
			}
		}
		else
		{
		if (Kind == 2)
		{
			if (ElephantOnTable == nullptr)
			{
				return true;
			}
			if (ElephantOnTable[ik] == nullptr)
			{
				return true;
			}
			if (ElephantOnTable[ik].ElefantThinking == nullptr)
			{
				return true;
			}
			if (ElephantOnTable[ik].ElefantThinking == nullptr)
			{
				return true;
			}
			if (ElephantOnTable[ik].ElefantThinking.HeuristicListElefant.empty())
			{
				return true;
			}
		}
		else
		{
		if (Kind == 3)
		{
			if (HoursesOnTable == nullptr)
			{
				return true;
			}
			if (HoursesOnTable[ik] == nullptr)
			{
				return true;
			}
			if (HoursesOnTable[ik].HourseThinking == nullptr)
			{
				return true;
			}
			if (HoursesOnTable[ik].HourseThinking == nullptr)
			{
				return true;
			}
			if (HoursesOnTable[ik].HourseThinking.HeuristicListHourse.empty())
			{
				return true;
			}
		}
		else
		{
		if (Kind == 4)
		{
			if (CastlesOnTable == nullptr)
			{
				return true;
			}
			if (CastlesOnTable[ik] == nullptr)
			{
				return true;
			}
			if (CastlesOnTable[ik].CastleThinking == nullptr)
			{
				return true;
			}
			if (CastlesOnTable[ik].CastleThinking == nullptr)
			{
				return true;
			}
			if (CastlesOnTable[ik].CastleThinking.HeuristicListCastle.empty())
			{
				return true;
			}
		}
		else
		{
		if (Kind == 5)
		{
			if (MinisterOnTable == nullptr)
			{
				return true;
			}
			if (MinisterOnTable[ik] == nullptr)
			{
				return true;
			}
			if (MinisterOnTable[ik].MinisterThinking == nullptr)
			{
				return true;
			}
			if (MinisterOnTable[ik].MinisterThinking == nullptr)
			{
				return true;
			}
			if (MinisterOnTable[ik].MinisterThinking.HeuristicListMinister.empty())
			{
				return true;
			}
		}
		else
		{
		if (Kind == 6)
		{
			if (KingOnTable == nullptr)
			{
				return true;
			}
			if (KingOnTable[ik] == nullptr)
			{
				return true;
			}
			if (KingOnTable[ik].KingThinking == nullptr)
			{
				return true;
			}
			if (KingOnTable[ik].KingThinking == nullptr)
			{
				return true;
			}
			if (KingOnTable[ik].KingThinking.HeuristicListKing.empty())
			{
				return true;
			}
		}
		}
		}
		}
		}
		}
		return false;
	}

	bool AllDraw::UsedRestrictedBlitzMoveAstarGreedy(int Kind, int ik, int j)
	{
		if (Kind == 1)
		{
			if (SolderesOnTable[ik].SoldierThinking.AStarGreedyMove.size() > j)
			{
				if ((SolderesOnTable[ik].SoldierThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
				{
					return true;
				}
			}
		}
		else
		{
		if (Kind == 2)
		{
			if (ElephantOnTable[ik].ElefantThinking.AStarGreedyMove.size() > j)
			{
				if ((ElephantOnTable[ik].ElefantThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
				{
					return true;
				}
			}
		}
		else
		{
		if (Kind == 3)
		{
			if (HoursesOnTable[ik].HourseThinking.AStarGreedyMove.size() > j)
			{
				if ((HoursesOnTable[ik].HourseThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
				{
					return true;
				}
			}
		}
		else
		{
		if (Kind == 4)
		{
			if (CastlesOnTable[ik].CastleThinking.AStarGreedyMove.size() > j)
			{
				if ((CastlesOnTable[ik].CastleThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
				{
					return true;
				}
			}
		}
		else
		{
		if (Kind == 5)
		{
			if (MinisterOnTable[ik].MinisterThinking.AStarGreedyMove.size() > j)
			{
				if ((MinisterOnTable[ik].MinisterThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
				{
					return true;
				}
			}
		}
		else
		{
		if (Kind == 5)
		{
			if (KingOnTable[ik].KingThinking.AStarGreedyMove.size() > j)
			{
				if ((KingOnTable[ik].KingThinking.AStarGreedyMove[j] && UsedRestrictedMoveBlitzAndFull))
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
		return false;
	}

	void AllDraw::BlitzGameThinkingTreeSolderWHITE(int &PreviousLessS, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Soldeir
		for (ik = 0; ik < SodierMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 1);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < SolderesOnTable[ik].SoldierThinking.HeuristicListSolder.size(); j++)
			{
				//when node is serving node continue
				if (SolderesOnTable[ik].SoldierThinking.IsSupHu[j])
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when node is empty deeper and there is not computatiional node continue
					 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 1, ik, j);


					if (!ac)
					{
						continue;
					}
					//when node have kings dangoures ignore and continue.
					 ac = CheckeHuristci(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Order, ik, j, 0);


					if (!ac)
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(1, ik, j) || SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[0] = ik;
							jIndex[0] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessS;
							 pre = SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessS = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is greater than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(1, ik, j) || SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[0] = ik;
							jIndex[0] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessS;
							 pre = SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessS = pre;
						}
					}
				}
			}
			//Elephant
		}
	}

	void AllDraw::BlitzGameThinkingTreeElephantWHITE(int &PreviousLessE, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Elephant
		for (ik = 0; ik < ElefantMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 2);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < ElephantOnTable[ik].ElefantThinking.HeuristicListElefant.size(); j++)
			{
				//when node is serving node continue
				if (ElephantOnTable[ik].ElefantThinking.IsSupHu[j])
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when node is empty deeper and there is not computatiional node continue
					 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 2, ik, j);


					if (!ac)
					{
						continue;
					}
					//when node have kings dangoures ignore and continue.
					 ac = CheckeHuristci(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]), Order, ik, j, 0);


					if (!ac)
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(2, ik, j) || ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[1] = ik;
							jIndex[1] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessE;
							 pre = ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessE = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is greater than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(2, ik, j) || ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[1] = ik;
							jIndex[1] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessE;
							 pre = ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessE = pre;
						}
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeHourseWHITE(int &PreviousLessH, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Hourse.
		for (ik = 0; ik < HourseMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 3);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < HoursesOnTable[ik].HourseThinking.HeuristicListHourse.size(); j++)
			{
				//when node is serving node continue
				if (HoursesOnTable[ik].HourseThinking.IsSupHu[j])
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when node is empty deeper and there is not computatiional node continue
					 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 3, ik, j);


					if (!ac)
					{
						continue;
					}
					//when node have kings dangoures ignore and continue.
					 ac = CheckeHuristci(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]), Order, ik, j, 0);


					if (!ac)
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(3, ik, j) || HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[2] = ik;
							jIndex[2] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessH;
							 pre = HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessH = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is greater than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(3, ik, j) || HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[2] = ik;
							jIndex[2] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessH;
							 pre = HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessH = pre;
						}
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeCastleWHITE(int &PreviousLessB, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Castle.
		for (ik = 0; ik < CastleMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 4);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < CastlesOnTable[ik].CastleThinking.HeuristicListCastle.size(); j++)
			{
				//when node is serving node continue
				if (CastlesOnTable[ik].CastleThinking.IsSupHu[j])
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when node is empty deeper and there is not computatiional node continue
					 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 4, ik, j);


					if (!ac)
					{
						continue;
					}
					//when node have kings dangoures ignore and continue.
					 ac = CheckeHuristci(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]), Order, ik, j, 0);


					if (!ac)
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(4, ik, j) || CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[3] = ik;
							jIndex[3] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessB;
							 pre = CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessB = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is greater than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(4, ik, j) || CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[3] = ik;
							jIndex[3] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessB;
							 pre = CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessB = pre;
						}

					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeMinisterWHITE(int &PreviousLessM, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Minister.
		for (ik = 0; ik < MinisterMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 5);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < MinisterOnTable[ik].MinisterThinking.HeuristicListMinister.size(); j++)
			{
				//when node is serving node continue
				if (MinisterOnTable[ik].MinisterThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 5, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(5, ik, j) || MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[4] = ik;
							jIndex[4] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessM;
							 pre = MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessM = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is greater than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(5, ik, j) || MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[4] = ik;
							jIndex[4] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessM;
							 pre = MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessM = pre;
						}
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeKingWHITE(int &PreviousLessK, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//King.
		for (ik = 0; ik < KingMidle; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 6);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < KingOnTable[ik].KingThinking.HeuristicListKing.size(); j++)
			{
				//when node is serving node continue
				if (KingOnTable[ik].KingThinking.IsSupHu[j])
				{
					continue;
				}
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					//when node is empty deeper and there is not computatiional node continue
					 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 6, ik, j);


					if (!ac)
					{
						continue;
					}
					//when node have kings dangoures ignore and continue.
					 ac = CheckeHuristci(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Order, ik, j, 0);


					if (!ac)
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(6, ik, j) || KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[5] = ik;
							jIndex[5] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessK;
							 pre = KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessK = pre;
						}
					}
					else
					{
						//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
						if (UsedRestrictedBlitzMoveAstarGreedy(6, ik, j) || KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
						{
						}
						else
						{
							Index[5] = ik;
							jIndex[5] = j;
							int Hav = HaveKilled;
							int pre = PreviousLessK;
							 pre = KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, Hav);


							HaveKilled = Hav;
							PreviousLessK = pre;
						}
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeSolder(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[0]!= -1)
			{
				if (SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.empty())
				{
					SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].TableList.clear();
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(SolderesOnTable[Index[0]].SoldierThinking.TableListSolder[jIndex[0]]));
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy[SolderesOnTable[Index[0]].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, SolderesOnTable[Index[0]].SoldierThinking.RowColumnSoldier[jIndex[0]][0], SolderesOnTable[Index[0]].SoldierThinking.RowColumnSoldier[jIndex[0]][1], a, SolderesOnTable[Index[0]].SoldierThinking.TableListSolder[jIndex[0]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeElephant(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[1] != -1)
			{
				if (ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.empty())
				{
					ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].TableList.clear();
				ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(ElephantOnTable[Index[1]].ElefantThinking.TableListElefant[jIndex[1]]));
				ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				 ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy[ElephantOnTable[Index[1]].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ElephantOnTable[Index[1]].ElefantThinking.RowColumnElefant[jIndex[1]][0], ElephantOnTable[Index[1]].ElefantThinking.RowColumnElefant[jIndex[1]][1], a, ElephantOnTable[Index[1]].ElefantThinking.TableListElefant[jIndex[1]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeHourse(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[2] != -1)
			{
				if (HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.empty())
				{
					HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].TableList.clear();
				HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(HoursesOnTable[Index[2]].HourseThinking.TableListHourse[jIndex[2]]));
				HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				 HoursesOnTable[Index[2]].HourseThinking.AStarGreedy[HoursesOnTable[Index[2]].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, HoursesOnTable[Index[2]].HourseThinking.RowColumnHourse[jIndex[2]][0], HoursesOnTable[Index[2]].HourseThinking.RowColumnHourse[jIndex[2]][1], a, HoursesOnTable[Index[2]].HourseThinking.TableListHourse[jIndex[2]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeCastle(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[3] != -1)
			{
				if (CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.empty())
				{
					CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].TableList.clear();
				CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(CastlesOnTable[Index[3]].CastleThinking.TableListCastle[jIndex[3]]));
				CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				 CastlesOnTable[Index[3]].CastleThinking.AStarGreedy[CastlesOnTable[Index[3]].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, CastlesOnTable[Index[3]].CastleThinking.RowColumnCastle[jIndex[3]][0], CastlesOnTable[Index[3]].CastleThinking.RowColumnCastle[jIndex[3]][1], a, CastlesOnTable[Index[3]].CastleThinking.TableListCastle[jIndex[3]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeMinister(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[4] != -1)
			{
				if (MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.empty())
				{
					MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].TableList.clear();
				MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(MinisterOnTable[Index[4]].MinisterThinking.TableListMinister[jIndex[4]]));
				MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				 MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy[MinisterOnTable[Index[4]].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, MinisterOnTable[Index[4]].MinisterThinking.RowColumnMinister[jIndex[4]][0], MinisterOnTable[Index[4]].MinisterThinking.RowColumnMinister[jIndex[4]][1], a, MinisterOnTable[Index[4]].MinisterThinking.TableListMinister[jIndex[4]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameTreeCreationThinkingTreeKing(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			//when do permite
			if (Index[5] != -1)
			{
				if (KingOnTable[Index[5]].KingThinking.AStarGreedy.empty())
				{
					KingOnTable[Index[5]].KingThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				}
				KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].TableList.clear();
				KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].TableList.push_back(CloneATable(KingOnTable[Index[5]].KingThinking.TableListKing[jIndex[5]]));
				KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].SetRowColumn(0);
				KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
				 KingOnTable[Index[5]].KingThinking.AStarGreedy[KingOnTable[Index[5]].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, KingOnTable[Index[5]].KingThinking.RowColumnKing[jIndex[5]][0], KingOnTable[Index[5]].KingThinking.RowColumnKing[jIndex[5]][1], a, KingOnTable[Index[5]].KingThinking.TableListKing[jIndex[5]], Order, false, FOUND, LeafAStarGreedy);


			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeSolderBLACK(int &PreviousLessS, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		for (ik = SodierMidle; ik < SodierHigh; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 1);


			if (ac)
			{
				continue;
			}
			//Soldier.
			//when there is computational lists
			for (j = 0; j < SolderesOnTable[ik].SoldierThinking.HeuristicListSolder.size(); j++)
			{
				//when node is serving node continue
				if (SolderesOnTable[ik].SoldierThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 1, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(1, ik, j) || SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[0] = ik;
						jIndex[0] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessS;
						 pre = SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessS = pre;
					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(1, ik, j) || SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessS || (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[0] = ik;
						jIndex[0] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessS;
						 pre = SolderesOnTable[ik].SoldierThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessS = pre;
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeElephantBLACK(int &PreviousLessE, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Elephant
		for (ik = ElefantMidle; ik < ElefantHigh; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 2);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < ElephantOnTable[ik].ElefantThinking.HeuristicListElefant.size(); j++)
			{
				//when node is serving node continue
				if (ElephantOnTable[ik].ElefantThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 2, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(2, ik, j) || ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[1] = ik;
						jIndex[1] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessE;
						 pre = ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessE = pre;
					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(2, ik, j) || ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessE || (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[1] = ik;
						jIndex[1] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessE;
						 pre = ElephantOnTable[ik].ElefantThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessE = pre;
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeHourseBLACK(int &PreviousLessH, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Hourse.
		for (ik = HourseMidle; ik < HourseHight; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 3);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < HoursesOnTable[ik].HourseThinking.HeuristicListHourse.size(); j++)
			{
				//when node is serving node continue
				if (HoursesOnTable[ik].HourseThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 3, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(3, ik, j) || HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[2] = ik;
						jIndex[2] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessH;
						 pre = HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessH = pre;
					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(3, ik, j) || HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessH || (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[2] = ik;
						jIndex[2] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessH;
						 pre = HoursesOnTable[ik].HourseThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessH = pre;
					}
				}
			}
		}
	}

	bool AllDraw::AllIndexIsNull(int iIndex[])
	{
		bool Is = true;
		for (int i = 0; i < 6; i++)
		{
			if (iIndex[i] != -1)
			{
				Is = false;
			}
		}
		return Is;
	}

	int AllDraw::FullGameMakimgBlitz(int Index[], int jIndex[], int Order, int LeafAStarGreedy)
	{
		int Kind = -1;
		int PS = -DBL_MAX, PE = -DBL_MAX, PH = -DBL_MAX, PB = -DBL_MAX, PM = -DBL_MAX, PK = -DBL_MAX;
		if (Order != AllDraw::OrderPlateDraw)
		{
			PS = DBL_MAX;
			PE = DBL_MAX;
			PH = DBL_MAX;
			PB = DBL_MAX;
			PM = DBL_MAX;
			PK = DBL_MAX;
		}
		int index[6] = {-1, -1, -1, -1, -1, -1};
		int jindex[6] = {-1, -1, -1, -1, -1, -1};
		if (Order == 1)
		{
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{

				BlitzGameThinkingTreeSolderWHITE(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeElephantWHITE(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeHourseWHITE(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeCastleWHITE(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeMinisterWHITE(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeKingWHITE(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);

				if (AllIndexIsNull(index))
				{
					Kind = -1;
					PS = -DBL_MAX;
					PE = -DBL_MAX;
					PH = -DBL_MAX;
					PB = -DBL_MAX;
					PM = -DBL_MAX;
					PK = -DBL_MAX;
					if (Order != AllDraw::OrderPlateDraw)
					{
						PS = DBL_MAX;
						PE = DBL_MAX;
						PH = DBL_MAX;
						PB = DBL_MAX;
						PM = DBL_MAX;
						PK = DBL_MAX;
					}
					for (int h = 0; h < 6; h++)
					{
						index[h] = -1;
						jindex[h] = -1;
					}
					UsedRestrictedMoveBlitzAndFull = false;
					BlitzGameThinkingTreeSolderWHITE(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeElephantWHITE(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeHourseWHITE(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeCastleWHITE(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeMinisterWHITE(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeKingWHITE(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				}
			}
		}
		else
		{
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				BlitzGameThinkingTreeSolderBLACK(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeElephantBLACK(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeHourseBLACK(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeCastleBLACK(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeMinisterBLACK(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				BlitzGameThinkingTreeKingBLACK(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				if (AllIndexIsNull(index))
				{
					Kind = -1;
					PS = -DBL_MAX;
					PE = -DBL_MAX;
					PH = -DBL_MAX;
					PB = -DBL_MAX;
					PM = -DBL_MAX;
					PK = -DBL_MAX;
					if (Order != AllDraw::OrderPlateDraw)
					{
						PS = DBL_MAX;
						PE = DBL_MAX;
						PH = DBL_MAX;
						PB = DBL_MAX;
						PM = DBL_MAX;
						PK = DBL_MAX;
					}
					for (int h = 0; h < 6; h++)
					{
						index[h] = -1;
						jindex[h] = -1;
					}
					UsedRestrictedMoveBlitzAndFull = false;
					BlitzGameThinkingTreeSolderBLACK(PS, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeElephantBLACK(PE, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeHourseBLACK(PH, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeCastleBLACK(PB, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeMinisterBLACK(PM, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
					BlitzGameThinkingTreeKingBLACK(PK, index, jindex, Order, 0, 0, 0, false, LeafAStarGreedy);
				}
			}
		}
		int JI = -1;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (Order == OrderPlate)
			{
				JI = MaxOfSixHeuristic(PS, PE, PH, PB, PM, PK);
			}
			else
			{
				JI = MinOfSixHeuristic(PS, PE, PH, PB, PM, PK);
			}
		}
		if (JI != -1)
		{
			Kind = JI;
			for (int  i = 0; i < 6; i++)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					Index[i] = index[i];
					jIndex[i] = jindex[i];
				}
			}
		}
		return abs(Kind);
	}

	void AllDraw::BlitzGameThinkingTreeCastleBLACK(int &PreviousLessB, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Castles.
		for (ik = CastleMidle; ik < CastleHigh; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 4);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < CastlesOnTable[ik].CastleThinking.HeuristicListCastle.size(); j++)
			{
				//when node is serving node continue
				if (CastlesOnTable[ik].CastleThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 4, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(4, ik, j) || CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[3] = ik;
						jIndex[3] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessB;

						 pre = CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessB = pre;

					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(4, ik, j) || CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessB || (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[3] = ik;
						jIndex[3] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessB;
						 pre = CastlesOnTable[ik].CastleThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessB = pre;
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeMinisterBLACK(int &PreviousLessM, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//Minister.
		for (ik = MinisterMidle; ik < MinisterHigh; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 5);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < MinisterOnTable[ik].MinisterThinking.HeuristicListMinister.size(); j++)
			{
				//when node is serving node continue
				if (MinisterOnTable[ik].MinisterThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 5, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(5, ik, j) || MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
					//if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
						Index[4] = ik;
						jIndex[4] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessM;
						 pre = MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessM = pre;
					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(5, ik, j) || MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessM || (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
					//if (KingDan(MinisterOnTable[ik].MinisterThinking.TableListMinister[j], Order))
						Index[4] = ik;
						jIndex[4] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessM;
						 pre = MinisterOnTable[ik].MinisterThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessM = pre;
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTreeKingBLACK(int &PreviousLessK, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{
		//King.
		for (ik = KingMidle; ik < KingHigh; ik++)
		{
			bool ac = false;
			 ac = BlitzGameThinkingTreeBoundryConditions(ik, 6);


			if (ac)
			{
				continue;
			}
			//when there is computational lists
			for (j = 0; j < KingOnTable[ik].KingThinking.HeuristicListKing.size(); j++)
			{
				//when node is serving node continue
				if (KingOnTable[ik].KingThinking.IsSupHu[j])
				{
					continue;
				}
				//when node is empty deeper and there is not computatiional node continue
				 ac = IsThereEmptyOrNonCalculatedAStarGreedyNode(Order, 6, ik, j);


				if (!ac)
				{
					continue;
				}
				//when node have kings dangoures ignore and continue.
				 ac = CheckeHuristci(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Order, ik, j, 0);


				if (!ac)
				{
					continue;
				}
				//when is self
				if (Order != AllDraw::OrderPlateDraw)
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(6, ik, j) || KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) < PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[5] = ik;
						jIndex[5] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessK;
						 pre = KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessK = pre;

					}
				}
				else
				{
					//when in learning autamata is penalty or Heuristic specified is less than specific dynamic programming int 
					if (UsedRestrictedBlitzMoveAstarGreedy(6, ik, j) || KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, HaveKilled) > PreviousLessK || (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() == 0 && UsePenaltyRegardMechnisamT))
					{
					}
					else
					{
						Index[5] = ik;
						jIndex[5] = j;
						int Hav = HaveKilled;
						int pre = PreviousLessK;
						 pre = KingOnTable[ik].KingThinking.ReturnHeuristic(ik, j, Order, false, Hav);


						HaveKilled = Hav;
						PreviousLessK = pre;
					}
				}
			}
		}
	}

	void AllDraw::BlitzGameThinkingTree(int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy)
	{

		//Initiatye Variables.
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;
		int a;
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}


		int Index[6];
		int jIndex[6];
		int PreviousLessS = -DBL_MAX, PreviousLessE = -DBL_MAX, PreviousLessH = -DBL_MAX, PreviousLessB = -DBL_MAX, PreviousLessM = -DBL_MAX, PreviousLessK = -DBL_MAX;
		if (Order != OrderPlate)
		{
			PreviousLessS = DBL_MAX;
			PreviousLessE = DBL_MAX;
			PreviousLessH = DBL_MAX;
			PreviousLessB = DBL_MAX;
			PreviousLessM = DBL_MAX;
			PreviousLessK = DBL_MAX;
		}

		if (Order == 1)
		{
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				Index[0] = -1;
				BlitzGameThinkingTreeSolderWHITE(PreviousLessS, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[1] = -1;
				BlitzGameThinkingTreeElephantWHITE(PreviousLessE, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[2] = -1;
				BlitzGameThinkingTreeHourseWHITE(PreviousLessH, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[3] = -1;
				BlitzGameThinkingTreeCastleWHITE(PreviousLessB, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[4] = -1;
				BlitzGameThinkingTreeMinisterWHITE(PreviousLessM, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[5] = -1;
				BlitzGameThinkingTreeKingWHITE(PreviousLessK, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			}
			int JI = -1;
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				JI = MaxOfSixHeuristic(PreviousLessS, PreviousLessE, PreviousLessH, PreviousLessB, PreviousLessM, PreviousLessK);
			}
			////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O3)
			{
				if (JI != -1)
				{
					if (JI == 0)
					{
						BlitzGameTreeCreationThinkingTreeSolder(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 1)
					{
						BlitzGameTreeCreationThinkingTreeElephant(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 2)
					{
						BlitzGameTreeCreationThinkingTreeHourse(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 3)
					{
						BlitzGameTreeCreationThinkingTreeCastle(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 4)
					{
						BlitzGameTreeCreationThinkingTreeMinister(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 5)
					{
						BlitzGameTreeCreationThinkingTreeKing(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
				}
			}
		}
		//For BLACK Order Blitz Game Calculate Maximum Heuristic Inclusive AStarGreedy First Game Search.
		else
		{
			////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O1)
			{
				Index[0] = -1;
				BlitzGameThinkingTreeSolderBLACK(PreviousLessS, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[1] = -1;
				BlitzGameThinkingTreeElephantBLACK(PreviousLessE, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[2] = -1;
				BlitzGameThinkingTreeHourseBLACK(PreviousLessH, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[3] = -1;
				BlitzGameThinkingTreeCastleBLACK(PreviousLessB, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[4] = -1;
				BlitzGameThinkingTreeMinisterBLACK(PreviousLessM, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
				Index[5] = -1;
				BlitzGameThinkingTreeKingBLACK(PreviousLessK, Index, jIndex, Order, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
			}
			int JI = -1;
			////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O2)
			{
				JI = MaxOfSixHeuristic(PreviousLessS, PreviousLessE, PreviousLessH, PreviousLessB, PreviousLessM, PreviousLessK);
			}
			////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O3)
			{
				if (JI != -1)
				{
					BlitzGameTreeCreationThinkingTreeSolder(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					BlitzGameTreeCreationThinkingTreeElephant(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					if (JI == 2)
					{
						BlitzGameTreeCreationThinkingTreeHourse(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					if (JI == 3)
					{
						BlitzGameTreeCreationThinkingTreeCastle(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}


					if (JI == 4)
					{
						BlitzGameTreeCreationThinkingTreeMinister(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}
					//Initiatye Variables.
					Order = DummyOrder;
					ChessRules::CurrentOrder = DummyCurrentOrder;

					if (Order == 1)
					{
						a = 1;
					}
					else
					{
						a = -1;
					}
					if (JI == 5)
					{
						BlitzGameTreeCreationThinkingTreeKing(a, Index, jIndex, Order * -1, iAStarGreedy, ik, j, FOUND, LeafAStarGreedy);
					}

				}
			}
		}

	}

	std::wstring AllDraw::Alphabet(int RowRealesed)
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

	std::wstring AllDraw::Number(int ColumnRealeased)
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

	int AllDraw::SumOfObjects(AllDraw A, int Order)
	{

		int Sum = 0;
		if (A == nullptr)
		{
			return Sum;
		}
		if (Order == 1)
		{
			for (int  i = 0; i < A.SodierMidle; i++)
			{
				if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr)
				{
					Sum += A.SolderesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = 0; i < A.ElefantMidle; i++)
			{
				if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr)
				{
					Sum += A.ElephantOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = 0; i < A.HourseMidle; i++)
			{
				if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr)
				{
					Sum += A.HoursesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = 0; i < A.CastleMidle; i++)
			{
				if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr)
				{
					Sum += A.CastlesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = 0; i < A.MinisterMidle; i++)
			{
				if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr)
				{
					Sum += A.MinisterOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = 0; i < A.KingMidle; i++)
			{
				if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr)
				{
					Sum += A.KingOnTable[i].WinOcuuredatChiled;
				}
			}
		}
		else
		{
			for (int  i = A.SodierMidle; i < A.SodierHigh; i++)
			{
				if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr)
				{
					Sum += A.SolderesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = A.ElefantMidle; i < A.ElefantHigh; i++)
			{
				if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr)
				{
					Sum += A.ElephantOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = A.HourseMidle; i < A.HourseHight; i++)
			{
				if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr)
				{
					Sum += A.HoursesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = A.CastleMidle; i < A.CastleHigh; i++)
			{
				if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr)
				{
					Sum += A.CastlesOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = A.MinisterMidle; i < A.MinisterHigh; i++)
			{
				if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr)
				{
					Sum += A.MinisterOnTable[i].WinOcuuredatChiled;
				}
			}
			for (int  i = A.KingMidle; i < A.KingHigh; i++)
			{
				if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr)
				{
					Sum += A.KingOnTable[i].WinOcuuredatChiled;
				}
			}
		}

		return Sum;
	}

	bool AllDraw::IsAtleastAWin(AllDraw A, int Order)
	{
		bool Sum = false;
		if (A == nullptr)
		{
			return Sum;
		}
		if (Order == 1)
		{
			for (int  i = 0; i < A.SodierMidle; i++)
			{
				if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr)
				{
					if (A.SolderesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = 0; i < A.ElefantMidle; i++)
			{
				if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr)
				{
					if (A.ElephantOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = 0; i < A.HourseMidle; i++)
			{
				if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr)
				{
					if (A.HoursesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = 0; i < A.CastleMidle; i++)
			{
				if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr)
				{
					if (A.CastlesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = 0; i < A.MinisterMidle; i++)
			{
				if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr)
				{
					if (A.MinisterOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = 0; i < A.KingMidle; i++)
			{
				if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr)
				{
					if (A.KingOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
		}
		else
		{
			for (int  i = A.SodierMidle; i < A.SodierHigh; i++)
			{
				if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr)
				{
					if (A.SolderesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = A.ElefantMidle; i < A.ElefantHigh; i++)
			{
				if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr)
				{
					if (A.ElephantOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = A.HourseMidle; i < A.HourseHight; i++)
			{
				if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr)
				{
					if (A.HoursesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = A.CastleMidle; i < A.CastleHigh; i++)
			{
				if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr)
				{
					if (A.CastlesOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = A.MinisterMidle; i < A.MinisterHigh; i++)
			{
				if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr)
				{
					if (A.MinisterOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
			for (int  i = A.KingMidle; i < A.KingHigh; i++)
			{
				if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr)
				{
					if (A.KingOnTable[i].WinOcuuredatChiled != 0)
					{
						Sum = true;
					}
				}
			}
		}
		return Sum;
	}

	int AllDraw::SumMinusOfObjects(AllDraw A, int Order)
	{
		int Sum = 0;
		if (!IsAtleastAWin(A, Order))
		{
			if (A == nullptr)
			{
				return Sum;
			}
			if (Order == 1)
			{
				for (int  i = 0; i < A.SodierMidle; i++)
				{
					if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.SolderesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.SolderesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 1, Order, i))
						{
							A.SolderesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = 0; i < A.ElefantMidle; i++)
				{
					if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.ElephantOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.ElephantOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 2, Order, i))
						{
							A.ElephantOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = 0; i < A.HourseMidle; i++)
				{
					if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 3, Order, i))
						{
							A.SolderesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = 0; i < A.CastleMidle; i++)
				{
					if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 4, Order, i))
						{
							A.HoursesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = 0; i < A.MinisterMidle; i++)
				{
					if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.MinisterOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.MinisterOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 5, Order, i))
						{
							A.MinisterOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = 0; i < A.KingMidle; i++)
				{
					if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr && A.KingOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.KingOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr && A.KingOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.KingOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 6, Order, i))
						{
							A.KingOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
			}
			else
			{
				for (int  i = A.SodierMidle; i < A.SodierHigh; i++)
				{
					if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.SolderesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.SolderesOnTable != nullptr && A.SolderesOnTable[i] != nullptr && A.SolderesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.SolderesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 1, Order, i))
						{
							A.SolderesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = A.ElefantMidle; i < A.ElefantHigh; i++)
				{
					if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.ElephantOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.ElephantOnTable != nullptr && A.ElephantOnTable[i] != nullptr && A.ElephantOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.ElephantOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 2, Order, i))
						{
							A.ElephantOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = A.HourseMidle; i < A.HourseHight; i++)
				{
					if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.HoursesOnTable != nullptr && A.HoursesOnTable[i] != nullptr && A.HoursesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.HoursesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 3, Order, i))
						{
							A.HoursesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = A.CastleMidle; i < A.CastleHigh; i++)
				{
					if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.CastlesOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.CastlesOnTable != nullptr && A.CastlesOnTable[i] != nullptr && A.CastlesOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.CastlesOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 4, Order, i))
						{
							A.CastlesOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = A.MinisterMidle; i < A.MinisterHigh; i++)
				{
					if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.MinisterOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.MinisterOnTable != nullptr && A.MinisterOnTable[i] != nullptr && A.MinisterOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.MinisterOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 5, Order, i))
						{
							A.MinisterOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
				for (int  i = A.KingMidle; i < A.KingHigh; i++)
				{
					if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr && A.KingOnTable[i].LoseOcuuredatChiled[0] <= 0)
					{
						Sum += A.KingOnTable[i].LoseOcuuredatChiled[0];
					}
					else if (A.KingOnTable != nullptr && A.KingOnTable[i] != nullptr && A.KingOnTable[i].LoseOcuuredatChiled[0] == 5)
					{
						Sum = A.KingOnTable[i].LoseOcuuredatChiled[0];
					}
					if (Sum == 5)
					{
						if (IsMovableLoseOcuuredatChiled(CloneATable(TableList[0]), 6, Order, i))
						{
							A.KingOnTable[i].WinOcuuredatChiled = Sum = 5;
							return 5;
						}
					}
				}
			}
		}
		return Sum;
	}

	bool AllDraw::ReturnFullGameThinkingTreeSemaphore(int ik, int kind)
	{

		//soldier
		if (kind == 1)
		{
			if (SolderesOnTable[ik].SoldierThinking.ThinkingBegin && (!SolderesOnTable[ik].SoldierThinking.ThinkingFinished))
			{
				return true;
			}
		}
		else //elephant
		{
			if (kind == 2)
			{
			if (ElephantOnTable[ik].ElefantThinking.ThinkingBegin && (!ElephantOnTable[ik].ElefantThinking.ThinkingFinished))
			{
				return true;
			}
			}
		else if (kind == 3) //hourse
		{
			if (HoursesOnTable[ik].HourseThinking.ThinkingBegin && (!HoursesOnTable[ik].HourseThinking.ThinkingFinished))
			{
				return true;
			}
		}
		else if (kind == 4) //Castle
		{
			if (CastlesOnTable[ik].CastleThinking.ThinkingBegin && (!CastlesOnTable[ik].CastleThinking.ThinkingFinished))
			{
				return true;
			}
		}
		else
		{
			if (kind == 5) //minister
			{
			if (MinisterOnTable[ik].MinisterThinking.ThinkingBegin && (!MinisterOnTable[ik].MinisterThinking.ThinkingFinished))
			{
				return true;
			}
			}
		else if (kind == 6) //king
		{
			if (KingOnTable[ik].KingThinking.ThinkingBegin && (!KingOnTable[ik].KingThinking.ThinkingFinished))
			{
				return true;
			}
		}
		}
		}

		return false;
	}

	bool AllDraw::ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(int ik, int kind, bool Penalty, int j)
	{

		//when is learning autamata
		if (Penalty)
		{
			//soldier
			if (kind == 1)
			{
				if (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else //elephant
			{
							if (kind == 2)
							{
				if (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
							}
			else if (kind == 3) //hourse
			{
				if (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else if (kind == 4) //Castle
			{
				if (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else
			{
				if (kind == 5) //minister
				{
				if (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
				}
			else if (kind == 6) //king
			{
				if (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			}
			}
		}
		else //BLACK
		{
			if (kind == 1) //soldier
			{
				if (SolderesOnTable[ik].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else
			{
					 if (kind == 2) //elephant
					 {
				if (ElephantOnTable[ik].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
					 }
			else if (kind == 3) //hourse
			{
				if (HoursesOnTable[ik].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else if (kind == 4) //Castle
			{
				if (CastlesOnTable[ik].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			else
			{
				if (kind == 5) //minister
				{
				if (MinisterOnTable[ik].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
				}
			else if (kind == 6) //king
			{
				if (KingOnTable[ik].KingThinking.PenaltyRegardListKing[j].IsRewardAction() != 1 || (!UsePenaltyRegardMechnisamT))
				{
					return true;
				}
			}
			}
			}
		}

		return false;
	}

	void AllDraw::BlitzNotValidFullGameThinkingTreePartOne(int ik, int Order, int kind)
	{

		//soldier
		if (kind == 1)
		{
			//when valid 
			if (SolderesOnTable[ik].SoldierThinking.TableListSolder.size() > SolderesOnTable[ik].SoldierThinking.AStarGreedy.size())
			{
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 2) ///elephant
		{
			//when valid 
			if (ElephantOnTable[ik].ElefantThinking.TableListElefant.size() > ElephantOnTable[ik].ElefantThinking.AStarGreedy.size())
			{
				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
				{
					//ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}
				ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 3) //hourse
		{
			//when valid 
			if (HoursesOnTable[ik].HourseThinking.TableListHourse.size() > HoursesOnTable[ik].HourseThinking.AStarGreedy.size())
			{
				if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
				{
					//HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
				}
				HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 4) //Castle
		{
			//when valid 
			if (CastlesOnTable[ik].CastleThinking.TableListCastle.size() > CastlesOnTable[ik].CastleThinking.AStarGreedy.size())
			{
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					//CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 5) //minister
		{
			//when valid 
			if (MinisterOnTable[ik].MinisterThinking.TableListMinister.size() > MinisterOnTable[ik].MinisterThinking.AStarGreedy.size())
			{
				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
				{
					//MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
				MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 6) //king
		{
			//when valid 
			if (KingOnTable[ik].KingThinking.TableListKing.size() > KingOnTable[ik].KingThinking.AStarGreedy.size())
			{
				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					//KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}

	}

	void AllDraw::BlitzNotValidFullGameThinkingTreePartTow(int ik, int Order, int kind)
	{

		if (kind == 1) //soldier
		{
			//when valid 
			if (SolderesOnTable[ik].SoldierThinking.TableListSolder.size() > SolderesOnTable[ik].SoldierThinking.AStarGreedy.size())
			{
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 2) //elephant
		{
			//when valid 
			if (ElephantOnTable[ik].ElefantThinking.TableListElefant.size() > ElephantOnTable[ik].ElefantThinking.AStarGreedy.size())
			{
				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
				{
					//ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}
				ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 3) //hourse
		{
			//when valid 
			if (HoursesOnTable[ik].HourseThinking.TableListHourse.size() > HoursesOnTable[ik].HourseThinking.AStarGreedy.size())
			{
				if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
				{
					//HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
				}
				HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 4) //Castle
		{
			//when valid 
			if (CastlesOnTable[ik].CastleThinking.TableListCastle.size() > CastlesOnTable[ik].CastleThinking.AStarGreedy.size())
			{
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					//CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 5) //minister
		{
			//when valid 
			if (MinisterOnTable[ik].MinisterThinking.TableListMinister.size() > MinisterOnTable[ik].MinisterThinking.AStarGreedy.size())
			{
				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
				{
					//MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
				MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 6) //king
		{
			//when valid 
			if (KingOnTable[ik].KingThinking.TableListKing.size() > KingOnTable[ik].KingThinking.AStarGreedy.size())
			{
				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					//KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
	}

	void AllDraw::BlitzNotValidFullGameThinkingTreePartThree(int ik, int Order, int kind)
	{


		//soldier
		if (kind == 1)
		{
			//when valid 
			if (SolderesOnTable[ik].SoldierThinking.TableListSolder.size() > SolderesOnTable[ik].SoldierThinking.AStarGreedy.size())
			{
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 2) //elephant
		{
			//when valid 
			if (ElephantOnTable[ik].ElefantThinking.TableListElefant.size() > ElephantOnTable[ik].ElefantThinking.AStarGreedy.size())
			{
				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
				{
					///ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}
				ElephantOnTable[ik].ElefantThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 3) //hourse
		{
			//when valid 
			if (HoursesOnTable[ik].HourseThinking.TableListHourse.size() > HoursesOnTable[ik].HourseThinking.AStarGreedy.size())
			{
				if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
				{
					//HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
				}
				HoursesOnTable[ik].HourseThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 4) //Castle
		{
			//when valid 
			if (CastlesOnTable[ik].CastleThinking.TableListCastle.size() > CastlesOnTable[ik].CastleThinking.AStarGreedy.size())
			{
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					//CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 5) //minister
		{
			//when valid 
			if (MinisterOnTable[ik].MinisterThinking.TableListMinister.size() > MinisterOnTable[ik].MinisterThinking.AStarGreedy.size())
			{
				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
				{
					//MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
				MinisterOnTable[ik].MinisterThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 6) //king
		{
			//when valid 
			if (KingOnTable[ik].KingThinking.TableListKing.size() > KingOnTable[ik].KingThinking.AStarGreedy.size())
			{
				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					//KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy.push_back(AllDraw(Order * -1, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged));
				KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			}
		}

	}

	void AllDraw::FullGameThinkingTreeInitialization(int ik, int j, int Order, int kind)
	{

		//soldier
		if (kind == 1)
		{
			//when valid do create of deeper node and string making
			if (SolderesOnTable[ik].SoldierThinking.TableListSolder.size() == SolderesOnTable[ik].SoldierThinking.AStarGreedy.size())
			{
				if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.empty())
				{
					//SolderesOnTable[ik].SoldierThinking.AStarGreedy = std::vector<AllDraw>();
				}
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[j].TableList.clear();
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[j].TableList.push_back(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]));
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[j].SetRowColumn(0);
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				SolderesOnTable[ik].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 2) //elephant
		{
			//when valid do create of deeper node and string making
			if (ElephantOnTable[ik].ElefantThinking.TableListElefant.size() == ElephantOnTable[ik].ElefantThinking.AStarGreedy.size())
			{
				if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.empty())
				{
					//ElephantOnTable[ik].ElefantThinking.AStarGreedy = std::vector<AllDraw>();
				}
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[j].TableList.clear();
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[j].TableList.push_back(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]));
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[j].SetRowColumn(0);
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				ElephantOnTable[ik].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 3) //hourse
		{
			//when valid do create of deeper node and string making
			if (HoursesOnTable[ik].HourseThinking.TableListHourse.size() == HoursesOnTable[ik].HourseThinking.AStarGreedy.size())
			{
				if (HoursesOnTable[ik].HourseThinking.AStarGreedy.empty())
				{
					//HoursesOnTable[ik].HourseThinking.AStarGreedy = std::vector<AllDraw>();
				}
				HoursesOnTable[ik].HourseThinking.AStarGreedy[j].TableList.clear();
				HoursesOnTable[ik].HourseThinking.AStarGreedy[j].TableList.push_back(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]));
				HoursesOnTable[ik].HourseThinking.AStarGreedy[j].SetRowColumn(0);
				HoursesOnTable[ik].HourseThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				HoursesOnTable[ik].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 4) //Castle
		{
			//when valid do create of deeper node and string making
			if (CastlesOnTable[ik].CastleThinking.TableListCastle.size() == CastlesOnTable[ik].CastleThinking.AStarGreedy.size())
			{
				if (CastlesOnTable[ik].CastleThinking.AStarGreedy.empty())
				{
					//CastlesOnTable[ik].CastleThinking.AStarGreedy = std::vector<AllDraw>();
				}
				CastlesOnTable[ik].CastleThinking.AStarGreedy[j].TableList.clear();
				CastlesOnTable[ik].CastleThinking.AStarGreedy[j].TableList.push_back(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]));
				CastlesOnTable[ik].CastleThinking.AStarGreedy[j].SetRowColumn(0);
				CastlesOnTable[ik].CastleThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				CastlesOnTable[ik].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 5) //minister
		{
			//when valid do create of deeper node and string making
			if (MinisterOnTable[ik].MinisterThinking.TableListMinister.size() == MinisterOnTable[ik].MinisterThinking.AStarGreedy.size())
			{
				if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.empty())
				{
					//MinisterOnTable[ik].MinisterThinking.AStarGreedy = std::vector<AllDraw>();
				}
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[j].TableList.clear();
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[j].TableList.push_back(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]));
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[j].SetRowColumn(0);
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				MinisterOnTable[ik].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}
		else if (kind == 6) //king
		{
			//when valid do create of deeper node and string making
			if (KingOnTable[ik].KingThinking.TableListKing.size() == KingOnTable[ik].KingThinking.AStarGreedy.size())
			{
				if (KingOnTable[ik].KingThinking.AStarGreedy.empty())
				{
					//KingOnTable[ik].KingThinking.AStarGreedy = std::vector<AllDraw>();
				}
				KingOnTable[ik].KingThinking.AStarGreedy[j].TableList.clear();
				KingOnTable[ik].KingThinking.AStarGreedy[j].TableList.push_back(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]));
				KingOnTable[ik].KingThinking.AStarGreedy[j].SetRowColumn(0);
				KingOnTable[ik].KingThinking.AStarGreedy[j].SetRowColumnFinishedWait();
				KingOnTable[ik].KingThinking.AStarGreedy[j].AStarGreedyStringNode = *this;
			}
		}

	}

	void AllDraw::OpOfFullGameThinkingTree(int ik, int j, int Order, int iAStarGreedy, int ii, int jj, int a, int kind, bool FOUND, int LeafAStarGreedy)
	{
		if (UsedRestrictedBlitzMoveAstarGreedy(kind, ik, j))
		{
			return;
		}
		NumberOfnewMove++;
		//soldier
		if (kind == 1)
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 1))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(SolderesOnTable[ik].SoldierThinking.Row) + Number(SolderesOnTable[ik].SoldierThinking.Column) + Alphabet(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0]) + Number(SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][0];
			auto jjj = SolderesOnTable[ik].SoldierThinking.RowColumnSoldier[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]);
			int **Tab = CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]);
			int Ord = Order;
			 SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, ii, jj, a, CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Ord * -1, false, FOUND, LeafAStarGreedy);

			SolderesOnTable[ik].SoldierThinking.AStarGreedy[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (SolderesOnTable[ik].SoldierThinking.AStarGreedyMove.size() > 0)
			{
				SolderesOnTable[ik].SoldierThinking.AStarGreedyMove[SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() - 1] = true;
			}
		}
		else if (kind == 2) //elephant
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 2))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(ElephantOnTable[ik].ElefantThinking.Row) + Number(ElephantOnTable[ik].ElefantThinking.Column) + Alphabet(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0]) + Number(ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][0];
			auto jjj = ElephantOnTable[ik].ElefantThinking.RowColumnElefant[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]);
			int **Tab = CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]);
			int Ord = Order;
			 ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]), Ord * -1, false, FOUND, LeafAStarGreedy);

			ElephantOnTable[ik].ElefantThinking.AStarGreedy[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (ElephantOnTable[ik].ElefantThinking.AStarGreedyMove.size() > 0)
			{
				ElephantOnTable[ik].ElefantThinking.AStarGreedyMove[ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() - 1] = true;
			}
		}
		else if (kind == 3) //hourse
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 3))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(HoursesOnTable[ik].HourseThinking.Row) + Number(HoursesOnTable[ik].HourseThinking.Column) + Alphabet(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0]) + Number(HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][0];
			auto jjj = HoursesOnTable[ik].HourseThinking.RowColumnHourse[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]);
			int **Tab = CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]);
			int Ord = Order;
			 HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]), Ord * -1, false, FOUND, LeafAStarGreedy);

			HoursesOnTable[ik].HourseThinking.AStarGreedy[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (HoursesOnTable[ik].HourseThinking.AStarGreedyMove.size() > 0)
			{
				HoursesOnTable[ik].HourseThinking.AStarGreedyMove[HoursesOnTable[ik].HourseThinking.AStarGreedy.size() - 1] = true;
			}
		}
		else if (kind == 4) //Castle
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 4))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(CastlesOnTable[ik].CastleThinking.Row) + Number(CastlesOnTable[ik].CastleThinking.Column) + Alphabet(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0]) + Number(CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][0];
			auto jjj = CastlesOnTable[ik].CastleThinking.RowColumnCastle[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]);
			int **Tab = CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]);
			int Ord = Order;
			 CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]), Ord * -1, false, FOUND, LeafAStarGreedy);

			CastlesOnTable[ik].CastleThinking.AStarGreedy[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (CastlesOnTable[ik].CastleThinking.AStarGreedyMove.size() > 0)
			{
				CastlesOnTable[ik].CastleThinking.AStarGreedyMove[CastlesOnTable[ik].CastleThinking.AStarGreedy.size() - 1] = true;
			}
		}
		else if (kind == 5) //minister
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 5))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(MinisterOnTable[ik].MinisterThinking.Row) + Number(MinisterOnTable[ik].MinisterThinking.Column) + Alphabet(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0]) + Number(MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][0];
			auto jjj = MinisterOnTable[ik].MinisterThinking.RowColumnMinister[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]);
			int **Tab = CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]);
			int Ord = Order;
			 MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Ord * -1, false, FOUND, LeafAStarGreedy);

			MinisterOnTable[ik].MinisterThinking.AStarGreedy[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (MinisterOnTable[ik].MinisterThinking.AStarGreedyMove.size() > 0)
			{
				MinisterOnTable[ik].MinisterThinking.AStarGreedyMove[MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() - 1] = true;
			}
		}
		else if (kind == 6) //king
		{
			//when verfied is not valied return
			//if (!IsNotAStarGreedyConanaied(ik, j, 6))

			//minitor
			OutPutAction = std::wstring(L" ") + Alphabet(KingOnTable[ik].KingThinking.Row) + Number(KingOnTable[ik].KingThinking.Column) + Alphabet(KingOnTable[ik].KingThinking.RowColumnKing[j][0]) + Number(KingOnTable[ik].KingThinking.RowColumnKing[j][1]);
			//if (Order == 1)
			//else

			//operational 
			PerceptionCount++;
			auto iii = KingOnTable[ik].KingThinking.RowColumnKing[j][0];
			auto jjj = KingOnTable[ik].KingThinking.RowColumnKing[j][1];
			int aa = a;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]);
			int **Tab = CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]);
			int Ord = Order;
			 KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].InitiateAStarGreedyt(iAStarGreedy, iii, jjj, aa, CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Ord * -1, false, FOUND, LeafAStarGreedy);


			KingOnTable[ik].KingThinking.AStarGreedy[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1].AStarGreedyStringNode = *this;
			if (KingOnTable[ik].KingThinking.AStarGreedyMove.size() > 0)
			{
				KingOnTable[ik].KingThinking.AStarGreedyMove[KingOnTable[ik].KingThinking.AStarGreedy.size() - 1] = true;
			}
		}
	}

	bool AllDraw::ReturnFullGameThinkingTreeIligalSemaphore(int ik, int kind)
	{
		if (kind == 1)
		{
			if (SolderesOnTable[ik].SoldierThinking.TableListSolder.empty())
			{
				return true;
			}
		}
		else //elephant
		{
		  if (kind == 2)
		  {
			if (ElephantOnTable[ik].ElefantThinking.TableListElefant.empty())
			{
				return true;
			}
		  }
		else if (kind == 3) //hourse
		{
			if (HoursesOnTable[ik].HourseThinking.TableListHourse.empty())
			{
				return true;
			}
		}
		else if (kind == 4) //Castle
		{
			if (CastlesOnTable[ik].CastleThinking.TableListCastle.empty())
			{
				return true;
			}
		}
		else
		{
			if (kind == 5) //minister
			{
			if (MinisterOnTable[ik].MinisterThinking.TableListMinister.empty())
			{
				return true;
			}
			}
		else if (kind == 6) //king
		{
			if (KingOnTable[ik].KingThinking.TableListKing.empty())
			{
				return true;
			}
		}
		}
		}
		return false;
	}

	void AllDraw::ReturnFullGameThinkingTreeSemaphoreAs(int Order, int iAStarGreedy, int ik, int Kind)
	{
		////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO1)
		{
			TaskBegin++;
			//main decistion
			while (ReturnFullGameThinkingTreeSemaphore(ik, Kind))
			{
				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					break;
				}
			}

		}
	}

	int AllDraw::FullGameThinkingTreeWin(int Order)
	{

		if (Order == 1)
		{
			for (int ik = 0; ik < SodierMidle; ik++)
			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() && SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[ik].WinOcuuredatChiled += SolderesOnTable[ik].SoldierThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					SolderesOnTable[ik].SoldierThinking.TowDistrurbProperUse(SolderesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < ElefantMidle; ik++)
			{
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() && ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[ik].WinOcuuredatChiled += ElephantOnTable[ik].ElefantThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					ElephantOnTable[ik].ElefantThinking.TowDistrurbProperUse(ElephantOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < HourseMidle; ik++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size() && HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[ik].WinOcuuredatChiled += HoursesOnTable[ik].HourseThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}

					HoursesOnTable[ik].HourseThinking.TowDistrurbProperUse(HoursesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < CastleMidle; ik++)
			{
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size() && CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[ik].WinOcuuredatChiled += CastlesOnTable[ik].CastleThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					CastlesOnTable[ik].CastleThinking.TowDistrurbProperUse(CastlesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < MinisterMidle; ik++)
			{
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() && MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[ik].WinOcuuredatChiled += MinisterOnTable[ik].MinisterThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					MinisterOnTable[ik].MinisterThinking.TowDistrurbProperUse(MinisterOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < KingMidle; ik++)
			{
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size() && KingOnTable[ik].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[ik].WinOcuuredatChiled += KingOnTable[ik].KingThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					KingOnTable[ik].KingThinking.TowDistrurbProperUse(KingOnTable[ik].LoseOcuuredatChiled);
				}
			}
		}
		else
		{
			for (int ik = SodierMidle; ik < SodierHigh; ik++)
			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() && SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[ik].WinOcuuredatChiled += SolderesOnTable[ik].SoldierThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					//non learning autamata victom leafs
					SolderesOnTable[ik].SoldierThinking.TowDistrurbProperUse(SolderesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = ElefantMidle; ik < ElefantMidle; ik++)
			{
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() && ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[ik].WinOcuuredatChiled += ElephantOnTable[ik].ElefantThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					ElephantOnTable[ik].ElefantThinking.TowDistrurbProperUse(ElephantOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = HourseMidle; ik < HourseHight; ik++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size() && HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[ik].WinOcuuredatChiled += HoursesOnTable[ik].HourseThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					HoursesOnTable[ik].HourseThinking.TowDistrurbProperUse(HoursesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = CastleMidle; ik < CastleHigh; ik++)
			{
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size() && CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[ik].WinOcuuredatChiled += CastlesOnTable[ik].CastleThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					CastlesOnTable[ik].CastleThinking.TowDistrurbProperUse(CastlesOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = KingMidle; ik < KingHigh; ik++)
			{
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() && MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[ik].WinOcuuredatChiled += MinisterOnTable[ik].MinisterThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					MinisterOnTable[ik].MinisterThinking.TowDistrurbProperUse(MinisterOnTable[ik].LoseOcuuredatChiled);
				}
			}
			for (int ik = 0; ik < KingMidle; ik++)
			{
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{ //non learning autamata victory leafs
					for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size() && KingOnTable[ik].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[ik].WinOcuuredatChiled += KingOnTable[ik].KingThinking.AStarGreedy[h].FullGameThinkingTreeWin(Order * -1);
					}
					KingOnTable[ik].KingThinking.TowDistrurbProperUse(KingOnTable[ik].LoseOcuuredatChiled);
				}
			}
		}
		int Sum = 0;
		//if (this.AStarGreedyStringNode != null)
		{
			if (Order == 1)
			{
				for (int  i = 0; i < this->SodierMidle; i++)
				{
					if (this->SolderesOnTable != nullptr && this->SolderesOnTable[i] != nullptr)
					{
						Sum += this->SolderesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = 0; i < this->ElefantMidle; i++)
				{
					if (this->ElephantOnTable != nullptr && this->ElephantOnTable[i] != nullptr)
					{
						Sum += this->ElephantOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = 0; i < this->HourseMidle; i++)
				{
					if (this->HoursesOnTable != nullptr && this->HoursesOnTable[i] != nullptr)
					{
						Sum += this->HoursesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = 0; i < this->CastleMidle; i++)
				{
					if (this->CastlesOnTable != nullptr && this->CastlesOnTable[i] != nullptr)
					{
						Sum += this->CastlesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = 0; i < this->MinisterMidle; i++)
				{
					if (this->MinisterOnTable != nullptr && this->MinisterOnTable[i] != nullptr)
					{
						Sum += this->MinisterOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = 0; i < this->KingMidle; i++)
				{
					if (this->KingOnTable != nullptr && this->KingOnTable[i] != nullptr)
					{
						Sum += this->KingOnTable[i].WinOcuuredatChiled;
					}
				}
			}
			else
			{
				for (int  i = this->SodierMidle; i < this->SodierHigh; i++)
				{
					if (this->SolderesOnTable != nullptr && this->SolderesOnTable[i] != nullptr)
					{
						Sum += this->SolderesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = this->ElefantMidle; i < this->ElefantHigh; i++)
				{
					if (this->ElephantOnTable != nullptr && this->ElephantOnTable[i] != nullptr)
					{
						Sum += this->ElephantOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = this->HourseMidle; i < this->HourseHight; i++)
				{
					if (this->HoursesOnTable != nullptr && this->HoursesOnTable[i] != nullptr)
					{
						Sum += this->HoursesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = this->CastleMidle; i < this->CastleHigh; i++)
				{
					if (this->CastlesOnTable != nullptr && this->CastlesOnTable[i] != nullptr)
					{
						Sum += this->CastlesOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = this->MinisterMidle; i < this->MinisterHigh; i++)
				{
					if (this->MinisterOnTable != nullptr && this->MinisterOnTable[i] != nullptr)
					{
						Sum += this->MinisterOnTable[i].WinOcuuredatChiled;
					}
				}
				for (int  i = this->KingMidle; i < this->KingHigh; i++)
				{
					if (this->KingOnTable != nullptr && this->KingOnTable[i] != nullptr)
					{
						Sum += this->KingOnTable[i].WinOcuuredatChiled;
					}
				}
			}
		}
		return Sum;
	}

	int AllDraw::FullGameThinkingTreeLose(int Order)
	{
		if (Order == 1)
		{
			for (int ik = 0; ik < SodierMidle; ik++)
			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() && SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[ik].LoseOcuuredatChiled[0] += SolderesOnTable[ik].SoldierThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = 0; ik < ElefantMidle; ik++)
			{
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() && ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[ik].LoseOcuuredatChiled[0] += ElephantOnTable[ik].ElefantThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = 0; ik < HourseMidle; ik++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size() && HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[ik].LoseOcuuredatChiled[0] += HoursesOnTable[ik].HourseThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = 0; ik < CastleMidle; ik++)
			{
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{
					for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size() && CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[ik].LoseOcuuredatChiled[0] += CastlesOnTable[ik].CastleThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = 0; ik < MinisterMidle; ik++)
			{
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() && MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[ik].LoseOcuuredatChiled[0] += MinisterOnTable[ik].MinisterThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = 0; ik < KingMidle; ik++)
			{
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size() && KingOnTable[ik].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[ik].LoseOcuuredatChiled[0] += KingOnTable[ik].KingThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
		}
		else
		{
			for (int ik = SodierMidle; ik < SodierHigh; ik++)
			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() && SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[ik].LoseOcuuredatChiled[0] += SolderesOnTable[ik].SoldierThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = ElefantMidle; ik < ElefantMidle; ik++)
			{
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() && ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[ik].LoseOcuuredatChiled[0] += ElephantOnTable[ik].ElefantThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = HourseMidle; ik < HourseHight; ik++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < HoursesOnTable[ik].HourseThinking.AStarGreedy.size() && HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[ik].LoseOcuuredatChiled[0] += HoursesOnTable[ik].HourseThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = CastleMidle; ik < CastleHigh; ik++)
			{
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{
					for (int h = 0; h < CastlesOnTable[ik].CastleThinking.AStarGreedy.size() && CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[ik].LoseOcuuredatChiled[0] += CastlesOnTable[ik].CastleThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = MinisterMidle; ik < MinisterHigh; ik++)
			{
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() && MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[ik].LoseOcuuredatChiled[0] += MinisterOnTable[ik].MinisterThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
			for (int ik = KingMidle; ik < KingHigh; ik++)
			{
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{ //non learning autamata victom leafs
					for (int h = 0; h < KingOnTable[ik].KingThinking.AStarGreedy.size() && KingOnTable[ik].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[ik].LoseOcuuredatChiled[0] += KingOnTable[ik].KingThinking.AStarGreedy[h].FullGameThinkingTreeLose(Order * -1);
					}
				}
			}
		}
		int Sum = 0;
		//if (this.AStarGreedyStringNode != null)
		{
			{
			//if (!IsAtleastAWin(this, Order))
				if (Order == 1)
				{
					for (int  i = 0; i < this->SodierMidle; i++)
					{
						if (this->SolderesOnTable != nullptr && this->SolderesOnTable[i] != nullptr)
						{
							Sum += this->SolderesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = 0; i < this->ElefantMidle; i++)
					{
						if (this->ElephantOnTable != nullptr && this->ElephantOnTable[i] != nullptr)
						{
							Sum += this->ElephantOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = 0; i < this->HourseMidle; i++)
					{
						if (this->HoursesOnTable != nullptr && this->HoursesOnTable[i] != nullptr)
						{
							Sum += this->HoursesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = 0; i < this->CastleMidle; i++)
					{
						if (this->CastlesOnTable != nullptr && this->CastlesOnTable[i] != nullptr)
						{
							Sum += this->CastlesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = 0; i < this->MinisterMidle; i++)
					{
						if (this->MinisterOnTable != nullptr && this->MinisterOnTable[i] != nullptr)
						{
							Sum += this->MinisterOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = 0; i < this->KingMidle; i++)
					{
						if (this->KingOnTable != nullptr && this->KingOnTable[i] != nullptr)
						{
							Sum += this->KingOnTable[i].LoseOcuuredatChiled[0];
						}
					}
				}
				else
				{
					for (int  i = this->SodierMidle; i < this->SodierHigh; i++)
					{
						if (this->SolderesOnTable != nullptr && this->SolderesOnTable[i] != nullptr)
						{
							Sum += this->SolderesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = this->ElefantMidle; i < this->ElefantHigh; i++)
					{
						if (this->ElephantOnTable != nullptr && this->ElephantOnTable[i] != nullptr)
						{
							Sum += this->ElephantOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = this->HourseMidle; i < this->HourseHight; i++)
					{
						if (this->HoursesOnTable != nullptr && this->HoursesOnTable[i] != nullptr)
						{
							Sum += this->HoursesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = this->CastleMidle; i < this->CastleHigh; i++)
					{
						if (this->CastlesOnTable != nullptr && this->CastlesOnTable[i] != nullptr)
						{
							Sum += this->CastlesOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = this->MinisterMidle; i < this->MinisterHigh; i++)
					{
						if (this->MinisterOnTable != nullptr && this->MinisterOnTable[i] != nullptr)
						{
							Sum += this->MinisterOnTable[i].LoseOcuuredatChiled[0];
						}
					}
					for (int  i = this->KingMidle; i < this->KingHigh; i++)
					{
						if (this->KingOnTable != nullptr && this->KingOnTable[i] != nullptr)
						{
							Sum += this->KingOnTable[i].LoseOcuuredatChiled[0];
						}
					}
				}

			}
		}
		return Sum;
	}

	bool AllDraw::FullGameThinkingTreeSoldier(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 1))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 1);


			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{
				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}
			}
			//Parallel.For(0, SolderesOnTable[ik].SoldierThinking.TableListSolder.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < SolderesOnTable[ik].SoldierThinking.TableListSolder.size(); j++)
			{
				if (IsSupHuTrue(ik, j, 0, 1))
				{
					continue;
				}
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//when node have kings dangoures ignore and continue.
					if (CheckeHuristci(CloneATable(SolderesOnTable[ik].SoldierThinking.TableListSolder[j]), Order, ik, j, 0))
					{
						continue;
					}
					//sereved continuce
					if (SolderesOnTable[ik].SoldierThinking.IsSupHu[j])
					{
						continue;
					}
					//self do
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 1, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[0]!= -1)
								{
									//object kind semaphore
									if (ik != Index[0])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 1);
										continue;
									}
									else //computational lists semaphore
									{
									if (j != jindex[0])
									{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 1);
										continue;
									}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 1);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 1);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}
							//when deeper is valid
							if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 1, FOUND, LeafAStarGreedy);
									Do = true;
								}
							}
						}
					}
					else
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 1, false, j))
						{
							//when do permite
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[0]!= -1)
								{
									//object kind semaphore
									if (ik != Index[0])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 1);
										continue;
									}
									else //computational lists semaphore
									{
									if (j != jindex[0])
									{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 1);
										continue;
									}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 1);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 1);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}
							//when deeper is valid
							if (SolderesOnTable[ik].SoldierThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 1, FOUND, LeafAStarGreedy);
									Do = true;
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
				TaskEnd++;
			}
		}
		return Do;
		//Elephant
	}

	bool AllDraw::FullGameThinkingTreeSoldierWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[0] = true;

			for (int ik = 0; ik < SodierMidle; ik++)

			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeSoldier(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeElephant(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 2))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 2);

			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}

			}
			////Parallel.For(0, ElephantOnTable[ik].ElefantThinking.TableListElefant.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < ElephantOnTable[ik].ElefantThinking.TableListElefant.size(); j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					if (IsSupHuTrue(ik, j, 0, 2))
					{
						continue;
					}
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//when node have kings dangoures ignore and continue.
					if (CheckeHuristci(CloneATable(ElephantOnTable[ik].ElefantThinking.TableListElefant[j]), Order, ik, j, 0))
					{
						continue;
					}
					//sereved continuce
					if (ElephantOnTable[ik].ElefantThinking.IsSupHu[j])
					{
						continue;
					}
					//self do
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 2, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[1] != -1)
								{
									//object kind semaphore
									if (ik != Index[1])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 2);
										continue;
									}
									else
									{
										if (j != jindex[1])
										{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 2);
										continue;
										}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 2);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 2);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

								//when deeper is valid
								if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0)
								{
									////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O)
									{
										//do deeper
										OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 2, FOUND, LeafAStarGreedy);
										Do = true;
									}
								}
							}
						}
					}
					else
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 2, false, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[1] != -1)
								{
									//object kind semaphore
									if (ik != Index[1])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 2);
										continue;
									}
									else
									{
										if (j != jindex[1])
										{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 2);
										continue;
										}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 2);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 2);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

								//when deeper is valid
								if (ElephantOnTable[ik].ElefantThinking.AStarGreedy.size() > 0)
								{
									////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O)
									{
										//do deeper
										OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 2, FOUND, LeafAStarGreedy);
										Do = true;
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
				TaskEnd++;
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeElephantWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[1] = true;
			//Elephant
		   for (int ik = 0; ik < ElefantMidle; ik++)

		   {
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeElephant(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
		   }
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeHourse(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 3))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 3);


			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}

			}
			////Parallel.For(0, HoursesOnTable[ik].HourseThinking.TableListHourse.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < HoursesOnTable[ik].HourseThinking.TableListHourse.size(); j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					if (IsSupHuTrue(ik, j, 0, 3))
					{
						continue;
					}
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//when node have kings dangoures ignore and continue.
					if (CheckeHuristci(CloneATable(HoursesOnTable[ik].HourseThinking.TableListHourse[j]), Order, ik, j, 0))
					{
						continue;
					}
					//sereved continuce
					if (HoursesOnTable[ik].HourseThinking.IsSupHu[j])
					{
						continue;
					}

					//self do
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 3, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[2] != -1)
								{
									//object kind semaphore
									if (ik != Index[2])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 3);
										continue;
									}
									else
									{
										if (j != jindex[2])
										{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 3);
										continue;
										}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 3);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 3);
							}

							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{

							}


							if (HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 3, FOUND, LeafAStarGreedy);
									Do = true;
								}
							}
						}
						else
						{
							//when certification for continued of code satisfied
							if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 3, false, j))
							{
								//when blitz game (limited game)
								if (AllDraw::Blitz)
								{
									//when do permite
									if (Index[2] != -1)
									{
										//object kind semaphore
										if (ik != Index[2])
										{
											//satisfied of created deeper one
											BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 3);
											continue;
										}
										else
										{
											if (j != jindex[2])
											{
											//satisfied of created deeper tow
											BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 3);
											continue;
											}
										}
									}
									else
									{
										//satisfied of created deeper three
										BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 3);
										continue;
									}
								}
								else
								{
									BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 3);
								}

								////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O3)
								{
									//initiate for satisfied full game primary conditions

								}


								//when deeper is valid
								if (HoursesOnTable[ik].HourseThinking.AStarGreedy.size() > 0)
								{
									////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
									////lock (O)
									{
										//do deeper
										OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 3, FOUND, LeafAStarGreedy);
										Do = true;
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
				TaskEnd++;
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeHourseWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[2] = true;
			//Hourse.
			for (int ik = 0; ik < HourseMidle; ik++)
			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeHourse(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);

					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeCastle(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 4))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 4);

			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}

			}
			////Parallel.For(0, CastlesOnTable[ik].CastleThinking.TableListCastle.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < CastlesOnTable[ik].CastleThinking.TableListCastle.size(); j++)
			{
				if (IsSupHuTrue(ik, j, 0, 4))
				{
					continue;
				}
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				//when node have kings dangoures ignore and continue.
				if (CheckeHuristci(CloneATable(CastlesOnTable[ik].CastleThinking.TableListCastle[j]), Order, ik, j, 0))
				{
					continue;
				}
				//sereved continuce
				if (CastlesOnTable[ik].CastleThinking.IsSupHu[j])
				{
					continue;
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//self do
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 4, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[3] != -1)
								{
									//object kind semaphore
									if (ik != Index[3])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 4);
										continue;
									}
									else
									{
										if (j != jindex[0])
										{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 4);
										continue;
										}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 4);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 4);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							//when deeper is valid
							if (CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 4, FOUND, LeafAStarGreedy);
									Do = true;
								}
							}
						}
					}
					else
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 4, false, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[3] != -1)
								{
									//object kind semaphore
									if (ik != Index[3])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 4);
										continue;
									}
									else
									{
										if (j != jindex[0])
										{
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 4);
										continue;
										}
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 4);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 4);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							//when deeper is valid
							if (CastlesOnTable[ik].CastleThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 4, FOUND, LeafAStarGreedy);
									Do = true;
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
				TaskEnd++;
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeCastleWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[3] = true;
			//Castle.
			 for (int ik = 0; ik < CastleMidle; ik++)

			 {
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeCastle(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);

					}
				}
			 }
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeMinister(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 5))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 5);


			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}

			}
			////Parallel.For(0, MinisterOnTable[ik].MinisterThinking.TableListMinister.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < MinisterOnTable[ik].MinisterThinking.TableListMinister.size(); j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					if (IsSupHuTrue(ik, j, 0, 5))
					{
						continue;
					}
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//when node have kings dangoures ignore and continue.
					if (CheckeHuristci(CloneATable(MinisterOnTable[ik].MinisterThinking.TableListMinister[j]), Order, ik, j, 0))
					{
						continue;
					}
					//sereved continuce
					if (MinisterOnTable[ik].MinisterThinking.IsSupHu[j])
					{
						continue;
					}


					//self do
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 5, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[4] != -1)
								{
									//object kind semaphore
									if (ik != Index[4])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 5);
										continue;
									}
									else
									{
										 if (j != jindex[4])
										 {
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 5);
										continue;
										 }
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 5);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 5);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							//when deeper is valid
							if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 5, FOUND, LeafAStarGreedy);
									Do = true;
								}
							}
						}
					}
					else
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 5, false, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[4] != -1)
								{
									//object kind semaphore
									if (ik != Index[4])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 5);
										continue;
									}
									else
									{
										 if (j != jindex[4])
										 {
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 5);
										continue;
										 }
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 5);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 5);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							if (MinisterOnTable[ik].MinisterThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 5, FOUND, LeafAStarGreedy);
									Do = true;
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
				TaskEnd++;
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeMinisterWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[4] = true;
			//Minister.
			   for (int ik = 0; ik < MinisterMidle; ik++)

			   {
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeMinister(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			   }
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeKing(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			if (ReturnFullGameThinkingTreeIligalSemaphore(ik, 6))
			{
				return false;
			}
			//semaphore
			 ReturnFullGameThinkingTreeSemaphoreAs(Order, iAStarGreedy, ik, 6);


			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{

				//when search finished stop and return
				if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
				{
					return false;
				}


			}
			if (KingOnTable[ik].KingThinking.TableListKing.empty())
			{
				return Do;
			}
			// //Parallel.For(0, KingOnTable[ik].KingThinking.TableListKing.Count, j =>
			//operational computation secxistence
			for (int  j = 0; j < KingOnTable[ik].KingThinking.TableListKing.size(); j++)
			{
				////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOOOO)
				{
					if (IsSupHuTrue(ik, j, 0, 6))
					{
						continue;
					}
					//when search finished stop and return
					if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
					{
						return false;
					}
				}
				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					//when node have kings dangoures ignore and continue.
					if (CheckeHuristci(CloneATable(KingOnTable[ik].KingThinking.TableListKing[j]), Order, ik, j, 0))
					{
						continue;
					}
					//sereved continuce
					if (KingOnTable[ik].KingThinking.IsSupHu[j])
					{
						continue;
					}
					//when is self
					if (Order != AllDraw::OrderPlateDraw)
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 6, true, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[5] != -1)
								{
									//object kind semaphore
									if (ik != Index[5])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 6);
										continue;
									}
									else
									{
										 if (j != jindex[5])
										 {
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 6);
										continue;
										 }
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 6);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 6);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							//when deeper is valid
							if (KingOnTable[ik].KingThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									//do deeper
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 6, FOUND, LeafAStarGreedy);
									Do = true;
								}
							}
						}
					}
					else
					{
						//when certification for continued of code satisfied
						if (ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(ik, 6, false, j))
						{
							//when blitz game (limited game)
							if (AllDraw::Blitz)
							{
								//when do permite
								if (Index[5] != -1)
								{
									//object kind semaphore
									if (ik != Index[5])
									{
										//satisfied of created deeper one
										BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 6);
										continue;
									}
									else
									{
										 if (j != jindex[5])
										 {
										//satisfied of created deeper tow
										BlitzNotValidFullGameThinkingTreePartTow(ik, Order, 6);
										continue;
										 }
									}
								}
								else
								{
									//satisfied of created deeper three
									BlitzNotValidFullGameThinkingTreePartThree(ik, Order, 6);
									continue;
								}
							}
							else
							{
								BlitzNotValidFullGameThinkingTreePartOne(ik, Order, 6);
							}
							////auto o3 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (O3)
							{
								//initiate for satisfied full game primary conditions

							}


							if (KingOnTable[ik].KingThinking.AStarGreedy.size() > 0)
							{
								////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
								////lock (O)
								{
									OpOfFullGameThinkingTree(ik, j, Order, iAStarGreedy, ii, jj, a, 6, FOUND, LeafAStarGreedy);
									Do = true;
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
				TaskEnd++;
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeKingWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{

			//King.
			ThinkingAllowed[5] = true;
			for (int ik = 0; ik < KingMidle; ik++)

			{
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeKing(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);

					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeSoldierBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[6] = true;
			for (int ik = SodierMidle; ik < SodierHigh; ik++)

			{
				if (SolderesOnTable != nullptr && SolderesOnTable[ik] != nullptr && SolderesOnTable[ik].SoldierThinking != nullptr && SolderesOnTable[ik].SoldierThinking!= nullptr)
				{
					//Soldier.
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeSoldier(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeElephantBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[7] = true;
			//Elephant
			for (int ik = ElefantMidle; ik < ElefantHigh; ik++)

			{
				if (ElephantOnTable != nullptr && ElephantOnTable[ik] != nullptr && ElephantOnTable[ik].ElefantThinking != nullptr && ElephantOnTable[ik].ElefantThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeElephant(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeHourseBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[8] = true;
			//Hourse.
			for (int ik = HourseMidle; ik < HourseHight; ik++)

			{
				if (HoursesOnTable != nullptr && HoursesOnTable[ik] != nullptr && HoursesOnTable[ik].HourseThinking != nullptr && HoursesOnTable[ik].HourseThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeHourse(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeCastleBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[9] = true;
			//Castles.
			  for (int ik = CastleMidle; ik < CastleMidle; ik++)

			  {
				if (CastlesOnTable != nullptr && CastlesOnTable[ik] != nullptr && CastlesOnTable[ik].CastleThinking != nullptr && CastlesOnTable[ik].CastleThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeCastle(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			  }
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeMinisterBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[10] = true;
			//Minister.
			for (int ik = MinisterMidle; ik < MinisterHigh; ik++)

			{
				if (MinisterOnTable != nullptr && MinisterOnTable[ik] != nullptr && MinisterOnTable[ik].MinisterThinking != nullptr && MinisterOnTable[ik].MinisterThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeMinister(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			}
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeKingBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O1)
		{
			ThinkingAllowed[11] = true;
			//King.
			  for (int ik = KingMidle; ik < KingHigh; ik++)

			  {
				if (KingOnTable != nullptr && KingOnTable[ik] != nullptr && KingOnTable[ik].KingThinking != nullptr && KingOnTable[ik].KingThinking!= nullptr)
				{
					////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (O)
					{
						 Do = FullGameThinkingTreeKing(ik, a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);

						//TH.Add(array);
					}
				}
			  }
		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{
		////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOOOO)
		{
			bool Do = false;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1;
							int Ord1 = OrderP;
							int a1 = a;
							int iAStarGreedy1 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeSoldierWHITE(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);



							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii2 = ii, jj2 = jj, ik12 = ik1, j12 = j1;
							int Ord2 = Order;
							int a2 = a;
							int iAStarGreedy2 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeElephantWHITE(a2, Ord2, iAStarGreedy2, ii2, jj2, ik12, j12, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
													   if (Order == 1)
													   {
								a = 1;
													   }
							else
							{
								a = -1;
							}


							int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
							int Ord3 = Order;
							int a3 = a;
							int iAStarGreedy3 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeHourseWHITE(a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
							int Ord4 = Order;
							int a4 = a;
							int iAStarGreedy4 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeCastleWHITE(a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
							int Ord5 = Order;
							int a5 = a;
							int iAStarGreedy5 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeMinisterWHITE(a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
							int Ord6 = Order;
							int a6 = a;
							int iAStarGreedy6 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeKingWHITE(a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);



							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}




			return Do;
		}
	}

	bool AllDraw::FullGameThinkingTreeBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{
		////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOOOO)
		{
			bool Do = false;
			int DummyOrder = Order;
			int DummyCurrentOrder = ChessRules::CurrentOrder;

						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1;
							int Ord1 = OrderP;
							int a1 = a;
							int iAStarGreedy1 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeSoldierBLACK(a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);



							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii2 = ii, jj2 = jj, ik12 = ik1, j12 = j1;
							int Ord2 = Order;
							int a2 = a;
							int iAStarGreedy2 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeElephantBLACK(a2, Ord2, iAStarGreedy2, ii2, jj2, ik12, j12, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
							int Ord3 = Order;
							int a3 = a;
							int iAStarGreedy3 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeHourseBLACK(a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
							int Ord4 = Order;
							int a4 = a;
							int iAStarGreedy4 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeCastleBLACK(a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
							int Ord5 = Order;
							int a5 = a;
							int iAStarGreedy5 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeMinisterBLACK(a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);



							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;

							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
							int Ord6 = Order;
							int a6 = a;
							int iAStarGreedy6 = iAStarGreedy;

							 Do |= this->FullGameThinkingTreeKingBLACK(a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);



							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}



			return Do;
		}
	}

	bool AllDraw::FullGameThinkingTree(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		bool Do = false;
		//Initiatye Variables.
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;
		int a;
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}
		////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOOOO)
		{
			//when search finished stop and return
			if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
			{
				return false;
			}
		}
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//when blitz game (limited game)
			if (AllDraw::Blitz)
			{
				FullGameMakimgBlitz(Index, jindex, Order, LeafAStarGreedy);
			}
		}



		if (Order == 1)
		{

			//Soldeir
			//Initiatye Variables.               
			 Do = FullGameThinkingTreeWHITE(a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);



		}
		//For BLACK Order Blitz Game Calculate Maximum Table Inclusive AStarGreedy First Game Search.
		else
		{
			 Do = FullGameThinkingTreeBLACK(a, Order, iAStarGreedy, ii, jj, ik1, j1, FOUND, LeafAStarGreedy);


		}

		return Do;
	}

	bool AllDraw::FullGameThinkingTreeObject(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy)
	{

		//
		bool Do = false;
		//Initiatye Variables.
		int DummyOrder = Order;
		int DummyCurrentOrder = ChessRules::CurrentOrder;
		int a;
		if (Order == 1)
		{
			a = 1;
		}
		else
		{
			a = -1;
		}



		//Kind =
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			//when blitz game (limited game)
			if (AllDraw::Blitz)
			{
				FullGameMakimgBlitz(Index, jindex, Order, LeafAStarGreedy);
			}
		}
		if (Order == 1)
		{

			for (int i = 0; i < MaxWHITEMidle(); i++)
			{

				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					if (i < SodierMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1;
							int Ord1 = OrderP;
							int a1 = a;
							int iAStarGreedy1 = iAStarGreedy;
							int i1 = i;
							Do |= FullGameThinkingTreeSoldier(i1, a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);



							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i < ElefantMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii2 = ii, jj2 = jj, ik12 = ik1, j12 = j1;
							int Ord2 = Order;
							int a2 = a;
							int iAStarGreedy2 = iAStarGreedy;
							int i2 = i;
							Do |= this->FullGameThinkingTreeElephant(i2, a2, Ord2, iAStarGreedy2, ii2, jj2, ik12, j12, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i < HourseMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
							int Ord3 = Order;
							int a3 = a;
							int iAStarGreedy3 = iAStarGreedy;
							int i3 = i;
							Do |= this->FullGameThinkingTreeHourse(i3, a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i < CastleMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
							int Ord4 = Order;
							int a4 = a;
							int iAStarGreedy4 = iAStarGreedy;
							int i4 = i;
							Do |= this->FullGameThinkingTreeCastle(i4, a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}


					if (i < MinisterMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
							int Ord5 = Order;
							int a5 = a;
							int iAStarGreedy5 = iAStarGreedy;
							int i5 = i;
							Do |= this->FullGameThinkingTreeMinister(i5, a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i < KingMidle)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}


							int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
							int Ord6 = Order;
							int a6 = a;
							int iAStarGreedy6 = iAStarGreedy;
							int i6 = i;
							Do |= this->FullGameThinkingTreeKing(i6, a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}
				}

			}

		}
		//For BLACK Order Blitz Game Calculate Maximum Table Inclusive AStarGreedy First Game Search.
		else
		{

			for (int i = MinBLACKMidle(); i < MaxWHITEMidle(); i++)
			{

				////auto ooo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ooo)
				{
					if (i >= SodierMidle && i < SodierHigh)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii1 = ii, jj1 = jj, ik11 = ik1, j11 = j1;
							int Ord1 = OrderP;
							int a1 = a;
							int iAStarGreedy1 = iAStarGreedy;
							int i1 = i;
							Do |= this->FullGameThinkingTreeSoldier(i1, a1, Ord1, iAStarGreedy1, ii1, jj1, ik11, j11, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i >= ElefantMidle && i < ElefantHigh)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii2 = ii, jj2 = jj, ik12 = ik1, j12 = j1;
							int Ord2 = Order;
							int a2 = a;
							int iAStarGreedy2 = iAStarGreedy;
							int i2 = i;
							Do |= this->FullGameThinkingTreeElephant(i2, a2, Ord2, iAStarGreedy2, ii2, jj2, ik12, j12, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i >= HourseMidle && i < HourseHight)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii3 = ii, jj3 = jj, ik13 = ik1, j13 = j1;
							int Ord3 = Order;
							int a3 = a;
							int iAStarGreedy3 = iAStarGreedy;
							int i3 = i;
							Do |= this->FullGameThinkingTreeHourse(i3, a3, Ord3, iAStarGreedy3, ii3, jj3, ik13, j13, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i >= CastleMidle && i < CastleHigh)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii4 = ii, jj4 = jj, ik14 = ik1, j14 = j1;
							int Ord4 = Order;
							int a4 = a;
							int iAStarGreedy4 = iAStarGreedy;
							int i4 = i;
							Do |= this->FullGameThinkingTreeCastle(i4, a4, Ord4, iAStarGreedy4, ii4, jj4, ik14, j14, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i >= MinisterMidle && i < MinisterHigh)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii5 = ii, jj5 = jj, ik15 = ik1, j15 = j1;
							int Ord5 = Order;
							int a5 = a;
							int iAStarGreedy5 = iAStarGreedy;
							int i5 = i;
							Do |= this->FullGameThinkingTreeMinister(i5, a5, Ord5, iAStarGreedy5, ii5, jj5, ik15, j15, FOUND, LeafAStarGreedy);
							//Initiatye Variables.
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

					if (i >= KingMidle && i < KingHigh)
					{
						////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (O1)
						{
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							if (Order == 1)
							{
								a = 1;
							}
							else
							{
								a = -1;
							}
							int ii6 = ii, jj6 = jj, ik16 = ik1, j16 = j1;
							int Ord6 = Order;
							int a6 = a;
							int iAStarGreedy6 = iAStarGreedy;
							int i6 = i;
							Do |= this->FullGameThinkingTreeKing(i6, a6, Ord6, iAStarGreedy6, ii6, jj6, ik16, j16, FOUND, LeafAStarGreedy);
							Order = DummyOrder;
							ChessRules::CurrentOrder = DummyCurrentOrder;
						}
					}

				}

			}
		}

		return Do;
	}

	int **AllDraw::CloneATable(int** Tab)
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

	int AllDraw::MaxOfSixHeuristic(int _1, int _2, int _3, int _4, int _5, int _6)
	{

		int LessB[6];
		LessB[0] = _1;
		LessB[1] = _2;
		LessB[2] = _3;
		LessB[3] = _4;
		LessB[4] = _5;
		LessB[5] = _6;
		int Value = -1;
		int Les = -DBL_MAX;
		for (int  i = 0; i < 6; i++)
		{
			if (LessB[i] > Les)
			{
				Les = LessB[i];
				Value = i;
			}
		}

		return Value;
	}

	int AllDraw::MinOfSixHeuristic(int _1, int _2, int _3, int _4, int _5, int _6)
	{

		int LessB[6];
		LessB[0] = _1;
		LessB[1] = _2;
		LessB[2] = _3;
		LessB[3] = _4;
		LessB[4] = _5;
		LessB[5] = _6;
		int Value = -1;
		int Les = DBL_MAX;
		for (int  i = 0; i < 6; i++)
		{
			if (LessB[i] < Les)
			{
				Les = LessB[i];
				Value = i;
			}
		}

		return Value;
	}
	/*
	std::vector<std::vector<int>> AllDraw::FoundOfBestMovments(int AStarGreedy, std::vector<int> &i, std::vector<int> &j, std::vector<int> &k, AllDraw Dummy, int a, int Order)
	{

		//initiate local variables.
		std::vector<std::vector<int>> p = std::vector<std::vector<int>>();
		for (int  ii = 0; ii < 6; ii++)
		{
			std::vector<int> pl = std::vector<int>();
			p.push_back(pl);
			Less = -DBL_MAX;
		}
		std::vector<AllDraw> DummyList = std::vector<AllDraw>();
		DummyList.push_back(Dummy);
		MaxHeuristicAStarGreedytBackWard.clear();
		//found best movment depend of max Heuristic.
		Dummy->HeuristicAStarGreedySearch(0, a, Order, false);
		//proccess from a stored global variable decicion making.
		if (MaxHeuristicAStarGreedytBackWard[0][1] != -1) //soldier.
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][2]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][3]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][4]);
			p->push_back(MaxHeuristicAStarGreedytBackWard[0][2]);
		}
		else if (MaxHeuristicAStarGreedytBackWard[0][5] != -1) //Elephant
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][6]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][7]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][8]);
			p[1].push_back(MaxHeuristicAStarGreedytBackWard[0][6]);
		}
		else if (MaxHeuristicAStarGreedytBackWard[0][9] != -1) //Hourse
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][10]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][11]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][12]);
			p[2].push_back(MaxHeuristicAStarGreedytBackWard[0][10]);
		}
		else if (MaxHeuristicAStarGreedytBackWard[0][13] != -1) //Castles.
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][14]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][15]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][16]);
			p[3].push_back(MaxHeuristicAStarGreedytBackWard[0][14]);
		}
		else if (MaxHeuristicAStarGreedytBackWard[0][17] != -1) //Minister
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][18]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][19]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][20]);
			p[4].push_back(MaxHeuristicAStarGreedytBackWard[0][18]);
		}
		else if (MaxHeuristicAStarGreedytBackWard[0][21] != -1) //King.
		{
			i.push_back(MaxHeuristicAStarGreedytBackWard[0][22]);
			j.push_back(MaxHeuristicAStarGreedytBackWard[0][23]);
			k.push_back(MaxHeuristicAStarGreedytBackWard[0][24]);
			p[5].push_back(MaxHeuristicAStarGreedytBackWard[0][22]);
		}

		//not found
		return p;
	}
	*/
	/*
	AllDraw AllDraw::CopyRemeiningItems(AllDraw ADummy, int Order)
	{

		//Initiate Local Variables.
		AllDraw Dummy = AllDraw(OrderPlate, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged);
		Dummy.TableList.push_back(CloneATable(TableList[0]));
		Dummy->SolderesOnTable = DrawSoldier[SodierHigh];
		Dummy->ElephantOnTable = DrawElefant[ElefantHigh];
		Dummy->HoursesOnTable = DrawHourse[HourseHight];
		Dummy->CastlesOnTable = DrawCastle[CastleHigh];
		Dummy->MinisterOnTable = DrawMinister[MinisterHigh];
		Dummy->KingOnTable = DrawKing[KingHigh];
		//For All Sodiers Movments.
		for (int  i = 0; i < SodierHigh; i++)
		{
			//Construction of Current Solders. 
			Dummy->SolderesOnTable[i] = DrawSoldier(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, SolderesOnTable[i].Row, SolderesOnTable[i].Column, SolderesOnTable[i].color, CloneATable(SolderesOnTable[i].Table), SolderesOnTable[i].Order, false, SolderesOnTable[i].Current);
		}
		//For All Elephant Objects.
		for (int  i = 0; i < ElefantHigh; i++)
		{
			//Construction of Curren Elephant.
			Dummy->ElephantOnTable[i] = DrawElefant(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, ElephantOnTable[i].Row, ElephantOnTable[i].Column, ElephantOnTable[i].color, CloneATable(ElephantOnTable[i].Table), ElephantOnTable[i].Order, false, ElephantOnTable[i].Current);
		}
		//for All Hourse Objects.
		for (int  i = 0; i < HourseHight; i++)
		{
			//Construction of Hourse Objects.
			Dummy->HoursesOnTable[i] = DrawHourse(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, HoursesOnTable[i].Row, HoursesOnTable[i].Column, HoursesOnTable[i].color, CloneATable(HoursesOnTable[i].Table), HoursesOnTable[i].Order, false, HoursesOnTable[i].Current);
		}
		//For All Castles Objects.
		for (int  i = 0; i < CastleHigh; i++)
		{
			//Construction of Castles Objects.
			Dummy->CastlesOnTable[i] = DrawCastle(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, CastlesOnTable[i].Row, CastlesOnTable[i].Column, CastlesOnTable[i].color, CloneATable(CastlesOnTable[i].Table), CastlesOnTable[i].Order, false, CastlesOnTable[i].Current);
		}
		//For All Minister Objects.
		for (int  i = 0; i < MinisterHigh; i++)
		{
			//Construction of Current Minister.
			Dummy->MinisterOnTable[i] = DrawMinister(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, MinisterOnTable[i].Row, MinisterOnTable[i].Column, MinisterOnTable[i].color, CloneATable(MinisterOnTable[i].Table), MinisterOnTable[i].Order, false, MinisterOnTable[i].Current);
		}
		//For All King Objects.
		for (int  i = 0; i < KingHigh; i++)
		{
			//Construction of Kings Objects.
			Dummy->KingOnTable[i] = DrawKing(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, KingOnTable[i].Row, KingOnTable[i].Column, KingOnTable[i].color, CloneATable(KingOnTable[i].Table), KingOnTable[i].Order, false, KingOnTable[i].Current);
		}
		//WHITE Order.
		if (Order == 1)
		{
			//For WHITE Soders Objects.
			for (int  i = 0; i < SodierMidle; i++)
			{
				//Clone a Movments.
				ADummy->SolderesOnTable[i].Clone(Dummy->SolderesOnTable[i]);
			}
			//For WHITE Elephant.
			for (int  i = 0; i < ElefantMidle; i++)
			{
				//Clone a  Movments.
				ADummy->ElephantOnTable[i].Clone(Dummy->ElephantOnTable[i]);
			}
			//For WHITE Hourses.
			for (int  i = 0; i < HourseMidle; i++)
			{
				//Clone a Movments.
				ADummy->HoursesOnTable[i].Clone(Dummy->HoursesOnTable[i]);
			}
			//For WHITE Castles.
			for (int  i = 0; i < CastleMidle; i++)
			{
				//Clone a Movments.
				ADummy->CastlesOnTable[i].Clone(Dummy->CastlesOnTable[i]);
			}
			//For WHITE Ministers.
			for (int  i = 0; i < MinisterMidle; i++)
			{
				//Clone a Movments.
				ADummy->MinisterOnTable[i].Clone(Dummy->MinisterOnTable[i]);
			}
			//For WHITE King.
			for (int  i = 0; i < KingMidle; i++)
			{
				//Clone a Movments.
				ADummy->KingOnTable[i].Clone(Dummy->KingOnTable[i]);
			}
			//For All Solders.
		}
		else //For Order BLACK.
		{
			{
				//For BLACK Solders.
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					//Clone a Movments.
					ADummy->SolderesOnTable[i].Clone(Dummy->SolderesOnTable[i]);
				}
				//For All BLACK Elephants.
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					//Clone a Enemy.
					ADummy->ElephantOnTable[i].Clone(Dummy->ElephantOnTable[i]);
				}
				//For All BLACK Hourses.
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					//Clone a Enemy.
					ADummy->HoursesOnTable[i].Clone(Dummy->HoursesOnTable[i]);
				}
				//For BLACK Castles. 
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					//Clone a Movments.
					ADummy->CastlesOnTable[i].Clone(Dummy->CastlesOnTable[i]);
				}
				//For WHITE Minsters.
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					//Clone a Enemy.
					ADummy->MinisterOnTable[i].Clone(Dummy->MinisterOnTable[i]);
				}
				//For BLACK Kings.
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					//Clone a Enemy.
					ADummy->KingOnTable[i].Clone(Dummy->KingOnTable[i]);
				}
			}
		}

		//Return Constructed Tables.
		return Dummy;

	}
	*/
	bool AllDraw::TableZero(int ** Ta)
	{

		bool Zerro = true;
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				if (Ta[i][j] != 0)
				{
					Zerro = false;
				}
			}
		}

		return Zerro;
	}

	void AllDraw::CheckedMateConfiguratiionSoldier(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.size(); j++)
		{
			if (SolderesOnTable[i].SoldierThinking.LearningVarsObject.size() == SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder.size())
			{
				if (SolderesOnTable[i].SoldierThinking.LearningVarsObject[j][1] && (!SolderesOnTable[i].SoldierThinking.LearningVarsObject[j][4]))
				{
					SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].LearningAlgorithmPenalty();
					}
					SolderesOnTable[i].SoldierThinking.HeuristicPenaltyValuePerform(SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j], Order, SolderesOnTable[i].SoldierThinking.HeuristicListSolder[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiionElephant(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.size(); j++)
		{
			if (ElephantOnTable[i].ElefantThinking.LearningVarsObject.size() == ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant.size())
			{
				if (ElephantOnTable[i].ElefantThinking.LearningVarsObject[j][1] && (!ElephantOnTable[i].ElefantThinking.LearningVarsObject[j][4]))
				{
					ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].LearningAlgorithmPenalty();
					}
					ElephantOnTable[i].ElefantThinking.HeuristicPenaltyValuePerform(ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j], Order, ElephantOnTable[i].ElefantThinking.HeuristicListElefant[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiionHourse(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.size(); j++)
		{
			if (HoursesOnTable[i].HourseThinking.LearningVarsObject.size() == HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse.size())
			{
				if (HoursesOnTable[i].HourseThinking.LearningVarsObject[j][1] && (!HoursesOnTable[i].HourseThinking.LearningVarsObject[j][4]))
				{
					HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].LearningAlgorithmPenalty();
					}
					HoursesOnTable[i].HourseThinking.HeuristicPenaltyValuePerform(HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j], Order, HoursesOnTable[i].HourseThinking.HeuristicListHourse[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiionCastle(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle.size(); j++)
		{
			if (CastlesOnTable[i].CastleThinking.LearningVarsObject.size() == CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle.size())
			{
				if (CastlesOnTable[i].CastleThinking.LearningVarsObject[j][1] && (!CastlesOnTable[i].CastleThinking.LearningVarsObject[j][4]))
				{
					CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].LearningAlgorithmPenalty();
					}
					CastlesOnTable[i].CastleThinking.HeuristicPenaltyValuePerform(CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j], Order, CastlesOnTable[i].CastleThinking.HeuristicListCastle[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiionMinister(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.size(); j++)
		{
			if (MinisterOnTable[i].MinisterThinking.LearningVarsObject.size() == MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister.size())
			{
				if (MinisterOnTable[i].MinisterThinking.LearningVarsObject[j][1] && (!MinisterOnTable[i].MinisterThinking.LearningVarsObject[j][4]))
				{
					MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].LearningAlgorithmPenalty();
					}
					MinisterOnTable[i].MinisterThinking.HeuristicPenaltyValuePerform(MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j], Order, MinisterOnTable[i].MinisterThinking.HeuristicListMinister[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiionking(int Order, int i, bool Regrad)
	{

		for (int  j = 0; j < KingOnTable[i].KingThinking.PenaltyRegardListKing.size(); j++)
		{
			if (KingOnTable[i].KingThinking.LearningVarsObject.size() == KingOnTable[i].KingThinking.PenaltyRegardListKing.size())
			{
				if (KingOnTable[i].KingThinking.LearningVarsObject[j][1] && (!KingOnTable[i].KingThinking.LearningVarsObject[j][4]))
				{
					KingOnTable[i].KingThinking.PenaltyRegardListKing[j].Initiate();
					//if(Regrad)

					//else
					if (!Regrad)
					{
						KingOnTable[i].KingThinking.PenaltyRegardListKing[j].LearningAlgorithmPenalty();
					}
					KingOnTable[i].KingThinking.HeuristicPenaltyValuePerform(KingOnTable[i].KingThinking.PenaltyRegardListKing[j], Order, KingOnTable[i].KingThinking.HeuristicListKing[j][0], true);
				}
			}
		}

	}

	void AllDraw::CheckedMateConfiguratiion(int Order)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccured && ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccuredOneCheckedMate)
			{
				if (Order == 1)
				{
					for (int  i = 0; i < SodierMidle; i++)
					{
						if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionSoldier(Order, i, true);
						}
					}

					for (int  i = 0; i < ElefantMidle; i++)
					{
						if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionElephant(Order, i, true);
						}
					}
					for (int  i = 0; i < HourseMidle; i++)
					{
						if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionHourse(Order, i, true);
						}
					}
					for (int  i = 0; i < CastleMidle; i++)
					{
						if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionCastle(Order, i, true);
						}
					}
					for (int  i = 0; i < MinisterMidle; i++)
					{
						if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionMinister(Order, i, true);
						}
					}
					for (int  i = 0; i < KingMidle; i++)
					{
						if (KingOnTable != nullptr && KingOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionking(Order, i, true);
						}
					}
				}
				else
				{
					for (int  i = SodierMidle; i < SodierHigh; i++)
					{
						if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionSoldier(Order, i, true);
						}
					}
					for (int  i = ElefantMidle; i < ElefantHigh; i++)
					{
						if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionElephant(Order, i, true);
						}
					}
					for (int  i = HourseMidle; i < HourseHight; i++)
					{
						if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionHourse(Order, i, true);
						}
					}
					for (int  i = CastleMidle; i < CastleHigh; i++)
					{
						if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionCastle(Order, i, true);
						}
					}
					for (int  i = MinisterMidle; i < MinisterHigh; i++)
					{
						if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionMinister(Order, i, true);
						}
					}
					for (int  i = KingMidle; i < KingHigh; i++)
					{
						if (KingOnTable != nullptr && KingOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionking(Order, i, true);
						}
					}
				}

			}
			else
			{
				if (Order == 1)
				{
					for (int  i = 0; i < SodierMidle; i++)
					{
						if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionSoldier(Order, i, false);
						}
					}
					for (int  i = 0; i < ElefantMidle; i++)
					{
						if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionElephant(Order, i, false);
						}
					}
					for (int  i = 0; i < HourseMidle; i++)
					{
						if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionHourse(Order, i, false);
						}
					}
					for (int  i = 0; i < CastleMidle; i++)
					{
						if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionCastle(Order, i, false);
						}
					}
					for (int  i = 0; i < MinisterMidle; i++)
					{
						if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionMinister(Order, i, false);
						}
					}
					for (int  i = 0; i < KingMidle; i++)
					{
						if (KingOnTable != nullptr && KingOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionking(Order, i, false);
						}
					}
				}
				else
				{
					for (int  i = SodierMidle; i < SodierHigh; i++)
					{
						if (SolderesOnTable != nullptr && SolderesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionSoldier(Order, i, false);
						}
					}
					for (int  i = ElefantMidle; i < ElefantHigh; i++)
					{
						if (ElephantOnTable != nullptr && ElephantOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionElephant(Order, i, false);
						}
					}
					for (int  i = HourseMidle; i < HourseHight; i++)
					{
						if (HoursesOnTable != nullptr && HoursesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionHourse(Order, i, false);
						}
					}
					for (int  i = CastleMidle; i < CastleHigh; i++)
					{
						if (CastlesOnTable != nullptr && CastlesOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionCastle(Order, i, false);
						}
					}
					for (int  i = MinisterMidle; i < MinisterHigh; i++)
					{
						if (MinisterOnTable != nullptr && MinisterOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionMinister(Order, i, false);
						}
					}
					for (int  i = KingMidle; i < KingHigh; i++)
					{
						if (KingOnTable != nullptr && KingOnTable[i] != nullptr)
						{
							CheckedMateConfiguratiionking(Order, i, false);
						}
					}
				}
			}
		}

	}

	void AllDraw::SemaphoreExxedTime(int time, int Kind)
	{

	}

	int AllDraw::UniqueCapableMoveIsTruSup(int Kind, int Order, int ii, int jj)
	{
		int No = 0;
		if (Order == 1)
		{
			if (Kind == 1)
			{
				for (int i = 0; i < SodierMidle; i++)
				{
					for (int j = 0; j < SolderesOnTable[i].SoldierThinking.IsSupHu.size(); j++)
					{
						if (!SolderesOnTable[i].SoldierThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 2)
			{
				for (int i = 0; i < ElefantMidle; i++)
				{
					for (int j = 0; j < ElephantOnTable[i].ElefantThinking.IsSupHu.size(); j++)
					{
						if (!ElephantOnTable[i].ElefantThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 3)
			{
				for (int i = 0; i < HourseMidle; i++)
				{
					for (int j = 0; j < HoursesOnTable[i].HourseThinking.IsSupHu.size(); j++)
					{
						if (!HoursesOnTable[i].HourseThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 4)
			{
				for (int i = 0; i < CastleMidle; i++)
				{
					for (int j = 0; j < CastlesOnTable[i].CastleThinking.IsSupHu.size(); j++)
					{
						if (!CastlesOnTable[i].CastleThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 5)
			{
				for (int i = 0; i < MinisterMidle; i++)
				{
					for (int j = 0; j < MinisterOnTable[i].MinisterThinking.IsSupHu.size(); j++)
					{
						if (!MinisterOnTable[i].MinisterThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 6)
			{
				for (int i = 0; i < KingMidle; i++)
				{
					for (int j = 0; j < KingOnTable[i].KingThinking.IsSupHu.size(); j++)
					{
						if (!KingOnTable[i].KingThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
		}
		else
		{
			if (Kind == 1)
			{
				for (int i = SodierMidle; i < SodierHigh; i++)
				{
					for (int j = 0; j < SolderesOnTable[i].SoldierThinking.IsSupHu.size(); j++)
					{
						if (!SolderesOnTable[i].SoldierThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 2)
			{
				for (int i = ElefantMidle; i < ElefantHigh; i++)
				{
					for (int j = 0; j < ElephantOnTable[i].ElefantThinking.IsSupHu.size(); j++)
					{
						if (!ElephantOnTable[i].ElefantThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 3)
			{
				for (int i = HourseMidle; i < HourseHight; i++)
				{
					for (int j = 0; j < HoursesOnTable[i].HourseThinking.IsSupHu.size(); j++)
					{
						if (!HoursesOnTable[i].HourseThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 4)
			{
				for (int i = CastleMidle; i < CastleHigh; i++)
				{
					for (int j = 0; j < CastlesOnTable[i].CastleThinking.IsSupHu.size(); j++)
					{
						if (!CastlesOnTable[i].CastleThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 5)
			{
				for (int i = MinisterMidle; i < MinisterHigh; i++)
				{
					for (int j = 0; j < MinisterOnTable[i].MinisterThinking.IsSupHu.size(); j++)
					{
						if (!MinisterOnTable[i].MinisterThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
			else if (Kind == 6)
			{
				for (int i = KingMidle; i < KingHigh; i++)
				{
					for (int j = 0; j < KingOnTable[i].KingThinking.IsSupHu.size(); j++)
					{
						if (!KingOnTable[i].KingThinking.IsSupHu[j])
						{
							No++;
						}
					}
				}
			}
		}
		if (No == 0)
		{
			if (IgnoreOfLoseForKingReducedAttackDisturbingDouble(Kind, Order, ii, jj))
			{
				No = 1;
			}
		}
		return No;
	}

	bool AllDraw::IgnoreOfLoseForKingReducedAttackDisturbingDouble(int Kind, int Order, int i, int j)
	{
		bool No = false;
		if (Kind == 1)
		{
			SolderesOnTable[i].SoldierThinking.TowDistrurbProperUsePreferNotToClose(SolderesOnTable[i].LoseOcuuredatChiled, CloneATable(SolderesOnTable[i].SoldierThinking.TableListSolder[j]));
			if ((SolderesOnTable[i].SoldierThinking.RemoveOfDisturbIndex == j) && (SolderesOnTable[i].SoldierThinking.LoseChiled[j] < 0 || SolderesOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}
		}
		else if (Kind == 2)
		{
			ElephantOnTable[i].ElefantThinking.TowDistrurbProperUsePreferNotToClose(ElephantOnTable[i].LoseOcuuredatChiled, CloneATable(ElephantOnTable[i].ElefantThinking.TableListElefant[j]));
			if ((ElephantOnTable[i].ElefantThinking.RemoveOfDisturbIndex == j) && (ElephantOnTable[i].ElefantThinking.LoseChiled[j] < 0 || ElephantOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}
		}
		else if (Kind == 3)
		{
			HoursesOnTable[i].HourseThinking.TowDistrurbProperUsePreferNotToClose(HoursesOnTable[i].LoseOcuuredatChiled, CloneATable(HoursesOnTable[i].HourseThinking.TableListHourse[j]));
			if ((HoursesOnTable[i].HourseThinking.RemoveOfDisturbIndex == j) && (HoursesOnTable[i].HourseThinking.LoseChiled[j] < 0 || HoursesOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}

		}
		else if (Kind == 4)
		{
			CastlesOnTable[i].CastleThinking.TowDistrurbProperUsePreferNotToClose(CastlesOnTable[i].LoseOcuuredatChiled, CloneATable(CastlesOnTable[i].CastleThinking.TableListCastle[j]));
			if ((CastlesOnTable[i].CastleThinking.RemoveOfDisturbIndex == j) && (CastlesOnTable[i].CastleThinking.LoseChiled[j] < 0 || CastlesOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}
		}
		else if (Kind == 5)
		{
			MinisterOnTable[i].MinisterThinking.TowDistrurbProperUsePreferNotToClose(MinisterOnTable[i].LoseOcuuredatChiled, CloneATable(MinisterOnTable[i].MinisterThinking.TableListMinister[j]));
			if ((MinisterOnTable[i].MinisterThinking.RemoveOfDisturbIndex == j) && (MinisterOnTable[i].MinisterThinking.LoseChiled[j] < 0 || MinisterOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}

		}
		else if (Kind == 6)
		{
			KingOnTable[i].KingThinking.TowDistrurbProperUsePreferNotToClose(KingOnTable[i].LoseOcuuredatChiled, CloneATable(KingOnTable[i].KingThinking.TableListKing[j]));
			if ((KingOnTable[i].KingThinking.RemoveOfDisturbIndex == j) && (KingOnTable[i].KingThinking.LoseChiled[j] < 0 || KingOnTable[i].LoseOcuuredatChiled[0] < 0))
			{
				No = true;
			}
		}

		return No;
	}

	int **AllDraw::Initiate(int ii, int jj, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy, bool SetDept = false)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			//auto n = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (n)
			{
				AllDraw::ChangedInTreeOccured = false;

			}
			LeafSemaphoreIndex = false;


			ThinkingHybridizerRefrigitz::Colleralation_Renamed = -DBL_MAX;
			ThinkingHybridizerRefrigitz::DeColleralation = DBL_MAX;
			if (FOUND && (!FirstTraversalTree))
			{
				NumberOfLeafComputation = ThinkingHybridizerRefrigitz::NumbersOfAllNode;
			}
			else
			{
				NumberOfLeafComputation = -1;
			}
			ThinkingHybridizerRefrigitz::IsAtLeastOneKillerAtDraw = false;

			//int  parallelOptions = new ParallelOptions();
			//parallelOptions.MaxDegreeOfParallelism = 2; //PlatformHelper.ProcessorCount;
			SetDeptIgnore = SetDept;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] TableHeuristic = nullptr;
			int **TableHeuristic = nullptr;
			int Current = ChessRules::CurrentOrder;
			int DummyOrder = Order;
			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				AllDraw::ActionStringReady = false;
				ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccured = false;
				ThinkingHybridizerRefrigitz::LearningVarsCheckedMateOccuredOneCheckedMate = false;
				RegardOccurred = false;
				////auto oO21 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OO21)
				{
					TaskBegin = 0;
					TaskEnd = 0;
				}
				////auto oO1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OO1)
				{
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OO1)
					{
						if (AllDraw::THIScomboBoxMaxLevelText != L"")
						{
							MaxDuringLevelThinkingCreation = StringConverterHelper::fromString<int>(AllDraw::THIScomboBoxMaxLevelText);
						}
					}
				}
				////auto om1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (Om1)
				{
					MinThinkingTreeDepth = 0;
				}
				ThinkingHybridizerRefrigitz::FoundFirstMating = 0;
				ThinkingHybridizerRefrigitz::FoundFirstSelfMating = 0;
				//Monitor Log File Appending First Line. 
				////auto on = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (On)
				{


				}
				//Initiate Local and Global Variables.            
				////auto ol = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (ol)
				{
					CurrentHeuristic = -DBL_MAX;
					MaxHeuristicxT = -DBL_MAX;
					DrawCastle::MaxHeuristicxB = -DBL_MAX;
					DrawElefant::MaxHeuristicxE = -DBL_MAX;
					DrawHourse::MaxHeuristicxH = -DBL_MAX;
					DrawKing::MaxHeuristicxK = -DBL_MAX;
					DrawMinister::MaxHeuristicxM = -DBL_MAX;
					DrawSoldier::MaxHeuristicxS = -DBL_MAX;
					MovementsAStarGreedyHeuristicFoundT = false;
					DrawTable = false;
					ChessRules::CheckBLACKObjectDangourFirstTimesOcured = false;
					ChessRules::CheckWHITEObjectDangourFirstTimesOcured = false;
				}
			}
			MaxHeuristicAStarGreedytBackWard.clear();
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tab = nullptr;
			int **Tab = nullptr;
			if (!FOUND)
			{
				////auto o7 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O7)
				{
					ThinkingHybridizerRefrigitz::NotSolvedKingDanger = false;
					LoopHeuristicIndex = 0;
					Less = -DBL_MAX;
				}
			}
			//THIS.Invoke((MethodInvoker)delegate()
			/*{
			    Object OOO = new Object();
			    ////lock (OOO)
			    {
			        if (!SetDept)
			            MaxAStarGreedy = System.Convert.ToInt32(AllDraw.MaxDuringLevelThinkingCreation);
			        AllDraw.AStarGreedyiLevelMax = MaxAStarGreedy;
			        AStarGreedyiLevelMax = System.Convert.ToInt32(AllDraw.MaxDuringLevelThinkingCreation);
			        AllDraw.MaxAStarGreedyHeuristicProgress = 6;
			        for (int  i = 0; i <= MaxAStarGreedy; i++)
			            AllDraw.MaxAStarGreedyHeuristicProgress += AllDraw.MaxAStarGreedyHeuristicProgress * 6;
			        increasedProgress = (int)((int)999999999 / (int)(AllDraw.MaxAStarGreedyHeuristicProgress);
			        Object Omm1 = new Object();
			        ////lock (Omm1)
			        {
			            AStarGreedytMaxCount = (int)MaxAStarGreedy;
			        }
			    }
			}*/
			ChessRules::CurrentOrder = Current;
			Order = DummyOrder;
			int iiii = ii, jjjj = jj, Ord = Order;
			int MaxAStarGreedy1 = 0;
			////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OOOO)
			{
				//if (MaxAStarGreedy == 0)
				MaxAStarGreedy = 2; //PlatformHelper.ProcessorCount;
				MaxAStarGreedy1 = MaxAStarGreedy;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Tabl = CloneATable(Table);
				int **Tabl = CloneATable(Table);
				int aaa = a;
				AllDraw THISA = AStarGreedyStringNode;
				 InitiateAStarGreedyt(MaxAStarGreedy1, iiii, jjjj, aaa, CloneATable(Tabl), Ord, false, FOUND, LeafAStarGreedy);


				AStarGreedyStringNode = THISA;
			}
			////auto om = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (Om)
			{
				MinThinkingTreeDepth = MaxAStarGreedy - MinThinkingTreeDepth;
				//Initaite Local Varibales.
				*Tab = new int[8]; for (int b = 0; b < 8; b++)Tab[b] = new int[8];
				
				Less = -DBL_MAX;
			}
			ChessRules::CurrentOrder = Current;
			Order = DummyOrder;
			////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (OO)
			{

			}

			NumberOfLeafComputation = -1;

			TableHeuristic = HeuristicAStarGreedySearch(0, a, Order, false);
			if ((TableHeuristic == nullptr || ((TableZero(TableHeuristic)))) && UsePenaltyRegardMechnisamT)
			{

				////auto oOoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (OOoOO)
				{


					bool aa = UsePenaltyRegardMechnisamT;
					UsePenaltyRegardMechnisamT = false;

					RemovePenalltyFromFirstBranches(Order);
					MaxAStarGreedy = 1;
					AStarGreedyiLevelMax = 1;
					Less = -DBL_MAX;


					TableHeuristic = HeuristicAStarGreedySearch(0, a, Order, false);

					UsePenaltyRegardMechnisamT = aa;
				}

			}
			else
			{
			if ((TableHeuristic == nullptr || ((TableZero(TableHeuristic)))))

			{
				//If Table Found.
				if (TableHeuristic != nullptr)
				{
					////auto oOOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOOO)
					{
						Ord = Order;
						if (Ord == 1)
						{

						}
						else
						{

						}
					}
					Order = DummyOrder;
					ChessRules::CurrentOrder = Current;
				}
				else
				{
					////auto oOoOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOoOO)
					{
						//Clear AStarGreedy Varibales.
						AllDraw::StoreADraw.clear();
						TableCurrent.clear();
						AStarGreedy = 0;
					}
					Order = DummyOrder;
					ChessRules::CurrentOrder = Current;

					////auto omm = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (Omm)
					{
						DrawTable = true;
						FoundATable = true;
					}
				}
			}
			}

			return CloneATable(TableHeuristic);
		}
	}

	bool AllDraw::IsEnemyThingsinStable(int **TableHeuristic, int ** TableAction, int Order)
	{

		//Iniatiet Local Variables.
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Cromosom1 = TableHeuristic;
		int **Cromosom1 = TableHeuristic;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: int[,] Cromosom2 = TableAction;
		int **Cromosom2 = TableAction;
		bool And = true;
		bool Find = false;

		int FindNumber = 0;
		int CromosomRowFirst = -1, CromosomColumnFirst = -1, CromosomRow = -1, CromosomColumn = -1;
		//Initiate Local Variables.
		//For All Table Home
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				//WHITE Order.
				if (Order == 1)
				{
					//Situation 11.
					if (And)
					{
						//All The BLACK Object Ignored.
						if (Cromosom1[i][j] < 0 && Cromosom2[i][j] < 0)
						{
							continue;
						}
					}
					else ///Situation 2.
					{
						//All The BLACK Ojects Ignored.
						if (Cromosom1[i][j] < 0 || Cromosom2[i][j] < 0)
						{
							continue;
						}
					}
				}
				else //BLACK Order.
				{
					//Situation 1.
					if (And)
					{
						//All The WHITE Objects Ignored.
						if (Cromosom1[i][j] > 0 && Cromosom2[i][j] > 0)
						{
							continue;
						}
					}
					else
					{
						//All The WHITE Objects Ignored.
						if (Cromosom1[i][j] > 0 || Cromosom2[i][j] > 0)
						{
							continue;
						}
					}
				}
				if (!(ArrangmentsChanged))
				{
					{
						if (Order == 1 && j == 6 && i > 0 && i < 7)
						{
							if (((Cromosom2[i][j + 1] > 0) || (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0) || (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0) && Cromosom1[i][j] == 1))
							{
								CromosomRowFirst = i;
								CromosomColumnFirst = j;
								if (Cromosom2[i][j + 1] > 0)
								{
									CromosomRow = i;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0)
								{
									CromosomRow = i + 1;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0)
								{
									CromosomRow = i - 1;
									CromosomColumn = j + 1;
								}
								Find = true;
								FindNumber++;
								AllDraw::SodierConversionOcuured = true;
							}
						}
						else
						{
							if (Order == -1 && j == 1 && i > 0 && i < 7)
							{
							if (((Cromosom2[i][j - 1] < 0) || (Cromosom2[i + 1][j - 1] < 0 && Cromosom1[i + 1][j - 1] > 0) || (Cromosom2[i - 1][j - 1] < 0 && Cromosom1[i - 1][j - 1] < 0) && Cromosom1[i][j] == -1))
							{
								CromosomRowFirst = i;
								CromosomColumnFirst = j;
								if (Cromosom2[i][j - 1] > 0)
								{
									CromosomRow = i;
									CromosomColumn = j - 1;
								}
								else if (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0)
								{
									CromosomRow = i + 1;
									CromosomColumn = j - 1;
								}
								else if (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0)
								{
									CromosomRow = i - 1;
									CromosomColumn = j - 1;
								}
								FindNumber++;
								AllDraw::SodierConversionOcuured = true;
							}
							}
						}
						//Castles King Validity Condition.
						if (Order == 1 && j == 0)
						{
							//Small WHITE Castles King.
							if (i == 6 && Cromosom2[i][j] == 6 && Cromosom2[i - 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i - 1][j] != 4)
							{
								CromosomRowFirst = i - 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleWHITE = true;
								CastlesKing = true;
							}
							else //Big Briges King WHITE.
							{
								if (i == 2 && Cromosom2[i][j] == 6 && Cromosom2[i + 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i + 1][j] != 4)
								{
								CromosomRowFirst = i + 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleWHITE = true;
								CastlesKing = true;
								}
							}
						}
						else if (j == 7)
						{
							//Small Castles King BLACK.
							if (i == 6 && Cromosom2[i][j] == -6 && Cromosom2[i - 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i - 1][j] != -4)
							{
								CromosomRowFirst = i - 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleBLACK = true;
								CastlesKing = true;
							}
							else //Big Castles King BLACK.
							{
								if (i == 2 && Cromosom2[i][j] == -6 && Cromosom2[i + 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i + 1][j] != -4)
								{
								CromosomRowFirst = i + 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleBLACK = true;
								CastlesKing = true;
								}
							}
						}
					}
				}
				else
				{
					{
						if (Order == 1 && j == 1 && i > 0 && i < 7)
						{
							if (((Cromosom2[i][j - 1] > 0) || (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0) || (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0) && Cromosom1[i][j] == 1))
							{
								CromosomRowFirst = i;
								CromosomColumnFirst = j;
								if (Cromosom2[i][j - 1] > 0)
								{
									CromosomRow = i;
									CromosomColumn = j - 1;
								}
								else if (Cromosom2[i + 1][j - 1] > 0 && Cromosom1[i + 1][j - 1] < 0)
								{
									CromosomRow = i + 1;
									CromosomColumn = j - 1;
								}
								else if (Cromosom2[i - 1][j - 1] > 0 && Cromosom1[i - 1][j - 1] < 0)
								{
									CromosomRow = i - 1;
									CromosomColumn = j - 1;
								}
								FindNumber++;
								AllDraw::SodierConversionOcuured = true;
							}
						}
						else
						{
							if (Order == -1 && j == 6 && i > 0 && i < 7)
							{
							if (((Cromosom2[i][j + 1] < 0) || (Cromosom2[i + 1][j + 1] < 0 && Cromosom1[i + 1][j + 1] > 0) || (Cromosom2[i - 1][j + 1] < 0 && Cromosom1[i - 1][j + 1] < 0) && Cromosom1[i][j] == -1))
							{
								CromosomRowFirst = i;
								CromosomColumnFirst = j;
								if (Cromosom2[i][j + 1] > 0)
								{
									CromosomRow = i;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i + 1][j + 1] > 0 && Cromosom1[i + 1][j + 1] < 0)
								{
									CromosomRow = i + 1;
									CromosomColumn = j + 1;
								}
								else if (Cromosom2[i - 1][j + 1] > 0 && Cromosom1[i - 1][j + 1] < 0)
								{
									CromosomRow = i - 1;
									CromosomColumn = j + 1;
								}
								Find = true;
								FindNumber++;
								AllDraw::SodierConversionOcuured = true;
							}
							}
						}
						//Castles King Validity Condition.
						if (Order == 1 && j == 7)
						{
							//Small WHITE Castles King.
							if (i == 6 && Cromosom2[i][j] == 6 && Cromosom2[i - 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i - 1][j] != 4)
							{
								CromosomRowFirst = i - 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleWHITE = true;
								CastlesKing = true;
							}
							else //Big Briges King WHITE.
							{
								if (i == 2 && Cromosom2[i][j] == 6 && Cromosom2[i + 1][j] == 4 && Cromosom1[i][j] != 6 && Cromosom1[i + 1][j] != 4)
								{
								CromosomRowFirst = i + 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleWHITE = true;
								CastlesKing = true;
								}
							}
						}
						else if (j == 0)
						{
							//Small Castles King BLACK.
							if (i == 6 && Cromosom2[i][j] == -6 && Cromosom2[i - 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i - 1][j] != -4)
							{
								CromosomRowFirst = i - 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::SmallKingCastleBLACK = true;
								CastlesKing = true;
							}
							else //Big Castles King BLACK.
							{
								if (i == 2 && Cromosom2[i][j] == -6 && Cromosom2[i + 1][j] == -4 && Cromosom1[i][j] != -6 && Cromosom1[i + 1][j] != -4)
								{
								CromosomRowFirst = i + 3;
								CromosomColumnFirst = j;
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								ChessRules::BigKingCastleBLACK = true;
								CastlesKing = true;
								}
							}
						}
					}
				}
				//When To Same Location Tbles are Different in Gen.
				if (Cromosom1[i][j] != Cromosom2[i][j])
				{
					//When Cromosom 2 is Empty.
					if (Cromosom2[i][j] == 0)
					{
						//Initiate Location of Table.
						continue;
					}
					else
					{
						//Situation 1.0
						if (And)
						{
							//When Cromosom1 Current Location is Empty.
							if (Cromosom1[i][j] == 0)
							{
								//Initiate Location of Gen.
								CromosomRow = i;
								CromosomColumn = j;
								Find = true;
								FindNumber++;
								continue;
							}
						}
					}
					//Store Location of Gen And Calculate Gen Numbers.
					CromosomRow = i;
					CromosomColumn = j;
					Find = true;
					FindNumber++;
				}
			}
		}

		//If Gen Foundation is Valid. 
		if (((FindNumber == 1 || FindNumber == 2) && Find) || CastlesKing || AllDraw::SodierConversionOcuured)
		{
			return Find;
		}
		//Gen Not Found.
		return false;
	}

	std::vector<int*> AllDraw::WhereNumbers(const std::wstring &Tag)
	{

		////auto oOOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOOO)
		{
			std::vector<int*> TagList = std::vector<int*>();
			for (int  i = 0; i < Tag.length(); i++)
			{
				if (i + 1 < Tag.length())
				{
					for (int  j = i + 1; j < i + AllDraw::MaxAStarGreedy + 1; j++)
					{
						int A = StringConverterHelper::fromString<int>(Tag.substr(i, j - i));
						if (A >= 0 && A <= AllDraw::MaxAStarGreedy)
						{
							int Loc[2];
							Loc[0] = i;
							Loc[1] = j - i;
							TagList.push_back(Loc);
						}


					}
				}
			}

			return TagList;
		}
	}/*

	std::wstring AllDraw::CreateHtmlTag(const std::wstring &Tag)
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{




			if (Tag.find(L"Thinking") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"Thinking", std::wstring(L"<font int=\"Green\">") + std::wstring(L"Thinking") + std::wstring(L"</font>"));
			}
			if (Tag.find(L"Perception") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"Perception", std::wstring(L"<font int=\"Green\">") + std::wstring(L"Perception") + std::wstring(L"</font>"));
			}
			if (Tag.find(L"Bob") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"Bob", std::wstring(L"<font int=\"WHITE\">") + std::wstring(L"Bob") + std::wstring(L"</font>"));
			}
			if (Tag.find(L"Alice") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"Alice", std::wstring(L"<font int=\"BLACK\">") + std::wstring(L"BLACK") + std::wstring(L"</font>"));
			}
			if (Tag.find(L"AstarGreedy ") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"AstarGreedy ", std::wstring(L"<font int=\"Yellow\">") + std::wstring(L"AstarGreedy ") + std::wstring(L"</font>"));
			}
			if (Tag.find(L"Level") != string::npos)
			{
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
				Tag = Tag.Replace(L"Level", std::wstring(L"<font int=\"Blue\">") + std::wstring(L"Level") + std::wstring(L"</Font>"));
			}

			std::wstring R = L"<font int=\"Red\">" + Tag + std::wstring(L"</font>");

			return R;
		}
	}*/
	/*
	void AllDraw::RewriteAllDrawRec(BinaryFormatter *Formatters, FileStream *DummyFileStream, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{

			AllDraw Node = this;

			if (DummyFileStream->Position >= DummyFileStream->Length)
			{
				return;
			}


			Formatters->Serialize(DummyFileStream, Node->SodierMidle);
			Formatters->Serialize(DummyFileStream, Node->SodierHigh);
			for (int i = 0; i < Node->SodierHigh; i++)
			{
				if (Node->SolderesOnTable == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.size());
				for (int j = 0; j < Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->SolderesOnTable[i].SoldierThinking.AStarGreedy[j]);
					Node->SolderesOnTable[i].SoldierThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
			Formatters->Serialize(DummyFileStream, Node->ElefantMidle);
			Formatters->Serialize(DummyFileStream, Node->ElefantHigh);
			for (int i = 0; i < Node->ElefantHigh; i++)
			{
				if (Node->ElephantOnTable == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.size());
				for (int j = 0; j < Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->ElephantOnTable[i].ElefantThinking.AStarGreedy[j]);
					Node->ElephantOnTable[i].ElefantThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
			Formatters->Serialize(DummyFileStream, Node->HourseMidle);
			Formatters->Serialize(DummyFileStream, Node->HourseHight);
			for (int i = 0; i < Node->HourseHight; i++)
			{
				if (Node->HoursesOnTable == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->HoursesOnTable[i].HourseThinking.AStarGreedy.size());
				for (int j = 0; j < Node->HoursesOnTable[i].HourseThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->HoursesOnTable[i].HourseThinking.AStarGreedy[j]);
					Node->HoursesOnTable[i].HourseThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
			Formatters->Serialize(DummyFileStream, Node->CastleMidle);
			Formatters->Serialize(DummyFileStream, Node->CastleHigh);
			for (int i = 0; i < Node->CastleHigh; i++)
			{
				if (Node->CastlesOnTable == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->CastlesOnTable[i].CastleThinking.AStarGreedy.size());
				for (int j = 0; j < Node->CastlesOnTable[i].CastleThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->CastlesOnTable[i].CastleThinking.AStarGreedy[j]);
					Node->CastlesOnTable[i].CastleThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
			Formatters->Serialize(DummyFileStream, Node->MinisterMidle);
			Formatters->Serialize(DummyFileStream, Node->MinisterHigh);
			for (int i = 0; i < Node->MinisterHigh; i++)
			{
				if (Node->MinisterOnTable == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.size());
				for (int j = 0; j < Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->MinisterOnTable[i].MinisterThinking.AStarGreedy[j]);
					Node->MinisterOnTable[i].MinisterThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
			Formatters->Serialize(DummyFileStream, Node->KingMidle);
			Formatters->Serialize(DummyFileStream, Node->KingHigh);
			for (int i = 0; i < Node->KingHigh; i++)
			{
				if (Node->KingOnTable == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking.AStarGreedy.empty())
				{
					continue;
				}
				Formatters->Serialize(DummyFileStream, Node->KingOnTable[i].KingThinking.AStarGreedy.size());
				for (int j = 0; j < Node->KingOnTable[i].KingThinking.AStarGreedy.size(); j++)
				{
					Formatters->Serialize(DummyFileStream, Node->KingOnTable[i].KingThinking.AStarGreedy[j]);
					Node->KingOnTable[i].KingThinking.AStarGreedy[j].RewriteAllDrawRec(Formatters, DummyFileStream, Order * -1);
				}
			}
		}
	}*/
/*
	AllDraw AllDraw::LoaderEC(bool Quantum, int Order, FileStream *DummyFileStream, BinaryFormatter *Formatters)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{

			AllDraw Node = this;
			if (DummyFileStream->Position >= DummyFileStream->Length)
			{
				return Node;
			}


			Node->SodierMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->SodierHigh = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->SodierHigh; i++)
			{
				if (Node->SolderesOnTable == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking == nullptr)
				{
					continue;
				}
				if (Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->SolderesOnTable[i].SoldierThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->SolderesOnTable[i].SoldierThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->SolderesOnTable[i].SoldierThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			Node->ElefantMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->ElefantHigh = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->ElefantHigh; i++)
			{
				if (Node->ElephantOnTable == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking == nullptr)
				{
					continue;
				}
				if (Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->ElephantOnTable[i].ElefantThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->ElephantOnTable[i].ElefantThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->ElephantOnTable[i].ElefantThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			Node->HourseMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->HourseHight = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->HourseHight; i++)
			{
				if (Node->HoursesOnTable == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking == nullptr)
				{
					continue;
				}
				if (Node->HoursesOnTable[i].HourseThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->HoursesOnTable[i].HourseThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->HoursesOnTable[i].HourseThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->HoursesOnTable[i].HourseThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->HoursesOnTable[i].HourseThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			Node->CastleMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->CastleHigh = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->CastleHigh; i++)
			{
				if (Node->CastlesOnTable == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking == nullptr)
				{
					continue;
				}
				if (Node->CastlesOnTable[i].CastleThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->CastlesOnTable[i].CastleThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->CastlesOnTable[i].CastleThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->CastlesOnTable[i].CastleThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->CastlesOnTable[i].CastleThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			Node->MinisterMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->MinisterHigh = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->MinisterHigh; i++)
			{
				if (Node->MinisterOnTable == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking == nullptr)
				{
					continue;
				}
				if (Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->MinisterOnTable[i].MinisterThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->MinisterOnTable[i].MinisterThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->MinisterOnTable[i].MinisterThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			Node->KingMidle = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			Node->KingHigh = static_cast<int>(Formatters->Deserialize(DummyFileStream));
			for (int i = 0; i < Node->KingHigh; i++)
			{
				if (Node->KingOnTable == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i] == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking == nullptr)
				{
					continue;
				}
				if (Node->KingOnTable[i].KingThinking.AStarGreedy.empty())
				{
					continue;
				}
				int count = static_cast<int>(Formatters->Deserialize(DummyFileStream));
				Node->KingOnTable[i].KingThinking.AStarGreedy.clear();
				for (int j = 0; j < count; j++)
				{
					if (DummyFileStream->Position < DummyFileStream->Length)
					{
						Node->KingOnTable[i].KingThinking.AStarGreedy.push_back(static_cast<AllDraw>(Formatters->Deserialize(DummyFileStream)));
						Node->KingOnTable[i].KingThinking.AStarGreedy[j].LoaderEC(Quantum, Order * -1, DummyFileStream, Formatters);
						Node->KingOnTable[i].KingThinking.AStarGreedy[j].AStarGreedyStringNode = Node;
					}
				}
			}
			//  if (!Act)




			return Node;

		}
	}
	*/
	bool AllDraw::UpdateLoseAndWinDepenOfKindBoundryCondition(int kind, int i, int j)
	{

		if (kind == 1)
		{
			if (SolderesOnTable == nullptr)
			{
				return false;
			}
			if (SolderesOnTable[i] == nullptr)
			{
				return false;
			}
			if (SolderesOnTable[i].SoldierThinking == nullptr)
			{
				return false;
			}
			if (SolderesOnTable[i].SoldierThinking.TableListSolder.empty())
			{
				return false;
			}
		}
		else
		{
		if (kind == 2)
		{
			if (ElephantOnTable == nullptr)
			{
				return false;
			}
			if (ElephantOnTable[i] == nullptr)
			{
				return false;
			}
			if (ElephantOnTable[i].ElefantThinking == nullptr)
			{
				return false;
			}
			if (ElephantOnTable[i].ElefantThinking.TableListElefant.empty())
			{
				return false;
			}
		}
		else
		{
		if (kind == 3)
		{
			if (HoursesOnTable == nullptr)
			{
				return false;
			}
			if (HoursesOnTable[i] == nullptr)
			{
				return false;
			}
			if (HoursesOnTable[i].HourseThinking == nullptr)
			{
				return false;
			}
			if (HoursesOnTable[i].HourseThinking.TableListHourse.empty())
			{
				return false;
			}
		}
		else
		{
		if (kind == 4)
		{
			if (CastlesOnTable == nullptr)
			{
				return false;
			}
			if (CastlesOnTable[i] == nullptr)
			{
				return false;
			}
			if (CastlesOnTable[i].CastleThinking == nullptr)
			{
				return false;
			}
			if (CastlesOnTable[i].CastleThinking.TableListCastle.empty())
			{
				return false;
			}
		}
		else
		{
		if (kind == 5)
		{
			if (MinisterOnTable == nullptr)
			{
				return false;
			}
			if (MinisterOnTable[i] == nullptr)
			{
				return false;
			}
			if (MinisterOnTable[i].MinisterThinking == nullptr)
			{
				return false;
			}
			if (MinisterOnTable[i].MinisterThinking.TableListMinister.empty())
			{
				return false;
			}
		}
		else
		{
		if (kind == 6)
		{
			if (KingOnTable == nullptr)
			{
				return false;
			}
			if (KingOnTable[i] == nullptr)
			{
				return false;
			}
			if (KingOnTable[i].KingThinking == nullptr)
			{
				return false;
			}
			if (KingOnTable[i].KingThinking.TableListKing.empty())
			{
				return false;
			}
		}
		}
		}
		}
		}
		}
		return true;
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindSoldier(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(1, i, j) && j < SolderesOnTable[i].SoldierThinking.TableListSolder.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 1))
				{
					continue;
				}

				//deeper
				for (int  ii = 0; ii < SolderesOnTable[i].SoldierThinking.AStarGreedy.size(); ii++)
				{
					SolderesOnTable[i].SoldierThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (SolderesOnTable[i].WinOcuuredatChiled == 0)
				{ //non learning autamata victory leafs
					for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[i].WinOcuuredatChiled += SumOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (SolderesOnTable[i].LoseOcuuredatChiled[0] == 0)
				{ //non learning autamata victom leafs
					for (int h = 0; h < SolderesOnTable[i].SoldierThinking.AStarGreedy.size() && SolderesOnTable[i].SoldierThinking.AStarGreedy.size() > 0; h++)
					{
						SolderesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(SolderesOnTable[i].SoldierThinking.AStarGreedy[h], Order * -1);
					}
				}
			}
		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindElephant(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(2, i, j) && j < ElephantOnTable[i].ElefantThinking.TableListElefant.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 2))
				{
					continue;
				}
				//deeper
				for (int  ii = 0; ii < ElephantOnTable[i].ElefantThinking.AStarGreedy.size(); ii++)
				{
					ElephantOnTable[i].ElefantThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (ElephantOnTable[i].WinOcuuredatChiled == 0)
				{ //non learning autamata victory leafs
					for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[i].WinOcuuredatChiled += SumOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (ElephantOnTable[i].LoseOcuuredatChiled[0] == 0)
				{ //non learning autamata victom leafs
					for (int h = 0; h < ElephantOnTable[i].ElefantThinking.AStarGreedy.size() && ElephantOnTable[i].ElefantThinking.AStarGreedy.size() > 0; h++)
					{
						ElephantOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(ElephantOnTable[i].ElefantThinking.AStarGreedy[h], Order * -1);
					}
				}
			}
		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindHourse(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(3, i, j) && j < HoursesOnTable[i].HourseThinking.TableListHourse.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 3))
				{
					continue;
				}
				//deeper
				for (int  ii = 0; ii < HoursesOnTable[i].HourseThinking.AStarGreedy.size(); ii++)
				{
					HoursesOnTable[i].HourseThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (HoursesOnTable[i].WinOcuuredatChiled == 0)
				{ //non learning autamata victory leafs
					for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[i].WinOcuuredatChiled += SumOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (HoursesOnTable[i].LoseOcuuredatChiled[0] == 0)
				{ //non learning autamata victom leafs
					for (int h = 0; h < HoursesOnTable[i].HourseThinking.AStarGreedy.size() && HoursesOnTable[i].HourseThinking.AStarGreedy.size() > 0; h++)
					{
						HoursesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(HoursesOnTable[i].HourseThinking.AStarGreedy[h], Order * -1);
					}
				}
			}

		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindCastle(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(4, i, j) && j < CastlesOnTable[i].CastleThinking.TableListCastle.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 4))
				{
					continue;
				}

				//deeper
				for (int  ii = 0; ii < CastlesOnTable[i].CastleThinking.AStarGreedy.size(); ii++)
				{
					CastlesOnTable[i].CastleThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (CastlesOnTable[i].WinOcuuredatChiled == 0)
				{ //non learning autamata victory leafs
					for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[i].WinOcuuredatChiled += SumOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (CastlesOnTable[i].LoseOcuuredatChiled[0] == 0)
				{
					for (int h = 0; h < CastlesOnTable[i].CastleThinking.AStarGreedy.size() && CastlesOnTable[i].CastleThinking.AStarGreedy.size() > 0; h++)
					{
						CastlesOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(CastlesOnTable[i].CastleThinking.AStarGreedy[h], Order * -1);
					}
				}
			}
		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindMinister(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(5, i, j) && j < MinisterOnTable[i].MinisterThinking.TableListMinister.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 5))
				{
					continue;
				}
				//deeper
				for (int  ii = 0; ii < MinisterOnTable[i].MinisterThinking.AStarGreedy.size(); ii++)
				{
					MinisterOnTable[i].MinisterThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (MinisterOnTable[i].WinOcuuredatChiled == 0)
				{ //non learning autamata victory leafs
					for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[i].WinOcuuredatChiled += SumOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (MinisterOnTable[i].LoseOcuuredatChiled[0] == 0)
				{ //non learning autamata victom leafs
					for (int h = 0; h < MinisterOnTable[i].MinisterThinking.AStarGreedy.size() && MinisterOnTable[i].MinisterThinking.AStarGreedy.size() > 0; h++)
					{
						MinisterOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(MinisterOnTable[i].MinisterThinking.AStarGreedy[h], Order * -1);
					}
				}
			}
		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKindKing(int i, int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			for (int  j = 0; UpdateLoseAndWinDepenOfKindBoundryCondition(6, i, j) && j < KingOnTable[i].KingThinking.TableListKing.size(); j++)
			{
				if (IsSupHuTrue(i, j, 0, 6))
				{
					continue;
				}
				//deeper
				for (int  ii = 0; ii < KingOnTable[i].KingThinking.AStarGreedy.size(); ii++)
				{
					KingOnTable[i].KingThinking.AStarGreedy[ii].UpdateLoseAndWinDepenOfKind(Order * -1);
				}
				if (KingOnTable[i].WinOcuuredatChiled == 0)
				{
					//non learning autamata victory leafs
					for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[i].WinOcuuredatChiled += SumOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
					}
				}
				if (KingOnTable[i].LoseOcuuredatChiled[0] == 0)
				{ //non learning autamata victom leafs
					for (int h = 0; h < KingOnTable[i].KingThinking.AStarGreedy.size() && KingOnTable[i].KingThinking.AStarGreedy.size() > 0; h++)
					{
						KingOnTable[i].LoseOcuuredatChiled[0] += SumMinusOfObjects(KingOnTable[i].KingThinking.AStarGreedy[h], Order * -1);
					}
				}
			}
		}
	}

	void AllDraw::UpdateLoseAndWinDepenOfKind(int Order)
	{
		////auto a = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (a)
		{
			//when found return recursive
			//WHITE
			if (Order == 1)
			{
				for (int  i = 0; i < SodierMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindSoldier(i, Order);
				}
				for (int  i = 0; i < ElefantMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindElephant(i, Order);
				}
				for (int  i = 0; i < HourseMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindHourse(i, Order);
				}
				for (int  i = 0; i < CastleMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindCastle(i, Order);
				}
				for (int  i = 0; i < MinisterMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindMinister(i, Order);
				}
				for (int  i = 0; i < KingMidle; i++)
				{
					UpdateLoseAndWinDepenOfKindKing(i, Order);
				}
			}
			else
			{
				for (int  i = SodierMidle; i < SodierHigh; i++)
				{
					UpdateLoseAndWinDepenOfKindSoldier(i, Order);
				}
				for (int  i = ElefantMidle; i < ElefantHigh; i++)
				{
					UpdateLoseAndWinDepenOfKindElephant(i, Order);
				}
				for (int  i = HourseMidle; i < HourseHight; i++)
				{
					UpdateLoseAndWinDepenOfKindHourse(i, Order);
				}
				for (int  i = CastleMidle; i < CastleHigh; i++)
				{
					UpdateLoseAndWinDepenOfKindCastle(i, Order);
				}
				for (int  i = MinisterMidle; i < MinisterHigh; i++)
				{
					UpdateLoseAndWinDepenOfKindMinister(i, Order);
				}
				for (int  i = KingMidle; i < KingHigh; i++)
				{
					UpdateLoseAndWinDepenOfKindKing(i, Order);
				}
			}
		}
	}

	bool AllDraw::IsMovableLoseOcuuredatChiled(int** Tab, int Kind, int Order, int i)
	{
		bool Is = false;
		if (Kind == 1)
		{
			if (ServeBoundryConditionsSoldier(i, Kind, Order))
			{
				return false;
			}
			if (SolderesOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[SolderesOnTable[i].LoseOcuuredatChiled[1]][SolderesOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), SolderesOnTable[i].LoseOcuuredatChiled[1], SolderesOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
						{
							return true;
						}
					}
				}
			}
		}
		else
		{
		if (Kind == 2)
		{
			if (ServeBoundryConditionsElephant(i, Kind, Order))
			{
				return false;
			}
			if (ElephantOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[ElephantOnTable[i].LoseOcuuredatChiled[1]][ElephantOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), ElephantOnTable[i].LoseOcuuredatChiled[1], ElephantOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
						{
							return true;
						}
					}
				}
			}
		}
		else
		{
		if (Kind == 3)
		{
			if (ServeBoundryConditionsHourse(i, Kind, Order))
			{
				return false;
			}
			if (HoursesOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[HoursesOnTable[i].LoseOcuuredatChiled[1]][HoursesOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), HoursesOnTable[i].LoseOcuuredatChiled[1], HoursesOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
						{
							return true;
						}
					}
				}
			}
		}
		else
		{
		if (Kind == 4)
		{
			if (ServeBoundryConditionsCastle(i, Kind, Order))
			{
				return false;
			}
			if (CastlesOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[CastlesOnTable[i].LoseOcuuredatChiled[1]][CastlesOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), CastlesOnTable[i].LoseOcuuredatChiled[1], CastlesOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
						{
							return true;
						}
					}
				}
			}
		}
		else
		{
		if (Kind == 5)
		{
			if (ServeBoundryConditionsMinister(i, Kind, Order))
			{
				return false;
			}
			if (MinisterOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[MinisterOnTable[i].LoseOcuuredatChiled[1]][MinisterOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), MinisterOnTable[i].LoseOcuuredatChiled[1], MinisterOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
						{
							return true;
						}
					}
				}
			}
		}
		else
		{
		if (Kind == 6)
		{
			if (ServeBoundryConditionsKing(i, Kind, Order))
			{
				return false;
			}
			if (KingOnTable[i].LoseOcuuredatChiled[0] == 5)
			{
				Order = 1;
				if (Tab[KingOnTable[i].LoseOcuuredatChiled[1]][KingOnTable[i].LoseOcuuredatChiled[2]] < 0)
				{
					Order = -1;
				}

				for (int Row = 0; Row < 8; Row++)
				{
					for (int Col = 0; Col < 8; Col++)
					{
						if (Movable(CloneATable(Tab), KingOnTable[i].LoseOcuuredatChiled[1], KingOnTable[i].LoseOcuuredatChiled[2], Row, Col, OrderColor(Order), Order))
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

	int AllDraw::OrderColor(int Ord)
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

	bool AllDraw::Movable(int** Tab, int i, int j, int ii, int jj, int a, int Order)
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
				if (A->Rules(i, j, ii, jj, a, Order))
				{
					return true;
				}
			}
			else
			{
			 if (Order == -1 && Table[ii][jj] > 0)
			 {
				if (A->Rules(i, j, ii, jj, a, Order))
				{
					return true;
				}
			 }
			}
			if (Order == 1 && Table[ii][jj] == 0)
			{
				if (A->Rules(i, j, ii, jj, a, Order))
				{
					return true;
				}
			}
			else
			{
			if (Order == -1 && Table[ii][jj] == 0)
			{
				if (A->Rules(i, j, ii, jj, a, Order))
				{
					return true;
				}
			}
			}

			return false;
		}
	}

	void AllDraw::InitializeInstanceFields()
	{
		TimeNow = 0;
		NumberOfnewMove = 0;
		UsedRestrictedMoveBlitzAndFull = true;
		SolderesOnTableMove = std::vector<bool>();
		ElephantOnTableMove = std::vector<bool>();
		HoursesOnTableMove = std::vector<bool>();
		CastlesOnTableMove = std::vector<bool>();
		MinisterOnTableMove = std::vector<bool>();
		KingOnTableMove = std::vector<bool>();
		OnlyWin = false;
		bool temp_ThinkingAllowed[12] = {false, false, false, false, false, false, false, false, false, false, false, false};
		for (int element = 0; element < sizeof(temp_ThinkingAllowed) / sizeof(temp_ThinkingAllowed[0]); element++)
			ThinkingAllowed[element] = temp_ThinkingAllowed[element];
		IsCurrentDraw = false;
		HaveKilled = 0;
		//Space = new std::string(L"&nbsp;");
		Spaces = 0;
		SetDeptIgnore = false;
		//Now = DateTime::Now.Hour * (36000000 * 24) + DateTime::Now.Minute * 36000000 + DateTime::Now.Second * 600000 + DateTime::Now.Millisecond;
		//Later = DateTime::Now.Hour * (36000000 * 24) + DateTime::Now.Minute * 36000000 + DateTime::Now.Second * 600000 + DateTime::Now.Millisecond;
		//callStack = new StackFrame(1, true);
		OrderP = 0;
		PerceptionCount = 0;
		OutPutAction = L"";
		ValuableSelfSupported = std::vector<int*>();
		CurrentAStarGredyMax = 0;
		SetRowColumnFinished = false;
		MaxHeuristicxT = -DBL_MAX;
		MovementsAStarGreedyHeuristicFoundT = false;
		IgnoreSelfObjectsT = false;
		UsePenaltyRegardMechnisamT = true;
		BestMovmentsT = false;
		PredictHeuristicT = true;
		OnlySelfT = false;
		AStarGreedyHeuristicT = false;
		int temp_Index[6] = {-1, -1, -1, -1, -1, -1};
		for (int element = 0; element < sizeof(temp_Index) / sizeof(temp_Index[0]); element++)
			Index[element] = temp_Index[element];
		int temp_jindex[6] = {-1, -1, -1, -1, -1, -1};
		for (int element = 0; element < sizeof(temp_jindex) / sizeof(temp_jindex[0]); element++)
			jindex[element] = temp_jindex[element];
		int temp_Kind[6] = {-1, -1, -1, -1, -1, -1};
		for (int element = 0; element < sizeof(temp_Kind) / sizeof(temp_Kind[0]); element++)
			Kind[element] = temp_Kind[element];
		ArrangmentsChanged = true;
		CastlesKing = false;
		MaxHeuristicAStarGreedytBackWardTable = std::vector<int**>();
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
		RW = 0;
		CL = 0;
		Ki = 0;
		RW1 = 0;
		CL1 = 0;
		Ki1 = 0;
		MaxLess1 = 0;
		RW2 = 0;
		CL2 = 0;
		Ki2 = 0;
		MaxLess2 = 0;
		RW3 = 0;
		CL3 = 0;
		Ki3 = 0;
		MaxLess3 = 0;
		RW4 = 0;
		CL4 = 0;
		Ki4 = 0;
		MaxLess4 = 0;
		RW5 = 0;
		CL5 = 0;
		Ki5 = 0;
		MaxLess5 = 0;
		RW6 = 0;
		CL6 = 0;
		Ki6 = 0;
		MaxLess6 = 0;
		Move_Renamed = 0;
		TableList = std::vector<int**>();
		AStarGreedy = 0;
		MaxHeuristicAStarGreedytBackWard = std::vector<int*>();
		AStarGreedyStringNode = 0;
	}
