#pragma once



#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "Colleralation.h"
#include "NetworkQuantumLearningKrinskyAtamata.h"
#include "QuantumAtamata.h"
#include "AllDraw.h"
#include "DrawSoldire.h"
#include "DrawElefant.h"
#include "DrawHourse.h"
#include "DrawCastle.h"
#include "DrawMinister.h"
#include "DrawKing.h"
#include "Stone.h"
#include "ThingsConverter.h"
/*#include "DrawSoldire.h"
#include "DrawElefant.h"
#include "DrawHourse.h"
#include "DrawCastle.h"
#include "DrawMinister.h"
#include "DrawKing.h"*/
/**************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
*************TETRASHOP.IR**************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
***************************************
**************************************/




//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class ThinkingHybridizerRefrigitz
	class ThinkingHybridizerRefrigitz //: IDisposable
	{
	public:
		static std::wstring OutP;
	private:
		std::vector<std::vector<std::vector<int*>>> MovableAllObjectsList;
	public:
		int RemoveOfDisturbIndex;
	private:
		int HeuristicDoubleDefenceIndexInOnGameMidle;
		std::vector<std::vector<int*>> HeuristicDoubleDefenceIndexInOnGame;
		int HeuristicReducedAttackedIndexInOnGameMidle;
		std::vector<int> HeuristicReducedAttackedIndexInOnGame;
		static bool GoldenFinished;
	public:
		std::vector<std::vector<std::vector<int*>>> AchmazPure;
	private:
		int AchmazPureMidle;
	public:
		std::vector<std::vector<std::vector<int*>>> AchmazReduced;
	private:
		int AchmazReducedMidle;

	public:
		std::vector<int> WinChiled;
		std::vector<int> LoseChiled;

	private:
		bool IKIsCentralPawnIsOk;

		std::vector<int*> HeuristicAllSupport;
		int HeuristicAllSupportMidel;
		std::vector<int*> HeuristicAllReducedSupport;
		int HeuristicAllReducedSupportMidel;
		std::vector<int*> HeuristicAllAttacked;
		int HeuristicAllAttackedMidel;
		std::vector<int*> HeuristicAllReducedAttacked;
		int HeuristicAllReducedAttackedMidel;
		std::vector<int*> HeuristicAllMove;
		int HeuristicAllMoveMidel;
		std::vector<int*> HeuristicAllReducedMove;
		int HeuristicAllReducedMoveMidel;
	public:
		static int NoOfBoardMovedWHITE;
		static int NoOfBoardMovedBLACK;
		static int NoOfMovableAllObjectMove;
		int DifOfNoOfSupporteAndReducedSupportWHITE;
		int DifOfNoOfSupporteAndReducedSupportBLACK;
		static int ColleralationWHITE;
		static int ColleralationBLACK;
//C# TO C++ CONVERTER NOTE: The variable Colleralation was renamed since it is named the same as a user-defined type:
		static int Colleralation_Renamed;
		static int DeColleralation;
		static int TableInitiation[8][8] =
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
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public static int[,] TableInitiationPreventionOfMultipleMove ={ { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 } };
		static int TableInitiationPreventionOfMultipleMove[8][8] =
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
	private:
		int RationalRegard;
		int RationalPenalty;


	public:
		static bool FullGameAllow;
	private:
		const int iIndex;
	public:
		static bool IsAtLeastOneKillerAtDraw;
		std::vector<bool> KishSelf;
		std::vector<bool> KishEnemy;
	
	public:
		int HeuristicAttackValueSup;
		int HeuristicMovementValueSup;
		int HeuristicSelfSupportedValueSup;
		int HeuristicReducedMovementValueSup;
		int HeuristicReducedSupportSup;
		int HeuristicReducedAttackValueSup;
		int HeuristicDistributionValueSup;
		int HeuristicKingSafeSup;
		int HeuristicFromCenterSup;
		int HeuristicKingDangourSup;
		std::vector<bool> IsSup;
		std::vector<bool> IsSupHu;
	private:
		//Initiate Global and Static Variables. 
	public:
		std::vector<bool> IsThereMateOfEnemy;
		std::vector<bool> IsThereMateOfSelf;
		std::vector<bool> IsThereCheckOfEnemy;
		std::vector<bool> IsThereCheckOfSelf;
		static NetworkQuantumLearningKrinskyAtamata *LearniningTable;
	private:
		bool ThinkingAtRun;
	public:
		static std::wstring ActionsString;
	private:
		int ThinkingLevel;
	public:
		std::vector<bool[]> LearningVarsObject;
		static bool LearningVarsCheckedMateOccured;
		static bool LearningVarsCheckedMateOccuredOneCheckedMate;
	private:
		bool IsGardHighPriority;
		static const int ThresholdBlitz = 10;
		static const int ThresholdFullGame = 20000;
	public:
		static int MaxHeuristicx;
		bool MovementsAStarGreedyHeuristicFoundT;
		bool IgnoreSelfObjectsT;
		bool UsePenaltyRegardMechnisamT;
		bool BestMovmentsT;
		bool PredictHeuristicT;
		bool OnlySelfT;
		bool AStarGreedyHeuristicT;
	private:
		bool ArrangmentsChanged;
	public:
		int NumberOfPenalties;
	private:
		static int NumbersOfCurrentBranchesPenalties;
	public:
		static int NumbersOfAllNode;
		int SodierMidle;
		int SodierHigh;
		int ElefantMidle;
		int ElefantHigh;
		int HourseMidle;
		int HourseHight;
		int CastleMidle;
		int CastleHigh;
		int MinisterMidle;
		int MinisterHigh;
		int KingMidle;
		int KingHigh;
		static bool KingMaovableWHITE;
		static bool KingMaovableBLACK;
		static int FoundFirstMating;
		static int FoundFirstSelfMating;
		int SodierValue;
		int ElefantValue;
		int HourseValue;
		int CastleValue;
		int MinisterValue;
		int KingValue;
		static int BeginThread;
		static int EndThread;
	private:
		bool ExistingOfEnemyHiiting;
		int IgnoreObjectDangour;
	public:
		int CheckMateAStarGreedy;
	private:
		bool CheckMateOcuured;
		int CurrentRow, CurrentColumn;
	public:
		bool IsCheck;
		int Kind;
		std::vector<int> HitNumber;
		static bool NotSolvedKingDanger;
		static bool ThinkingRun;
		int ThingsNumber;
		int CurrentArray;
		bool ThinkingBegin;
		bool ThinkingFinished;
		int IndexSoldier;
		int IndexElefant;
		int IndexHourse;
		int IndexCastle;
		int IndexMinister;
		int IndexKing;

		std::vector<int*> RowColumnSoldier;
		std::vector<int*> RowColumnElefant;
		std::vector<int*> RowColumnHourse;
		std::vector<int*> RowColumnCastle;
		std::vector<int*> RowColumnMinister;
		std::vector<int*> RowColumnKing;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] TableT;
		int **TableT;
		std::vector<int> HitNumberSoldier;
		std::vector<int> HitNumberElefant;
		std::vector<int> HitNumberHourse;
		std::vector<int> HitNumberCastle;
		std::vector<int> HitNumberMinister;
		std::vector<int> HitNumberKing;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] TableConst;
		int **TableConst;
		std::vector<int**> TableListSolder;
		std::vector<int**> TableListElefant;
		std::vector<int**> TableListHourse;
		std::vector<int**> TableListCastle;
		std::vector<int**> TableListMinister;
		std::vector<int**> TableListKing;
		std::vector<int*> HeuristicListSolder;
		std::vector<int*> HeuristicListElefant;
		std::vector<int*> HeuristicListHourse;
		std::vector<int*> HeuristicListCastle;
		std::vector<int*> HeuristicListMinister;
		std::vector<int*> HeuristicListKing;
		std::vector<int> KillerAtThinking;
		std::vector<QuantumAtamata*> PenaltyRegardListSolder;
		std::vector<QuantumAtamata*> PenaltyRegardListElefant;
		std::vector<QuantumAtamata*> PenaltyRegardListHourse;
		std::vector<QuantumAtamata*> PenaltyRegardListCastle;
		std::vector<QuantumAtamata*> PenaltyRegardListMinister;
		std::vector<QuantumAtamata*> PenaltyRegardListKing;
		int Max;
		int Row, Column;
		int color;
		int Order;
		//[NonSerialized()]
		std::vector<AllDraw*> AStarGreedy;
		std::vector<bool> AStarGreedyMove;
	private:
		const int **Value;
		int CurrentAStarGredyMax;
		std::vector<int**> ObjectNumbers;
		///Log of Errors.
//C# TO C++ CONVERTER WARNING: Unlike C#, there is no automatic call to this finalizer method in native C++:
		private:
		void Finalize()
		{
			this->Dispose(false);
		}

		static void Log(std::exception &ex);
		//create a tow dimension list of all object boundry
		void SetObjectNumbersInList(int** Tab);
		//distiguis object boundries 
	public:
		void SetObjectNumbers(int** TabS);

		~ThinkingHybridizerRefrigitz();
	private:
		void Dispose(bool disposing);
	public:
		std::wstring AsS(int i, int j, int ii, int jj);
		ThinkingHybridizerRefrigitz();
		//Constructor
		ThinkingHybridizerRefrigitz(int iInde, int KindO, int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int i, int j);

		//determine When Arrangment of Table Objects is Validated at Begin.
	private:
		ThinkingHybridizerRefrigitz(int KindO, int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int i, int j);
		bool BeginArragmentsOfOrderFinished(int** Table, int Order);
		//Constructor
	public:
		//ThinkingHybridizerRefrigitz(int iInde, int KindO, int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int i, int j, int a, int** Tab, int Ma, int Ord, bool ThinkingBeg, int CurA, int ThingN, int Kin);
		//Clone A Table
		private:
		int **CloneATable(int** Tab);
		//Clone A List.  
		int *CloneAList(int Tab[], int Count);
		//Clone a copy of an array.
		//Gwt Value of Book Netwrok  Atamtat at Every Need time form parameters index.
		int GetValue(int i, int j);
		///Clone a Copy.
	public:
		void Clone(ThinkingHybridizerRefrigitz &AA);
	private:
		bool IsDistributedObjectAttackNonDistributedEnemyObject(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		///Heuristic of Attacker.
		int HeuristicAttack(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		bool IsMinisteBreakable(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		bool IsMinistePowerfull(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		int HeuristicReducsedAttack(bool Before, int** Table, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		///Value of Object method.
		int GetObjectValue(int** Tabl, int ii, int jj, int Order);
		///Heuristic of ObjectDanger.
		int HeuristicObjectDangour(int** Table, int Order, int a, int RowS, int ColS, int RowD, int ColD);
		int HeuristicKiller(int Killed, int** Tabl, int RowS, int ColS, int RowD, int ColD, int Ord, int aa, bool Hit);
		//Attacks Of Enemy that is not Supported.QC_OK
		bool InAttackEnemyThatIsNotSupported(int Kilded, int** Table, int Order, int a, int i, int j, int ii, int jj);
		//When at least one Attacked Self Object return true.
		bool InAttackEnemyThatIsNotSupportedAll(bool EnemyIsValuable, int** Table, int Order, int a, int ij, int ji, int iij, int jji, std::vector<int*> &ValuableEnemyNotSupported);
		//When  there is more than tow self object not supported on atacked by movement return true.
		int IsNotSafeToMoveAenemeyToAttackMoreThanTowObject(int AttackCount, int** Table, int Order, int i, int j, int ii, int jj);
		//Supported of Self that is Not Attacks.QC_BAD
		bool InAttackSelfThatNotSupported(int** TableS, int Order, int a, int ij, int ji, int ii, int jj);
		//When there is at least on self object that is not safty.
		bool InAttackSelfThatNotSupportedAll(int** TableS, int Order, int a, int i, int j, int RowS, int ColS, int ikk, int jkk, int iik, int jjk);
		//Creation A Complete List of Attacked Self Object(s).
		bool InAttackSelfThatNotSupportedCalculateValuableAll(int** TableS, int Order, int a, int ij, int ji, int ii, int jj, std::vector<int*> &ValuableSelfSupported);
		bool ExistValuble(int Table[], std::vector<int*> &ValuableSelfSupported);
		bool MaxObjecvts(std::vector<int> &Obj, int Max);
		//When Current Movment Take Supporte.QC_OK
		bool IsCurrentMoveTakeSupporte(int** Table, int Order, int a, int i, int j, int ii, int jj);
		///Heuristic of King safty.
		int HeuristicKingSafety(int** Tab, int Order, int a, int CurrentAStarGredy, int RowS, int ColS, int RowD, int ColD);
		int HeuristicKingPreventionOfCheckedAtBegin(int** Tab, int Order, int a, int CurrentAStarGredy, int RowS, int ColS, int RowD, int ColD);
		int HeuristicSupported(int** Tab, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		///Identification of Equality
		//Heuristic of Supportation.
		int HeuristicSelfSupported(int** Tab, int Ord, int aa, int RowS, int ColS, int RowD, int ColD);
		//Heuristic of Supportation.
		int HeuristicEnemySupported(int** Tab, int Ord, int aa, int RowD, int ColD, int RowS, int ColS);
	public:
		static bool TableEqual(int** Tabl1, int** Tabl2);
		//If tow int Objects is equal.
		static bool TableEqual(int Tab1, int Tab2);
		//Deterimination of Existance of Table in List..
		static bool ExistTableInList(int** Tab, std::vector<int**> &List, int Index);
		///Move Determination.
		bool Movable(int** Tab, int i, int j, int ii, int jj, int a, int Order);
		//
		//When Oredrs of OrderPalte and Calculation Order is not equal return negative one and else return one.
	private:
		int SignOrderToPlate(int Order);
		//Remove Penalties of Unnesserily Nodes.
	public:
		ThinkingHybridizerRefrigitz& operator=(ThinkingHybridizerRefrigitz arg) noexcept // copy/move constructor is called to construct arg
		{
			return arg;
		}
		bool RemovePenalty(int** Tab, int Order, int i, int j);
		//Dangouring of current movment fo current Order.
	private:
		bool IsCurrentStateIsDangreousForCurrentOrder(int** Tabl, int Order, int a, int ii, int jj);
		//When Next Movements is Checked.QC_OK.
		int *IsNextMovmentIsCheckOrCheckMateForCurrentMovmentbaseKernel(int Order, int** Tabl, int ik, int jk, int iki, int jki, int OrderPalte, int OrderPalteMulMinuse, int Depth, bool KindCheckedSelf);
		//When Next Movements is Checked.QC_OK.
		bool IsNextMovmentIsCheckOrCheckMateForCurrentMovmentOnCurrentMovemnet(int Order, int** Tabl, int ik, int jk, int iki, int jki, int OrderPalte);
		int *IsNextMovmentIsCheckOrCheckMateForCurrentMovment(int** Tabl, int Order, int a, int Depth, int OrderPalte, int OrderPalteMinusPluse, bool KindCheckedSelf);
		//When Current Movements is in dangrous and is not movable.
		bool IsGardForCurrentMovmentsAndIsNotMovable(int** Tab, int Order, int a, int ii, int jj, int RowS, int ColS);
		///when current movments gards enemy with higer priority at movment.QC_OK
		bool IsCurrentCanGardHighPriorityEnemy(int Depth, int** Table, int Order, int a, int ij, int ji, int iij, int jji, int OrderPlate);
		bool CurrentIsTowCastleOrMinisterBecomeCheckedMateAtCloseRanAway(int RowK, int ColK, int** Table);
		bool SameSign(int Obj1, int Obj2);
		bool ThereIsOneSideToRanAwayByEnemyKing(int RowK, int ColK, int** Table);
		bool CurrentCanBecomeClosedRanAwayByOneCastleOrMinister(int RowK, int ColK, int** Table);
		bool IsObjectrSelfAttackEnemyKing(int Rowk, int ColK, int** Table, int Order);
	public:
		int SimpleMate_Zero(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		int SimpleMate_One(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		int SimpleMate_Tow(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		int SimpleMate_Three_And_Four(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		int EnemyKingHaveAtMostOneEmptyItem(int Rowk, int ColK, int** Table, int Order, std::vector<int> &EmptyR, std::vector<int> &EmptyC);
		bool EnemyKingHaveAtMostOneEmptyItemInAttack(int Rowk, int ColK, int** Table, int Order);
	private:
		bool IsNumberOfObjecttIsLessThanThreashold(int** Tab, int Threashold = 30);
	public:
		bool EnemyKingCanMateByCloseHome(int RowK, int ColK, int** Table, int Order);
	private:
		bool IsMinisterOrElephantBecomeActive(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		bool IsContorlCenter(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		///Heuristic of Check and CheckMate.
	public:
		int HeuristicCheckAndCheckMate(int RowS, int ColS, int RowD, int ColD, int** Table, int a);
		//Veryfy and detect Object Value.
	private:
		int VeryFye(int** Table, int Order, int a);
		//QC_OK
		//Numbers of Supporting Current Objects method.
		int SupporterCount(int** Table, int Order, int a, int ii, int jj);
		//Attacks on Enemies.
		int AttackerCount(int** Table, int Order, int a, int i, int j);
		//Attackers of Enemies.QC_OK.
		int EnemyAttackerCount(int** Table, int Order, int a, int ii, int jj);
		//clear TableInitiationPreventionOfMultipleMoveWhenAll
		void MakeEmptyTableInitiationPreventionOfMultipleMoveWhenAllIsFull();
		//determine when specified ro column of TableInitiationPreventionOfMultipleMoveWhenAll is zero and empty
		bool IsTableRowColIsZero(int Row, int Col);
		//when situation of cerntralized location pawn object is ok
	public:
		bool IsCentralPawnIsOk(int** Tab, int Order);
		//when center is controled by traversal objects.
		bool CenrtrallnControlByTraversal(int** Tab, int a, int Order, int RowS, int ColS, int RowD, int ColD);
		//when tow self castle control tow beside row or column
	private:
		bool ExistCastleInDouble(int Order, int** Table, int RowS, int ColS, int RowD, int ColD);
		//Distribution of Objects
	public:
		int HeuristicDistribution(bool Before, int** Tab, int Order, int a, int RowS, int ColS, int RowD, int ColD);
		//when pawn is doubled or isolated at move before return true and rationalpenalty occured
	private:
		bool IsPawnIsolatedOrDoubleBackAwayOrHung(int RowS, int ColS, int RowD, int ColD, int** Table, int Order);
		//when pawn move to center by no reducedattack rational regard and heuristic of attacked and "IsPawnIsolatedOrDoubleBackAwayOrHung" rational penalty
	public:
		int HeuristicObjectAtCenterAndPawnAttackTraversalObjectsAndDangourForEnemy(int** Table, int aa, int Ord, int ii, int jj, int i, int j);
		//color by order specified
	private:
		int OrderColor(int Ord);
		//permit mehod suit for heuristicexchange
//C# TO C++ CONVERTER NOTE: The parameter Move was renamed since it is named the same as a user-defined type:
		bool Permit(int Order, int TabS, int TabD, bool Self = true, bool Move_Renamed = false);
		//specific method for calculation of differential tow object
		int Diff(int Obj1, int Obj2, bool Penalty = true);
		//specific method for calculation of differential tow object second kind
		int DiffSupport(int Obj1, int Obj2);
		//all heuristics  of attacked and reduced attacked ans supported and reduced attacked
	public:
		int *HeuristicAll(bool Before, int Killed, int** Table, int aa, int Ord);
		//number of exists of move situation in Heuristic lists 
	private:
		int NoOfExistInMoveList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInReducedMoveList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInReducedAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		std::vector<int*> ListOfExistInReducedAttackList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		std::vector<int*> ListOfExistInReducedSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		std::vector<int*> ListOfExistInSupportList(bool Before, int RowS, int ColS, int RowD, int ColD);
		std::vector<int*> ListOfExistInAttackList(bool Before, int RowS, int ColS, int RowD, int ColD);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInReducedSupportList(bool Before, int Rows, int Cols, int Rowd, int Cold);
		//number of exists of move situation in Heuristic lists 
		int NoOfExistInSupportList(bool Before, int RowD, int ColD);
		//promotion heuristic on pawn
		int HeuristicPromotion(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod);
		//heuristic on trying open elephant of self to move
		int HeuristicElephantOpen(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod);
		//safety of self hourse by value.
		int HeuristicHourseCloseBaseOfWeakHourseIsWhereIsHomeStrong(bool Before, int** Tab, int Order, int Ros, int Cos, int Rod, int Cod);
		//create heuristic and lists of move and reduced move and attack and reduced attack and support and reduced support
	public:
		int *HeuristicExchange(bool Before, int Killed, int** Table, int aa, int Ord, int Ros, int Cos, int Rod, int Cod);
		//when objectS source less than destination
	private:
		bool IsObjectSourceLessThanDestination(int RowS, int ColS, int RowD, int ColD, int** TabS);
		//when support less than reduced support
		int IsSupportLessThanReducedSupport(int Support, int ReducedSupport);
		//when attack less than reduced attack
		int IsAttackLessThanReducedAttack(int Attack, int ReducedAttack);
		//when move less than reduced move
//C# TO C++ CONVERTER NOTE: The parameter Move was renamed since it is named the same as a user-defined type:
		int IsMoveLessThanReducedMove(int Move_Renamed, int ReducedMove);
		//Heuristic of Movments.
	public:
		int HeuristicMovment(bool Before, int** Table, int aa, int Ord, int RowS, int ColS, int RowD, int ColD);
		//Heuristic of self Movments.
		int HeuristicMovmentSelf(bool Before, int** Table, int aa, int Ord, int RowS, int ColS, int RowD, int ColD);
		//Heuristic of enemy Movments.
		int HeuristicMovmentEnemy(bool Before, int** Table, int aa, int Ord, int RowD, int ColD, int RowS, int ColS);
		///Attack Determination.QC_Ok
		bool Attack(int** Tab, int i, int j, int ii, int jj, int a, int Order);
		//Object Danger Determination.
		bool ObjectDanger(int** Tab, int i, int j, int ii, int jj, int a, int Order);
		///Supportation Determination.QC_OK
		bool Support(int** Tab, int i, int j, int ii, int jj, int a, int Order);
		//Return Msx Huiristic of Child Level.
		bool MaxHeuristic(int &j, int Kin, int &Less, int Order);
		//Setting Numbers of Objects in Current Table boards.
		//Count of Solders on Table.
	private:
		/*int SolderOnTableCount(DrawSoldire So[], bool Mi, int MaxCount);
		//Elepahnt On Table Count.
		int ElefantOnTableCount(DrawElefant So[], bool Mi, int MaxCount);
		//Calculate Hourse on table.
		int HourseOnTableCount(DrawHourse So[], bool Mi, int MaxCount);
		//Calculate Castles Count.
		int CastleOnTableCount(DrawCastle So[], bool Mi, int MaxCount);
		//Calculate Minsiter Count.
		int MinisterOnTableCount(DrawMinister So[], bool Mi, int MaxCount);
		//Calculate King on Table.
		int KingOnTableCount(DrawKing So[], bool Mi, int MaxCount);*/
		//Return Heuristic.
	public:
		int ReturnHeuristic(int ii, int j, int Order, bool AA, int &HaveKilled);
		//statstical html 
	private:
		std::wstring Alphabet(int RowRealesed);
		//statstical html 
		std::wstring Number(int ColumnRealeased);
		//Heuristic help to kiling of enemy or gave point witout only lraearning autamata exclusive but act on.
	public:
		int ReturnHeuristicCalculartorKiller(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper section to deep inside Heuristic calculation 
		int ReturnHeuristicCalculartorDeeper(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperKing(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperMinister(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperCastle(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperHourse(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperElephant(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//deeper for specific object
		int ReturnHeuristicCalculartorDeeperSolider(int k, int m, int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		int ReturnHeuristicCalculartorSurface(int iAstarGready, int ii, int j, int Order, int &HaveKilled, int &BOUND);
		//main insider method for manage Heuristic count
		int ReturnHeuristicCalculartor(int iAstarGready, int ii, int j, int Order, int &HaveKilled);
		//Returrn of Hurestic Tree.QC_Ok.
		//Scope of Every Objects Movments.
	private:
		bool Scop(int i, int j, int ii, int jj, int Kind);
		bool Scop(int i, int j, int ii, int jj);
		//Calculate Maximum of Six Max Heuristic of Six Kind Objects.
		int MaxOfSixHeuristic(int Less[]);
		//Calculate Minimum of Six Min Heuristic of Six Kind Objects.note the enemy Heuristic are negative.
		int MinOfSixHeuristic(int Less[]);
		void HuMethod(int Hu[], int HeuristicAttackValue, int HeuristicMovementValue, int HeuristicSelfSupportedValue, int HeuristicReducedMovementValue, int HeuristicReducedSupport, int HeuristicReducedAttackValue, int HeuristicDistributionValue, int HeuristicKingSafe, int HeuristicFromCenter, int HeuristicKingDangour, int HeuristicCheckedMate);
		void HuMethodSup(int HeuristicAttackValue, int HeuristicMovementValue, int HeuristicSelfSupportedValue, int HeuristicReducedMovementValue, int HeuristicReducedSupport, int HeuristicReducedAttackValue, int HeuristicDistributionValue, int HeuristicKingSafe, int HeuristicFromCenter, int HeuristicKingDangour, int HeuristicCheckedMate);
		void HuMethodSup(int Hu[]);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void KingThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//monitor
		std::wstring CheM(int A);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void MinisterThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//determination for kinmgs for stage of movment befor act
		bool IsPrviousMovemntIsDangrousForCurrent(int** TableS, int Order);
		//When There is not valuable Object in List Greater than Target Self Object return true.        
		bool IsObjectValaubleObjectSelf(int i, int j, int Object, std::vector<int*> &ValuableSelfSupported);
		//When There is not valuable Object in List Greater than Target enemy Object return true.        
		bool IsObjectValaubleObjectEnemy(int i, int j, int Object, std::vector<int*> &ValuableEnemyNotSupported);
		//a machine learning of learning autamata surface scan
		bool *SomeLearningVarsCalculator(int** TableS, int ik, int jk, int iik, int jjk);
		//learning autamata main section
		bool *CalculateLearningVars(int Killed, int** TableS, int i, int j, int ii, int jj);
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void CastlesThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void HourseThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//specific determination for thinking main method
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ElephantThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//healthy of lists in learning auatama
		bool EqualitTow(bool PenRegStrore, int kind);
		//healthy of lists in learning auatama
		bool EqualitOne(QuantumAtamata* Current, int kind);
		//add list 
		void AddAtList(int kind, QuantumAtamata* Current);
		//remove list
		void eraseList(int kind);
		//learning autamata maib method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void PenaltyMechanisam(bool &RETURN, int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int &CheckedM, int Killed, bool Before, int kind, int** TableS, int ii, int jj, QuantumAtamata* Current, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int i, int j, bool Castle_Renamed);
		void SoldierConversion(ThingsConverter *&t, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, int** TableS);
		int KilledBool(int row1, int col1, int row2, int col2, int** Tab);
		//specific determination for thinking main method
		void SupMethod(int** TableS, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, bool &Sup);
		void KilledMethod(int &Killed, bool Sup, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination, int** TableS, ThingsConverter *t = nullptr);
		void ObjectIndexes(int Kind, bool Sup, int RowDestination, int ColumnDestination, int** TableS);
		void HeuristicInsertion(int Kind, int RowDestination, int ColumnDestination, int** TableS, int Hu[]);
		bool HybridizerRefrigitzRuleThinking(int** TableS, int RowSource, int ColumnSource, int RowDestination, int ColumnDestination);
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void SolderThinkingHybridizerRefrigitz(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void CastleThinkingBLACK(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
		int HeuristicBetterSpace(int** TableSS, int colorS, int colorE, int OrderS, int OrderE);
		bool SubOfHeuristicAllIsPositive(int Heuristic[]);
	public:
		int *CalculateHeuristicsParallel(bool Before, int Killed, int** TableS, int RowS, int ColS, int RowD, int ColD, int color);
	private:
		void SetSupHuTrue();
		void ClearSupHuTrue();
		bool DisturbeOnHugeTraversalExchangePrevention(bool Before, int** TableS, int Order);
		bool DisturbeOnNonSupportedTraversalExchangePrevention(int Killded, bool Before, int** TableS, int Order);
		//recursive of found achmaz detection to be tow objects at line of source attacked or reduced attack
		int AchmazPuredBefore(bool Before, int** Table, int Level = 1);
		//recursive of found achmaz detection to be tow objects at line of source attacked or reduced attack
		int AchmazPuredAfter(bool Before, int** Table, int Level = 1);
		//recursive of found achmaz detection to be tow objects at line of source attacked or reduced attack
		int AchmazReducedBefore(bool Before, int** Table, int Level = 1);
		//recursive of found achmaz detection to be tow objects at line of source attacked or reduced attack
		int AchmazReducedAfter(bool Before, int** Table, int Level = 1);

		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazReducedElephasnt(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazReducedCastle(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazElephasnt(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazCastle(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazHourse(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazReducedHourse(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazMinister(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazKing(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazReducedKing(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//method of list of reduced attack or attack by lists of method found lists by every specified objects on board.
		std::vector<std::vector<int*>> AchMazReducedMinister(int** Tabl, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);

		//calculation first level of achmaz by sub metods possible
		void Achmaz(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//creation of colldection of achmaz lists depend of region of source objects
		std::vector<std::vector<int*>> CollectionSortation(std::vector<std::vector<int*>> &A);
		//creation of one region of collection of achmaz method
		void CollectionSummation(std::vector<std::vector<int*>> &A, int Sum, std::vector<int*> &Co);
		//collection of regionns redistributed from achmaz methods
		std::vector<std::vector<int*>> CollectionSummation(std::vector<std::vector<int*>> &A, std::vector<std::vector<int*>> &B, std::vector<std::vector<int*>> &C, std::vector<std::vector<int*>> &D, std::vector<std::vector<int*>> &E);
		//determine sign of 8th regions
		int SignBeforNext(int Row, int Col, int i, int j);
		//calculate sum of achmazin pure and reduced and beforand after
		int SumAbsSrcPure(bool Before, int** Tab);
		//calculate sum of achmazin pure and reduced and beforand after
		int SumAbsSrcReduced(bool Before, int** Tab);
		//calculate sum of achmazin pure and reduced and beforand after
		int SumAbsDesPure(bool Before, int** Tab);
		//calculate sum of achmazin pure and reduced and beforand after
		int SumAbsDesReduced(bool Before, int** Tab);
		//heuristic creation of double attacked
		int DoubleAttack(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//heuristic creation of double defence
		int DoubleDefence(int** Table, bool Before, int RowS, int ColS, int RowD, int ColD, int Order);
		//when after of move
		bool MidleIndex();
		//heuristic main method
	public:
		void CalculateHeuristics(int *LoseOcuuredatChiled, int WinOcuuredatChiled, bool Before, int Order, int Killed, int** TableS, int RowS, int ColS, int RowD, int ColD, int color, int &HeuristicAttackValue, int &HeuristicMovementValue, int &HeuristicSelfSupportedValue, int &HeuristicReducedMovementValue, int &HeuristicReducedSupport, int &HeuristicReducedAttackValue, int &HeuristicDistributionValue, int &HeuristicKingSafe, int &HeuristicFromCenter, int &HeuristicKingDangour, int &HeuristicCheckedMate);

		//find of "FindMostHeuristicAllReducedSupportIsCurrent" in board
	private:
		int *MostOfFindMostHeuristicAllReducedSupportInList(bool Before, int RowS, int ColS);
		//find of most supported objects in enemy
		int *FindMostHeuristicAllReducedSupportIsCurrent(bool Before, int RowS, int ColS);
		//determine if source objects is movable on board
		bool ObjectMovable(int Row, int Col, int** Tab, int Order, int a);
		//when exist "s" in list A
		bool Exist(std::vector<int*> &A, int s[]);
		//when exist complete "s" in list A
		bool ExistFull(std::vector<int*> &A, int s[]);
		//when exist complete "s" list in list A
		bool ExistFullDoubleList(std::vector<std::vector<int*>> &A, std::vector<int*> &s);
		//return number of un movable objects on board
		int NoOfObjectNotMovable(int** Tab, int Order, int a, int &Total, int &Is);
		//specific determination for ThinkingQuantum main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void CastleThinkingWHITE(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int DummyOrder, int DummyCurrentOrder, int** TableS, int RowSource, int ColumnSource, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, int RowDestination, int ColumnDestination, bool Castle_Renamed);
	public:
		void HeuristicPenaltyValuePerform(QuantumAtamata* Current, int Order, int &HeuristicAttackValue, bool AllDrawClass = false);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingSoldierbase(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
	private:
		void ThinkWait();
		//specific determination for thinking main method
	public:
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingSoldier(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingElephantbase(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingElephant(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseOne(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseTwo(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseThree(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseFour(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseFive(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseSix(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseSeven(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourseEight(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);

		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingHourse(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingCastleOne(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingCastleTow(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingCastle(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingMinisterbase(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int i, int j, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingMinister(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingCastleBLACK(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingCastleWHITE(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		//specific determination for thinking main method
//C# TO C++ CONVERTER NOTE: The parameter Castle was renamed since it is named the same as a user-defined type:
		void ThinkingKing(int *LoseOcuuredatChiled, int &WinOcuuredatChiled, int ord, int ii, int jj, int DummyOrder, int DummyCurrentOrder, bool DoEnemySelf, bool PenRegStrore, bool EnemyCheckMateActionsString, bool Castle_Renamed);
		///Kernel of Thinking
		//specific thinking main method
	private:
		void ThinkingWaite();
		//operantinal of creation of current deeper node and set string making
		void FullGameThinkingTreeInitialization(AllDraw *THIS, int ik, int j, int Order, int kind);
		//Deeper than deeper
		void ThinkingFullGame(int iAStarGreedy, AllDraw *THIS);
		int ColorOpposite(int a);
		bool MovableAllObjectsListMethos(int RowS, int ColS);
		void MovableAllObjectsListMethos(int** TableS, bool Before, int RowS, int ColS, int RowD, int ColD, int con, int movable = 1);
	public:
		void Thinking(int iAStarGreedy, AllDraw *THIS, int *LoseOcuuredatChiled, int &WinOcuuredatChiled);
		bool IsTheeAtleastMAteSelf();
		void TowDistrurbProperUse(int *LoseOcuuredatChiled);
		void TowDistrurbProperUsePreferNotToClose(int *LoseOcuuredatChiled, int** Tab);
	private:
		int IndexOfMoved();
		int *IndexOfMovedDoubleDefence(int** Tab);
		int IndexOfIsSupTRUE(int Kind, int RowD, int ColD);
		int IndexOfIsSupTRUE(int Kind, std::vector<int*> &Row);
			  //objects value main method
		int RetrunValValue(int RowS, int ColS, int RowO, int ColO, int** Tab, int Sign);
		//objects value main method
		int ObjectValueCalculator(int** Table, int RowS, int ColS, int RowO, int ColumnO); //, int Order
		//objects value main method
		int ObjectValueCalculator(int** Table, int RowS, int ColS); //, int Order
		//objects value main method determination
		bool SignSelfEmpty(int Obj1, int Obj2, int Order, int &Ord, int &A);
		//objects value main method determination
		bool SignEnemyEmpty(int Obj1, int Obj2, int Order, int &Ord, int &A);
		//objects value main method determination
		bool SignNotEqualEnemy(int Obj1, int Obj2, int Order, int &Ord, int &A);
		//objects value main method determination
		bool SignEqualSelf(int Obj1, int Obj2, int Order, int &Ord, int &A);
		//objects value main method determination
		bool SignNotEqualSelf(int Obj1, int Obj2, int Order, int &Ord, int &A);

	private:
		void InitializeInstanceFields();
	};

//End of Documentation.
