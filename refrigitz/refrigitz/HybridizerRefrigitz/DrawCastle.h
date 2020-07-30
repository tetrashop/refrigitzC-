#pragma once
#include "stdafx.h"

#include <string>
#include <vector>
#include <stdexcept>

#include "ThinkingHybridizerRefrigitz.h"
#include "AllDraw.h"

//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class DrawCastle
	class DrawCastle
	{


	private:
		//std::string *Space;
//#pragma warning disable CS0414 // The field 'DrawCastle.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'DrawCastle.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'DrawCastle.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'DrawCastle.Spaces' is assigned but its value is never used



	public:
		int WinOcuuredatChiled;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[] LoseOcuuredatChiled = { 0, 0, 0 };
		int *LoseOcuuredatChiled;



		//Iniatite Global Variable.
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
		static long long MaxHeuristicxB;
		float Row, Column;
		int color;
		ThinkingHybridizerRefrigitz  CastleThinking;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] Table = nullptr;
		int **Table;
		int Current;
		int Order;
	private:
		int CurrentAStarGredyMax;

		static void Log(std::exception &ex);
	public:
		~DrawCastle();
		DrawCastle();
		bool MaxFound(bool &MaxNotFound);
		int ReturnHeuristic();


		//Constructor 1.

		//constructor 2.
		DrawCastle(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur); //, ref AllDraw. THIS
	private:
		int **CloneATable(int** Tab);
		bool **CloneATableb(bool ** Tab);
		//Clone a Copy.
	public:
		void Clone(DrawCastle *&AA); //, ref AllDraw. THIS
		//Draw An Instatnt Brideges Images On the Table Method.
		void DrawCastleOnTable(int CellW, int CellH);

	private:
		void InitializeInstanceFields();
	};

//End of Documents.
