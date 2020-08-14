#pragma once

#include <string>
#include <vector>
#include <stdexcept>


//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class ChessGeneticAlgorithm
	class ChessGeneticAlgorithm
	{
		//
	public:
		bool Hit;

	private:
		static const int PlusOne = 1;
		static const int MinusOne = -1;

		static const int ConversionDistantRowBelow = 6;
		static const int ConversionDistantRowUp = 1;

		static const int DistantColumnSmall = 6;
		static const int DistantColumnBig = 3;
		static const int DistantRowBelow = 7;
		static const int DistantRowUp = 0;

		static const int SmallCastleKingColumnBefore = 4;
		static const int SmallCastleKingColumnAfter = 6;
		static const int SmallCastleCastleColumnBefore = 7;
		static const int SmallCastleCastleColumnAfter = 5;

		static const int BigCastleKingColumnBefore = 4;
		static const int BigCastleKingColumnAfter = 2;
		static const int BigCastleCastleColumnBefore = 0;
		static const int BigCastleCastleColumnAfter = 3;

		static const int TowObjectDistanceInBigCastleBefor = 4;
		static const int TowObjectDistanceInBigCastleAfter = 1;
		static const int TowObjectDistanceInSamllCastleBefor = 2;
		static const int TowObjectDistanceInSmallCastleAfter = 1;
		static const int CastleGray = 4;
		static const int CastleBrown = -4;
		static const int KingGray = 6;
		static const int KingBrown = -6;
		//Initiate Global Variables.
	public:
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
		bool CastlesKing;
		static bool NoGameFounf;
	private:
		std::vector<int*> RowColumn;
		int Ki;
	public:
		int CromosomRow, CromosomColumn, CromosomRowHit, CromosomColumnHit;
		int CromosomRowFirst, CromosomColumnFirst;
	private:
		int Gen1, Gen2;
		int GeneticTable[8][8];
		static void Log(std::exception &ex);
		//Constructor.
	public:
		ChessGeneticAlgorithm(bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments);
		bool FindHitToModified(int **Cromosom1, int **Cromosom2, std::vector<int**> &List, int Index, int Order, bool and);
		//Found of Different Home Gen in Tow RefrigtzChessPortable Home Table Method. 
		bool FindGenToModified(int **Cromosom1, int **Cromosom2, std::vector<int**> &List, int Index, int Order, bool and);
	private:
		bool HitSet(int Order, int **Cromosom1, int **Cromosom2);
		int **CloneATable(int **Tab);
		bool **CloneATable(bool **Tab);
		//Table Foundation of Genetic Alogorithm Method.
	
	private:
		void InitializeInstanceFields();
	};


//End of Documentation.
