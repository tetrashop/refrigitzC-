#pragma once
#include "DrawSoldire.h"
#include "DrawElefant.h"
#include "DrawHourse.h"
#include "DrawCastle.h"
#include "DrawMinister.h"
#include "DrawKing.h"
#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "stringconverter.h"
#include "Timer.h"
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
//ORIGINAL LINE: [Serializable] public class AllDraw
	class AllDraw //: IDisposable
	{
	public:
		
		static Timer *Wtime;
		static Timer *Btime;
		static int wtime;
		static int btime;
		static int winc;
		static int binc;
		static int TimeMax;

		static bool ChangedInTreeOccured;
		static bool ThinkingRunInBothSide;
	private:
		float TimeNow;
	public:
		static bool IdleInWork;
		static const float MaxTimeInMillisseconds; //Max 10 second
		static float TimeInitiation;

		static int CalIdle;
		static int PlatformHelperProcessorCount;

		static int CompleteNumber;

		static bool CompleteTreeDo;
		static bool CompleteTreeCancel;
		static int QuntumTable[2][8][8];
		static bool AllowedSupTrue;
		static int OrderPlateDraw;
		static bool UniqueLeafDetection;
	private:
		int NumberOfnewMove;
		bool UsedRestrictedMoveBlitzAndFull;
	public:
		std::vector<bool> SolderesOnTableMove;
		std::vector<bool> ElephantOnTableMove;
		std::vector<bool> HoursesOnTableMove;
		std::vector<bool> CastlesOnTableMove;
		std::vector<bool> MinisterOnTableMove;
		std::vector<bool> KingOnTableMove;
	private:
		bool OnlyWin;
	public:
		static bool LeafSemaphoreIndex;
		//Initiate Variables. 
	private:
		bool *ThinkingAllowed;

	public:
		static bool Deeperthandeeper;
		static bool FirstTraversalTree;
		static int NumberOfLeafComputation;
		bool IsCurrentDraw;

		int HaveKilled;
	private:
		//std::string *Space;
		int Spaces;
		bool SetDeptIgnore;
		long long Now;
		long long Later;
	    int** Tabl;
	public:
		int OrderP;
		static int DepthIterative;
	private:
		int PerceptionCount;
	public:
		std::wstring OutPutAction;
		static std::string *OutPut;
		static std::string *ActionString;
		static bool ActionStringReady;
		//static variable to be Initiate
	private:
		std::vector<int*> ValuableSelfSupported;
	public:
		static bool RegardOccurred;
		static int SuppportCountStaticWHITE;
		static int SuppportCountStaticBLACK;
	private:
		int CurrentAStarGredyMax;
	public:
		static int TaskBegin;
		static int TaskEnd;
		static std::wstring Root;
		static int OrderPlate;
		static bool Blitz;
		static int ConvertedKind;
		static bool ConvertWait;
		static bool Stockfish;
		static bool Person;
		static bool THISSecradioButtonWHITEOrderChecked;
		static bool THISSecradioButtonBLACKOrderChecked;
		static std::wstring THIScomboBoxMaxLevelText;
		static AllDraw THISDummy;
		static bool StateCP;
		static bool StateCC;
		static int LastRow;
		static int LastColumn;
		static int NextRow;
		static int NextColumn;
		static int MovmentsNumber;
		static int MaxAStarGreedyHeuristicProgress;
		static bool EndOfGame;
	private:
		static const int ThresholdBlitz = 10000;
		static const int ThresholdFullGame = 20000;
	public:
		bool SetRowColumnFinished;
		static int MinThinkingTreeDepth;
	private:
		static int MaxDuringLevelThinkingCreation;
	public:
		int MaxHeuristicxT;
		bool MovementsAStarGreedyHeuristicFoundT;
		bool IgnoreSelfObjectsT;
		bool UsePenaltyRegardMechnisamT;
		bool BestMovmentsT;
		bool PredictHeuristicT;
		bool OnlySelfT;
		bool AStarGreedyHeuristicT;
		int Index[6], jindex[6], Kind[6];
		bool ArrangmentsChanged;
		static int AStarGreedytMaxCount;
		static bool FoundATable;
		static int Less;
		bool CastlesKing;
	private:
		std::vector<int**> MaxHeuristicAStarGreedytBackWardTable;
	public:
		static int increasedProgress;
		static int CurrentHeuristic;
		static int SignAttack;
		static int SignObjectDangour;
		static int SignReducedAttacked;
		static int SignSupport;
		static int SignKiller;
		static int SignMovments;
		static int SignDistance;
		static int SignKingSafe;
		static int SignKingDangour;
		static bool DrawTable;
		static int **TableVeryfy;
		static int MaxAStarGreedy;
		static int **TableVeryfyConst;
		static std::vector<int**> TableCurrent;
		static bool NoTableFound;
		static bool DynamicAStarGreedytPrograming;
		static std::vector<AllDraw> StoreADraw;
		static std::vector<int> StoreADrawAStarGreedy;
		static bool UseDoubleTime;
		static int AStarGreedyiLevelMax;
		static bool AStarGreadyFirstSearch;
		static std::wstring ImageRoot;
		static std::wstring ImagesSubRoot;
		static bool RedrawTable;
		static std::wstring SyntaxToWrite;
		static bool SodierConversionOcuured;
		static int SodierMovments;
		static int ElefantMovments;
		static int HourseMovments;
		static int CastleMovments;
		static int MinisterMovments;
		static int KingMovments;

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

	private:
		int RW;
		int CL;
		int Ki;
		int RW1;
		int CL1;
		int Ki1;
		int MaxLess1;
		int RW2;
		int CL2;
		int Ki2;
		int MaxLess2;
		int RW3;
		int CL3;
		int Ki3;
		int MaxLess3;
		int RW4;
		int CL4;
		int Ki4;
		int MaxLess4;
		int RW5;
		int CL5;
		int Ki5;
		int MaxLess5;
		int RW6;
		int CL6;
		int Ki6;
		int MaxLess6;
	public:
		static int LoopHeuristicIndex;
	private:
		static std::vector<int> RWList;
		static std::vector<int> ClList;
		static std::vector<int> KiList;
	public:
		static std::vector<int**> TableListAction;
//C# TO C++ CONVERTER NOTE: The variable Move was renamed since it is named the same as a user-defined type:
		int Move_Renamed;
		static int MouseClick;
	private:
		int *AStarGreedyIndex;
	public:
		std::vector<int**> TableList;
		int AStarGreedy;
		
		DrawSoldier SolderesOnTable[16];
		DrawElefant ElephantOnTable[4];
		DrawHourse HoursesOnTable[4];
		DrawCastle CastlesOnTable[4];
		DrawMinister MinisterOnTable[2];
		DrawKing KingOnTable[2];
		/*
		DrawSoldier *SolderesOnTable;
		DrawElefant *ElephantOnTable;
		DrawHourse *HoursesOnTable;
		DrawCastle *CastlesOnTable;
		DrawMinister *MinisterOnTable;
		DrawKing *KingOnTable;
		*/
	private:
		std::vector<int*> MaxHeuristicAStarGreedytBackWard;
		static const int MaxSoldeirFounded = 2;
		static const int MaxElephntFounded = 6;
		static const int MaxHourseFounded = 10;
		static const int MaxCastlesFounded = 14;
		static const int MaxMinisterFounded = 18;
		static const int MaxKingFounded = 22;
		//Making String datastructure to root variable
	public:
		AllDraw AStarGreedyString;
		//Error Handling
//C# TO C++ CONVERTER WARNING: Unlike C#, there is no automatic call to this finalizer method in native C++:
		private:
		void Finalize()
		{
			this->Dispose(false);
		}

	private:
		static void Log(std::exception &ex);
		//Determine when a MoveOccured.
		//Note for before move.At most one  moves.
	public:
		static bool IsAeMoveOccured(bool IsMove);
	private:
		void TimeEnd();
		//Determine and set numbers of all curent state table severasl kinds node.
	public:
		void SetObjectNumbers(int** TabS);
		//Found of Specific Objects uniqued
	private:
		float *FoundLocationOfObject(int** Tabl, int Kind, bool IsWHITE);


	public:
		AllDraw() {}

		~AllDraw();
	private:
		void Dispose(bool disposing);
		//Constructor
	public:
		AllDraw(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments);
		//Clone Copy Method
		void Clone(AllDraw AA);
		//a Constructor
		AllDraw(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, AllDraw THi);
		//Check For Thinking Of Current Item Movments Finished.
		bool AllCurrentAStarGreedyThinkingFinished(AllDraw Dum, int i, int j, int Kind);
		//Rearrange AllDraw Object Content.
		void SetRowColumn(int index, bool Verify = false);
		bool SetRowColumn();
		//Waite semaphore
	private:
		void SetRowColumnFinishedWait();
		//Max Index List Of Heuristic AStarGreedy First Method.
	public:
		void BeginIndexFoundingMaxLessofMaxList(int ListIndex, std::vector<int> &Founded, int &LessB);
		//Method for Check of Existence of Checkmate less than for checked mate.
	private:
		bool IsToCheckMateHasLessDeeperThanForCheckMate(AllDraw A, int Order, int &ToCheckMate, int &ForCheckMate, int AStarGreedy);
		//When Penalty Regard Branches expanded to sub branches.
		void IsPenaltyRegardCheckMateAtBranch(int Order, int &Do, AllDraw Base);
		//A Mechanisam for penalty all subbranches of chiled of root at contained of same childes  of making penalty by target 
	public:
		void MakePenaltyAllCheckMateBranches(AllDraw A, int Order);
		//remove penalty from root current node.
		AllDraw RemovePenalltyFromFirstBranches(int Order);
		//when index is out of boundry return false when is valid return true
	private:
		bool BondryObjectNumber(int i, int Kind, int Order);
		//All valid call of current alldraw deeper of founding get node.
	public:
		AllDraw FoundOfCurrentTableNodeAstardGreedy(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//when current alldraw is equal of table state return node and set true
		AllDraw FoundOfCurrentTableNode(int** Tab, int Order, AllDraw THIS, bool &Found);
		AllDraw FoundOfCurrentTableNodeCreateAStarGreedy(int** Tab, int Order, AllDraw THIS, bool &Found);
		//when current level founf of node
		bool FoundOfCurrentTableNodeFirstLevel(int** Tab, int Order, AllDraw THIS, bool &Found);
		//when deeper have some calclulated nodes
	private:
		bool IsAstargreedyHaveNode(int Kind, int Order);
	public:
		void ClearAllTablesHeuristicsAndMoreWHITE(int Order);
		void ClearAllTablesHeuristicsAndMoreBLACK(int Order);
		//clear all non nessaraly nodes of current
		void ClearAllTablesHeuristicsAndMore(int Order);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreSoldier(int Order, int i, int j);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreElephant(int Order, int i, int j);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreHourse(int Order, int i, int j);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreCastle(int Order, int i, int j);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreMinister(int Order, int i, int j);
		//When list of alldraw and deeper is not valid clear all lists
		void ClearAllTablesHeuristicsAndMoreKing(int Order, int i, int j);
		//when there is a colision in lists of current return true and remove extra lists
	private:
		bool A_B_C_D_E_ISNonEqual(int a, int b, int c, int d, int e, int i, int j, int Kind);
		//calculation of lists count and call collision methods determinstics
	public:
		bool IsNonValidityAllTablesHeuristicsAndMore(int Kind, int Order, int i, int j);
		bool FoundOfCurrentTableNodeSolderIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeSoldeir(int** Tab, int Order, AllDraw THIS, bool &Found);
		//Creation Table and deeper when there is not deeper or there is  
		bool FoundOfCurrentTableNodeElephantIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeElephant(int** Tab, int Order, AllDraw THIS, bool &Found);
		//Creation Table and deeper when there is not deeper or there is  
		bool FoundOfCurrentTableNodeHourseIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeHourse(int** Tab, int Order, AllDraw THIS, bool &Found);
		//Creation Table and deeper when there is not deeper or there is  
		bool FoundOfCurrentTableNodeCastleIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeCastle(int** Tab, int Order, AllDraw THIS, bool &Found);
		//Creation Table and deeper when there is not deeper or there is  
		bool FoundOfCurrentTableNodeMinisterIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeMinister(int** Tab, int Order, AllDraw THIS, bool &Found);
		//Creation Table and deeper when there is not deeper or there is  
		bool FoundOfCurrentTableNodeKingIJ(int i, int j, int** Tab, int Order, AllDraw THIS, bool &Found);
		//determine about found of equality of lists of current alldraw and call determinition of deeper 
		bool FoundOfCurrentTableNodeKing(int** Tab, int Order, AllDraw THIS, bool &Found);
		AllDraw FoundOfLeafDepenOfKindSoldier(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		AllDraw FoundOfLeafDepenOfKindElephant(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		AllDraw FoundOfLeafDepenOfKindHourse(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		AllDraw FoundOfLeafDepenOfKindCastle(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		AllDraw FoundOfLeafDepenOfKindMinister(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		AllDraw FoundOfLeafDepenOfKindKing(int i, AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		//found of leadfs of created tree depend of orderic 
		AllDraw FoundOfLeafDepenOfKind(AllDraw Leaf, bool &Found, int Order, int LeafDeep, int ik, int jk, int iii, int jjj);
		//when leafs is vivtory target nodes return true found and set refrence
		bool IsFoundOfLeafDepenOfKindhaveVictory(int Kind, bool &Found, int Order);
		//Retrun determined consideration of lists of Thinking chess class list collisions.

		//3 for empty and contained compuatations
		//4 a star is not emplty and contaied computation
	private:
		int IsSuitableForInitiation(int i, int j, int Kind);
		//when current side of alldraw is not contained and semi computated 
		bool IsNotAStarGreedyConanaied(int i, int j, int Kind);
	public:
		bool IsAtLeastAllObjectIsNull();
		//When there is computatinoal deeper and there is colosion in lists return true otherwise return false
	private:
		bool IsNotComputationsConanaiedAStarGreedy(int i, int j, int Kind);
		//deeper leaf found 
	public:
		void FoundOfLeafDepenOfKindFullGameSoldeir(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		//deeper leaf found 
		void FoundOfLeafDepenOfKindFullGameElepahnt(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		//deeper leaf found 
		void FoundOfLeafDepenOfKindFullGameHourse(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		//deeper leaf found 
		void FoundOfLeafDepenOfKindFullGameCastle(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		//deeper leaf found 
		void FoundOfLeafDepenOfKindFullGameMinister(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		//deeper leaf found 
		void FoundOfLeafDepenOfKindFullGameKing(int a, bool &FullGameFound, int** Table, int Order, int iAStarGreedy, int ii, int jj, int i, int jjj, bool FOUND, int LeafAStarGreedy);
		void FoundOfLeafDepenOfKindFullGame(int** Table, int Order, int iAStarGreedy, int ii, int jj, int ik, int jjj, bool FOUND, int LeafAStarGreedy);
		//for regard all branches of leaf victory node
		void MakeRegardAllCheckMateBranches(AllDraw A, int Order);
		//when all branches of root is lose and close ignore of learning autamata option  
		/*   int[,] HeuristicAStarGreadySearchPenalties(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, ref bool Act)
		   {

		       Object a1 = new Object();
		       ////lock (a1)
		       {
		           ChessRules AB = null;
		           int ToCheckMate = -1, ForCheckMate = -1, j, i;
		           List<int> Founded = new List<int>();
		           int DummyOrder = Order;
		           int DummyCurrentOrder = ChessRules.CurrentOrder;
		           bool AA = false;
		           int Do = 0;
		           int[,] TableHeuristic = new int[8, 8];
		           //For Every Soldeir
		           for (i = 0; i < SodierMidle; i++)
		           {

		               //For Every Soldier Movments AStarGreedy.
		               for (int k = 0; k < AllDraw.SodierMovments; k++)
		                   //When There is an Movment in such situation.
		                   for (j = 0; SolderesOnTable != null && SolderesOnTable[i] != null && SolderesOnTable != null && SolderesOnTable[i] != null && SolderesOnTable[i].SoldierThinking != null && SolderesOnTable[i].SoldierThinking != null && j < SolderesOnTable[i].SoldierThinking.TableListSolder.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < SolderesOnTable[i].SoldierThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    SolderesOnTable[i].SoldierThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }

		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }
		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           if ((SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 && SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || SolderesOnTable[i].WinOcuuredatChiled >= 1 || SolderesOnTable[i].WinOcuuredatChiled >= 2 || SolderesOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               //Set Table and Heuristic Value and Syntax.
		                               Act = true;
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = SolderesOnTable[i].SoldierThinking.Row;
		                                   AllDraw.LastColumn = SolderesOnTable[i].SoldierThinking.Column;
		                                   AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                                   AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];

		                                   Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;
		                               }

		                               TableHeuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

		                               Object O = new Object();
		                               ////lock (O)
		                               {
		                                   ThingsConverter.ActOfClickEqualTow = true;
		                               }
		                               SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
		                               int Sign = 1;
		                               if (a == int.BLACK)
		                                   Sign = -1;

		                               //If there is Soldier Convert.
		                               if (SolderesOnTable[i].Convert)
		                               {
		                                   if (SolderesOnTable[i].ConvertedToMinister)
		                                       TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
		                                   else if (SolderesOnTable[i].ConvertedToCastle)
		                                       TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
		                                   else if (SolderesOnTable[i].ConvertedToHourse)
		                                       TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
		                                   else if (SolderesOnTable[i].ConvertedToElefant)
		                                       TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;


		                               }
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           //When There is No Movments in Such Order Enemy continue.
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
		                                       continue;
		                               //When There is greater Heuristic Movments.
		                               if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
		                               {

		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
		                                   int[,] TableSS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
		                                   //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                   if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                   {
		                                       if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                           continue;

		                                   }
		                                   //When there is not Penalty regard mechanism.
		                                   AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 1, CloneATable(TableS), Order, SolderesOnTable[i].SoldierThinking.Row, SolderesOnTable[i].SoldierThinking.Column);
		                                   //If there is kish or kshachamaz Order.
		                                   if (AB.Check(CloneATable(TableS), Order))
		                                   {
		                                       //When Order is WHITE.
		                                       if (Order == 1)
		                                       {
		                                           //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                           if (AB.CheckWHITE)
		                                               continue;
		                                       }
		                                       else
		                                       {
		                                           //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                           if (AB.CheckBLACK)
		                                               continue;
		                                       }
		                                   }
		                                   //Sodleirs Initiate.
		                                   RW1 = i;
		                                   CL1 = k;
		                                   Ki1 = j;
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
		                                   //Set Max of Soldier.
		                                   MaxLess1 = (SolderesOnTable[RW1].SoldierThinking[CL1].NumberOfPenalties
		                                       );
		                                   //When Soldeirs is Greater than Others these Set Max.
		                                   if (MaxLess1 > MaxLess2)
		                                       MaxLess2 = -1;
		                                   if (MaxLess1 > MaxLess3)
		                                       MaxLess3 = -1;
		                                   if (MaxLess1 > MaxLess4)
		                                       MaxLess4 = -1;
		                                   if (MaxLess1 > MaxLess5)
		                                       MaxLess5 = -1;
		                                   if (MaxLess1 > MaxLess6)
		                                       MaxLess6 = -1;
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                       //Set Table and Heuristic Value and Syntax.
		                                       Act = true;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = SolderesOnTable[i].SoldierThinking.Row;
		                                           AllDraw.LastColumn = SolderesOnTable[i].SoldierThinking.Column;
		                                           AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                                           AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		                                       }
		                                       Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;

		                                       TableHeuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

		                                       Object O1 = new Object();
		                                       ////lock (O1)
		                                       {
		                                           ThingsConverter.ActOfClickEqualTow = true;
		                                       }
		                                       SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
		                                       int Sign = 1;
		                                       if (a == int.BLACK)
		                                           Sign = -1;
		                                       //If there is Soldier Convert.
		                                       if (SolderesOnTable[i].Convert)
		                                       {
		                                           if (SolderesOnTable[i].ConvertedToMinister)
		                                               TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
		                                           else if (SolderesOnTable[i].ConvertedToCastle)
		                                               TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
		                                           else if (SolderesOnTable[i].ConvertedToHourse)
		                                               TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
		                                           else if (SolderesOnTable[i].ConvertedToElefant)
		                                               TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;


		                                       }
		                                   }

		                               }
		                               else
		                               {
		                                   //Set Table and Heuristic Value and Syntax.
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       //Found of Max Non Probable Movments.
		                                       Founded.Clear();
		                                       int LessB = Int32.MinValue;
		                                       BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                       RW1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                       CL1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                       Ki1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                       if (Founded!= MaxSoldeirFounded)
		                                           continue;
		                                       Act = true;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = SolderesOnTable[RW1].SoldierThinking[CL1].Row;
		                                           AllDraw.LastColumn = SolderesOnTable[RW1].SoldierThinking[CL1].Column;
		                                           AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                                           AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		                                       }
		                                       Less = SolderesOnTable[RW1].SoldierThinking[CL1].ReturnHeuristic(RW1, Ki1, Order, false, ref HaveKilled);

		                                       TableHeuristic = SolderesOnTable[RW1].SoldierThinking[CL1].TableListSolder[Ki1];

		                                       Object O1 = new Object();
		                                       ////lock (O1)
		                                       {
		                                           ThingsConverter.ActOfClickEqualTow = true;
		                                       }
		                                       SolderesOnTable[RW1].ConvertOperation(SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1], a, SolderesOnTable[RW1].SoldierThinking[CL1].TableListSolder[Ki1], Order, false, i);
		                                       int Sign = 1;
		                                       if (a == int.BLACK)
		                                           Sign = -1;
		                                       //If there is Soldier Convert.
		                                       if (SolderesOnTable[RW1].Convert)
		                                       {
		                                           if (SolderesOnTable[RW1].ConvertedToMinister)
		                                               TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 5 * Sign;
		                                           else if (SolderesOnTable[RW1].ConvertedToCastle)
		                                               TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 4 * Sign;
		                                           else if (SolderesOnTable[RW1].ConvertedToHourse)
		                                               TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 3 * Sign;
		                                           else if (SolderesOnTable[RW1].ConvertedToElefant)
		                                               TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 2 * Sign;


		                                       }
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                   }
		                               }
		                           }

		                       }
		                   }

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;
		           }
		           //Do For Remaining Objects same as Soldeir Documentation.
		           for (i = 0; i < ElefantMidle; i++)
		           {
		               for (int k = 0; k < AllDraw.ElefantMovments; k++)
		                   for (j = 0; ElephantOnTable != null && ElephantOnTable[i] != null && ElephantOnTable != null && ElephantOnTable[i] != null && ElephantOnTable[i].ElefantThinking != null && ElephantOnTable[i].ElefantThinking != null && j < ElephantOnTable[i].ElefantThinking.TableListElefant.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < ElephantOnTable[i].ElefantThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    ElephantOnTable[i].ElefantThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }
		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }
		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           if ((ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 && ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || ElephantOnTable[i].WinOcuuredatChiled >= 1 || ElephantOnTable[i].WinOcuuredatChiled >= 2 || ElephantOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = ElephantOnTable[i].ElefantThinking.Row;
		                                   AllDraw.LastColumn = ElephantOnTable[i].ElefantThinking.Column;
		                                   AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                                   AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];

		                                   Act = true;
		                                   Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
		                               }
		                               TableHeuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               //When There is No Movments in Such Order Enemy continue.
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
		                                       continue;
		                               //When There is greater Heuristic Movments.
		                               if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
		                               {

		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                                   int[,] TableSS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                                   //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                   if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                   {
		                                       if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                           continue;

		                                   }
		                                   //When there is not Penalty regard mechanism.
		                                   AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 2, CloneATable(TableS), Order, -1, -1);
		                                   //If there is kish or kshachamaz Order.
		                                   if (AB.Check(CloneATable(TableS), Order))
		                                   {
		                                       //When Order is WHITE.
		                                       if (Order == 1)
		                                       {
		                                           //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                           if (AB.CheckWHITE)
		                                               continue;
		                                       }
		                                       else
		                                       {
		                                           //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                           if (AB.CheckBLACK)
		                                               continue;
		                                       }
		                                   }
		                                   RW2 = i;
		                                   CL2 = k;
		                                   Ki2 = j;
		                                   RW1 = -1;
		                                   CL1 = -1;
		                                   Ki1 = -1;
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
		                                   MaxLess2 = (ElephantOnTable[RW2].ElefantThinking[CL2].NumberOfPenalties);
		                                   if (MaxLess2 > MaxLess1)
		                                       MaxLess1 = -1;
		                                   if (MaxLess2 > MaxLess3)
		                                       MaxLess3 = -1;
		                                   if (MaxLess2 > MaxLess4)
		                                       MaxLess4 = -1;
		                                   if (MaxLess2 > MaxLess5)
		                                       MaxLess5 = -1;
		                                   if (MaxLess2 > MaxLess6)
		                                       MaxLess6 = -1;
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = ElephantOnTable[i].ElefantThinking.Row;
		                                           AllDraw.LastColumn = ElephantOnTable[i].ElefantThinking.Column;
		                                           AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                                           AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];
		                                       }
		                                       Act = true;
		                                       Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
		                                       TableHeuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                                   }
		                               }
		                               else
		                               {

		                                   if (AStarGreedyi == 1)
		                                   {
		                                       //Found of Max Non Probable Movments.
		                                       Founded.Clear();
		                                       int LessB = Int32.MinValue;
		                                       BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                       RW2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                       CL2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                       Ki2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                       if (Founded!= MaxElephntFounded)
		                                           continue;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = ElephantOnTable[RW2].ElefantThinking[CL2].Row;
		                                           AllDraw.LastColumn = ElephantOnTable[RW2].ElefantThinking[CL2].Column;
		                                           AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                                           AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];
		                                       }
		                                       Act = true;
		                                       Less = ElephantOnTable[RW2].ElefantThinking[CL2].ReturnHeuristic(RW2, Ki2, Order, false, ref HaveKilled);
		                                       TableHeuristic = ElephantOnTable[RW2].ElefantThinking[CL2].TableListElefant[Ki2];
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                   }
		                               }
		                           }
		                       }
		                   }

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;
		           }
		           //hourse
		           for (i = 0; i < HourseMidle; i++)
		           {
		               for (int k = 0; k < AllDraw.HourseMovments; k++)
		                   for (j = 0; HoursesOnTable != null && HoursesOnTable[i] != null && HoursesOnTable != null && HoursesOnTable[i] != null && HoursesOnTable[i].HourseThinking != null && HoursesOnTable[i].HourseThinking != null && j < HoursesOnTable[i].HourseThinking.TableListHourse.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < HoursesOnTable[i].HourseThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    HoursesOnTable[i].HourseThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }
		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }

		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           if ((HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 && HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || HoursesOnTable[i].WinOcuuredatChiled >= 1 || HoursesOnTable[i].WinOcuuredatChiled >= 2 || HoursesOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = HoursesOnTable[i].HourseThinking.Row;
		                                   AllDraw.LastColumn = HoursesOnTable[i].HourseThinking.Column;
		                                   AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                                   AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
		                                   Act = true;
		                                   Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
		                               }
		                               TableHeuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               //When There is No Movments in Such Order Enemy continue.
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)
		                                       continue;
		                               //When There is greater Heuristic Movments.
		                               if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)
		                               {
		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                                   int[,] TableSS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                                   {
		                                       //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                       if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                       {
		                                           if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                               continue;

		                                       }
		                                       //When there is not Penalty regard mechanism.
		                                       AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 3, CloneATable(TableS), Order, HoursesOnTable[i].HourseThinking.Row, HoursesOnTable[i].HourseThinking.Column);
		                                       //If there is kish or kshachamaz Order.
		                                       if (AB.Check(CloneATable(TableS), Order))
		                                       {
		                                           //When Order is WHITE.
		                                           if (Order == 1)
		                                           {
		                                               //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                               if (AB.CheckWHITE)
		                                                   continue;
		                                           }
		                                           else
		                                           {
		                                               //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                               if (AB.CheckBLACK)
		                                                   continue;
		                                           }
		                                       }
		                                   }
		                                   RW3 = i;
		                                   CL3 = k;
		                                   Ki3 = j;
		                                   RW1 = -1;
		                                   CL1 = -1;
		                                   Ki1 = -1;
		                                   RW2 = -1;
		                                   CL2 = -1;
		                                   Ki2 = -1;
		                                   RW4 = -1;
		                                   CL4 = -1;
		                                   Ki4 = -1;
		                                   RW5 = -1;
		                                   CL5 = -1;
		                                   Ki5 = -1;
		                                   RW6 = -1;
		                                   CL6 = -1;
		                                   Ki6 = -1;
		                                   MaxLess3 = (HoursesOnTable[RW3].HourseThinking[CL3].NumberOfPenalties);
		                                   if (MaxLess3 > MaxLess1)
		                                       MaxLess1 = -1;
		                                   if (MaxLess3 > MaxLess2)
		                                       MaxLess2 = -1;
		                                   if (MaxLess3 > MaxLess4)
		                                       MaxLess4 = -1;
		                                   if (MaxLess3 > MaxLess5)
		                                       MaxLess5 = -1;
		                                   if (MaxLess3 > MaxLess6)
		                                       MaxLess6 = -1;
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                       //Set Table and Heuristic Value and Syntax.
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = HoursesOnTable[i].HourseThinking.Row;
		                                           AllDraw.LastColumn = HoursesOnTable[i].HourseThinking.Column;
		                                           AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                                           AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
		                                       }
		                                       Act = true;
		                                       Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
		                                       TableHeuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                                   }
		                               }
		                               else
		                               //Set Table and Heuristic Value and Syntax.
		                               if (AStarGreedyi == 1)
		                               {

		                                   //Found of Max Non Probable Movments.
		                                   Founded.Clear();
		                                   int LessB = Int32.MinValue;
		                                   BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                   RW3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                   CL3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                   Ki3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                   if (Founded!= MaxHourseFounded)
		                                       continue;
		                                   Object On = new Object();
		                                   ////lock (On)
		                                   {
		                                       AllDraw.LastRow = HoursesOnTable[RW3].HourseThinking[CL3].Row;
		                                       AllDraw.LastColumn = HoursesOnTable[RW3].HourseThinking[CL3].Column;
		                                       AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                                       AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
		                                   }
		                                   Act = true;
		                                   Less = HoursesOnTable[RW3].HourseThinking[CL3].ReturnHeuristic(RW3, Ki3, Order, false, ref HaveKilled);
		                                   TableHeuristic = HoursesOnTable[RW3].HourseThinking[CL3].TableListHourse[Ki3];
		                                   Object O = new Object();
		                                   ////lock (O)
		                                   {
		                                       if (Order == 1)
		                                       {

		                                       }
		                                       else//If Order is BLACK.
		                                       {

		                                       }
		                                   }
		                               }
		                           }
		                       }
		                   }


		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;

		           }
		           //Castle
		           for (i = 0; i < CastleMidle; i++)
		           {
		               for (int k = 0; k < AllDraw.CastleMovments; k++)
		                   for (j = 0; CastlesOnTable != null && CastlesOnTable[i] != null && CastlesOnTable != null && CastlesOnTable[i] != null && CastlesOnTable[i].CastleThinking != null && CastlesOnTable[i].CastleThinking != null && j < CastlesOnTable[i].CastleThinking.TableListCastle.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < CastlesOnTable[i].CastleThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    CastlesOnTable[i].CastleThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }
		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }

		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           if ((CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 && CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || CastlesOnTable[i].WinOcuuredatChiled >= 1 || CastlesOnTable[i].WinOcuuredatChiled >= 2 || CastlesOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = CastlesOnTable[i].CastleThinking.Row;
		                                   AllDraw.LastColumn = CastlesOnTable[i].CastleThinking.Column;
		                                   AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                                   AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                                   Act = true;
		                                   Less = CastlesOnTable[i].CastleThinking.NumberOfPenalties;
		                               }
		                               TableHeuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               //When There is No Movments in Such Order Enemy continue.
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (CastlesOnTable[i].CastleThinking.NumberOfPenalties < Less) continue;
		                               //When There is greater Heuristic Movments.
		                               if (CastlesOnTable[i].CastleThinking.NumberOfPenalties < Less)
		                               {
		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                                   int[,] TableSS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                                   //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                   if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                   {
		                                       if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                           continue;

		                                   }
		                                   //When there is not Penalty regard mechanism.
		                                   AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 4, CloneATable(TableS), Order, CastlesOnTable[i].CastleThinking.Row, CastlesOnTable[i].CastleThinking.Column);
		                                   //If there is kish or kshachamaz Order.
		                                   if (AB.Check(CloneATable(TableS), Order))
		                                   {
		                                       //When Order is WHITE.
		                                       if (Order == 1)
		                                       {
		                                           //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                           if (AB.CheckWHITE)
		                                               continue;
		                                       }
		                                       else
		                                       {
		                                           //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                           if (AB.CheckBLACK)
		                                               continue;
		                                       }
		                                   }
		                                   RW4 = i;
		                                   CL4 = k;
		                                   Ki4 = j;
		                                   RW1 = -1;
		                                   CL1 = -1;
		                                   Ki1 = -1;
		                                   RW2 = -1;
		                                   CL2 = -1;
		                                   Ki2 = -1;
		                                   RW3 = -1;
		                                   CL3 = -1;
		                                   Ki3 = -1;
		                                   RW5 = -1;
		                                   CL5 = -1;
		                                   Ki5 = -1;
		                                   RW6 = -1;
		                                   CL6 = -1;
		                                   Ki6 = -1;
		                                   MaxLess4 = (CastlesOnTable[RW4].CastleThinking[CL4].NumberOfPenalties);
		                                   if (MaxLess4 > MaxLess1)
		                                       MaxLess1 = -1;
		                                   if (MaxLess4 > MaxLess2)
		                                       MaxLess2 = -1;
		                                   if (MaxLess4 > MaxLess3)
		                                       MaxLess3 = -1;
		                                   if (MaxLess4 > MaxLess5)
		                                       MaxLess5 = -1;
		                                   if (MaxLess4 > MaxLess6)
		                                       MaxLess6 = -1;

		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = CastlesOnTable[i].CastleThinking.Row;
		                                           AllDraw.LastColumn = CastlesOnTable[i].CastleThinking.Column;
		                                           AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                                           AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                                       }
		                                       Act = true;
		                                       Less = CastlesOnTable[i].CastleThinking.NumberOfPenalties;
		                                       TableHeuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                                   }
		                               }
		                               else//Set Table and Heuristic Value and Syntax.
		                               {
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       //Found of Max Non Probable Movments.
		                                       Founded.Clear();
		                                       int LessB = Int32.MinValue;
		                                       BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                       RW4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                       CL4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                       Ki4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                       if (Founded!= MaxCastlesFounded)
		                                           continue;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = CastlesOnTable[RW4].CastleThinking[CL4].Row;
		                                           AllDraw.LastColumn = CastlesOnTable[RW4].CastleThinking[CL4].Column;
		                                           AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                                           AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                                       }
		                                       Act = true;
		                                       Less = CastlesOnTable[RW4].CastleThinking[CL4].ReturnHeuristic(RW4, Ki4, Order, false, ref HaveKilled);
		                                       TableHeuristic = CastlesOnTable[RW4].CastleThinking[CL4].TableListCastle[Ki4];
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                   }
		                               }
		                           }
		                       }
		                   }

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;
		           }
		           //minister
		           for (i = 0; i < MinisterMidle; i++)
		           {
		               for (int k = 0; k < AllDraw.MinisterMovments; k++)
		                   for (j = 0; MinisterOnTable != null && MinisterOnTable[i] != null && MinisterOnTable != null && MinisterOnTable[i] != null && MinisterOnTable[i].MinisterThinking != null && MinisterOnTable[i].MinisterThinking != null && j < MinisterOnTable[i].MinisterThinking.TableListMinister.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < MinisterOnTable[i].MinisterThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    MinisterOnTable[i].MinisterThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }
		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }

		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           if ((MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 && MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || MinisterOnTable[i].WinOcuuredatChiled >= 1 || MinisterOnTable[i].WinOcuuredatChiled >= 2 || MinisterOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = MinisterOnTable[i].MinisterThinking.Row;
		                                   AllDraw.LastColumn = MinisterOnTable[i].MinisterThinking.Column;
		                                   AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                                   AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
		                                   Act = true;
		                                   Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
		                               }
		                               TableHeuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)
		                                       continue;
		                               if (MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)
		                               {
		                                   //retrive table of current Heuristic.
		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                                   int[,] TableSS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                                   //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                   if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                   {
		                                       if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                           continue;

		                                   }
		                                   //When there is not Penalty regard mechanism.
		                                   AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 5, CloneATable(TableS), Order, MinisterOnTable[i].MinisterThinking.Row, MinisterOnTable[i].MinisterThinking.Column);
		                                   //If there is kish or kshachamaz Order.
		                                   if (AB.Check(CloneATable(TableS), Order))
		                                   {
		                                       //When Order is WHITE.
		                                       if (Order == 1)
		                                       {
		                                           //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                           if (AB.CheckWHITE)
		                                               continue;
		                                       }
		                                       else
		                                       {
		                                           //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                           if (AB.CheckBLACK)
		                                               continue;
		                                       }
		                                   }

		                                   RW5 = i;
		                                   CL5 = k;
		                                   Ki5 = j;
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
		                                   RW6 = -1;
		                                   CL6 = -1;
		                                   Ki6 = -1;
		                                   MaxLess5 = (MinisterOnTable[RW5].MinisterThinking[CL5].NumberOfPenalties);
		                                   if (MaxLess5 > MaxLess1)
		                                       MaxLess1 = -1;
		                                   if (MaxLess5 > MaxLess2)
		                                       MaxLess2 = -1;
		                                   if (MaxLess5 > MaxLess3)
		                                       MaxLess3 = -1;
		                                   if (MaxLess5 > MaxLess4)
		                                       MaxLess4 = -1;
		                                   if (MaxLess5 > MaxLess6)
		                                       MaxLess6 = -1;

		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }   //Set Table and Heuristic Value and Syntax.
		                                       }
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = MinisterOnTable[i].MinisterThinking.Row;
		                                           AllDraw.LastColumn = MinisterOnTable[i].MinisterThinking.Column;
		                                           AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                                           AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
		                                       }
		                                       Act = true;
		                                       Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
		                                       TableHeuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                                   }
		                               }
		                               else//Set Table and Heuristic Value and Syntax.
		                               {
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       //Found of Max Non Probable Movments.
		                                       Founded.Clear();
		                                       int LessB = Int32.MinValue;
		                                       BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                       RW5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                       CL5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                       Ki5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                       if (Founded!= MaxMinisterFounded)
		                                           continue;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = MinisterOnTable[RW5].MinisterThinking[CL5].Row;
		                                           AllDraw.LastColumn = MinisterOnTable[RW5].MinisterThinking[CL5].Column;
		                                           AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                                           AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
		                                       }
		                                       Act = true;
		                                       Less = MinisterOnTable[RW5].MinisterThinking[CL5].ReturnHeuristic(RW5, Ki5, Order, false, ref HaveKilled);
		                                       TableHeuristic = MinisterOnTable[RW5].MinisterThinking[CL5].TableListMinister[Ki5];
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                   }
		                               }
		                           }
		                       }
		                   }

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;
		           }
		           //king
		           for (i = 0; i < KingMidle; i++)
		           {
		               for (int k = 0; k < AllDraw.KingMovments; k++)
		                   for (j = 0; KingOnTable != null && KingOnTable[i] != null && KingOnTable != null && KingOnTable[i] != null && KingOnTable[i].KingThinking != null && KingOnTable[i].KingThinking != null && j < KingOnTable[i].KingThinking.TableListKing.Count; j++)
		                   {
		                       {
		                           //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                           int CDummy = ChessRules.CurrentOrder;
		                           int COrder = Order;
		                           ChessRules.CurrentOrder *= -1;
		                           Order *= -1;
		                           Do = 0;
		                           if (UsePenaltyRegardMechnisamT)
		                           {
		                               for (int ij = 0; ij < KingOnTable[i].KingThinking.AStarGreedy.Count - 1; ij++)
		                               {
		                                   int D = Do;
		                                    KingOnTable[i].KingThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref D, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                                   
		                                   
		                                   Do = D;
		                               }
		                               Order = COrder;
		                               ChessRules.CurrentOrder = CDummy;
		                               ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                                   continue;
		                           }

		                           Order = COrder;
		                           ChessRules.CurrentOrder = CDummy;
		                           //if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
		                           //)
		                           if ((KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 && KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT) || KingOnTable[i].WinOcuuredatChiled >= 1 || KingOnTable[i].WinOcuuredatChiled >= 2 || KingOnTable[i].WinOcuuredatChiled >= 3)
		                           {
		                               Object On = new Object();
		                               ////lock (On)
		                               {
		                                   AllDraw.LastRow = KingOnTable[i].KingThinking.Row;
		                                   AllDraw.LastColumn = KingOnTable[i].KingThinking.Column;
		                                   AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                                   AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
		                                   Act = true;
		                                   Less = KingOnTable[i].KingThinking.NumberOfPenalties;
		                               }
		                               TableHeuristic = KingOnTable[i].KingThinking.TableListKing[j];
		                               RegardOccurred = true;
		                               continue;
		                           }
		                           Object ol = new Object();
		                           ////lock (ol)
		                           {
		                               //When There is No Movments in Such Order Enemy continue.
		                               if (Order != AllDraw.OrderPlateDraw)
		                                   if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
		                                       continue;
		                               //When There is greater Heuristic Movments.
		                               if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
		                               {
		                                   //retrive table of current Heuristic.
		                                   int[,] TableS = KingOnTable[i].KingThinking.TableListKing[j];
		                                   int[,] TableSS = KingOnTable[i].KingThinking.TableListKing[j];
		                                   //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                   if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                   {
		                                       if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                           continue;
		                                   }
		                                   //When there is not Penalty regard mechanism.
		                                   AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 6, CloneATable(TableS), Order, KingOnTable[i].KingThinking.Row, KingOnTable[i].KingThinking.Column);
		                                   //If there is kish or kshachamaz Order.
		                                   if (AB.Check(CloneATable(TableS), Order))
		                                   {
		                                       //When Order is WHITE.
		                                       if (Order == 1)
		                                       {
		                                           //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                           if (AB.CheckWHITE)
		                                               continue;
		                                       }
		                                       else
		                                       {
		                                           //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                           if (AB.CheckBLACK)
		                                               continue;
		                                       }
		                                   }

		                                   RW6 = i;
		                                   CL6 = k;
		                                   Ki6 = j;
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
		                                   MaxLess6 = (KingOnTable[RW6].KingThinking[CL6].NumberOfPenalties);
		                                   if (MaxLess6 > MaxLess1)
		                                       MaxLess1 = -1;
		                                   if (MaxLess6 > MaxLess2)
		                                       MaxLess2 = -1;
		                                   if (MaxLess6 > MaxLess3)
		                                       MaxLess3 = -1;
		                                   if (MaxLess6 > MaxLess4)
		                                       MaxLess4 = -1;
		                                   if (MaxLess6 > MaxLess5)
		                                       MaxLess5 = -1;

		                                   if (AStarGreedyi == 1)
		                                   {
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = KingOnTable[i].KingThinking.Row;
		                                           AllDraw.LastColumn = KingOnTable[i].KingThinking.Column;
		                                           AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                                           AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
		                                       }
		                                       Act = true;
		                                       Less = KingOnTable[i].KingThinking.NumberOfPenalties;
		                                       TableHeuristic = KingOnTable[i].KingThinking.TableListKing[j];
		                                   }

		                               }
		                               else//Set Table and Heuristic Value and Syntax.
		                               {
		                                   if (AStarGreedyi == 1)
		                                   {
		                                       //Found of Max Non Probable Movments.
		                                       Founded.Clear();
		                                       int LessB = Int32.MinValue;
		                                       BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                       RW6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                       CL6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                       Ki6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                       if (Founded!= MaxKingFounded)
		                                           continue;
		                                       Object On = new Object();
		                                       ////lock (On)
		                                       {
		                                           AllDraw.LastRow = KingOnTable[RW6].KingThinking[CL6].Row;
		                                           AllDraw.LastColumn = KingOnTable[RW6].KingThinking[CL6].Column;
		                                           AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                                           AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
		                                       }
		                                       Act = true;
		                                       Less = KingOnTable[RW6].KingThinking[CL6].ReturnHeuristic(RW6, Ki6, Order, false, ref HaveKilled);
		                                       TableHeuristic = KingOnTable[RW6].KingThinking[CL6].TableListKing[Ki6];
		                                       Object O = new Object();
		                                       ////lock (O)
		                                       {
		                                           if (Order == 1)
		                                           {

		                                           }
		                                           else//If Order is BLACK.
		                                           {

		                                           }
		                                       }
		                                   }
		                               }
		                           }
		                       }
		                   }

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;

		               Order = DummyOrder;
		               ChessRules.CurrentOrder = DummyCurrentOrder;
		           }

		           return TableHeuristic;
		       }
		   }
		  */ //method for monitor of main Heuristic found best movment (action string)
	private:
		void StringHeuristics(int Obj, int Sec, bool AA, int Do, int WinOcuuredatChiled, int *LoseOcuuredatChiled);
		bool IsSupHuTrue(int i, int j, int k, int Kind);
		//method for return index base calculated Heuristic specified and clear
		void SaveLess(int i, int j, int k, int Kind, int &Less, bool AA, int Order);
		//index of tables that verified existence havbeen saved into refer int 
		void SaveTableHeuristic(int i, int j, int k, int Kind, int **TableHeuristic);
		//same of befor verified existence of begin move and end move location saved in unique results of Last best movments
		void SaveBeginEndLocation(int i, int j, int k, int Kind);
		//when branches(chield) of tree has heuristic less than current found 
		bool RegardLessOptimized(int i, int j, int k, int Kind, int &Less, bool AA, int Order);
		//regard section of main Heuristic in learning autamata section
		bool HeuristicRegardSection(int i, int j, int k, bool &Act, int **TableHeuristic, bool &AA, int a, int Kind, int &Do, int AStarGreedyi, int Order);
		//initiate deterministic vars of orderic Heuristic value
		void InitiateVars(int i, int j, int k, int Kind);
		//deterministic of checke of movments occured for ignore
		bool CheckeHuristci(int** TableS, int Order, int i, int j, int k);
		//minitoring of Heuristic output
		void OutputHeuristic(int Order);
		//main method of Heuristic
		bool HeuristicMainBody(int i, int j, int k, bool &Act, int **TableHeuristic, bool &CurrentTableHeuristic, bool &AA, int a, int Kind, int &Do, int AStarGreedyi, int Order);
		//determined verified victom occured
		bool KiilledForce(int HaveKiller);
		//detrmined verfied ingured occured
		bool KillerForce(int HaveKiller);
		//determine when there is lose or checked self
		bool Lose(int Kind, int i, int j, int Order);
		bool WinReturnValue(int Kind, int i, int j);
		bool WinPerfromeRegardMethod(int Kind, int i, int j);
		//soldier Heuristic
		int **HeuristicAStarGreadySearchSoldier(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//WHITE section of soldier Heuristic
		int **HeuristicAStarGreadySearchSoldierWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//BLACK section of soldier Heuristic
		int **HeuristicAStarGreadySearchSoldierBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//WHITE section of elephant Heuristic
		int **HeuristicAStarGreadySearchElephantWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//BLACK section of elephant Heuristic
		int **HeuristicAStarGreadySearchElephantBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of elephant Heuristic
		int **HeuristicAStarGreadySearchElephant(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//WHITE section of hourse Heuristic
		int **HeuristicAStarGreadySearchHourseWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//BLACK section of hourse Heuristic
		int **HeuristicAStarGreadySearchHourseBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of hourse Heuristic
		int **HeuristicAStarGreadySearchHourse(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//WHITE section of Castle Heuristic
		int **HeuristicAStarGreadySearchCastleWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main BLACK section of Castle Heuristic
		int **HeuristicAStarGreadySearchCastleBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of Castle Heuristic
		int **HeuristicAStarGreadySearchCastle(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of minister Heuristic
		int **HeuristicAStarGreadySearchMinsisterWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//BLACK main section of minister Heuristic
		int **HeuristicAStarGreadySearchMinsisterBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of minister Heuristic
		int **HeuristicAStarGreadySearchMinsister(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main WHITE section of king Heuristic
		int **HeuristicAStarGreadySearchKingWHITE(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main BLACK section of king Heuristic
		int **HeuristicAStarGreadySearchKingBLACK(int **TableHeuristic, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main section of king Heuristic
		int **HeuristicAStarGreadySearchKing(int **TableHeuristic, int i, int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main WHITE section of  Heuristic
		int **HeuristicAStarGreadySearchWHITE(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//main BLACK section of Heuristic
		int **HeuristicAStarGreadySearchBLACK(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, bool &Act);
		//BLACK section of penalty Heuristic
		/*int[,] BLACKHeuristicAStarGreaedySearchPenalites(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic, ref bool Act)
		{

		    Object O = new Object();
		    ////lock (O)
		    {
		        ChessRules AB = null;
		        int ToCheckMate = -1, ForCheckMate = -1, j, i;
		        List<int> Founded = new List<int>();
		        int DummyOrder = Order;
		        int DummyCurrentOrder = ChessRules.CurrentOrder;
		        bool AA = false;
		        int Do = 0;
		        int[,] TableHeuristic = new int[8, 8];
		        //For Every Soldeir
		        for (i = SodierMidle; i < SodierHigh; i++)
		        {
		            //For Every Soldier Movments AStarGreedy.
		            for (int k = 0; k < AllDraw.SodierMovments; k++)
		                //When There is an Movment in such situation.
		                for (j = 0; SolderesOnTable != null && SolderesOnTable[i] != null && SolderesOnTable != null && SolderesOnTable[i] != null && SolderesOnTable[i].SoldierThinking != null && SolderesOnTable[i].SoldierThinking != null && j < SolderesOnTable[i].SoldierThinking.TableListSolder.Count; j++)
		                {
		                    //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < SolderesOnTable[i].SoldierThinking.AStarGreedy.Count - 1; ij++)
		                            SolderesOnTable[i].SoldierThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, SolderesOnTable[i].SoldierThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    if ((SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsPenaltyAction() != 0 && SolderesOnTable[i].SoldierThinking.PenaltyRegardListSolder[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        //Set Table and Heuristic Value and Syntax.
		                        Act = true;
		                        Object o1l = new Object();
		                        ////lock (o1l)
		                        {
		                            AllDraw.LastRow = SolderesOnTable[i].SoldierThinking.Row;
		                            AllDraw.LastColumn = SolderesOnTable[i].SoldierThinking.Column;
		                            AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                            AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		                            Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;
		                        }

		                        TableHeuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

		                        Object OO = new Object();
		                        ////lock (OO)
		                        {
		                            ThingsConverter.ActOfClickEqualTow = true;
		                        }
		                        SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
		                        int Sign = 1;
		                        if (a == int.BLACK)
		                            Sign = -1;
		                        //If there is Soldier Convert.
		                        if (SolderesOnTable[i].Convert)
		                        {
		                            if (SolderesOnTable[i].ConvertedToMinister)
		                                TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
		                            else if (SolderesOnTable[i].ConvertedToCastle)
		                                TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
		                            else if (SolderesOnTable[i].ConvertedToHourse)
		                                TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
		                            else if (SolderesOnTable[i].ConvertedToElefant)
		                                TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;


		                            RegardOccurred = true;
		                            continue;
		                        }
		                    }
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        //When There is No Movments in Such Order Enemy continue.
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
		                                continue;
		                        //When There is greater Heuristic Movments.
		                        if (SolderesOnTable[i].SoldierThinking.NumberOfPenalties < Less)
		                        {
		                            //retrive table of current Heuristic.
		                            int[,] TableS = SolderesOnTable[i].SoldierThinking.TableListSolder[j];
		                            //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                            if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                            {
		                                if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                    continue;
		                            }
		                            //When there is not Penalty regard mechanism.
		                            AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 1, CloneATable(TableS), Order, SolderesOnTable[i].SoldierThinking.Row, SolderesOnTable[i].SoldierThinking.Column);
		                            //If there is kish or kshachamaz Order.
		                            if (AB.Check(CloneATable(TableS), Order))
		                            {
		                                //When Order is WHITE.
		                                if (Order == 1)
		                                {
		                                    //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                    if (AB.CheckWHITE)
		                                        continue;
		                                }
		                                else
		                                {
		                                    //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                    if (AB.CheckBLACK)
		                                        continue;
		                                }
		                            }
		                            RW1 = i;
		                            CL1 = k;
		                            Ki1 = j;
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
		                            MaxLess1 = SolderesOnTable[RW1].SoldierThinking[CL1].NumberOfPenalties;
		                            if (MaxLess1 > MaxLess2)
		                                MaxLess2 = -1;
		                            if (MaxLess1 > MaxLess3)
		                                MaxLess3 = -1;
		                            if (MaxLess1 > MaxLess4)
		                                MaxLess4 = -1;
		                            if (MaxLess1 > MaxLess5)
		                                MaxLess5 = -1;
		                            if (MaxLess1 > MaxLess6)
		                                MaxLess6 = -1;
		                            //Set Table and Heuristic Value and Syntax.
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                //Set Table and Heuristic Value and Syntax.
		                                Act = true;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = SolderesOnTable[i].SoldierThinking.Row;
		                                    AllDraw.LastColumn = SolderesOnTable[i].SoldierThinking.Column;
		                                    AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                                    AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		                                }
		                                Less = SolderesOnTable[i].SoldierThinking.NumberOfPenalties;

		                                TableHeuristic = SolderesOnTable[i].SoldierThinking.TableListSolder[j];

		                                Object O1 = new Object();
		                                ////lock (O1)
		                                {
		                                    ThingsConverter.ActOfClickEqualTow = true;
		                                }
		                                SolderesOnTable[i].ConvertOperation(SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1], a, SolderesOnTable[i].SoldierThinking.TableListSolder[j], Order, false, i);
		                                int Sign = 1;
		                                if (a == int.BLACK)
		                                    Sign = -1;
		                                //If there is Soldier Convert.
		                                if (SolderesOnTable[i].Convert)
		                                {
		                                    if (SolderesOnTable[i].ConvertedToMinister)
		                                        TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 5 * Sign;
		                                    else if (SolderesOnTable[i].ConvertedToCastle)
		                                        TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 4 * Sign;
		                                    else if (SolderesOnTable[i].ConvertedToHourse)
		                                        TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 3 * Sign;
		                                    else if (SolderesOnTable[i].ConvertedToElefant)
		                                        TableHeuristic[SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0], SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1]] = 2 * Sign;


		                                }
		                            }
		                            else
		                            {  //Set Table and Heuristic Value and Syntax.
		                                if (AStarGreedyi == 1)
		                                {
		                                    //Found of Max Non Probable Movments.
		                                    Founded.Clear();
		                                    int LessB = Int32.MinValue;
		                                    BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                    RW1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                    CL1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                    Ki1 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                    if (Founded!= MaxSoldeirFounded)
		                                        continue;
		                                    Act = true;
		                                    Object On = new Object();
		                                    ////lock (On)
		                                    {
		                                        AllDraw.LastRow = SolderesOnTable[RW1].SoldierThinking[CL1].Row;
		                                        AllDraw.LastColumn = SolderesOnTable[RW1].SoldierThinking[CL1].Column;
		                                        AllDraw.NextRow = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][0];
		                                        AllDraw.NextColumn = SolderesOnTable[i].SoldierThinking.RowColumnSoldier[j][1];
		                                    }
		                                    Less = SolderesOnTable[RW1].SoldierThinking[CL1].ReturnHeuristic(RW1, Ki1, Order, false, ref HaveKilled);

		                                    TableHeuristic = SolderesOnTable[RW1].SoldierThinking[CL1].TableListSolder[Ki1];

		                                    Object O1 = new Object();
		                                    ////lock (O1)
		                                    {
		                                        ThingsConverter.ActOfClickEqualTow = true;
		                                    }
		                                    SolderesOnTable[RW1].ConvertOperation(SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1], a, SolderesOnTable[RW1].SoldierThinking[CL1].TableListSolder[Ki1], Order, false, i);
		                                    int Sign = 1;
		                                    if (a == int.BLACK)
		                                        Sign = -1;
		                                    //If there is Soldier Convert.
		                                    if (SolderesOnTable[RW1].Convert)
		                                    {
		                                        if (SolderesOnTable[RW1].ConvertedToMinister)
		                                            TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 5 * Sign;
		                                        else if (SolderesOnTable[RW1].ConvertedToCastle)
		                                            TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 4 * Sign;
		                                        else if (SolderesOnTable[RW1].ConvertedToHourse)
		                                            TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 3 * Sign;
		                                        else if (SolderesOnTable[RW1].ConvertedToElefant)
		                                            TableHeuristic[SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][0], SolderesOnTable[RW1].SoldierThinking[CL1].RowColumnSoldier[Ki1][1]] = 2 * Sign;


		                                    }
		                                    Object OO = new Object();
		                                    ////lock (OO)
		                                    {
		                                        if (Order == 1)
		                                        {

		                                        }
		                                        else//If Order is BLACK.
		                                        {

		                                        }
		                                    }
		                                }

		                            }
		                        }
		                    }
		                }
		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }
		        //Do For Remaining Objects same as Soldeir Documentation.
		        for (i = ElefantMidle; i < ElefantHigh; i++)
		        {
		            for (int k = 0; k < AllDraw.ElefantMovments; k++)
		                for (j = 0; ElephantOnTable != null && ElephantOnTable[i] != null && ElephantOnTable != null && ElephantOnTable[i] != null && ElephantOnTable[i].ElefantThinking != null && ElephantOnTable[i].ElefantThinking != null && j < ElephantOnTable[i].ElefantThinking.TableListElefant.Count; j++)
		                {
		                    //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                    ////if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
		                    //   if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)

		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < ElephantOnTable[i].ElefantThinking.AStarGreedy.Count - 1; ij++)
		                            ElephantOnTable[i].ElefantThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, ElephantOnTable[i].ElefantThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    //if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
		                    //)
		                    if ((ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() != 0 && ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        Object On = new Object();
		                        ////lock (On)
		                        {
		                            AllDraw.LastRow = ElephantOnTable[i].ElefantThinking.Row;
		                            AllDraw.LastColumn = ElephantOnTable[i].ElefantThinking.Column;
		                            AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                            AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];

		                            Act = true;
		                            Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
		                        }
		                        TableHeuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                        RegardOccurred = true;
		                        //if (((Do == 1 || AA)&&UsePenaltyRegardMechnisamT))

		                        continue;
		                    }
		                    //When There is No Movments in Such Order Enemy continue.
		                    if (ElephantOnTable[i].ElefantThinking.PenaltyRegardListElefant[j].IsPenaltyAction() == 0)
		                        continue;
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        //When There is No Movments in Such Order Enemy continue.
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
		                                continue;
		                        //When There is greater Heuristic Movments.
		                        if (ElephantOnTable[i].ElefantThinking.NumberOfPenalties < Less)
		                        {
		                            //retrive table of current Heuristic.
		                            //if (CheckG || CheckB)
		                            //{
		                            //retrive table of current Heuristic.
		                            int[,] TableS = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                            //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                            if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                            {
		                                if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                    continue;
		                            }
		                            //When there is not Penalty regard mechanism.
		                            //if (!UsePenaltyRegardMechnisamT)
		                            {
		                                AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 2, CloneATable(TableS), Order, ElephantOnTable[i].ElefantThinking.Row, ElephantOnTable[i].ElefantThinking.Column);
		                                //If there is kish or kshachamaz Order.
		                                if (AB.Check(CloneATable(TableS), Order))
		                                {
		                                    //When Order is WHITE.
		                                    if (Order == 1)
		                                    {
		                                        //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                        if (AB.CheckWHITE)
		                                            continue;
		                                    }
		                                    else
		                                    {
		                                        //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                        if (AB.CheckBLACK)
		                                            continue;
		                                    }
		                                }
		                                else
		                                {
		                                }

		                            }
		                            RW2 = i;
		                            CL2 = k;
		                            Ki2 = j;
		                            RW1 = -1;
		                            CL1 = -1;
		                            Ki1 = -1;
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
		                            MaxLess2 = (ElephantOnTable[RW2].ElefantThinking[CL2].NumberOfPenalties);
		                            MaxLess1 = -1;
		                            if (MaxLess2 > MaxLess3)
		                                MaxLess3 = -1;
		                            if (MaxLess2 > MaxLess4)
		                                MaxLess4 = -1;
		                            if (MaxLess2 > MaxLess5)
		                                MaxLess5 = -1;
		                            if (MaxLess2 > MaxLess6)
		                                MaxLess6 = -1;
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = ElephantOnTable[i].ElefantThinking.Row;
		                                    AllDraw.LastColumn = ElephantOnTable[i].ElefantThinking.Column;
		                                    AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                                    AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];
		                                }
		                                Act = true;
		                                Less = ElephantOnTable[i].ElefantThinking.NumberOfPenalties;
		                                TableHeuristic = ElephantOnTable[i].ElefantThinking.TableListElefant[j];
		                            }
		                        }
		                        else//Set Table and Heuristic Value and Syntax.
		                        {
		                            if (AStarGreedyi == 1)
		                            {

		                                //Found of Max Non Probable Movments.
		                                Founded.Clear();
		                                int LessB = Int32.MinValue;
		                                BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                RW2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                CL2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                Ki2 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                if (Founded!= MaxElephntFounded)
		                                    continue;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = ElephantOnTable[RW2].ElefantThinking[CL2].Row;
		                                    AllDraw.LastColumn = ElephantOnTable[RW2].ElefantThinking[CL2].Column;
		                                    AllDraw.NextRow = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][0];
		                                    AllDraw.NextColumn = ElephantOnTable[i].ElefantThinking.RowColumnElefant[j][1];
		                                }
		                                Act = true;
		                                Less = ElephantOnTable[RW2].ElefantThinking[CL2].ReturnHeuristic(RW2, Ki2, Order, false, ref HaveKilled);
		                                TableHeuristic = ElephantOnTable[RW2].ElefantThinking[CL2].TableListElefant[Ki2];
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                            }

		                        }
		                    }
		                }

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }
		        for (i = HourseMidle; i < HourseHight; i++)
		        {
		            for (int k = 0; k < AllDraw.HourseMovments; k++)
		                for (j = 0; HoursesOnTable != null && HoursesOnTable[i] != null && HoursesOnTable != null && HoursesOnTable[i] != null && HoursesOnTable[i].HourseThinking != null && HoursesOnTable[i].HourseThinking != null && j < HoursesOnTable[i].HourseThinking.TableListHourse.Count; j++)
		                {
		                    //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                    ////if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
		                    //    if (HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() == 0)

		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < HoursesOnTable[i].HourseThinking.AStarGreedy.Count - 1; ij++)
		                            HoursesOnTable[i].HourseThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, HoursesOnTable[i].HourseThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    //if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
		                    //)
		                    if ((HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsPenaltyAction() != 0 && HoursesOnTable[i].HourseThinking.PenaltyRegardListHourse[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        Object On = new Object();
		                        ////lock (On)
		                        {
		                            AllDraw.LastRow = HoursesOnTable[i].HourseThinking.Row;
		                            AllDraw.LastColumn = HoursesOnTable[i].HourseThinking.Column;
		                            AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                            AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];

		                            Act = true;
		                            Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
		                        }
		                        TableHeuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                        RegardOccurred = true;
		                        //if (((Do == 1 || AA)&&UsePenaltyRegardMechnisamT))

		                        continue;
		                    }
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        //When There is No Movments in Such Order Enemy continue.
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)
		                                continue;
		                        //When There is greater Heuristic Movments.
		                        if (HoursesOnTable[i].HourseThinking.NumberOfPenalties < Less)
		                        {
		                            //retrive table of current Heuristic.
		                            //retrive table of current Heuristic.
		                            int[,] TableS = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                            {
		                                //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                                if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                                {
		                                    if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                        continue;

		                                }
		                                //When there is not Penalty regard mechanism.
		                                //if (!UsePenaltyRegardMechnisamT)
		                                {
		                                    AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 3, CloneATable(TableS), Order, HoursesOnTable[i].HourseThinking.Row, HoursesOnTable[i].HourseThinking.Column);
		                                    //If there is kish or kshachamaz Order.
		                                    if (AB.Check(CloneATable(TableS), Order))
		                                    {
		                                        //When Order is WHITE.
		                                        if (Order == 1)
		                                        {
		                                            //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                            if (AB.CheckWHITE)
		                                                continue;
		                                        }
		                                        else
		                                        {
		                                            //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                            if (AB.CheckBLACK)
		                                                continue;
		                                        }
		                                    }
		                                    else
		                                    {
		                                    }
		                                }

		                            }
		                            RW1 = -1;
		                            CL1 = -1;
		                            Ki1 = -1;
		                            RW2 = -1;
		                            CL2 = -1;
		                            Ki2 = -1;
		                            RW3 = i;
		                            CL3 = k;
		                            Ki3 = j;
		                            RW4 = -1;
		                            CL4 = -1;
		                            Ki4 = -1;
		                            RW5 = -1;
		                            CL5 = -1;
		                            Ki5 = -1;
		                            RW6 = -1;
		                            CL6 = -1;
		                            Ki6 = -1;
		                            MaxLess3 = HoursesOnTable[RW3].HourseThinking[CL3].NumberOfPenalties;
		                            if (MaxLess3 > MaxLess1)
		                                MaxLess1 = -1;
		                            if (MaxLess3 > MaxLess2)
		                                MaxLess2 = -1;
		                            if (MaxLess3 > MaxLess4)
		                                MaxLess4 = -1;
		                            if (MaxLess3 > MaxLess5)
		                                MaxLess5 = -1;
		                            if (MaxLess3 > MaxLess6)
		                                MaxLess6 = -1;
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                //Set Table and Heuristic Value and Syntax.
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = HoursesOnTable[i].HourseThinking.Row;
		                                    AllDraw.LastColumn = HoursesOnTable[i].HourseThinking.Column;
		                                    AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                                    AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
		                                }
		                                Act = true;
		                                Less = HoursesOnTable[i].HourseThinking.NumberOfPenalties;
		                                TableHeuristic = HoursesOnTable[i].HourseThinking.TableListHourse[j];
		                            }
		                        }
		                        else//Set Table and Heuristic Value and Syntax.
		                        {
		                            if (AStarGreedyi == 1)
		                            {

		                                //Found of Max Non Probable Movments.
		                                Founded.Clear();
		                                int LessB = Int32.MinValue;
		                                BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                RW3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                CL3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                Ki3 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                if (Founded!= MaxHourseFounded)
		                                    continue;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = HoursesOnTable[RW3].HourseThinking[CL3].Row;
		                                    AllDraw.LastColumn = HoursesOnTable[RW3].HourseThinking[CL3].Column;
		                                    AllDraw.NextRow = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][0];
		                                    AllDraw.NextColumn = HoursesOnTable[i].HourseThinking.RowColumnHourse[j][1];
		                                }
		                                Act = true;
		                                Less = HoursesOnTable[RW3].HourseThinking[CL3].ReturnHeuristic(RW3, Ki3, Order, false, ref HaveKilled);
		                                TableHeuristic = HoursesOnTable[RW3].HourseThinking[CL3].TableListHourse[Ki3];
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                            }

		                        }
		                    }
		                }

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }
		        for (i = CastleMidle; i < CastleHigh; i++)
		        {
		            for (int k = 0; k < AllDraw.CastleMovments; k++)
		                for (j = 0; CastlesOnTable != null && CastlesOnTable[i] != null && CastlesOnTable != null && CastlesOnTable[i] != null && CastlesOnTable[i].CastleThinking != null && CastlesOnTable[i].CastleThinking != null && j < CastlesOnTable[i].CastleThinking.TableListCastle.Count; j++)
		                {
		                    //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                    ////if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT)
		                    ///   if (CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() == 0)

		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < CastlesOnTable[i].CastleThinking.AStarGreedy.Count - 1; ij++)
		                            CastlesOnTable[i].CastleThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, CastlesOnTable[i].CastleThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    //if (AllDraw.OrderPlate == Order && AStarGreedyi == 1 //&& UsePenaltyRegardMechnisamT
		                    //)
		                    if ((CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsPenaltyAction() != 0 && CastlesOnTable[i].CastleThinking.PenaltyRegardListCastle[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        Object On = new Object();
		                        ////lock (On)
		                        {
		                            AllDraw.LastRow = CastlesOnTable[i].CastleThinking.Row;
		                            AllDraw.LastColumn = CastlesOnTable[i].CastleThinking.Column;
		                            AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                            AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                            Act = true;
		                            Less = CastlesOnTable[i].CastleThinking.NumberOfPenalties;
		                        }
		                        TableHeuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                        RegardOccurred = true;
		                        //if (((Do == 1 || AA)&&UsePenaltyRegardMechnisamT))

		                        continue;
		                    }
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (CastlesOnTable[i].CastleThinking.NumberOfPenalties < Less)
		                                continue;
		                        //When There is greater Heuristic Movments.
		                        if (CastlesOnTable[i].CastleThinking.NumberOfPenalties < Less)
		                        {
		                            //retrive table of current Heuristic.
		                            //retrive table of current Heuristic.
		                            int[,] TableS = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                            //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                            if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                            {
		                                if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                    continue;

		                            }
		                            //When there is not Penalty regard mechanism.
		                            //if (!UsePenaltyRegardMechnisamT)
		                            {
		                                AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 4, CloneATable(TableS), Order, CastlesOnTable[i].CastleThinking.Row, CastlesOnTable[i].CastleThinking.Column);
		                                //If there is kish or kshachamaz Order.
		                                if (AB.Check(CloneATable(TableS), Order))
		                                {
		                                    //When Order is WHITE.
		                                    if (Order == 1)
		                                    {
		                                        //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                        if (AB.CheckWHITE)
		                                            continue;
		                                    }
		                                    else
		                                    {
		                                        //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                        if (AB.CheckBLACK)
		                                            continue;
		                                    }
		                                }
		                                else
		                                {
		                                }
		                            }
		                            RW4 = i;
		                            CL4 = k;
		                            Ki4 = j;
		                            RW1 = -1;
		                            CL1 = -1;
		                            Ki1 = -1;
		                            RW2 = -1;
		                            CL2 = -1;
		                            Ki2 = -1;
		                            RW3 = -1;
		                            CL3 = -1;
		                            Ki3 = -1;
		                            RW5 = -1;
		                            CL5 = -1;
		                            Ki5 = -1;
		                            RW6 = -1;
		                            CL6 = -1;
		                            Ki6 = -1;
		                            MaxLess4 = (CastlesOnTable[RW4].CastleThinking[CL4].NumberOfPenalties);
		                            if (MaxLess4 > MaxLess1)
		                                MaxLess1 = -1;
		                            if (MaxLess4 > MaxLess2)
		                                MaxLess2 = -1;
		                            if (MaxLess4 > MaxLess3)
		                                MaxLess3 = -1;
		                            if (MaxLess4 > MaxLess5)
		                                MaxLess5 = -1;
		                            if (MaxLess4 > MaxLess6)
		                                MaxLess6 = -1;
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                //Set Table and Heuristic Value and Syntax.
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = CastlesOnTable[i].CastleThinking.Row;
		                                    AllDraw.LastColumn = CastlesOnTable[i].CastleThinking.Column;
		                                    AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                                    AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                                }
		                                Act = true;
		                                Less = CastlesOnTable[i].CastleThinking.NumberOfPenalties;
		                                TableHeuristic = CastlesOnTable[i].CastleThinking.TableListCastle[j];
		                            }
		                        }
		                        else//Set Table and Heuristic Value and Syntax.
		                        {
		                            if (AStarGreedyi == 1)
		                            {

		                                //Found of Max Non Probable Movments.
		                                Founded.Clear();
		                                int LessB = Int32.MinValue;
		                                BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                RW4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                CL4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                Ki4 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                if (Founded!= MaxCastlesFounded)
		                                    continue;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = CastlesOnTable[RW4].CastleThinking[CL4].Row;
		                                    AllDraw.LastColumn = CastlesOnTable[RW4].CastleThinking[CL4].Column;
		                                    AllDraw.NextRow = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][0];
		                                    AllDraw.NextColumn = CastlesOnTable[i].CastleThinking.RowColumnCastle[j][1];
		                                }
		                                Act = true;
		                                Less = CastlesOnTable[RW4].CastleThinking[CL4].ReturnHeuristic(RW4, Ki4, Order, false, ref HaveKilled);
		                                TableHeuristic = CastlesOnTable[RW4].CastleThinking[CL4].TableListCastle[Ki4];
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                            }

		                        }
		                    }
		                }

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }

		        for (i = MinisterMidle; i < MinisterHigh; i++)
		        {
		            for (int k = 0; k < AllDraw.MinisterMovments; k++)
		                for (j = 0; MinisterOnTable != null && MinisterOnTable[i] != null && MinisterOnTable != null && MinisterOnTable[i] != null && MinisterOnTable[i].MinisterThinking != null && MinisterOnTable[i].MinisterThinking != null && j < MinisterOnTable[i].MinisterThinking.TableListMinister.Count; j++)
		                {
		                    //For Penalty Reagrad Mechanisam of Current Check CheckMate Current Movments.
		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < MinisterOnTable[i].MinisterThinking.AStarGreedy.Count - 1; ij++)
		                            MinisterOnTable[i].MinisterThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, MinisterOnTable[i].MinisterThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    if ((MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsPenaltyAction() != 0 && MinisterOnTable[i].MinisterThinking.PenaltyRegardListMinister[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        Object On = new Object();
		                        ////lock (On)
		                        {
		                            AllDraw.LastRow = MinisterOnTable[i].MinisterThinking.Row;
		                            AllDraw.LastColumn = MinisterOnTable[i].MinisterThinking.Column;
		                            AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                            AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];

		                            Act = true;
		                            Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
		                        }
		                        TableHeuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                        RegardOccurred = true;
		                        continue;
		                    }
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        //When There is No Movments in Such Order Enemy continue.
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)
		                                continue;

		                        //When There is greater Heuristic Movments.
		                        if (MinisterOnTable[i].MinisterThinking.NumberOfPenalties < Less)
		                        //retrive table of current Heuristic.
		                        {
		                            //retrive table of current Heuristic.
		                            int[,] TableS = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                            //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                            if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                            {
		                                if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                    continue;
		                            }
		                            //When there is not Penalty regard mechanism.
		                            AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 5, CloneATable(TableS), Order, MinisterOnTable[i].MinisterThinking.Row, MinisterOnTable[i].MinisterThinking.Column);
		                            //If there is kish or kshachamaz Order.
		                            if (AB.Check(CloneATable(TableS), Order))
		                            {
		                                //When Order is WHITE.
		                                if (Order == 1)
		                                {
		                                    //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                    if (AB.CheckWHITE)
		                                        continue;
		                                }
		                                else
		                                {
		                                    //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                    if (AB.CheckBLACK)
		                                        continue;
		                                }
		                            }
		                            RW5 = i;
		                            CL5 = k;
		                            Ki5 = j;
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
		                            RW6 = -1;
		                            CL6 = -1;
		                            Ki6 = -1;
		                            MaxLess5 = (MinisterOnTable[RW5].MinisterThinking[CL5].NumberOfPenalties);
		                            if (MaxLess5 > MaxLess1)
		                                MaxLess1 = -1;
		                            if (MaxLess5 > MaxLess2)
		                                MaxLess2 = -1;
		                            if (MaxLess5 > MaxLess3)
		                                MaxLess3 = -1;
		                            if (MaxLess5 > MaxLess4)
		                                MaxLess4 = -1;
		                            if (MaxLess5 > MaxLess6)
		                                MaxLess6 = -1;
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = MinisterOnTable[i].MinisterThinking.Row;
		                                    AllDraw.LastColumn = MinisterOnTable[i].MinisterThinking.Column;
		                                    AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                                    AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
		                                }
		                                Act = true;
		                                Less = MinisterOnTable[i].MinisterThinking.NumberOfPenalties;
		                                TableHeuristic = MinisterOnTable[i].MinisterThinking.TableListMinister[j];
		                            }
		                        }
		                        else//Set Table and Heuristic Value and Syntax.
		                        {
		                            if (AStarGreedyi == 1)
		                            {
		                                //Found of Max Non Probable Movments.
		                                Founded.Clear();
		                                int LessB = Int32.MinValue;
		                                BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                RW5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                CL5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                Ki5 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                if (Founded!= MaxMinisterFounded)
		                                    continue;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = MinisterOnTable[RW5].MinisterThinking[CL5].Row;
		                                    AllDraw.LastColumn = MinisterOnTable[RW5].MinisterThinking[CL5].Column;
		                                    AllDraw.NextRow = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][0];
		                                    AllDraw.NextColumn = MinisterOnTable[i].MinisterThinking.RowColumnMinister[j][1];
		                                }
		                                Act = true;
		                                Less = MinisterOnTable[RW5].MinisterThinking[CL5].ReturnHeuristic(RW5, Ki5, Order, false, ref HaveKilled);
		                                TableHeuristic = MinisterOnTable[RW5].MinisterThinking[CL5].TableListMinister[Ki5];
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                            }
		                        }
		                    }
		                }

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }
		        Order = DummyOrder;
		        ChessRules.CurrentOrder = DummyCurrentOrder;
		        for (i = KingMidle; i < KingHigh; i++)
		        {
		            for (int k = 0; k < AllDraw.KingMovments; k++)
		                for (j = 0; KingOnTable != null && KingOnTable[i] != null && KingOnTable != null && KingOnTable[i] != null && KingOnTable[i].KingThinking != null && KingOnTable[i].KingThinking != null && j < KingOnTable[i].KingThinking.TableListKing.Count; j++)
		                {
		                    int CDummy = ChessRules.CurrentOrder;
		                    int COrder = Order;
		                    ChessRules.CurrentOrder *= -1;
		                    Order *= -1;
		                    Do = 0;
		                    if (UsePenaltyRegardMechnisamT)
		                    {
		                        for (int ij = 0; ij < KingOnTable[i].KingThinking.AStarGreedy.Count - 1; ij++)
		                            KingOnTable[i].KingThinking.AStarGreedy[ij].IsPenaltyRegardCheckMateAtBranch(Order, ref Do, KingOnTable[i].KingThinking.AStarGreedy[ij]);
		                        Order = COrder;
		                        ChessRules.CurrentOrder = CDummy;
		                        ToCheckMate = -1; ForCheckMate = -1; AA = IsToCheckMateHasLessDeeperThanForCheckMate(this, Order, ref ToCheckMate, ref ForCheckMate, 0); if (Do == -1)
		                            continue;
		                    }

		                    Order = COrder;
		                    ChessRules.CurrentOrder = CDummy;
		                    if ((KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsPenaltyAction() != 0 && KingOnTable[i].KingThinking.PenaltyRegardListKing[j].IsRewardAction() == 1 && AStarGreedyi == 1) || ((Do == 1 || AA) && UsePenaltyRegardMechnisamT))
		                    {
		                        Object On = new Object();
		                        ////lock (On)
		                        {
		                            AllDraw.LastRow = KingOnTable[i].KingThinking.Row;
		                            AllDraw.LastColumn = KingOnTable[i].KingThinking.Column;
		                            AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                            AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];

		                            Act = true;
		                            Less = KingOnTable[i].KingThinking.NumberOfPenalties;
		                        }
		                        TableHeuristic = KingOnTable[i].KingThinking.TableListKing[j];
		                        RegardOccurred = true;
		                        continue;
		                    }
		                    Object ol = new Object();
		                    ////lock (ol)
		                    {
		                        //When There is No Movments in Such Order Enemy continue.
		                        if (Order != AllDraw.OrderPlateDraw)
		                            if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
		                                continue;

		                        //When There is greater Heuristic Movments.
		                        if (KingOnTable[i].KingThinking.NumberOfPenalties < Less)
		                        //retrive table of current Heuristic.
		                        {

		                            //retrive table of current Heuristic.
		                            int[,] TableS = KingOnTable[i].KingThinking.TableListKing[j];
		                            //checked for Legal Movments ArgumentOutOfRangeException curnt game.
		                            if (DynamicAStarGreedytPrograming && !CurrentTableHeuristic && AStarGreedyi == 1)
		                            {
		                                if (!IsEnemyThingsinStable(CloneATable(TableS), AllDraw.TableListAction[AllDraw.TableListAction.Count - 1], AllDraw.OrderPlate))
		                                    continue;

		                            }
		                            //When there is not Penalty regard mechanism.
		                            AB =  ChessRules(CurrentAStarGredyMax, MovementsAStarGreedyHeuristicFoundT, IgnoreSelfObjectsT, UsePenaltyRegardMechnisamT, BestMovmentsT, PredictHeuristicT, OnlySelfT, AStarGreedyHeuristicT, ArrangmentsChanged, 6, CloneATable(TableS), Order, KingOnTable[i].KingThinking.Row, KingOnTable[i].KingThinking.Column);
		                            //If there is kish or kshachamaz Order.
		                            if (AB.Check(CloneATable(TableS), Order))
		                            {
		                                //When Order is WHITE.
		                                if (Order == 1)
		                                {
		                                    //Continue When is kish CheckObjectDangour and AStarGreadyFirstSearch .
		                                    if (AB.CheckWHITE)
		                                        continue;
		                                }
		                                else
		                                {
		                                    //Continue when CheckBLACK and AStarGreadyFirstSearch. 
		                                    if (AB.CheckBLACK)
		                                        continue;
		                                }
		                            }

		                            RW6 = i;
		                            CL6 = k;
		                            Ki6 = j;
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
		                            MaxLess6 = (KingOnTable[RW6].KingThinking[CL6].NumberOfPenalties);
		                            if (MaxLess6 > MaxLess1)
		                                MaxLess1 = -1;
		                            if (MaxLess6 > MaxLess2)
		                                MaxLess2 = -1;
		                            if (MaxLess6 > MaxLess3)
		                                MaxLess3 = -1;
		                            if (MaxLess6 > MaxLess4)
		                                MaxLess4 = -1;
		                            if (MaxLess6 > MaxLess5)
		                                MaxLess5 = -1;
		                            if (AStarGreedyi == 1)
		                            {
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = KingOnTable[i].KingThinking.Row;
		                                    AllDraw.LastColumn = KingOnTable[i].KingThinking.Column;
		                                    AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                                    AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
		                                }
		                                Act = true;
		                                Less = KingOnTable[i].KingThinking.NumberOfPenalties;
		                                TableHeuristic = KingOnTable[i].KingThinking.TableListKing[j];
		                            }
		                        }
		                        else//Set Table and Heuristic Value and Syntax.
		                        {
		                            if (AStarGreedyi == 1)
		                            {

		                                //Found of Max Non Probable Movments.
		                                Founded.Clear();
		                                int LessB = Int32.MinValue;
		                                BeginIndexFoundingMaxLessofMaxList(0, Founded, ref LessB);
		                                if (Founded!= 1)
		                                    continue;
		                                RW6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0]];
		                                CL6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 1];
		                                Ki6 = (int)MaxHeuristicAStarGreedytBackWard[0][(int)Founded[0] + 2];
		                                if (Founded!= MaxKingFounded)
		                                    continue;
		                                Object On = new Object();
		                                ////lock (On)
		                                {
		                                    AllDraw.LastRow = KingOnTable[RW6].KingThinking[CL6].Row;
		                                    AllDraw.LastColumn = KingOnTable[RW6].KingThinking[CL6].Column;
		                                    AllDraw.NextRow = KingOnTable[i].KingThinking.RowColumnKing[j][0];
		                                    AllDraw.NextColumn = KingOnTable[i].KingThinking.RowColumnKing[j][1];
		                                }
		                                Act = true;
		                                Less = KingOnTable[RW6].KingThinking[CL6].ReturnHeuristic(RW6, Ki6, Order, false, ref HaveKilled);
		                                TableHeuristic = KingOnTable[RW6].KingThinking[CL6].TableListKing[Ki6];
		                                Object OO = new Object();
		                                ////lock (OO)
		                                {
		                                    if (Order == 1)
		                                    {

		                                    }
		                                    else//If Order is BLACK.
		                                    {

		                                    }
		                                }
		                            }
		                        }
		                    }
		                }

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;

		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
		        }

		        return TableHeuristic;
		    }
		}
		//AStarGreedy First Heuristic Method.
	  */
	public:
		int **HeuristicAStarGreedySearch(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic);
		/*    public int[,] HeuristicAStarGreedySearchPenalties(int AStarGreedyi, int a, int Order, bool CurrentTableHeuristic)
		    {

		        Object O = new Object();
		        ////lock (O)
		        {
		            int[,] TableHeuristic = new int[8, 8];
		            AStarGreedyi++;
		            int DummyOrder = Order;
		            int DummyCurrentOrder = ChessRules.CurrentOrder;
		            //Initiate For Dynamic Backward Current AStarGreedyi Non Minus Founded Max Movments Detection Global Variables.
		            List<int> Founded = new List<int>();
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
		            int[] BacWard = new int[25];
		            Object Omm = new Object();
		            ////lock (Omm)
		            {
		                if (AStarGreedyi > MaxAStarGreedy)
		                    return TableHeuristic;
		            }
		            bool Act = false;
		            if (Order == 1)
		            {
		                TableHeuristic = HeuristicAStarGreadySearchPenalties(AStarGreedyi, a, Order, CurrentTableHeuristic, ref Act);
		            }
		            else
		            {
		                TableHeuristic = BLACKHeuristicAStarGreaedySearchPenalites(AStarGreedyi, a, Order, CurrentTableHeuristic, ref Act);
		            }
		            Order = DummyOrder;
		            ChessRules.CurrentOrder = DummyCurrentOrder;
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
		            MaxHeuristicAStarGreedytBackWard.Add(BacWard);
		            MaxHeuristicAStarGreedytBackWardTable.Add(TableHeuristic);
		            Founded.Clear();

		            //If Found retrun table.
		            if (Act)
		                return TableHeuristic;
		            //Return what found table.
		            return TableHeuristic;
		        }
		    }
		    //Genethic Algorithm Game Method.
		*/
		void InitiateGenetic(int ii, int jj, int a, int** Table, int Order, bool TB);
		//AStarGreedy First Initiat Thinking Main Method.
		AllDraw InitiateAStarGreedytOneNode(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, int iIndex, int KindIndex, int LeafAStarGreedy);
		//WHITE index objects max count
	private:
		int MaxWHITEMidle();
		//BLACK index objects max count
		int MaxBLACKHigh();
		//WHITE index objects min count
		int MinBLACKMidle();
		//WHITE object initiation second method
		/*     AllDraw InitiateAStarGreedytObjectWHITE(int iii, int jjj, int[,] Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int[,] Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		         )
		     {

		         Object oo = new Object();
		         ////lock (oo)
		         {
		             for (int  i = 0; i < MaxWHITEMidle(); i++)
		             {
		                 //Parallel.Invoke(() =>
		                 {
		                     Object ooo = new Object();
		                     ////lock (ooo)
		                     {
		                         if (SodierMidle > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //If Solders Not Exist Continue and Traversal Back.
		                                 if (SolderesOnTable != null && SolderesOnTable[i] != null)
		                                 {
		                                     //Initiate of Local Variables By Global Objective WHITE Current Solder.
		                                     int ik = (int)SolderesOnTable[i].Row;
		                                     int jk = (int)SolderesOnTable[i].Column;
		                                     //Construction of Thinking WHITE Soldier By Local Variables.
		                                     //If There is no Thinking Movments on Current Object  
		                                     if (SolderesOnTable[i].SoldierThinking.TableListSolder.Count == 0)
		                                     {
		                                         //For All Movable WHITE Solders.
		                                         for (int  j = 0; j < AllDraw.SodierMovments; j++)
		                                         ////Parallel.For(0, AllDraw.SodierMovments, j =>
		                                         {
		                                             //Thinking of WHITE Solder Operation.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
		                                                 SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
		                                                 SolderesOnTable[i].SoldierThinking.Kind = 1;
		                                                 SolderesOnTable[i].SoldierThinking[j].Thinking(iAStarGreedy, *this, ref SolderesOnTable[i].LoseOcuuredatChiled, ref SolderesOnTable[i].WinOcuuredatChiled);

		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,
		                 // () =>
		                 {
		                     Object ooo = new Object();
		                     ////lock (ooo)
		                     {
		                         if (MinisterMidle > i)
		                         {

		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //For Each Non Exist WHITE Minister Objectives.
		                                 if (MinisterOnTable != null && MinisterOnTable[i] != null)
		                                 {
		                                     //Inititate Local Variables By Global Varibales.
		                                     int ik = (int)MinisterOnTable[i].Row;
		                                     int jk = (int)MinisterOnTable[i].Column;
		                                     //Construction of Thinking Objects WHITE Minister.
		                                     //If There is Not Minister Of WHITE In The Thinking Table List.   
		                                     if (MinisterOnTable[i].MinisterThinking.TableListMinister.Count == 0)
		                                     {
		                                         //For All Possible Movments.
		                                         for (int  j = 0; j < AllDraw.MinisterMovments; j++)
		                                         ////Parallel.For(0, AllDraw.MinisterMovments, j =>
		                                         {
		                                             //Thinking of WHITE Minister Operational.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
		                                                 MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
		                                                 MinisterOnTable[i].MinisterThinking.Kind = 5;
		                                                 MinisterOnTable[i].MinisterThinking.Thinking(iAStarGreedy, *this, ref MinisterOnTable[i].LoseOcuuredatChiled, ref MinisterOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,
		                  //() =>
		                 {
		                     Object ooo = new Object();
		                     ////lock (ooo)
		                     {
		                         if (KingMidle > i)
		                         {

		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //If There is Not Current Object Continue Traversal Back.
		                                 if (KingOnTable != null && KingOnTable[i] != null)
		                                 {
		                                     //Initiate Local varibale By Global Objective Varibales.
		                                     int ik = (int)(int)KingOnTable[i].Row;
		                                     int jk = (int)KingOnTable[i].Column;
		                                     //Construction of WHITE King Thinking Objects.
		                                     //When There is Not Thinking Table WHITE King Movments.
		                                     if (KingOnTable[i].KingThinking.TableListKing.Count == 0)
		                                     {
		                                         //For All Possible WHITE King Movments.
		                                         ////Parallel.For(0, AllDraw.KingMovments, j =>
		                                         for (int  j = 0; j < AllDraw.KingMovments; j++)
		                                         {
		                                             //Thinking Of WHITE King Operatins.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 KingOnTable[i].KingThinking.ThinkingBegin = true;
		                                                 KingOnTable[i].KingThinking.ThinkingFinished = false;
		                                                 KingOnTable[i].KingThinking.Kind = 6;
		                                                 KingOnTable[i].KingThinking.Thinking(iAStarGreedy, *this, ref MinisterOnTable[i].LoseOcuuredatChiled, ref MinisterOnTable[i].WinOcuuredatChiled);
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

		         return *this;
		     }
		     AllDraw InitiateAStarGreedytObjectBLACK(int iii, int jjj, int[,] Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int[,] Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy//, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		         )
		     {

		         Object oo = new Object();
		         ////lock (oo)
		         {
		             ////Parallel.For(MinBLACKMidle(), MaxBLACKHigh(), i =>
		             for (int  i = MinBLACKMidle(); i < MaxBLACKHigh(); i++)
		             {
		                 //Parallel.Invoke(() =>
		                 {
		                     Object ooo = new Object();
		                     ////lock (ooo)
		                     {
		                         if (SodierMidle <= i && SodierHigh > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //If Solders Not Exist Continue and Traversal Back.
		                                 if (SolderesOnTable != null && SolderesOnTable[i] != null)
		                                 {
		                                     //Initiate of Local Variables By Global Objective WHITE Current Solder.
		                                     int ik = (int)SolderesOnTable[i].Row;
		                                     int jk = (int)SolderesOnTable[i].Column;
		                                     //Construction of Thinking WHITE Soldier By Local Variables.
		                                     //If There is no Thinking Movments on Current Object  
		                                     if (SolderesOnTable[i].SoldierThinking.TableListSolder.Count == 0)
		                                     {
		                                         //For All Movable WHITE Solders.
		                                         for (int  j = 0; j < AllDraw.SodierMovments; j++)
		                                         ////Parallel.For(0, AllDraw.SodierMovments, j =>
		                                         {
		                                             //Thinking of WHITE Solder Operation.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 SolderesOnTable[i].SoldierThinking.ThinkingBegin = true;
		                                                 SolderesOnTable[i].SoldierThinking.ThinkingFinished = false;
		                                                 SolderesOnTable[i].SoldierThinking.Kind = 1;
		                                                 SolderesOnTable[i].SoldierThinking.Thinking(iAStarGreedy, *this, ref SolderesOnTable[i].LoseOcuuredatChiled, ref SolderesOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,() =>
		                 {
		                     Object oooo = new Object();
		                     ////lock (oooo)
		                     {
		                         if (ElefantMidle <= i && ElefantHigh > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //Ignore of Non Exist Current Elephant WHITE Objects.
		                                 if (ElephantOnTable != null && ElephantOnTable[i] != null)
		                                 {
		                                     //Inititae Local Varibale By Global WHITE Elephant Objects Varibales.
		                                     int ik = (int)ElephantOnTable[i].Row;
		                                     int jk = (int)ElephantOnTable[i].Column;
		                                     //Construction of Thinking Objects By Local Varibales.
		                                     //If There is Not Thinking Objetive List Elephant WHITE. 
		                                     if (ElephantOnTable[i].ElefantThinking.TableListElefant.Count == 0)
		                                     {
		                                         //For All Possible Movments.
		                                         ////Parallel.For(0, AllDraw.ElefantMovments, j =>
		                                         for (int  j = 0; j < AllDraw.ElefantMovments; j++)
		                                         {
		                                             //Operational Thinking WHITE Elephant. 
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 ElephantOnTable[i].ElefantThinking.ThinkingBegin = true;
		                                                 ElephantOnTable[i].ElefantThinking.ThinkingFinished = false;
		                                                 ElephantOnTable[i].ElefantThinking.Kind = 2;
		                                                 ElephantOnTable[i].ElefantThinking.Thinking(iAStarGreedy, *this, ref ElephantOnTable[i].LoseOcuuredatChiled, ref ElephantOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,() =>
		                 {
		                     Object oooo = new Object();
		                     ////lock (oooo)
		                     {
		                         if (HourseMidle <= i && HourseHight > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //Ignore of Non Exist Current WHITE Hourse Objects.
		                                 if (HoursesOnTable != null && HoursesOnTable[i] != null)
		                                 {
		                                     //Initiate of Local Variables By Global WHITE Hourse Objectives.
		                                     int ik = (int)HoursesOnTable[i].Row;
		                                     int jk = (int)HoursesOnTable[i].Column;
		                                     //Construction of WHITE Hourse Thinking Objects..
		                                     //When There is Not HourseList Count. 
		                                     if (HoursesOnTable[i].HourseThinking.TableListHourse.Count == 0)
		                                     {
		                                         //For All Possible Movments.
		                                         for (int  j = 0; j < AllDraw.HourseMovments; j++)
		                                         ////Parallel.For(0, AllDraw.HourseMovments, j =>
		                                         {
		                                             //Thinking of WHITE Hourse Oprational.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 HoursesOnTable[i].HourseThinking.ThinkingBegin = true;
		                                                 HoursesOnTable[i].HourseThinking.ThinkingFinished = false;
		                                                 HoursesOnTable[i].HourseThinking.Kind = 3;
		                                                 HoursesOnTable[i].HourseThinking.Thinking(iAStarGreedy, *this, ref HoursesOnTable[i].LoseOcuuredatChiled, ref HoursesOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,() =>
		                 {
		                     Object oooo = new Object();
		                     ////lock (oooo)
		                     {
		                         if (CastleMidle <= i && CastleHigh < i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //When Current Castles WHITE Not Exist Continue Traversal Back.
		                                 if (CastlesOnTable != null && CastlesOnTable[i] != null)
		                                 {
		                                     //Initaiate of Local Varibales By Global Varoiables.
		                                     int ik = (int)CastlesOnTable[i].Row;
		                                     int jk = (int)CastlesOnTable[i].Column;
		                                     //Construction of Thinking Variables By Local Variables.
		                                     //When Count of Table Castles of Thinking Not Exist Do Operational.
		                                     if (CastlesOnTable[i].CastleThinking.TableListCastle.Count == 0)
		                                     {
		                                         //For All Possible Movments.
		                                         ////Parallel.For(0, AllDraw.CastleMovments, j =>
		                                         for (int  j = 0; j < AllDraw.CastleMovments; j++)
		                                         {
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 //Thinking of WHITE Castles Operational.
		                                                 CastlesOnTable[i].CastleThinking.ThinkingBegin = true;
		                                                 CastlesOnTable[i].CastleThinking.ThinkingFinished = false;
		                                                 CastlesOnTable[i].CastleThinking.Kind = 4;
		                                                 CastlesOnTable[i].CastleThinking.Thinking(iAStarGreedy, *this, ref CastlesOnTable[i].LoseOcuuredatChiled, ref CastlesOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,() =>
		                 {
		                     Object oooo = new Object();
		                     ////lock (oooo)
		                     {

		                         if (MinisterMidle <= i && MinisterHigh > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //For Each Non Exist WHITE Minister Objectives.
		                                 if (MinisterOnTable != null && MinisterOnTable[i] != null)
		                                 {
		                                     //Inititate Local Variables By Global Varibales.
		                                     int ik = (int)MinisterOnTable[i].Row;
		                                     int jk = (int)MinisterOnTable[i].Column;
		                                     //Construction of Thinking Objects WHITE Minister.
		                                     //If There is Not Minister Of WHITE In The Thinking Table List.   
		                                     if (MinisterOnTable[i].MinisterThinking.TableListMinister.Count == 0)
		                                     {
		                                         //For All Possible Movments.
		                                         ////Parallel.For(0, AllDraw.MinisterMovments, j =>
		                                         for (int  j = 0; j < AllDraw.MinisterMovments; j++)
		                                         {
		                                             //Thinking of WHITE Minister Operational.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 MinisterOnTable[i].MinisterThinking.ThinkingBegin = true;
		                                                 MinisterOnTable[i].MinisterThinking.ThinkingFinished = false;
		                                                 MinisterOnTable[i].MinisterThinking.Kind = 5;
		                                                 MinisterOnTable[i].MinisterThinking.Thinking(iAStarGreedy, *this, ref CastlesOnTable[i].LoseOcuuredatChiled, ref CastlesOnTable[i].WinOcuuredatChiled);
		                                             }
		                                         }
		                                     }
		                                 }
		                             }
		                         }
		                     }
		                 }//,
		                 // () =>
		                 {
		                     Object oooo = new Object();
		                     ////lock (oooo)
		                     {
		                         if (KingMidle <= i && KingHigh > i)
		                         {
		                             Object O = new Object();
		                             ////lock (O)
		                             {
		                                 Order = DummyOrder;
		                                 ChessRules.CurrentOrder = DummyCurrentOrder;
		                                 //If There is Not Current Object Continue Traversal Back.
		                                 if (KingOnTable != null && KingOnTable[i] != null)
		                                 {
		                                     //Initiate Local varibale By Global Objective Varibales.
		                                     int ik = (int)(int)KingOnTable[i].Row;
		                                     int jk = (int)KingOnTable[i].Column;
		                                     //Construction of WHITE King Thinking Objects.
		                                     //When There is Not Thinking Table WHITE King Movments.
		                                     if (KingOnTable[i].KingThinking.TableListKing.Count == 0)
		                                     {
		                                         //For All Possible WHITE King Movments.
		                                         for (int  j = 0; j < AllDraw.KingMovments; j++)
		                                         {
		                                             //Thinking Of WHITE King Operatins.
		                                             Object OOO = new Object();
		                                             ////lock (OOO)
		                                             {
		                                                 KingOnTable[i].KingThinking.ThinkingBegin = true;
		                                                 KingOnTable[i].KingThinking.ThinkingFinished = false;
		                                                 KingOnTable[i].KingThinking.Kind = 6;
		                                                 KingOnTable[i].KingThinking.Thinking(iAStarGreedy, *this, ref CastlesOnTable[i].LoseOcuuredatChiled, ref CastlesOnTable[i].WinOcuuredatChiled);
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

		         return *this;
		     }
		   */  //return index of table state index at list
		int FoundTableIndex(std::vector<int**> &T, int **TA);
		//when tatow table is not equal
		bool TableEqual(int **t1, int **t2);
		bool ServeBoundryConditions(int i, int Kind, int Order);
		bool ServeBoundryConditionsSoldier(int i, int Kind, int Order);
		bool ServeBoundryConditionsElephant(int i, int Kind, int Order);
		bool ServeBoundryConditionsHourse(int i, int Kind, int Order);
		bool ServeBoundryConditionsCastle(int i, int Kind, int Order);
		bool ServeBoundryConditionsMinister(int i, int Kind, int Order);
		bool ServeBoundryConditionsKing(int i, int Kind, int Order);
		//support of objects by self object regard by values named served
		void Serve(int Order);
		//served mechaisam core
		void ServeISSup(int Order, int Kind, int ii);
		void ThinkingAllowedSemaphore(int i);
		//main initiation of soldier WHITE
		AllDraw InitiateAStarGreedytSodlerWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		bool InitiateAStarGreedyt(int i, int Kind, int Order);
		bool InitiateAStarGreedytSoldier(int i, int Kind, int Order);
		bool InitiateAStarGreedytElephant(int i, int Kind, int Order);
		bool InitiateAStarGreedytHourse(int i, int Kind, int Order);
		bool InitiateAStarGreedytCastle(int i, int Kind, int Order);
		bool InitiateAStarGreedytMinidter(int i, int Kind, int Order);
		bool InitiateAStarGreedytKing(int i, int Kind, int Order);
		AllDraw InitiateAStarGreedytSodler(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of elephant WHITE
		AllDraw InitiateAStarGreedytElephantWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		AllDraw InitiateAStarGreedytElephant(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of hourse WHITE
		AllDraw InitiateAStarGreedythHourseWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		AllDraw InitiateAStarGreedythHourse(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of Castle WHITE
		AllDraw InitiateAStarGreedythCastleWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		AllDraw InitiateAStarGreedythCastle(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of minister WHITE
		AllDraw InitiateAStarGreedythMinisterWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		AllDraw InitiateAStarGreedythMinister(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of king WHITE
		AllDraw InitiateAStarGreedythKingWHITE(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		AllDraw InitiateAStarGreedythKing(int i, int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of soldier BLACK 
		AllDraw InitiateAStarGreedythSoldierBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of elephant BLACK
		AllDraw InitiateAStarGreedythElephantBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of hourse BLACK
		AllDraw InitiateAStarGreedythHourseBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of Castle BLACK
		AllDraw InitiateAStarGreedythCastleBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiatiob of minister BLACK
		AllDraw InitiateAStarGreedythMinisterBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//main initiation of king BLACK
		AllDraw InitiateAStarGreedythKingBLACK(int iii, int jjj, int** Table, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//boundry condition determistic method for break
		bool FullBoundryConditionsSoldierIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsElephantIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsHourseIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsCastleIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsMinisterIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsKingIgnore(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsSoldier(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsElephant(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsHourse(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsCastle(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsMinister(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsKing(int ikk, int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditions(int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsBLACK(int Current, int Order, int iAStarGreedy);
		//boundry condition determistic method for break
		bool FullBoundryConditionsWHITE(int Current, int Order, int iAStarGreedy);
		//AStarGreedy First Initiat Thinking Main Method.
		void AstarGreedyThinking(int Order, int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int i, int j, int ii, int jj, int** Table, int a, bool TB, bool FOUND, int LeafAStarGreedy);
		//initiation setdrawfounding tow stage computational method 
	public:
		bool InitiateAStarGreedytCreationThinking(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		bool InitiateAStarGreedytCreationThinkingWHITE(int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int i, int j, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		bool InitiateAStarGreedytCreationThinkingBLACK(int DummyOrder, int DummyCurrentOrder, int iAStarGreedy, int ii, int jj, int i, int j, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less

		//computational initiation
		AllDraw InitiateAStarGreedyt(int iAStarGreedy, int ii, int jj, int a, int** Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy); //, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		//computational second object
		/*     public AllDraw InitiateAStarGreedytObject(int iAStarGreedy, int ii, int jj, int a, int[,] Tab, int Order, bool TB, bool FOUND, int LeafAStarGreedy//, ref Refrigtz.Timer timer, ref Refrigtz.Timer Timerint, ref int Less
		         )
		     {

		         bool Do = false;
		         {
		             OrderP = Order;
		             SetObjectNumbers(Tab);
		             int[,] Table = new int[8, 8];
		             for (int  iii = 0; iii < 8; iii++)
		                 for (int  jjj = 0; jjj < 8; jjj++)
		                     Table[iii, jjj] = Tab[iii, jjj];
		             Object oo = new Object();
		             ////lock (oo)
		             {
		                 ThinkingHybridizerRefrigitz.BeginThread = 0;
		                 ThinkingHybridizerRefrigitz.EndThread = 0;
		             }
		             //Initiate of global Variables Byte Local Variables.
		             int DummyOrder = new int();
		             DummyOrder = Order;
		             int DummyCurrentOrder = new int();
		             DummyCurrentOrder = ChessRules.CurrentOrder;
		             List<Task> ThB = new List<Task>();
		             int i = 0, ik = 0;
		             int[,] TablInit = new int[8, 8];
		             if (Order == 1)
		                 a = int.WHITE;
		             else
		                 a = int.BLACK;
		             int  j = 0;
		             //if (iAStarGreedy>=0)

		             Object OOOO = new Object();
		             ////lock (OOOO)
		             {
		                 //if (iAStarGreedy < 0)
		                 {
		                     //when search finished stop and return
		                     if (FullBoundryConditions(CurrentAStarGredyMax, Order, iAStarGreedy))
		                         return null;

		                 }
		             }
		             CurrentAStarGredyMax = AStarGreedyiLevelMax - iAStarGreedy;

		             if (iAStarGreedy >= 0 && iAStarGreedy < MaxDuringLevelThinkingCreation)
		             {
		                 MaxDuringLevelThinkingCreation = iAStarGreedy;
		                 Object O = new Object();
		                 DepthIterative++;
		                 ////lock (O)
		                 {

		                 }

		             }


		             if (!FOUND)
		             {
		                 Object o = new Object();
		                 ////lock (o)
		                 {
		                     if (Order == 1)
		                         this.InitiateAStarGreedytObjectWHITE(i, j, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);
		                     else
		                         this.InitiateAStarGreedytObjectBLACK(i, j, CloneATable(Table), DummyOrder, DummyCurrentOrder, iAStarGreedy, ii, jj, a, CloneATable(Tab), Order, TB, FOUND, LeafAStarGreedy);
		                 }
		             }
		             if (FOUND)
		             {
		                 Object O = new Object();
		                 ////lock (O)
		                 {
		                     Tabl = CloneATable(Table);
		                     FoundOfLeafDepenOfKindFullGame(Tabl, Order, iAStarGreedy - 1, ii, jj, ik, j, FOUND, LeafAStarGreedy);
		                 }
		             }
		             else
		             {
		                 Object O = new Object();
		                 ////lock (O)
		                 {
		                     Order = DummyOrder;
		                     ChessRules.CurrentOrder = DummyCurrentOrder;
		                     int Ord = Order, iAStarGreedy1 = iAStarGreedy - 1, ii1 = ii, jj1 = jj, ik1 = ik, j1 = j;

		                     //Parallel.Invoke(() =>
		                     {
		                         Do |= this.FullGameThinkingTree(Ord, iAStarGreedy1, ii1, jj1, ik1, j1, false, LeafAStarGreedy);
		                     }
		                 }
		             }
		             Object Om = new Object();
		             ////lock (Om)
		             {
		                 if (!Do)
		                     if (iAStarGreedy < MinThinkingTreeDepth)
		                         MinThinkingTreeDepth = iAStarGreedy;
		             }

		             return *this;
		         }
		     }
	   */	  //determistic of checked blitz game
	private:
		bool KingDan(int** Tab, int Order);
		//always by calling empty deeper
		void ClearAStarGreadyWhenListsAreEmpy(int Kind, int i);
		//deterministic of calculated computational deeper
		bool IsThereCalculatedAStarGreedyNode();
		//when there is index notified deeper computational node
		bool IsThereCalculatedAStarGreedyNode(int i, int Kind);
		//when there is all deeper computational nodes return true else return false
		bool IsThereNotAllOfEmptyOrNonCalculatedAStarGreedyNode(int Order, int Kind, int i);
		//when there is at least one non compuational deeper determined NON existence of deeper computational indexed deeper node 
		bool IsThereEmptyOrNonCalculatedAStarGreedyNode(int Order, int Kind, int i, int j);
		bool BlitzGameThinkingTreeBoundryConditions(int ik, int Kind);

		bool UsedRestrictedBlitzMoveAstarGreedy(int Kind, int ik, int j);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeSolderWHITE(int &PreviousLessS, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeElephantWHITE(int &PreviousLessE, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeHourseWHITE(int &PreviousLessH, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeCastleWHITE(int &PreviousLessB, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeMinisterWHITE(int &PreviousLessM, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeKingWHITE(int &PreviousLessK, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeSolder(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeElephant(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeHourse(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeCastle(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeMinister(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameTreeCreationThinkingTreeKing(int a, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeSolderBLACK(int &PreviousLessS, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeElephantBLACK(int &PreviousLessE, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeHourseBLACK(int &PreviousLessH, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		bool AllIndexIsNull(int iIndex[]);
		//main blitz for determination about best movment of every objects
	public:
		int FullGameMakimgBlitz(int Index[], int jIndex[], int Order, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
	private:
		void BlitzGameThinkingTreeCastleBLACK(int &PreviousLessB, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeMinisterBLACK(int &PreviousLessM, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//blitz for determination about best movment of every objects
		void BlitzGameThinkingTreeKingBLACK(int &PreviousLessK, int Index[], int jIndex[], int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		void BlitzGameThinkingTree(int Order, int iAStarGreedy, int ik, int j, bool FOUND, int LeafAStarGreedy);
		//calculate statistic move
		std::wstring Alphabet(int RowRealesed);
		//calculate statistic move
		std::wstring Number(int ColumnRealeased);
		//number of bounry object
		int SumOfObjects(AllDraw A, int Order);
		bool IsAtleastAWin(AllDraw A, int Order);
		//victome transfer leafs to rooots chiled
		int SumMinusOfObjects(AllDraw A, int Order);
		//Semaphore determination about Thinking operational completed.
		bool ReturnFullGameThinkingTreeSemaphore(int ik, int kind);
		//determination about learning autamata semaphores permit of operational computational 
		bool ReturnConsiderationOfPermitForValidationOfLearningInFullGameThinkingTree(int ik, int kind, bool Penalty, int j);
		//determiniation about deeper increamental of a part
		void BlitzNotValidFullGameThinkingTreePartOne(int ik, int Order, int kind);
		//determiniation about deeper increamental of a part
		void BlitzNotValidFullGameThinkingTreePartTow(int ik, int Order, int kind);
		//determiniation about deeper increamental of a part
		void BlitzNotValidFullGameThinkingTreePartThree(int ik, int Order, int kind);
		//operantinal of creation of current deeper node and set string making
		void FullGameThinkingTreeInitialization(int ik, int j, int Order, int kind);
		//main operation of full game deeper created compuational to deeper need.
		void OpOfFullGameThinkingTree(int ik, int j, int Order, int iAStarGreedy, int ii, int jj, int a, int kind, bool FOUND, int LeafAStarGreedy);
		bool ReturnFullGameThinkingTreeIligalSemaphore(int ik, int kind);
		//decicion for deeper satisfied boundry condition of full game methods group
		void ReturnFullGameThinkingTreeSemaphoreAs(int Order, int iAStarGreedy, int ik, int Kind);
	public:
		int FullGameThinkingTreeWin(int Order);
		int FullGameThinkingTreeLose(int Order);
		//deeper for soldier
	private:
		bool FullGameThinkingTreeSoldier(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeSoldierWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		bool FullGameThinkingTreeElephant(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeElephantWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		bool FullGameThinkingTreeHourse(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeHourseWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		bool FullGameThinkingTreeCastle(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeCastleWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		bool FullGameThinkingTreeMinister(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeMinisterWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		bool FullGameThinkingTreeKing(int ik, int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeKingWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeSoldierBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeElephantBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeHourseBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeCastleBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeMinisterBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//collection objects calling full game specific game 
		bool FullGameThinkingTreeKingBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
	public:
		bool FullGameThinkingTreeWHITE(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//full game main method for deeper decicion and making
		bool FullGameThinkingTreeBLACK(int a, int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);

		//full game main method for deeper decicion and making
		bool FullGameThinkingTree(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//full game decicion making second method
	private:
		bool FullGameThinkingTreeObject(int Order, int iAStarGreedy, int ii, int jj, int ik1, int j1, bool FOUND, int LeafAStarGreedy);
		//clone a table
	public:
		int **CloneATable(int** Tab);
		//return maximum of six type values 
	private:
		int MaxOfSixHeuristic(int _1, int _2, int _3, int _4, int _5, int _6);
		//return minimum pf six type values
		int MinOfSixHeuristic(int _1, int _2, int _3, int _4, int _5, int _6);
		//best movement indexes founder method.
		std::vector<std::vector<int>> FoundOfBestMovments(int AStarGreedy, std::vector<int> &i, std::vector<int> &j, std::vector<int> &k, AllDraw Dummy, int a, int Order);
		//Copying of Items of Enemy Non Move and Current Moved.
	public:
		AllDraw CopyRemeiningItems(AllDraw ADummy, int Order);
		//determiniation and detection of zeros
		bool TableZero(int **Tab);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
	private:
		void CheckedMateConfiguratiionSoldier(int Order, int i, bool Regrad);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
		void CheckedMateConfiguratiionElephant(int Order, int i, bool Regrad);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
		void CheckedMateConfiguratiionHourse(int Order, int i, bool Regrad);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
		void CheckedMateConfiguratiionCastle(int Order, int i, bool Regrad);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
		void CheckedMateConfiguratiionMinister(int Order, int i, bool Regrad);
		//operantional for victom learning autamata penalty make performing pbetter Heuristic values of current specific object
		void CheckedMateConfiguratiionking(int Order, int i, bool Regrad);
		//specific learning autamata network oparational
		void CheckedMateConfiguratiion(int Order);
		//monitor
		void SemaphoreExxedTime(int time, int Kind);
		int UniqueCapableMoveIsTruSup(int Kind, int Order, int ii, int jj);
		bool IgnoreOfLoseForKingReducedAttackDisturbingDouble(int Kind, int Order, int i, int j);

		//Main Initiate Thinking Method.
	public:
		int **Initiate(int ii, int jj, int a, int** Table, int Order, bool TB, bool FOUND, int LeafAStarGreedy, bool SetDept = false);
		//Identification of Illegal AStarGreedy First and Common Hurist Movments.
		bool IsEnemyThingsinStable(int **TableHeuristic, int **TableAction, int Order);
		//web translator monitor strings
	private:
		std::vector<int*> WhereNumbers(const std::wstring &Tag);
		std::wstring CreateHtmlTag(const std::wstring &Tag);
		//recursive base 'pre-proccessing" writing
	/*public:
		void RewriteAllDrawRec(BinaryFormatter *Formatters, FileStream *DummyFileStream, int Order);
		//loads recursive depend of orderic of writing "pre-proccessing" 
		AllDraw LoaderEC(bool Quantum, int Order, FileStream *DummyFileStream, BinaryFormatter *Formatters);*/
	private:
		bool UpdateLoseAndWinDepenOfKindBoundryCondition(int kind, int i, int j);
	public:
		void UpdateLoseAndWinDepenOfKindSoldier(int i, int Order);
		void UpdateLoseAndWinDepenOfKindElephant(int i, int Order);
		void UpdateLoseAndWinDepenOfKindHourse(int i, int Order);
		void UpdateLoseAndWinDepenOfKindCastle(int i, int Order);
		void UpdateLoseAndWinDepenOfKindMinister(int i, int Order);
		void UpdateLoseAndWinDepenOfKindKing(int i, int Order);
		//found of leadfs of created tree depend of orderic 
		void UpdateLoseAndWinDepenOfKind(int Order);
	private:
		bool IsMovableLoseOcuuredatChiled(int** Tab, int Kind, int Order, int i);
		//return color depend of order
		int OrderColor(int Ord);
		///Move Determination.
	public:
		bool Movable(int** Tab, int i, int j, int ii, int jj, int a, int Order);

	private:
		void InitializeInstanceFields();
	};

//End of Documentation.
