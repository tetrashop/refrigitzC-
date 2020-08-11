#pragma once
#include "stdafx.h"

#include <string>
#include <vector>
#include <stdexcept>
#include "ThinkingHybridizerRefrigitz.h"

//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class DrawSoldier : ThingsConverter
	class DrawSoldier : public ThingsConverter
	{

	private:
		//std::string *Space;
//#pragma warning disable CS0414 // The field 'DrawSoldier.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'DrawSoldier.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'DrawSoldier.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'DrawSoldier.Spaces' is assigned but its value is never used


	public:
	int WinOcuuredatChiled;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[] LoseOcuuredatChiled = { 0, 0, 0 };
		int *LoseOcuuredatChiled;
		//Iniatate Global Variables.


	private:
		std::vector<int*> ValuableSelfSupported;







	public:
		bool MovementsAStarGreedyHeuristicFoundT;
		bool IgnoreSelfObjectsT;
		bool UsePenaltyRegardMechnisamT;
		bool BestMovmentsT;
		bool PredictHeuristicT;
		bool OnlySelfT;
		bool AStarGreedyHeuristicT;
		bool ArrangmentsChanged;
		static int MaxHeuristicxS;
		float Row, Column;
		int color;
		ThinkingHybridizerRefrigitz  SoldierThinking;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] Table = nullptr;
		int **Table;
		int Order;
		int Current;
	private:
		int CurrentAStarGredyMax;
		static void Log(std::exception &ex);

	public:
		~DrawSoldier();
		DrawSoldier();
		bool MaxFound(bool &MaxNotFound);
		int ReturnHeuristic();
		//clone a table
	private:
		int **CloneATable(int** Tab);

		//Constructor 1.

		//Constructor 2.
	public:
		DrawSoldier(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur); //, ref AllDraw. THIS

		//Clone a Copy Method.
		void Clone(DrawSoldier *&AA); //, ref AllDraw. THIS

	private:
		bool **CloneATableb(bool ** Tab);
		//Drawing Soldiers On the Table Method..
	public:
		void DrawSoldierOnTable(int CellW, int CellH);

	private:
		void InitializeInstanceFields();
	};

//End of Documentation.
