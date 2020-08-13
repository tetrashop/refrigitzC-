#pragma once

#include "LearningAtamata.h"
#include <string>
#include <stdexcept>

/*CopyRight Ramin Edjlal***************************2018*************************
 The Magic Table Game Satte Learing Quantum AtamatA->****************************
 *******************************************************************************
 */ 
	class NetworkQuantumLearningKrinskyAtamata : public LearningKrinskyAtamata
	{
	public:
		static std::wstring Root;
	private:
		static void Log(std::exception &ex);

		int r, m, k;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: LearningKrinskyAtamata[,] Netfi;
		LearningKrinskyAtamata **Netfi;


	public:
		NetworkQuantumLearningKrinskyAtamata(int r0, int m0, int k0);
		double LearningAlgorithmRegardNet(int Row, int Column);
		int IsRewardActionNet(int Row, int Column);

		double IsPenaltyActionNet(int Row, int Column);
		double LearningAlgorithmPenaltyNet(int Row, int Column);
		double LearingValue(int Row, int Column);

	private:
		void InitializeInstanceFields();
	};

