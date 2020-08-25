﻿#pragma once

/******************************************************************************
 * Ramin Edjlal Copyrights 2015.************************************************
 * Learning AutamatA->**********************************************************
 * The every sum of probability == one.****************************************(*_)
 * four formula .tow for Regard regime and tow for penalty regime.***************(-)
 * Derived Quantum Automata Penalty All Objects of Derived Automata************(-)
 * Malfunction Reward and Penalty Detection**********************************(_*)
 * Penalty Reward Action Failure************************************************(*_)
 * M==tuning of Penalty and Regard Data in ==Regard and IsPenalty Values*******(+)
 * No Reason For Malfunction of Reward and Penalty Mechan==m******************(_)
 * 1395/1/2********************************************************************(*:Sum(3)) (_:Sum(4)) (-:Sum(2)) (All Errors:(7))
 * Penalty Regard Action == Useful For One Time Per AllDraw Object.************
 * No Solution to Overcome to static Behavior Of Quantum Variables Inhererete.*
 ******************************************************************************/




//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class LearningKrinskyAtamata
	class LearningKrinskyAtamata
	{
	private:
		int r;
		int m;
		int k;
	public:
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: public double[] alpha;
		double *alpha;
	private:
		bool beta;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: double[] fi;
		double *fi;
	public:
		bool IsReward;
		bool IsPenalty;
	protected:
		double Reward;
		double Penalty;
		int Success, Failer;
		int State;
		//int State = 1;
	public:
		void Initiate();
		LearningKrinskyAtamata()
		{}
		LearningKrinskyAtamata(int r0, int m0, int k0);
		
		void FailureState();
		void SuccessState();
		int IsSecondDerivitionIsPositive();
		double LearningAlgorithmRegard();
		int IsRewardAction();

		double IsPenaltyAction();
		double LearningAlgorithmPenalty();

	private:
		void InitializeInstanceFields();
	};
