#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>




//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class ChessRules
	class ChessRules
	{

	private:
		//std::string *Space;
//#pragma warning disable CS0414 // The field 'ChessRules.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'ChessRules.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'ChessRules.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'ChessRules.Spaces' is assigned but its value is never used

	public:
		bool IgnoreSelfObject;
		static int ObjectHittedRow;
		static bool SelfHomeStatCP;
		static int ObjectHittedColumn;
		//Inititae Global Variables.
		bool MovementsAStarGreedyHeuristicFoundT;
		bool IgnoreSelfObjectsT;
		bool UsePenaltyRegardMechnisamT;
		bool BestMovmentsT;
		bool PredictHeuristicT;
		bool OnlySelfT;
		bool AStarGreedyHeuristicT;
	private:
		static int NumbersofKingMovesToPatWHITE;
		static int NumbersofKingMovesToPatBLACK;
	public:
		static bool PatCheckedInKingRule;
		static bool CastleKingAllowedWHITE;
		static bool CastleKingAllowedBLACK;
		static bool KingAttacker;
		static bool SmallKingCastleBLACK;
		static bool KingCastleBLACK;
		static bool SmallKingCastleWHITE;
		static bool KingCastleWHITE;
		static bool BigKingCastleBLACK;
		static bool BigKingCastleWHITE;
		static bool CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporter;
		static int CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKingHaveSupporterNumber;
		static bool CheckObjectDangourIgnoreSelfThingBetweenTowEnemyKing;
		bool CheckWHITEObjectDangour;
		bool CheckBLACKObjectDangour;
		static bool CheckWHITEObjectDangourFirstTimesOcured;
		static bool CheckBLACKObjectDangourFirstTimesOcured;
		static bool CastleActWHITE;
		static bool CastleActBLACK;
		static int CurrentOrder;
		bool PatkWHITE;
		bool PatBLACK;
		bool CheckWHITE;
		bool CheckBLACK;
		bool CheckMateWHITE;
		bool CheckMateBLACK;
		static bool CheckWHITERemovable;
		static bool CheckBLACKRemovable;
		static int CheckWHITERemovableValueRowi;
		static int CheckWHITERemovableValueColumni;
		static int CheckWHITERemovableValueRowii;
		static int CheckWHITERemovableValueColumnjj;
		static int CheckBLACKRemovableValueRowi;
		static int CheckBLACKRemovableValueColumnj;
		static int CheckBLACKRemovableValueRowii;
		static int CheckBLACKRemovableValueColumnjj;
	private:
		int Kind;
		int KindNA;
		int Row, Column;
		int **TableS;
		int Order;
		//public bool ExistInDestinationEnemy = false;
		bool ArrangmentsBoard;
		int CurrentAStarGredyMax;
		static void Log(std::exception &ex);
	public:
		ChessRules(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged, int oRDER);
		ChessRules(int CurrentAStarGredy, int oRDER, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged);
		//Constructor 
		ChessRules(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool ArrangmentsChanged, int Ki, int **A, int Ord, int i, int j);
		//Initiate of Rules of HybridizerRefrigitz Refregitz.
		bool Rules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, int color, int Ki, bool SelfHomeStatCP);
		//Castle King Movment Consideration.
		bool CastleKing(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, int Ki);
		//Simulation and Consdtruction of Check.
		bool CheckConstructor(int color, int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, int Ki, int Order);
		//Method of Self Home int Objects Consideration.
	private:
		bool ExistSelfHome(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, int Ki);

		//Object Danger Consideration
	public:
		bool ObjectDangourKingMove(int Order, int** Table, bool DoIgnore);
		bool ObjectDangourKingMove(int Order, int** Table);
	private:
		bool AchmazCheckByMoveByRule(int** Tabl, int RowF, int ColumnF, int Row, int ColumnS, int Order);
	public:
		bool ObjectDangourKingMove(int Order, int** Table, bool DoIgnore, int ii, int jj);
		//WHITE King Founder.
		bool FindWHITEKing(int** Table, int &Row, int &Column);
		//Alpahber Object Consideration.
	private:
		static std::wstring ThingsAlphabet(int i);
		//[So2]. Alphabet Consideration.
		static std::wstring RowAlphabet(int i);
		//Create Syntax of Movments.
	public:
		std::wstring CreateStatistic(bool Arrange, int** Tab, int Movments, int SourceThings, int Column, int Row, bool Hit, int HitThings, bool CastleKing, bool SodierConvert);
		//Consideration of Existing Table in List.
	private:
		bool ArrayInList(std::vector<int*>& List, int * A);
		//Find a Specific Objects.
	public:
		bool FindAThing(int** Table, int &Row, int &Column, int Thing, bool BeMovable, std::vector<int*> &List);
		//BLACK King Found  Consideration.
		bool FindBLACKKing(int** Table, int &Row, int &Column);
		//A Constraint Check Removed Unused Method.
		bool CheckRemovableByAttack(int** Table, int Order);
	private:
		bool **VeryFye(int** Table, int Order, int a, int ii, int jj);
	public:
		bool OnlyKingMovable(int ** Tab, bool ** TabB, int Order);
	private:
		int **CloneATable(int** Tab);
		bool **CloneATableB(bool** Tab);

	public:
		bool Pat(int** Tab, int Order, int a);
	private:
		void CheckKing(int** Table, int Order, int RowK, int ColumnK);
		//Check Consideration Method.
	public:
		bool Check(int** Table, int Ord);
	private:
		void CheckMateKing(int** Tab, int Ord, bool CheckWHITEDummy, bool CheckBLACKDummy, int RowK, int ColumnK, bool &ActMove, bool Checked);
		void CheckMateNotKing(int** Tab, int Ord, bool CheckWHITEDummy, bool CheckBLACKDummy, bool &ActMove);
		//CheckMate Consideration.QC-OK
	public:
		bool CheckMate(int** Tab, int Ord);
		//Internal Rule of HybridizerRefrigitz Method.
	private:
		bool Rule(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki, bool SelfHomeStatCP);
		//King Rule Method.
	public:
		bool KingRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki);
		//Rules of Minister Method.
		bool MinisterRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki);
		//Castles Rule Method.
		bool CastleRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki);
		//Elephant Rule Method.
		bool ElefantRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy, int Ki);
		//Hource Rule Method.
		bool HourseRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy);
		bool SoldierRulesaArrangmentsBoardOne(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy);
		bool SoldierRulesaArrangmentsBoardZero(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy);
		//Solder Rule Method.
		bool SoldierRules(int RowFirst, int ColumnFirst, int RowSecond, int ColumnSecond, bool NotMoved, int color, bool ExistInDestinationEnemy);

	private:
		void InitializeInstanceFields();
	};


//End of Documentation.
