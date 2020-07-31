﻿#include "QuantumAtamata.h"



	Bit::Bit()
	{
		
			Bits[0] = false;
			Bits[1] = false;
		
	}

	bool *Bit::GetBits()
	{
		
			return Bits;
		
	}

	void Bit::SetZeroZero()
	{
		
			Bits[0] = false;
			Bits[1] = false;
		
	}

	void Bit::SetZeroOne()
	{
		
			Bits[0] = true;
			Bits[1] = false;
		
	}

	void Bit::SetOneZero()
	{
		
			Bits[0] = false;
			Bits[1] = true;
		
	}

	void Bit::SetOneOne()
	{
		
			Bits[0] = true;
			Bits[1] = true;
		
	}

	bool Bit::IsZeroZero()
	{
		
			if (Bits[0] == false && Bits[1] == false)
			{
				return true;
			}
			return false;
		
	}

	bool Bit::IsZeroOne()
	{
		
			if (Bits[0] == true && Bits[1] == false)
			{
				return true;
			}
			return false;
		
	}

	bool Bit::IsOneZero()
	{
		
			if (Bits[0] == false && Bits[1] == true)
			{
				return true;
			}
			return false;
		
	}

	bool Bit::IsOneOne()
	{
		
			if (Bits[0] == true && Bits[1] == true)
			{
				return true;
			}
			return false;
		
	}

	QuantumAtamata::QuantumAtamata(int r0, int m0, int k0) : LearningKrinskyAtamata(r0, m0, k0)
	{
		InitializeInstanceFields();
		
			for (int i = 0; i < 3; i++)
			{
				BitState[i] = new Bit();
				ThreeSet[i] = new LearningKrinskyAtamata(r0, m0, k0);
			}
			States.clear();
			r = r0;
			m = m0;
			k = k0;
			FirstProbibility = new double[r];
			SecondProbibility = new double[r];
			ThirdProbibility = new double[r];
		
	}

	void QuantumAtamata::CurrenStateInitialize()
	{
		
			A1 = FirstAtamataState();
			A2 = SecondAtamataState();
			A3 = ThirdAtamataState();
			AA = StringConverterHelper::toString(A1);
			AB = StringConverterHelper::toString(A2);
			AC = StringConverterHelper::toString(A3);
			if (A1 == 0)
			{
				AA = "|0>,";
			}
			else
			{
				if (A1 == 1)
				{
				AA = "|1>,";
				}
			else
			{
					if (A1 == 2)
					{
				AA = "|2>+|3>,";
					}
			}
			}
			if (A2 == 0)
			{
				AB = "|0>,";
			}
			else
			{
				if (A2 == 1)
				{
				AB = "|1>,";
				}
			else
			{
					if (A2 == 2)
					{
				AB = "|2>+|3>,";
					}
			}
			}
			if (A3 == 0)
			{
				AC = "|0>,";
			}
			else
			{
				if (A3 == 1)
				{
				AC = "|1>,";
				}
			else
			{
					if (A3 == 2)
					{
				AC = "|2>+|3>,";
					}
			}
			}
			CurrentState = AA + AB + AC;
			//  CurrentStateByte = System.Convert.ToByte(CurrentState, 2);
			States.push_back(CurrentState);
			//   StateByte.Add(CurrentStateByte);
			if (A1 == 2)
			{
				if (A2 == 2)
				{
					if (A3 == 2)
					{
						NumberActiveAtamata = 1;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = (ThreeSet[0].alpha[i] + ThreeSet[1].alpha[i] + ThreeSet[2].alpha[i]) / 3.0;
						}
					}
					else
					{
						NumberActiveAtamata = 2;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = (ThreeSet[0].alpha[i] + ThreeSet[1].alpha[i]) / 2.0;
							SecondProbibility[i] = ThreeSet[2].alpha[i];
						}
					}
				}
				else
				{
					if (A3 == 2)
					{

						NumberActiveAtamata = 2;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = (ThreeSet[0].alpha[i] + ThreeSet[2].alpha[i]) / 2.0;
							SecondProbibility[i] = ThreeSet[1].alpha[i];
						}
					}
					else
					{

						NumberActiveAtamata = 3;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = ThreeSet[0].alpha[i];
							SecondProbibility[i] = ThreeSet[1].alpha[i];
							ThirdProbibility[i] = ThreeSet[2].alpha[i];
						}
					}
				}
			}
			else
			{
				if (A2 == 2)
				{
					if (A3 == 2)
					{
						NumberActiveAtamata = 2;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = (ThreeSet[1].alpha[i] + ThreeSet[2].alpha[i]) / 2.0;
							SecondProbibility[i] = ThreeSet[0].alpha[i];
						}
					}
					else
					{
						NumberActiveAtamata = 3;
						for (int i = 0; i < r; i++)
						{
							FirstProbibility[i] = ThreeSet[1].alpha[i];
							SecondProbibility[i] = ThreeSet[0].alpha[i];
							ThirdProbibility[i] = ThreeSet[2].alpha[i];
						}
					}
				}
				else
				{
					if (A3 == 2)
					{
					NumberActiveAtamata = 3;
					for (int i = 0; i < r; i++)
					{
						FirstProbibility[i] = ThreeSet[2].alpha[i];
						SecondProbibility[i] = ThreeSet[0].alpha[i];
						ThirdProbibility[i] = ThreeSet[1].alpha[i];
					}
					}
				else
				{
					NumberActiveAtamata = 3;
					for (int i = 0; i < r; i++)
					{
						FirstProbibility[i] = ThreeSet[0].alpha[i];
						SecondProbibility[i] = ThreeSet[2].alpha[i];
						ThirdProbibility[i] = ThreeSet[1].alpha[i];
					}
				}
				}
			}
		
	}

	int QuantumAtamata::FirstAtamataState()
	{
		

			if (BitState[0].IsZeroZero())
			{
				//       BitState[0].SetZeroZero();
				return 0; //0 State
			}
			else
			{
			if (BitState[0].IsZeroOne())
			{
				//          BitState[0].SetZeroOne();
				return 1; //1 State
			}
			}
			// BitState[0].SetOneZero();
			return 2; //SuperPosition State
		
	}

	int QuantumAtamata::SecondAtamataState()
	{
		

			if (BitState[1].IsZeroZero())
			{
				//BitState[1].SetZeroZero();
				return 0; //0 State
			}
			else
			{
			if (BitState[1].IsZeroOne())
			{
				//      BitState[1].SetZeroOne();
				return 1; //1 State
			}
			}

			//   BitState[1].SetOneZero();
			return 2; //SuperPosition State
		
	}

	int QuantumAtamata::ThirdAtamataState()
	{
		

			if (BitState[2].IsZeroZero())
			{
				//     BitState[2].SetZeroZero();
				return 0; //0 State
			}
			else
			{
			if (BitState[2].IsZeroOne())
			{
				//        BitState[2].SetZeroOne();
				return 1; //1 State
			}
			}
			// BitState[2].SetOneZero();
			return 2; //SuperPosition State
		
	}

	void QuantumAtamata::InitializeInstanceFields()
	{
		States = std::vector<std::string>();
		StateByte = std::vector<unsigned char>();
		r = 0;
		m = 0;
		k = 0;
		NumberActiveAtamata = 3;
		FirstProbibility = 0;
		SecondProbibility = 0;
		ThirdProbibility = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		AA = "";
		AB = "";
		AC = "";
		CurrentState = "";
	}
