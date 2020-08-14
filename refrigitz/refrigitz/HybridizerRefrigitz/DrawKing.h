#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include <stdexcept>

#include "ThinkingHybridizerRefrigitz.h"

//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class DrawKing
	class DrawKing
	{

	

	public:
		static bool KingWHITENotCheckedByQuantumMove;
		static bool KingBLACKNotCheckedByQuantumMove;

		int WinOcuuredatChiled;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int* LoseOcuuredatChiled = { 0, 0, 0 };
		int *LoseOcuuredatChiled;



		//Initiate Global Variables.
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
		static long long MaxHeuristicxK;
		float Row, Column;
		int color;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] Table = nullptr;
		int **Table;
		ThinkingHybridizerRefrigitz  *KingThinking;
		int Current;
		int Order;
	private:
		int CurrentAStarGredyMax;

		static void Log(std::exception &ex);
	public:
		~DrawKing();

		DrawKing();

		int ReturnHeuristic();
		bool MaxFound(bool &MaxNotFound);
		//Constructor 1.

		//Constructor 2.
		DrawKing(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur); //, ref AllDraw. THIS
	private:
		int **CloneATable(int** Tab);
		bool **CloneATableb(bool ** Tab);

		//Clone a Copy.
	public:
		void Clone(DrawKing *&AA); //, ref AllDraw. THIS
		//Draw an Instatnt King on the Table Method.
		void DrawKingOnTable(int CellW, int CellH);
		DrawKing& operator=(DrawKing arg) noexcept // copy/move constructor is called to construct arg
		{
			return arg;
		}
	private:
		void InitializeInstanceFields();
	};

//End of Documentation.
