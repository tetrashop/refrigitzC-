#pragma once

#include "AllDraw.h"
#include <string>
#include <vector>



	class IsNextEnemyMovementForCheckedMate : public AllDraw
	{

	private:
		int **TableIsNextEnemyMovementForCheckedMate;
	public:
		IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int **Tab);
		IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, AllDraw THi, int **Tab);
		bool Is();

	private:
		void InitializeInstanceFields();
	};

