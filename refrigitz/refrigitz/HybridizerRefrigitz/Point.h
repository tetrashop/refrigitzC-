#pragma once

//
//www.IranProject.Ir
//
namespace RefrigtzChessPortable
{
	class Point
	{
	public:
		Point();
		Point(int i, int j);
		int x;
		int y;

	private:
		void InitializeInstanceFields();
	};
}
