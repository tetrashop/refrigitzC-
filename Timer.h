#pragma once
#include "stdafx.h"
#include <string>
#include <stdexcept>


/**************************************************************************
 * Ramin Edjlal.***********************************************************
 * Timer is Working Reversely***********************************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Order Decreasing Not Work!*****************************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Not Worked.********************************************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Scheduling For Regard and Set Point Malfunctions.******************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Set Point of Text Malfunctioned.***********************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Thinking Finished Begin At New Time Text Box.****************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Changing Start Stop Function Failed.*******************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer MalFunction.*******************************************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Visual Studio Timer and Visualization du to Internet Access Malfunction**RS*****0.12**4**Managements and Cuation Programing**(+)
 * Dynamic Timer AStarGreedyt. First Increment or Decrement Malfunction.************RS*****0.12**4**Managements and Cuation Programing**(+)
 * No Logically Idea For Managements of Dynamic AStarGreedyt. First Max AStarGreedyt.*******RS*****0.12**4**Managements and Cuation Programing**(+)
 * Timer Malfunction When Leave Foreground The Program.*********************RS*****0.12**4**Managements and Cuation Programing**(+)
 * Divison By Zero No Reasonly.*********************************************RS*****0.12**4**Managements and Cuation Programing**(+)
 * 1395/1/16***************************************************************
 * Timer Not Worked.********************************************************RS*****0.12**4**Managements and Cuation Programing**(+):(Not Set in this instatnt of analysis:Similarity is act.)
 * ************************************************************************/







//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [Serializable] public class Timer
	class Timer
	{
	public:
		static bool TimeEndAllow;

		bool TimeEnd;
	private:
		std::string Name;
		//Initiate Variables. static and local for three timer.
	public:
		static int StoreAllDrawCount;
		static bool UseDoubleTime;
		static long long AStarGreedytiLevelMax;
		static bool AStarGreadyFirstSearch;
	private:
		long long ConstTimer;
		double AStarGreedytMidleTimer;
		long long AStarGreedytLastTime;
	public:
		static bool Text;
		long long Times;
	private:
		long long TimesBegin;
	public:
		bool EndTime;
		
	public:
		bool Paused;
		bool TextChanged;
		int Sign;
	private:
		bool Infinity;
		int order;
		static void Log(std::exception &ex);
		//Constructive Tow Kind of Timer. Decreased timer and Incresed timer.
	public:
		Timer(int ord, bool SignPositive = true);
		//Initiate Timer.
		void TimerInitiate(const std::string &N);
		//Main Timer of Threading.
	private:
		void TimerThread();
		//Access to Private Timer Value of Long.
	public:
		const long long &getTimesAccess() const;
		void setTimesAccess(const long long &value);


		const long long &getTimesConstAccess() const;
		void setTimesConstAccess(const long long &value);


		//AStarGreedyt First MAx Level Condition checked.
		int AStarGreedytiLevelMaxInitiate(Timer *TimerColor, int AStarGreedyti);
		//Set AStarGreedyt First Level Max Variables.
		void SetAStarGreedytTimer();
		//Cal Midle (Avarage) AStarGreedyt First Some static variables.
		void MidleAStarGreedytTimer(int AStarGreedyti);
		//Strat timer function.
		void StartTime(const std::string &N);

		//Stop Timer.
		void StopTime();
		std::string ReturnTime();

	private:
		void InitializeInstanceFields();
	};

