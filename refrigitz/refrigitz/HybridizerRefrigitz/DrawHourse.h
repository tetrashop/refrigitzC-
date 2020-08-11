#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include <stdexcept>

#include "ThinkingHybridizerRefrigitz.h"


//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class DrawHourse
	class DrawHourse
	{


	private:
		//std::string *Space;
//#pragma warning disable CS0414 // The field 'DrawHourse.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'DrawHourse.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'DrawHourse.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'DrawHourse.Spaces' is assigned but its value is never used


	public:
		int WinOcuuredatChiled;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[] LoseOcuuredatChiled = { 0, 0, 0 };
		int *LoseOcuuredatChiled;



		//Iniatite Global Variables.
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
		static long long MaxHeuristicxH;
		float Row, Column;
		int color;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public int[,] Table = nullptr;
		int **Table;
		ThinkingHybridizerRefrigitz  HourseThinking;
		int Current;
		int Order;
	private:
		int CurrentAStarGredyMax;

		static void Log(std::exception &ex);
	public:
		~DrawHourse();
		DrawHourse();
		bool MaxFound(bool &MaxNotFound);
		int ReturnHeuristic();
		//Constructor 1.

		//Constructpor 2.
		DrawHourse(int CurrentAStarGredy, bool MovementsAStarGreedyHeuristicTFou, bool IgnoreSelfObject, bool UsePenaltyRegardMechnisa, bool BestMovment, bool PredictHurist, bool OnlySel, bool AStarGreedyHuris, bool Arrangments, float i, float j, int a, int** Tab, int Ord, bool TB, int Cur); //,ref AllDraw. THIS
	private:
		int **CloneATable(int** Tab);
		bool **CloneATableb(bool ** Tab);
		//Cloen a Copy.
	public:
		void Clone(DrawHourse *&AA); //, ref AllDraw. THIS
		//Draw a Instatnt Hourse on the Table Method.
		void DrawHourseOnTable(int CellW, int CellH);

	private:
		void InitializeInstanceFields();
	};

//End of Documentation.
