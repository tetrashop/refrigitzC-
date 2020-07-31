#pragma once

#include "AllDraw.h"
#include <string>
#include <vector>



	class IsNextEnemyMovementForCheckedMate : public AllDraw
	{

	private:
		StringBuilder *Space;
//#pragma warning disable CS0414 // The field 'IsNextEnemyMovementForCheckedMate.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'IsNextEnemyMovementForCheckedMate.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'IsNextEnemyMovementForCheckedMate.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'IsNextEnemyMovementForCheckedMate.Spaces' is assigned but its value is never used

		int TableIsNextEnemyMovementForCheckedMate[8][8];
	public:
		IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, int ** Tab);
		IsNextEnemyMovementForCheckedMate(int Order, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, AllDraw *Thi, int ** Tab);
		bool Is();

	private:
		void InitializeInstanceFields();
	};

