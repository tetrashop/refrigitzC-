#include "stdafx.h"
#include "ThingsConverter.h"
#include "AllDraw.h"


bool ThingsConverter::LoadConvertTable = false;
int **ThingsConverter::TableConverted = nullptr;
bool ThingsConverter::ClickOcurred = false;
bool ThingsConverter::ActOfClickEqualTow = false;

	ThingsConverter::ThingsConverter()
	{ //long Time = TimeElapced.TimeNow();Spaces++;
	}

	ThingsConverter::ThingsConverter(bool Arrangments, int i, int j, int a, int** Tab, int Ord, bool TB, int Cur)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		//Initite Global Variables with Local Parameter.
		//THIS = THI;
		InitializeInstanceFields();
		ArrangmentsChanged = Arrangments;
		 RowS = i;
		ColumnS = j;
		color = a;
		Order = Ord;
		Current = Cur;

		////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ThingsConverter:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
	}

	int **ThingsConverter::CloneATable(int** Tab)
	{
		int**Tabl; *Tabl = new int[8]; for (int b = 0; b < 8; b++)Tabl[b] = new int[8];
		for (int  i = 0; i < 8; i++)
		{
			for (int  j = 0; j < 8; j++)
			{
				Tabl[i][j] = Tab[i][j];
			}
		}
		return Tabl;
	}

	ThingsConverter::ThingsConverter(bool arrangmentsChanged, int RowSource, int columnSource, int color, int** TableS, int order, int v)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		InitializeInstanceFields();
		ArrangmentsChanged = arrangmentsChanged;
		this->RowSource = RowSource;
		this->columnSource = columnSource;
		this->color = color;
		this->tableS = CloneATable(tableS);
		Order = order;
		this->v = v;
		////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ThingsConverter:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
	}

	bool ThingsConverter::ConvertOperation(int i, int j, int a, int** Tab, int Ord, bool TB, int Cur)
	{
		//long Time = TimeElapced.TimeNow();Spaces++;
		////auto oOO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OOO)
		{
			//Initiate Global variables with Local One.
			 RowS = i;
			ColumnS = j;
			color = a;
			Order = Ord;
			Current = Cur;
			//If Convert is Act and click tow time occured
			if (!Convert && (ActOfClickEqualTow || AllDraw::StateCC || (!AllDraw::Person)))

			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					AllDraw::ConvertWait = true;
				}

				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					ClickOcurred = true;
				}
				//Set tow time click unclicked.
				////auto o2 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O2)
				{
					ActOfClickEqualTow = false;
				}
				if (!ArrangmentsChanged)
				{
					//Convert State Boolean Variable Consideration.
					if (Order == 1 && ColumnS == 7)
					{
						Convert = true;
					}
					if (Order == -1 && ColumnS == 0)
					{
						Convert = true;
					}
				}
				else
				{
					//Convert State Boolean Variable Consideration.
					if (Order == 1 && ColumnS == 0)
					{
						Convert = true;
					}
					if (Order == -1 && ColumnS == 7)
					{
						Convert = true;
					}
				}
				//If Converted is Occured the Operation od Set and table reference content occured.
				if (Convert)
				{
					bool ASS = false;
					////auto oOOAAA = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (OOOAAA)
					{
						ASS = AllDraw::Blitz;
					}
					if (!ASS)
					{
						AllDraw::ConvertedKind = -1;
						AllDraw::SodierConversionOcuured = true;
						//Randomly Number of 4 kind Object.
						int Rand = -1;
						if (AllDraw::StateCP && AllDraw::THISSecradioButtonWHITEOrderChecked) //AllDraw.Person &&
						{
							if (AllDraw::OrderPlateDraw == 1)
							{
								/* while (AllDraw.ConvertedKind == -1) { 
								 }
	
								 Rand = AllDraw.ConvertedKind;
	
								 AllDraw.ConvertedKind = -2;
	 */
								Rand = 5;
								ConvertedToMinister = true;
								AllDraw::ConvertedKind = -2;
							}
						}
						else
						{
							if (AllDraw::StateCP && AllDraw::THISSecradioButtonBLACKOrderChecked) //AllDraw.Person &&
							{
							if (AllDraw::OrderPlateDraw == -1)
							{
								//(new FormُSelectItems()).ShowDialog();
								/*  while (AllDraw.ConvertedKind == -1) {  
								  }
	
								  Rand = AllDraw.ConvertedKind;
	
								  AllDraw.ConvertedKind = -2;
							 */
								Rand = 5;
								ConvertedToMinister = true;
								AllDraw::ConvertedKind = -2;
							}
							}
						else
						{
							Rand = 5;
						}
						}
						//If Rand is Equaled the Operation will cuased automaticcally base on int..
						if (Rand == 0)
						{
							if (Order == 1)
							{
								// MinisterMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = 5;
							}
							else if (Order == -1)
							{
								//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = -5;
							}
							ConvertedToMinister = true;
						}
						else if (Rand == 1)
						{
							if (Order == 1)
							{
								//CastleMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = 4;
							}
							else if (Order == -1)
							{
								//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = -4;
							}
							ConvertedToCastle = true;
						}
						else if (Rand == 2)
						{
							if (Order == 1)
							{
								//HourseMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = 3;
							}
							else if (Order == -1)
							{
								//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = -3;

							}
							ConvertedToHourse = true;
						}
						else
						{
							if (Order == 1)
							{
								//ElefantMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = 2;
							}
							else if (Order == -1)
							{
								//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
								Tab[RowS][ColumnS] = -2;
							}
							ConvertedToElefant = true;
						}
					}
					else
					{
						if (AllDraw::OrderPlateDraw == 1)
						{
							AllDraw::ConvertedKind = -1;
							AllDraw::SodierConversionOcuured = true;
							//Randomly Number of 4 kind Object.
							int Rand = -1;
							if (AllDraw::StateCP && AllDraw::THISSecradioButtonWHITEOrderChecked) //AllDraw.Person &&
							{
								if (AllDraw::OrderPlateDraw == 1)
								{
									/* while (AllDraw.ConvertedKind == -1) {  
									 }
	
									 Rand = AllDraw.ConvertedKind;
	
									 AllDraw.ConvertedKind = -2;
								*/
									Rand = 5;
									ConvertedToMinister = true;
									AllDraw::ConvertedKind = -2;
								}
							}
							else
							{
								if (AllDraw::StateCP && AllDraw::THISSecradioButtonBLACKOrderChecked) //AllDraw.Person &&
								{
								if (AllDraw::OrderPlateDraw == -1)
								{
									/*  while (AllDraw.ConvertedKind == -1) {  
									  }
	
									  Rand = AllDraw.ConvertedKind;
	
									  AllDraw.ConvertedKind = -2;
								  */
									Rand = 5;
									ConvertedToMinister = true;
									AllDraw::ConvertedKind = -2;
								}
								}
							else
							{
									Rand = 5;
							}
							}
							//If Rand is Equaled the Operation will cuased automaticcally base on int..
							if (Rand == 0)
							{
								if (Order == 1)
								{
									//  MinisterMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 5;
								}
								else if (Order == -1)
								{
									//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -5;
								}
								ConvertedToMinister = true;
							}
							else if (Rand == 1)
							{
								if (Order == 1)
								{
									//CastleMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 4;
								}
								else if (Order == -1)
								{
									//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -4;
								}
								ConvertedToCastle = true;
							}
							else if (Rand == 2)
							{
								if (Order == 1)
								{
									//HourseMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 3;
								}
								else if (Order == -1)
								{
									//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -3;

								}
								ConvertedToHourse = true;
							}
							else
							{
								if (Order == 1)
								{
									//ElefantMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 2;
								}
								else if (Order == -1)
								{
									//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -2;
								}
								ConvertedToElefant = true;
							}
						}


						else
						{



							AllDraw::ConvertedKind = -1;
							AllDraw::SodierConversionOcuured = true;
							//Randomly Number of 4 kind Object.
							int Rand = -1;
							if (AllDraw::StateCP && AllDraw::THISSecradioButtonWHITEOrderChecked) //AllDraw.Person &&
							{
								if (AllDraw::OrderPlateDraw == 1)
								{
									/*  while (AllDraw.ConvertedKind == -1) { 
									  }
	
									  Rand = AllDraw.ConvertedKind;
	
									  AllDraw.ConvertedKind = -2;
								*/
									Rand = 5;
									ConvertedToMinister = true;
									AllDraw::ConvertedKind = -2;
								}
							}
							else
							{
								if (AllDraw::StateCP && AllDraw::THISSecradioButtonBLACKOrderChecked) //AllDraw.Person &&
								{
								if (AllDraw::OrderPlateDraw == -1)
								{
									/*   while (AllDraw.ConvertedKind == -1) { 
									   }
	
									   Rand = AllDraw.ConvertedKind;
	
									   AllDraw.ConvertedKind = -2;
								  */
									Rand = 5;
									ConvertedToMinister = true;
									AllDraw::ConvertedKind = -2;
								}
								}
							else
							{
									Rand = 5;
							}
							}
							//If Rand is Equaled the Operation will cuased automaticcally base on int..
							if (Rand == 0)
							{
								if (Order == 1)
								{
									//MinisterMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 5;
								}
								else if (Order == -1)
								{
									//MinisterHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -5;
								}
								ConvertedToMinister = true;
							}
							else if (Rand == 1)
							{
								if (Order == 1)
								{
									//CastleMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 4;
								}
								else if (Order == -1)
								{
									//CastleHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -4;
								}
								ConvertedToCastle = true;
							}
							else if (Rand == 2)
							{
								if (Order == 1)
								{
									//HourseMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 3;
								}
								else if (Order == -1)
								{
									//HourseHight+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -3;

								}
								ConvertedToHourse = true;
							}
							else
							{
								if (Order == 1)
								{
									//ElefantMidle+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = 2;
								}
								else if (Order == -1)
								{
									//ElefantHigh+=0.00000000000000000000000000000000000000000000000000000000000000000000000001;
									Tab[RowS][ColumnS] = -2;
								}
								ConvertedToElefant = true;
							}
						}
					}
					AllDraw::ConvertWait = false;

				}
			}
			AllDraw::ConvertWait = false;
			if (Convert)
			{
				////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O)
				{
					*TableConverted = new int[8]; for (int b = 0; b < 8; b++)TableConverted[b] = new int[8];
					for (int  iii = 0; iii < 8; iii++)
					{
						for (int  jjj = 0; jjj < 8; jjj++)
						{
							TableConverted[iii][jjj] = Tab[iii][jjj];
						}
					}
				}
				////auto o1 = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
				////lock (O1)
				{
					LoadConvertTable = true;
				}


			}

			////{ //AllDraw.OutPut.Append("\r\n");for (int l = 0; l < Spaces; l++) //AllDraw.OutPut.Append(Space);  //AllDraw.OutPut.Append("ConvertOperation:" + (TimeElapced.TimeNow() - Time).ToString();}Spaces--;
			//return Convert State.
			return Convert;
		}
	}

	void ThingsConverter::InitializeInstanceFields()
	{
		//Space = new std::string("&nbsp;");
		Spaces = 0;
		ArrangmentsChanged = true;
		Convert = false;
		ConvertedToMinister = false;
		ConvertedToCastle = false;
		ConvertedToElefant = false;
		ConvertedToHourse = false;
		Max = 0;
		RowS = 0;
		ColumnS = 0;
		color = (int)0;
		Order = 0;
		Current = 0;
		RowSource = 0;
		columnSource = 0;
		v = 0;
	}

