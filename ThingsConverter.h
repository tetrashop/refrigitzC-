#pragma once
#include "stdafx.h"




//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class ThingsConverter
	class ThingsConverter
	{

	private:
		//std::string *Space;
//#pragma warning disable CS0414 // The field 'ThingsConverter.Spaces' is assigned but its value is never used
#pragma warning disable CS0414 // The field 'ThingsConverter.Spaces' is assigned but its value is never used
		int Spaces;
#pragma warning restore CS0414 // The field 'ThingsConverter.Spaces' is assigned but its value is never used
//#pragma warning restore CS0414 // The field 'ThingsConverter.Spaces' is assigned but its value is never used

		//Initiate Global Variables.
	public:
		static bool LoadConvertTable;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public static int[,] TableConverted = nullptr;
		static int **TableConverted;
	private:
		bool ArrangmentsChanged;
	public:
		static bool ClickOcurred;
		static bool ActOfClickEqualTow;
		bool Convert;
		bool ConvertedToMinister;
		bool ConvertedToCastle;
		bool ConvertedToElefant;
		bool ConvertedToHourse;
		int Max;
		int RowS, ColumnS;
	private:
		int color;
		int Order;
		int Current;
		int RowSource;
		int columnSource;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: private int[,] tableS;
		int **tableS;
		int v;

		//AllDraw. THIS;
	public:
		ThingsConverter();
		//Constructor
		ThingsConverter(bool Arrangments, int i, int j, int a, int** Tab, int Ord, bool TB, int Cur); //,ref AllDraw. THI
		//return maximum of six type values 
		//clone a table
	private:
		int **CloneATable(int** Tab);

	public:
		ThingsConverter(bool arrangmentsChanged, int RowSource, int columnSource, int color, int** TableS, int order, int v);

		//Convert Operation of Randomly All State Method.
		bool ConvertOperation(int i, int j, int a, int** Tab, int Ord, bool TB, int Cur);

	private:
		void InitializeInstanceFields();
	};

//End of Documeatation.
