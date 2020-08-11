#include "ChessForm.h"
#include "ThinkingHybridizerRefrigitz.h"
#include "Stone.h"
#include "ChessRules.h"
#include "AllDraw.h"
int HybridizerRefrigitzForm::MovmentsNumber = 0;
std::wstring HybridizerRefrigitzForm::Root ;
std::wstring HybridizerRefrigitzForm::AllDrawKindString ;
int **HybridizerRefrigitzForm::Table = nullptr;

	HybridizerRefrigitzForm::HybridizerRefrigitzForm() : path3(L"temp")
	{

		 InitializeInstanceFields();
		 Init2();
	}

	void HybridizerRefrigitzForm::Initiate(int a, int Order)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			int LeafAStarGrteedy = 0;
			AllDraw THIS = Draw->AStarGreedyStringNode;
			Table = Draw->Initiate(1, 4, a, CloneATable(brd->GetTable()), Order, false, FOUND, LeafAStarGrteedy);
			//Draw->AStarGreedyStringNode = *this;
		}
	}

	void HybridizerRefrigitzForm::AliceAction(int Order)
	{



		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			bool B = AllDraw::Blitz;
			AllDraw::Blitz = false;
			ThinkingHybridizerRefrigitz::ThinkingRun = false;
	//#pragma warning disable CS0164 // This label has not been referenced
	#pragma warning disable CS0164 // This label has not been referenced
			Begin4:
	#pragma warning restore CS0164 // This label has not been referenced
	//#pragma warning restore CS0164 // This label has not been referenced
			AllDraw Th = Draw->AStarGreedyStringNode;
			if (Draw->IsAtLeastAllObjectIsNull())
			{
				Draw.TableList.clear();
				Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
				Draw->SetRowColumn(0);
				Draw->IsCurrentDraw = true;
			}
			Draw->AStarGreedyStringNode = Th;
			if (AllDraw::OrderPlate == 1)
			{
			Initiate(1, 1);
			}
			else
			{
				Initiate(-1, -1);
			}
			AllDraw::Blitz = B;

		}



	}

	void HybridizerRefrigitzForm::Init2()
	{
		cl = 0;
		order = 2;
		x1 = 1;
		y1 = 1;

	}

	void HybridizerRefrigitzForm::ClearTableInitiationPreventionOfMultipleMove()
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (Table[i][j] == 0)
				{
					if (ThinkingHybridizerRefrigitz::TableInitiationPreventionOfMultipleMove[i][j] != 0)
					{
						ThinkingHybridizerRefrigitz::TableInitiationPreventionOfMultipleMove[i][j] = ThinkingHybridizerRefrigitz::NoOfMovableAllObjectMove - 1;
					}
				}
			}
		}

	}

	void HybridizerRefrigitzForm::Form1_Load()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (!LoadP)
			{
				brd = new Board();
				Table = brd->GetTable();
				std::cout << std::wstring(L"Wait...") << std::endl;
				AllDraw::OrderPlateDraw = -1;
				AllDraw::TableListAction.push_back(CloneATable(brd->GetTable()));
				Table = CloneATable(brd->GetTable());
				ThinkingHybridizerRefrigitz::TableInitiation = CloneATable(brd->GetTable());
				if (DrawManagement())
				{
					//Load AllDraw.asd
					bool LoadTree = true;
					TakeRoot *y = new TakeRoot();
					bool DrawDrawen = y->Load(FOUND, false, this, LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
					if (!DrawDrawen)
					{
						Draw = AllDraw(AllDraw::OrderPlate, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
						Draw.TableList.clear();
						Draw.TableList.push_back(CloneATable(Table));
						Draw->SetRowColumn(0);
						AllDraw::DepthIterative = 0;

						bool Store = Deeperthandeeper;
						Deeperthandeeper = false;

						AllDraw::OrderPlate = 1;


						int Ord = AllDraw::OrderPlate;
						int aa = 1;
						if (Ord == -1)
						{
							aa = -1;
						}
						bool B = AllDraw::Blitz;
						AllDraw::Blitz = false;

						if (Draw->IsAtLeastAllObjectIsNull())
						{
							Draw.TableList.clear();
							Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 2]));
							Draw->SetRowColumn(0);
							Draw->IsCurrentDraw = true;
						}
						Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);

						AllDraw::Blitz = B;
						Deeperthandeeper = Store;

						//auto i = new Object();

//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
						////lock (i)
						{
							 LoadTree = false;
							//(new TakeRoot())->Save(false, false, this, LoadTree, false, false, false, false, false, false, false, true);
						}
					}
					else
					{
						FOUND = false;
						Draw = y->t;
						SetDrawFound();

					}
				}
				std::cout << std::wstring(L"Ready...") << std::endl;
				LoadP = true;
			}
		}
	}

	void HybridizerRefrigitzForm::ClickedSimAtClOne(int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			int ii = int();
			int jj = int();
			if (R->CromosomRowFirst == -1 || R->CromosomColumnFirst == -1 || R->CromosomRow == -1 || R->CromosomColumn == -1)
			{
				ii = AllDraw::NextRow;
				jj = AllDraw::NextColumn;
			}
			else
			{
				ii = R->CromosomRow;
				jj = R->CromosomColumn;
			}




			Play(0, jj);

			AllDraw::NextRow = -1;
			AllDraw::NextColumn = -1;
			AllDraw::LastRow = -1;
			AllDraw::LastColumn = -1;
			cl = 0;
			Person = true;
		}
	}

	

	int **HybridizerRefrigitzForm::CloneATable(int** Tab)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
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
	}

	void HybridizerRefrigitzForm::WaitCon()
	{
		do
		{
		} while (ConClick == -1);
	}

	void HybridizerRefrigitzForm::WaitOnly()
	{
		do
		{
		} while (WaitOnplay);
	}

	int HybridizerRefrigitzForm::Play(int i, int j)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{



			try
			{
				bool Com = false;
				int k = 0;
				int played = 0;

				if (i == -1 && j == -1)
				{
					Again:
					CoPermit = false;
					Person = false;

					AllDraw::Blitz = false;





					Table = brd->GetTable();




					 AliceAction(AllDraw::OrderPlate);


					if (Draw->TableZero(Table))
					{
						std::cout << std::wstring(L"Board is invalid;") << std::endl;
						Draw.TableList.clear();
						Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
						Draw->SetRowColumn(0);
						Draw->IsCurrentDraw = true;
						ThinkingHybridizerRefrigitz::NoOfMovableAllObjectMove++;
						AllDraw::AllowedSupTrue = true;

						goto Again;
					}
					AllDraw::AllowedSupTrue = false;




					AllDraw::TableListAction.push_back(CloneATable(Table));
					R = new HybridizerRefrigitzGeneticAlgorithm(false, false, false, false, false, false, false, true);
					if (R->FindGenToModified(AllDraw::TableListAction[AllDraw::TableListAction.size() - 2], AllDraw::TableListAction[AllDraw::TableListAction.size() - 1], AllDraw::TableListAction, 0,AllDraw::OrderPlate, true))
					{

						int ii = int();
						int jj = int();
						if (R->CromosomRowFirst == -1 || R->CromosomColumnFirst == -1 || R->CromosomRow == -1 || R->CromosomColumn == -1)
						{

							std::cout << std::wstring(L"One or more cromosoms is invalid;") << std::endl;
							AllDraw::TableListAction.pop_back();








							goto Again;
						}

						ii = R->CromosomRowFirst;
						jj = R->CromosomColumnFirst;
						i = ii;
						j = jj;
						std::cout << std::wstring(L"\nBestMove :") << (new ThinkingHybridizerRefrigitz())->AsS(R->CromosomRowFirst, R->CromosomColumnFirst, R->CromosomRow, R->CromosomColumn);
						k = brd->getInfo(i, j);
						//if (k == 0)

						cl = 0;
						if (AllDraw::OrderPlateDraw == 1)
						{
							ThinkingHybridizerRefrigitz::NoOfBoardMovedWHITE++;
						}
						else
						{
							ThinkingHybridizerRefrigitz::NoOfBoardMovedBLACK++;
						}
					}
					else
					{


						{
							std::cout << std::wstring(L"One or more DNA is invalid;") << std::endl;



							AllDraw::TableListAction.pop_back();
							Table = brd->GetTable();





							goto Again;
						}
					}


				}
				else
				{
					CoPermit = true;
					k = brd->getInfo(i, j);
					//if (k == 0)

				}
				std::wstring lstr = L" ";
				if (k > 6)
				{
					played = 2;
				}
				else if (k < 7 && k != 0)
				{
					played = 1;
				}

				if (cl == 0 && k != 0 && played == order)
				{
					x1 = i;
					y1 = j;
					//this.pb[i, j].BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
					cl = 1;
					////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (oo)
					{
						if ((!Person) && i != -1 && j != -1)
						{
							ClickedSimAtClOne(i, j);
						}
					}
					return 0;
				}
				if (cl == 1)
				{
					Board *b = new Board();
					int m = brd->getInfo(x1, y1);
					King *king2 = new King(order, x1, y1);
					int y, z;
					for (y = 0; y < 8; y++)
					{
						for (z = 0; z < 8; z++)
						{
							b->setSquare(brd->getInfo(y, z), y, z);
						}
					}
					switch (m)
					{
						case 1:
							Castle *cs2 = new Castle(1, x1, y1);
							if (cs2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(1, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"R";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(1, i, j);
								order++;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img1;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img2;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 2:
							Knight *kn = new Knight(1, x1, y1);
							if (kn->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(2, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"N";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(2, i, j);
								order++;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img3;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img4;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 3:
							Bishop *bsp = new Bishop(1, x1, y1);
							if (bsp->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(3, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"B";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(3, i, j);
								order++;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img5;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img6;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 4:
							Queen *qn2 = new Queen(1, x1, y1);
							if (qn2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(4, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"Q";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(4, i, j);
								order++;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img7;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img8;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 5:
							King *kg2 = new King(1, x1, y1);
							if (kg2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(5, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(5, i, j);
								order++;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img9;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img10;
								}
								Com = true;
							}
							else if (kg2->move(brd, i, j) == 2)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(5, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"0-0";
								//pb[x1, y1].Image = null;
								//pb[0, 0].Image = null;
								//pb[2, 0].Image = img9;
								//pb[3, 0].Image = img2;
								brd->setSquare(0, 0, 0);
								brd->setSquare(0, 4, 0);
								brd->setSquare(5, 2, 0);
								brd->setSquare(1, 3, 0);
								order++;
								Com = true;
							}
							else if (kg2->move(brd, i, j) == 3)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(5, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"0-0";
								//pb[x1, y1].Image = null;
								//pb[7, 0].Image = null;
								//pb[5, 0].Image = img2;
								//pb[6, 0].Image = img9;
								brd->setSquare(0, 4, 0);
								brd->setSquare(0, 7, 0);
								brd->setSquare(1, 5, 0);
								brd->setSquare(5, 6, 0);
								order++;
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 6:
							Pawn *p = new Pawn(1, x1, y1);
							if (p->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(6, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"P";
								if (j == 7 && CoPermit)
								{
									WaitCon();
									/*System::Threading::Thread *t = new System::Threading::Thread(new System::Threading::ThreadStart(WaitCon));
									t->Start();
									t->Join();*/
									if (ConClick == 1)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(4, i, j);
									}
									else
									{
									 if (ConClick == 2)
									 {
										brd->setSquare(0, x1, y1);
										brd->setSquare(1, i, j);
									 }
									else
									{
									if (ConClick == 3)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(2, i, j);
									}
									else
									{
									if (ConClick == 4)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(3, i, j);
									}
									}
									}
									}

								}
								else
								{
									//pb[x1, y1].Image = null;
									brd->setSquare(0, x1, y1);
									brd->setSquare(6, i, j);
								}
								order++;
								if (ConClick != -1)
								{
									if (ConClick == 1)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img7;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img8;
										}
									}
									else
									{
										   if (ConClick == 2)
										   {
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img1;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img2;
										}
										   }
									else
									{
									if (ConClick == 3)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img3;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img4;
										}
									}
									else
									{
									if (ConClick == 4)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img5;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img6;
										}
									}
									}
									}
									}
									ConClick = -1;
								}
								else
								{
									if (brd->getbcolor(i, j) == 2)
									{
										//pb[i, j].Image = img11;
									}
									else if (brd->getbcolor(i, j) == 1)
									{
										//pb[i, j].Image = img12;
									}
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 7:
							Castle *cs = new Castle(2, x1, y1);
							if (cs->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(7, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"R";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(7, i, j);
								order--;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img21;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img22;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 8:
							Knight *kn2 = new Knight(2, x1, y1);
							if (kn2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(8, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"N";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(8, i, j);
								order--;

								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 9:
							Bishop *bsp2 = new Bishop(2, x1, y1);
							if (bsp2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(9, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"B";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(9, i, j);
								order--;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img25;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img26;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 10:
							Queen *qn = new Queen(2, x1, y1);
							if (qn->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(10, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"Q";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(10, i, j);
								order--;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img27;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img28;
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 11:
							King *kg = new King(2, x1, y1);
							if (kg->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(11, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"K";
								//pb[x1, y1].Image = null;
								brd->setSquare(0, x1, y1);
								brd->setSquare(11, i, j);
								order--;
								if (brd->getbcolor(i, j) == 2)
								{
									//pb[i, j].Image = img29;
								}
								else if (brd->getbcolor(i, j) == 1)
								{
									//pb[i, j].Image = img30;
								}
								Com = true;
							}
							else if (kg->move(brd, i, j) == 2)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(11, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"0-0";
								//pb[x1, y1].Image = null;
								//pb[0, 7].Image = null;
								//pb[2, 7].Image = img30;
								//pb[3, 7].Image = img21;
								brd->setSquare(0, 0, 7);
								brd->setSquare(0, 4, 7);
								brd->setSquare(11, 2, 7);
								brd->setSquare(5, 3, 7);
								order--;
								Com = true;
							}
							else if (kg->move(brd, i, j) == 3)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(11, i, j);
								if (king2->isChecked(b) == 1)
								{
									//this.pb[x1, y1].BorderStyle = 0;
									cl = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"0-0";
								//pb[x1, y1].Image = null;
								//pb[7, 7].Image = null;
								//pb[5, 7].Image = img21;
								//pb[6, 7].Image = img30;
								brd->setSquare(0, 4, 7);
								brd->setSquare(0, 7, 7);
								brd->setSquare(7, 5, 7);
								brd->setSquare(11, 6, 7);
								order--;
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
						case 12:
							Pawn *p2 = new Pawn(2, x1, y1);
							if (p2->move(brd, i, j) == 1)
							{
								b->setSquare(0, x1, y1);
								b->setSquare(12, i, j);
								if (king2->isChecked(b) == 1)
								{
									cl = 0;
									//this.pb[x1, y1].BorderStyle = 0;
									std::cout << std::wstring(L"شما نمی توانید این حرکت را انجام دهید") << std::endl;
									return 0;
								}
								lstr = L"P";
								if (j == 0 && CoPermit)
								{
									WaitCon();
									/*System::Threading::Thread *t = new System::Threading::Thread(new System::Threading::ThreadStart(WaitCon));
									t->Start();
									t->Join();*/
									if (ConClick == 1)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(9, i, j);
									}
									else
									{
									 if (ConClick == 2)
									 {
										brd->setSquare(0, x1, y1);
										brd->setSquare(7, i, j);
									 }
									else
									{
									if (ConClick == 3)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(9, i, j);
									}
									else
									{
									if (ConClick == 4)
									{
										brd->setSquare(0, x1, y1);
										brd->setSquare(10, i, j);
									}
									}
									}
									}

								}
								else
								{
									//pb[x1, y1].Image = null;
									brd->setSquare(0, x1, y1);
									brd->setSquare(12, i, j);
								}
								order--;
								if (ConClick != -1)
								{
									if (ConClick == 1)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img27;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img28;
										}
									}
									else
									{
										   if (ConClick == 2)
										   {
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img21;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img22;
										}
										   }
									else
									{
									if (ConClick == 3)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img23;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img24;
										}
									}
									else
									{
									if (ConClick == 4)
									{
										if (brd->getbcolor(i, j) == 2)
										{
											//pb[i, j].Image = img25;
										}
										else if (brd->getbcolor(i, j) == 1)
										{
											//pb[i, j].Image = img26;
										}
									}
									}
									}
									}
									ConClick = -1;
								}
								else
								{
									if (brd->getbcolor(i, j) == 2)
									{
										//pb[i, j].Image = img31;
									}
									else if (brd->getbcolor(i, j) == 1)
									{
										//pb[i, j].Image = img32;
									}
								}
								Com = true;
							}
							else
							{
								cl = 0;
								//pb[x1, y1].BorderStyle = 0;
								return 0;
							}
							break;
					}
					ThinkingHybridizerRefrigitz::TableInitiationPreventionOfMultipleMove[x1][y1]++;
					ThinkingHybridizerRefrigitz::TableInitiationPreventionOfMultipleMove[i][j]++;

					//this.pb[x1, y1].BorderStyle = 0;
					cl = 0;
					std::wstring str, str2;
					King *king = new King(order, x1, y1);
					if (order == 1)
					{
						str = L"سیاه";
						str2 = L"سفید";
					}
					else
					{
						str = L"سفید";
						str2 = L"سیاه";
					}
					std::wstring lstr2 = L" ", lstr3 = L" ";
					switch (i)
					{
						case 0:
							lstr2 = L"h";
							break;
						case 1:
							lstr2 = L"g";
							break;
						case 2:
							lstr2 = L"f";
							break;
						case 3:
							lstr2 = L"e";
							break;
						case 4:
							lstr2 = L"d";
							break;
						case 5:
							lstr2 = L"c";
							break;
						case 6:
							lstr2 = L"b";
							break;
						case 7:
							lstr2 = L"a";
							break;
					}
					switch (x1)
					{
						case 0:
							lstr3 = L"h";
							break;
						case 1:
							lstr3 = L"g";
							break;
						case 2:
							lstr3 = L"f";
							break;
						case 3:
							lstr3 = L"e";
							break;
						case 4:
							lstr3 = L"d";
							break;
						case 5:
							lstr3 = L"c";
							break;
						case 6:
							lstr3 = L"b";
							break;
						case 7:
							lstr3 = L"a";
							break;
					}
					if (king->isChecked(brd) == 1)
					{
						if (brd->isMated(order) == 1)
						{
							lstr = str2 + std::wstring(L" ") + lstr + std::wstring(L" ") + lstr3 + StringConverterHelper::toString(y1 + 1) + std::wstring(L" To ") + lstr2 + StringConverterHelper::toString(j + 1) + std::wstring(L" Hu:") + StringConverterHelper::toString(AllDraw::Less);
							//MessageBox.Show(str + " " + "مات شد");
						}
						else
						{
							lstr = str2 + std::wstring(L" کیش  ") + lstr + std::wstring(L" ") + lstr3 + StringConverterHelper::toString(y1 + 1) + std::wstring(L" To ") + lstr2 + StringConverterHelper::toString(j + 1) + std::wstring(L" Hu:") + StringConverterHelper::toString(AllDraw::Less);
							std::cout << std::wstring(L" کیش توسط") << std::wstring(L" ") << str2 << std::endl;
							////auto oo = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							////lock (oo)
							{
								if (Com && (AllDraw::OrderPlate == 1))
								{
									MovmentsNumber++;


									Table = brd->GetTable();
									ClearTableInitiationPreventionOfMultipleMove();
									AllDraw::TableListAction.push_back(CloneATable(brd->GetTable()));


									int Ord = AllDraw::OrderPlate;
									int aa = 1;
									if (Ord == -1)
									{
										aa = -1;
									}
									bool B = AllDraw::Blitz;
									AllDraw::Blitz = false;

									AllDraw thiB = Draw->AStarGreedyStringNode;
									if (Draw->IsAtLeastAllObjectIsNull())
									{
										Draw.TableList.clear();
										Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
										Draw->SetRowColumn(0);
										Draw->IsCurrentDraw = true;
									}
									Draw->AStarGreedyStringNode = thiB;

									Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);

									AllDraw::Blitz = B;

									SetDrawFound();
									/*System::Threading::Thread *tt = new System::Threading::Thread(new System::Threading::ThreadStart(SetDrawFound));
									tt->Start();
									tt->Join();
									tt->Abort();
									*/
									AllDraw::OrderPlate *= -1;



									//Play(-1, -1);



								}
								else
								{
						  if (Com && (AllDraw::OrderPlate == -1))
						  {
									MovmentsNumber++;


									Table = brd->GetTable();
									ClearTableInitiationPreventionOfMultipleMove();
									AllDraw::TableListAction.push_back(CloneATable(brd->GetTable()));



									int Ord = AllDraw::OrderPlate;
									int aa = 1;
									if (Ord == -1)
									{
										aa = -1;
									}
									bool B = AllDraw::Blitz;
									AllDraw::Blitz = false;

									AllDraw thiB = Draw->AStarGreedyStringNode;
									if (Draw->IsAtLeastAllObjectIsNull())
									{
										Draw.TableList.clear();
										Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
										Draw->SetRowColumn(0);
										Draw->IsCurrentDraw = true;
									}
									Draw->AStarGreedyStringNode = thiB;

									Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);



									AllDraw::Blitz = B;

									SetDrawFound();
									/*System::Threading::Thread *tt = new System::Threading::Thread(new System::Threading::ThreadStart(SetDrawFound));
									tt->Start();
									tt->Join();
									tt->Abort();
									*/

									AllDraw::OrderPlate *= -1;


									//Play(-1, -1);






						  }
								}
							}
						}
					}
					else
					{
						lstr = str2 + std::wstring(L" ") + lstr + std::wstring(L" ") + lstr3 + StringConverterHelper::toString(y1 + 1) + std::wstring(L" To ") + lstr2 + StringConverterHelper::toString(j + 1) + std::wstring(L" Hu:") + StringConverterHelper::toString(AllDraw::Less);
					}
					////auto oi = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
					////lock (oi)
					{
						if (Com && (AllDraw::OrderPlate == 1))
						{
							MovmentsNumber++;


							Table = brd->GetTable();
							ClearTableInitiationPreventionOfMultipleMove();
							AllDraw::TableListAction.push_back(CloneATable(brd->GetTable()));



							int Ord = AllDraw::OrderPlate;
							int aa = 1;
							if (Ord == -1)
							{
								aa = -1;
							}
							bool B = AllDraw::Blitz;
							AllDraw::Blitz = false;

							AllDraw thiB = Draw->AStarGreedyStringNode;
							if (Draw->IsAtLeastAllObjectIsNull())
							{
								Draw.TableList.clear();
								Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
								Draw->SetRowColumn(0);
								Draw->IsCurrentDraw = true;
							}
							Draw->AStarGreedyStringNode = thiB;

							Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);



							AllDraw::Blitz = B;
							SetDrawFound();
							/*System::Threading::Thread *tt = new System::Threading::Thread(new System::Threading::ThreadStart(SetDrawFound));
							tt->Start();
							tt->Join();
							tt->Abort();
							*/
							AllDraw::OrderPlate *= -1;


							//Play(-1, -1);



						}
						else
						{
						  if (Com && (AllDraw::OrderPlate == -1))
						  {
							MovmentsNumber++;


							Table = brd->GetTable();
							ClearTableInitiationPreventionOfMultipleMove();
							AllDraw::TableListAction.push_back(CloneATable(brd->GetTable()));



							int Ord = AllDraw::OrderPlate;
							int aa = 1;
							if (Ord == -1)
							{
								aa = -1;
							}
							bool B = AllDraw::Blitz;
							AllDraw::Blitz = false;

							AllDraw thiB = Draw->AStarGreedyStringNode;
							if (Draw->IsAtLeastAllObjectIsNull())
							{
								Draw.TableList.clear();
								Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
								Draw->SetRowColumn(0);
								Draw->IsCurrentDraw = true;
							}
							Draw->AStarGreedyStringNode = thiB;

							Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);



							AllDraw::Blitz = B;
							SetDrawFound();
							/*System::Threading::Thread *tt = new System::Threading::Thread(new System::Threading::ThreadStart(SetDrawFound));
							tt->Start();
							tt->Join();
							tt->Abort();
							*/
							AllDraw::OrderPlate *= -1;


							//Play(-1, -1);


						  }
						}
					}
					return 1;
				}
			}
			catch (std::exception &t)
			{
				Log(t);
			}
			return 0;
		}
	}
	/*
	void HybridizerRefrigitzForm::Wait()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			PerformanceCounter *myAppCpu = new PerformanceCounter(L"Process", L"% Processor Time", Process::GetCurrentProcess()->ProcessName, true);

			do
			{
				WaitOnplay = true;
			} while (myAppCpu->NextValue() != 0);
			WaitOnplay = false;
		}
	}

	
	*/
	AllDraw HybridizerRefrigitzForm::RootFound()
	{
	  ////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
	  ////lock (O)
	  {
		  try
		  {
			  if (Draw != nullptr)
			  {
				  while (Draw->AStarGreedyStringNode != nullptr)
				  {
					  Draw = Draw->AStarGreedyStringNode;
				  }
			  }
		  }
		  catch (std::exception &t)
		  {
			  Log(t);
		  }
		  return Draw;
	  }
	}

	void HybridizerRefrigitzForm::SetDrawFounding(bool &FOUNDI, AllDraw &THISI, bool FirstI)
	{
		/*    Object OO = new Object();
		    ////lock (OO)
		    {
		        if (Draw == null)
		            return;
		        int Dummy = AllDraw.OrderPlate;
	
		        HybridizerRefrigitz.AllDraw THISB = Draw.AStarGreedyStringNode;
		        HybridizerRefrigitz.AllDraw THISStore = Draw;
		        //while (Draw.AStarGreedyStringNode != null)
		        bool FOUND = false;
		        HybridizerRefrigitz.AllDraw THIS = null;
		        bool First = false;
	
	
	
		        Object O = new Object();
		        ////lock (O)
		        {
		            FOUND = false;
		            THIS = null;
		            int a = int.BLACK;
		            //if (First)
	
		            //else
		            int Ord = AllDraw.OrderPlate;
		            AllDraw.OrderPlate = Ord;
		             Draw.FoundOfCurrentTableNode(CloneATable(Table), Ord, ref THIS, ref FOUND);
		            
		            
		            if (FOUND)
		            {
		                Draw = THIS;
	
	
	
		                bool LoadTree = true;
		                Ord = AllDraw.OrderPlate;
		                //if (MovmentsNumber > 1)
		                (new TakeRoot()).Save(FOUND, false, this, ref LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
	
		                Draw.IsCurrentDraw = true;
	
	
		            }
		            else
		            {
		                FOUND = false;
	
		                a = int.BLACK;
		                while (Draw.AStarGreedyStringNode != null)
		                    Draw = Draw.AStarGreedyStringNode;
	
		                bool FirstS = false;
		                if ((HybridizerRefrigitz.AllDraw.TableListAction.Count > 2))
		                {
		                    Ord = AllDraw.OrderPlate * -1;
		                    AllDraw.OrderPlate = Ord;
		                    AllDraw.OrderPlate = Ord;
	
		                    int aa = int.WHITE;
		                    if (Ord == -1)
		                        aa = int.BLACK;
		                    Draw.FoundOfCurrentTableNode(CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 2]), Ord, ref THIS, ref FOUND);
		                    
		                    
		                }
		                else
		                if ((HybridizerRefrigitz.AllDraw.TableListAction.Count >= 1))
		                {
		                    Draw.FoundOfCurrentTableNode(CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 1]), Ord, ref THIS, ref FOUND);
		                    
		                    
		                    FirstS = true;
		                }
	
	
		                if (FOUND)
		                {
		                    Draw = THIS;
	
		                    Draw.IsCurrentDraw = true;
	
	
	
	
		                    bool Store = Deeperthandeeper;
		                    Deeperthandeeper = false;
	
	
		                    int aa = int.WHITE;
		                    if (Ord == -1)
		                        aa = int.BLACK;
		                    bool B = AllDraw.Blitz;
		                    AllDraw.Blitz = false;
		                    HybridizerRefrigitz.AllDraw.
	
		                    if (!FirstS)
		                    {
	
		                        AllDraw thiB = Draw.AStarGreedyStringNode;
		                        if (Draw.IsAtLeastAllObjectIsNull())
		                        {
		                            Draw.TableList.Clear();
		                            Draw.TableList.Add(CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 2]);
		                            Draw->SetRowColumn(0);
		                            Draw.IsCurrentDraw = true;
		                        }
		                        Draw.AStarGreedyStringNode = thiB;
	
	
		                        Draw.InitiateAStarGreedyt(HybridizerRefrigitz.AllDraw.MaxAStarGreedy, 0, 0, aa, CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 2]), Ord, false, FOUND, 0);
		                        
		                        
		                    }
		                    else
		                    {
		                        FOUND = false;
	
		                        AllDraw thiB = Draw.AStarGreedyStringNode;
		                        if (Draw.IsAtLeastAllObjectIsNull())
		                        {
		                            Draw.TableList.Clear();
		                            Draw.TableList.Add(CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 1]);
		                            Draw->SetRowColumn(0);
		                            Draw.IsCurrentDraw = true;
		                        }
		                        Draw.AStarGreedyStringNode = thiB;
	
	
		                        Draw.InitiateAStarGreedyt(HybridizerRefrigitz.AllDraw.MaxAStarGreedy, 0, 0, aa, CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 1]), Ord, false, FOUND, 0);
		                        
		                        
		                    }
		                    AllDraw.Blitz = B;
		                    Deeperthandeeper = Store;
		                    //while (Draw.AStarGreedyStringNode != null)
	
		                    FOUND = false;
		                    if (!First && (HybridizerRefrigitz.AllDraw.TableListAction.Count > 2))
		                    {
		                        Ord = AllDraw.OrderPlate * -1;
		                        AllDraw.OrderPlate = Ord;
		                        AllDraw.OrderPlate = Ord;
		                    }
		                    Draw.FoundOfCurrentTableNode(CloneATable(HybridizerRefrigitz.AllDraw.TableListAction[HybridizerRefrigitz.AllDraw.TableListAction.Count - 1]), Ord, ref THIS, ref FOUND);
		                    
		                    
	
		                    if (FOUND)
		                    {
		                        Draw = THIS;
	
	
	
	
	
		                        bool LoadTree = true;
		                        (new TakeRoot()).Save(FOUND, false, this, ref LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
		                        AllDraw.OrderPlate = Ord;
	
	
	
		                    }
		                    else
		                    {
		                        Draw = THISStore;
		                        if (MovmentsNumber == 1)
		                            NotFoundBegin = true;
	
		                        bool LoadTree = true;
	
	
		                        Draw.TableList.Clear();
		                        Draw.TableList.Add(CloneATable(Table));
		                        Draw->SetRowColumn(0);
		                        Draw.IsCurrentDraw = true;
		                        Draw.AStarGreedyStringNode = THISB;
		                        HybridizerRefrigitz.ChessRules.CurrentOrder = AllDraw.OrderPlate;
		                        HybridizerRefrigitz.AllDraw.DepthIterative = 0;
		                        (new TakeRoot()).Save(FOUND, false, this, ref LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
	
	
		                    }
		                }
		                else
		                {
		                    Draw = THISStore;
		                    if (MovmentsNumber == 1)
		                        NotFoundBegin = true;
		                    AllDraw.OrderPlate = Dummy;
	
		                    bool LoadTree = true;
	
	
		                    Draw.TableList.Clear();
		                    Draw.TableList.Add(CloneATable(Table));
		                    Draw->SetRowColumn(0);
		                    Draw.IsCurrentDraw = true;
		                    Draw.AStarGreedyStringNode = THISB;
		                    HybridizerRefrigitz.ChessRules.CurrentOrder = AllDraw.OrderPlate;
		                    HybridizerRefrigitz.AllDraw.DepthIterative = 0;
		                    (new TakeRoot()).Save(FOUND, false, this, ref LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
	
	
		                }
		            }
		        }
	
		        if (HybridizerRefrigitz.AllDraw.FirstTraversalTree)
		            FOUND = false;
		        FOUNDI = FOUND;
		        THISI = THIS;
		        FirstI = First;
		        DrawManagement();
		    }
		*/

		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			if (Draw == nullptr_t)
			{
				return;
			}
			int Dummy = AllDraw::OrderPlate;

			AllDraw THISB = Draw->AStarGreedyStringNode;
			AllDraw THISStore = Draw;
			//while (Draw.AStarGreedyStringNode != null)
			bool FOUND = false;
			AllDraw THIS = nullptr;
			bool First = false;



			////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
			////lock (O)
			{
				FOUND = false;
//C# TO C++ CONVERTER WARNING: C# to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
				//delete THIS;
				int a = -1;
				//if (First)

				//else
				int Ord = AllDraw::OrderPlate;
				AllDraw::OrderPlate = Ord;
				 Draw->FoundOfCurrentTableNode(CloneATable(Table), Ord, THIS, FOUND);


				if (FOUND)
				{
					Draw = THIS;



					bool LoadTree = true;
					Ord = AllDraw::OrderPlate;
					//if (MovmentsNumber > 1)
					//(new TakeRoot())->Save(FOUND, false, this, LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);

					Draw->IsCurrentDraw = true;


				}
				else
				{
					bool Store = Deeperthandeeper;
					Deeperthandeeper = false;


					int aa = 1;
					if (Ord == -1)
					{
						aa = -1;
					}
					bool B = AllDraw::Blitz;
					AllDraw::Blitz = false;
				   FOUND = false;

					AllDraw thiB = Draw->AStarGreedyStringNode;
					if (Draw->IsAtLeastAllObjectIsNull())
					{
						Draw.TableList.clear();
						Draw.TableList.push_back(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]));
						Draw->SetRowColumn(0);
						Draw->IsCurrentDraw = true;
					}
					Draw->AStarGreedyStringNode = thiB;


					Draw->InitiateAStarGreedyt(AllDraw::MaxAStarGreedy, 0, 0, aa, CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, false, FOUND, 0);


					AllDraw::Blitz = B;
					Deeperthandeeper = Store;
					//while (Draw.AStarGreedyStringNode != null)

					FOUND = false;


					Draw->FoundOfCurrentTableNode(CloneATable(AllDraw::TableListAction[AllDraw::TableListAction.size() - 1]), Ord, THIS, FOUND);



					if (FOUND)
					{
						Draw = THIS;





						bool LoadTree = true;
						//(new TakeRoot())->Save(FOUND, false, this, LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
						AllDraw::OrderPlate = Ord;



					}
					else
					{
						Draw = THISStore;
						if (MovmentsNumber == 1)
						{
							NotFoundBegin = true;
						}

						bool LoadTree = true;


						Draw.TableList.clear();
						Draw.TableList.push_back(CloneATable(Table));
						Draw->SetRowColumn(0);
						Draw->IsCurrentDraw = true;
						Draw->AStarGreedyStringNode = THISB;
						ChessRules::CurrentOrder = AllDraw::OrderPlate;
						AllDraw::DepthIterative = 0;
						//(new TakeRoot())->Save(FOUND, false, this, LoadTree, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);


					}

				}
			}

			if (AllDraw::FirstTraversalTree)
			{
				FOUND = false;
			}
			FOUNDI = FOUND;
			THISI = THIS;
			FirstI = First;
			DrawManagement();
		}

	}
	/*
	bool HybridizerRefrigitzForm::DrawManagement()
	{
		////auto oO = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (OO)
		{
			SetAllDrawKind();
			//Set Configuration To True for some unknown reason!.

			SetAllDrawKindString();
			bool Found = false;
			std::wstring P = Path::GetFullPath(path3);
			AllDrawReplacement = Path::Combine(P, AllDrawKindString);
			Logger *y = new Logger(AllDrawReplacement);

			y = new Logger(AllDrawKindString);

			if (!NotFoundBegin)
			{
				if (File::Exists(AllDrawKindString))
				{
					if (File::Exists(AllDrawReplacement))
					{
						if ((((new System::IO::FileInfo(AllDrawKindString))->Length) < (new System::IO::FileInfo(AllDrawReplacement))->Length))
						{
							File::Delete(AllDrawKindString);
							File::Copy(AllDrawReplacement, AllDrawKindString);
							Found = true;
						}
						else if ((((new System::IO::FileInfo(AllDrawKindString))->Length) > (new System::IO::FileInfo(AllDrawReplacement))->Length))
						{
							if (File::Exists(AllDrawReplacement))
							{
								File::Delete(AllDrawReplacement);
							}
							File::Copy(AllDrawKindString, AllDrawReplacement);
							Found = true;
						}
					}
					else
					{
						if (!Directory::Exists(Path::GetFullPath(path3)))
						{
							Directory::CreateDirectory(Path::GetFullPath(path3));
						}
						File::Copy(AllDrawKindString, AllDrawReplacement);
						Found = true;
					}
					Found = true;
				}
				else if (File::Exists(AllDrawReplacement))
				{
					File::Copy(AllDrawReplacement, AllDrawKindString);
					Found = true;
				}
			}
			else
			{
				if (File::Exists(AllDrawKindString))
				{
					File::Delete(AllDrawKindString);
				}
				if (File::Exists(AllDrawReplacement))
				{
					File::Delete(AllDrawReplacement);
				}
				NotFoundBegin = false;
			}
			return Found;
		}
	}
	*/
	void HybridizerRefrigitzForm::SetAllDrawKindString()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (AllDrawKind == 4)
			{
				AllDrawKindString = L"AllDrawBT.asd";
			}
			else
			{
			if (AllDrawKind == 3)
			{
				AllDrawKindString = L"AllDrawFFST.asd";
			}
			else
			{
			if (AllDrawKind == 2)
			{
				AllDrawKindString = L"AllDrawFTSF.asd";
			}
			else
			{
			if (AllDrawKind == 1)
			{
				AllDrawKindString = L"AllDrawFFSF.asd";
			}
			}
			}
			}

		}
	}

	void HybridizerRefrigitzForm::SetAllDrawKind()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			if (UsePenaltyRegardMechnisam && AStarGreedyHeuristic)
			{
				AllDrawKind = 4;
			}
			else
			{
	  if ((!UsePenaltyRegardMechnisam) && AStarGreedyHeuristic)
	  {
				AllDrawKind = 3;
	  }
			}
			if (UsePenaltyRegardMechnisam && (!AStarGreedyHeuristic))
			{
				AllDrawKind = 2;
			}
			if ((!UsePenaltyRegardMechnisam) && (!AStarGreedyHeuristic))
			{
				AllDrawKind = 1;
			}
		}
	}

	void HybridizerRefrigitzForm::SetDrawFound()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (O)
		{
			FOUND = false;
			AllDraw THIS = nullptr;
			SetDrawFounding(FOUND, THIS, false);
		}
	}

	void HybridizerRefrigitzForm::InitializeInstanceFields()
	{
		LoadP = false;
		AllDrawKind = 0;
		NotFoundBegin = false;
		Deeperthandeeper = false;
		AllDrawReplacement ;
		CoPermit = true;
		ConClick = -1;
		WaitOnplay = false;
		R = new HybridizerRefrigitzGeneticAlgorithm(false, false,UsePenaltyRegardMechnisam, false, false, false, false, true);
		Person = true;
		Draw = AllDraw(-1, false, false, UsePenaltyRegardMechnisam, false, false, false, AStarGreedyHeuristic, true);
		FOUND = false;
		cl = 0;
		order = 0;
		x1 = 0;
		y1 = 0;
		//components = 0;
	}

