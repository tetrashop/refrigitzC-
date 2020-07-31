#pragma once

#include "QuantumAtamata.h"


	class QuantumLearningKrinskyAtamata : public QuantumAtamata
	{
	private:
		int r, k, m;
		double Alpha;
	public:
		QuantumLearningKrinskyAtamata(int r0, int m0, int k0, double Alpha0);

	private:
		void InitializeInstanceFields();
	};

