﻿#pragma once
#include "stdafx.h"

/*https://stackoverflow.com/questions/8869006/multiple-dimension-correlation-in-c-sharp*/




	class Colleralation
	{
	private:
		static double Threshold;
	public:
		static int GetCorrelationScore(bool seriesA[][8], bool **seriesB, int n, int Order);
		static int GetCorrelationScore(int seriesA[][8], int **seriesB, int n, int Order);

	private:
		static bool areEqual(double value1, double value2, double allowedVariance);


	};

