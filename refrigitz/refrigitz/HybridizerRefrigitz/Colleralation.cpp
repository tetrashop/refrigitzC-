#include "stdafx.h"
#include "Colleralation.h"



double Colleralation::Threshold = 0.2;

	int Colleralation::GetCorrelationScore(bool ** seriesA, bool ** seriesB, int n, int Order)
	{
		int correlationScore = 0;

		for (int  i = 0; i < n; i++) //seriesA->Length
		{
			bool A = true;
			for (int  j = 0; j < n; j++)
			{
				if (Order == 1 && seriesA[i][j])
				{
					A = areEqual(static_cast<double>(seriesA[i][j]), static_cast<double>(seriesB[i][j]), Threshold);
					if (A)
					{
						correlationScore++;
					}
				}
				else
				{
					if (Order == -1 && (!seriesA[i][j]))
					{
						A = areEqual(static_cast<double>(seriesA[i][j]), static_cast<double>(seriesB[i][j]), Threshold);
						if (A)
						{
							correlationScore++;
						}
					}
				}
			}
		}
		return correlationScore;
	}

	int Colleralation::GetCorrelationScore(int ** seriesA, int ** seriesB, int n, int Order)
	{
		int correlationScore = 0;

		for (int  i = 0; i < n; i++) //seriesA->Length
		{
			bool A = true;
			for (int  j = 0; j < n; j++)
			{
				if (Order == 1 && seriesA[i][j] > 0)
				{
					A = areEqual(static_cast<double>(seriesA[i][j]), static_cast<double>(seriesB[i][j]), Threshold);
					if (A)
					{
						correlationScore++;
					}
				}
				else
				{
						if (Order == -1 && seriesA[i][j] < 0)
						{
							A = areEqual(static_cast<double>(seriesA[i][j]), static_cast<double>(seriesB[i][j]), Threshold);
						if (A)
						{
							correlationScore++;
						}
						}
				}
			}
		}
		return correlationScore;
	}

	bool Colleralation::areEqual(double value1, double value2, double allowedVariance)
	{
		//auto lowValue1 = value1 - allowedVariance;
		//auto highValue1 = value1 + allowedVariance;

		return (lowValue1 < value2 && highValue1 > value2);
	}

