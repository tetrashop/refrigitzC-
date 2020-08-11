#include "Timer.h"
#include "AllDraw.h"



bool Timer::TimeEndAllow = false;
int Timer::StoreAllDrawCount = 0;
bool Timer::UseDoubleTime = false;
long long Timer::AStarGreedytiLevelMax = 0;
bool Timer::AStarGreadyFirstSearch = false;
bool Timer::Text = false;

	

	Timer::Timer(int ord, bool SignPositive = true)
	{

		InitializeInstanceFields();
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			//For Infinity Timer until end.
			if (SignPositive)
			{
				TimeEndAllow = false;
				Times = 0;
				Sign = 1;
				Infinity = true;
				order = ord;
				TimeEnd = false;
				t = new Thread(new ThreadStart(TimerThread));

				t->Start();
			}
		}

	}

	void Timer::TimerInitiate(const std::wstring &N)
	{
		Name = N;
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			//t = new Thread(new ThreadStart(TimerThread);
			//t.Start();
		}
	}

	void Timer::TimerThread()
	{

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{


				if (order == 1)
				{
				if (AllDraw::winc == 0)
				{
					return;
				}

				do
				{ //When timer stop sleep and checked for 500 ms.

					//When timr begin store current time.
					long long t1 = DateTime::Now.Hour * 60 * 60 * 1000 + DateTime::Now.Minute * 60 * 1000 + DateTime::Now.Second * 1000;

					do
					{
					 //   System.Threading.Thread.Sleep(AllDraw.winc);
					}
					//Cal for every 1 second.
					while (DateTime::Now.Hour * 60 * 60 * 1000 + DateTime::Now.Minute * 60 * 1000 + DateTime::Now.Second * 1000 - t1 < AllDraw::winc);
					Times = Times + AllDraw::winc * Sign;
				} while (Times < AllDraw::wtime);
				do
				{
				} while (!TimeEndAllow);
				TimeEnd = true;

				}
			//Dec of inc one second.                    }
			else
			{ //When timer stop sleep and checked for 500 ms.
				if (AllDraw::binc == 0)
				{
					return;
				}

				do
				{ //When timr begin store current time.
					long long t1 = DateTime::Now.Hour * 60 * 60 * 1000 + DateTime::Now.Minute * 60 * 1000 + DateTime::Now.Second * 1000;


					do
					{
						//System.Threading.Thread.Sleep(AllDraw.binc);
					}
					//Cal for every 1 second.
					while (DateTime::Now.Hour * 60 * 60 * 1000 + DateTime::Now.Minute * 60 * 1000 + DateTime::Now.Second * 1000 - t1 < AllDraw::binc);
					Times = Times + AllDraw::binc * Sign;
				} while (Times < AllDraw::btime);
				do
				{
				} while (!TimeEndAllow);
				TimeEnd = true;
			}
			//Local Variabe of Timer changed.
			TextChanged = true;

				//While  Condition is true for operations. 
		}

		//Indicating of end timer.
		EndTime = true;
	}

	const long long &Timer::getTimesAccess() const
	{
		return Times;
	}

	void Timer::setTimesAccess(const long long &value)
	{
		Times = value;
	}

	const long long &Timer::getTimesConstAccess() const
	{
		return ConstTimer;
	}

	void Timer::setTimesConstAccess(const long long &value)
	{
		ConstTimer = value;
	}

	int Timer::AStarGreedytiLevelMaxInitiate(Timer *TimerColor, int AStarGreedyti)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			//int PowerEx = 4;
			int Increase = 0; //Initaiate
			Increase = 1;
			//When Ok.
			if (Sign != 1)
			{
				/*if ((System.Math.Pow((AStarGreedytiLevelMax - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx) + System.Math.Pow(TimerColor.TimesAccess, PowerEx) > System.Math.Pow((AStarGreedytiLevelMax - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx) + System.Math.Pow((AStarGreedyti - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx)))
				{
				    Increase = 1;
	
				}
				else//When is Cancled.
				{
				    if ((System.Math.Pow((AStarGreedytiLevelMax - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx) + System.Math.Pow(TimerColor.TimesAccess, PowerEx) < System.Math.Pow((AStarGreedytiLevelMax - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx) + System.Math.Pow((AStarGreedyti - StoreAllDrawCount) * AStarGreedytMidleTimer, PowerEx)))
				    {
				        Increase = -1;
				    }
				}*/
				if (Times - 120000 < 0)
				{
					Increase = -1;
				}
				else
				{
					Increase = 1;
				}
				//Value
			}
			return Increase;
		}
	}

	void Timer::SetAStarGreedytTimer()
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			if (AStarGreedytLastTime == 0)
			{
				AStarGreedytLastTime = 0;
			}
			else
			{
				AStarGreedytLastTime = Times - AStarGreedytLastTime;
			}
			if (StoreAllDrawCount == 0)
			{
				AStarGreedytMidleTimer = 0;
			}
		}
	}

	void Timer::MidleAStarGreedytTimer(int AStarGreedyti)
	{
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{

				long long Dummy = AStarGreedytLastTime;
				AStarGreedytLastTime = Times - AStarGreedytLastTime;
				//Division By Zero No Reasonaly.
				AStarGreedytMidleTimer = ((Dummy * (AStarGreedyti - StoreAllDrawCount)) + AStarGreedytLastTime) / ((AStarGreedyti - StoreAllDrawCount + 1));

		}
	}

	void Timer::StartTime(const std::wstring &N)
	{
		TextChanged = true;
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			TimerInitiate(N);

			if (Sign != 1)
			{
				//Resume Suspended MAin Thread.

				//When Begin Timer Valuee is Zero cal.
				if (TimesBegin == 0)
				{
					TimesBegin = DateTime::Now.Hour * 3600000 + DateTime::Now.Minute * 60000 + DateTime::Now.Second * 1000 + DateTime::Now.Millisecond;
				}
			}
			//Set to Thread Paused.
			Paused = false;
		}
	}

	void Timer::StopTime()
	{
		//Thread.Sleep(1000);

		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			if (Sign != 1)
			{
				//When AStarGreedyt First is not act or Double time is not act.
				if (!AStarGreadyFirstSearch || !UseDoubleTime)
				{
					//Cal Remaining timer value.
					long long Remaining = Times;
					//When Remaining timer is greter than zero.
					if (Remaining > 0)
					{
						Remaining = 0;
					}
					//When Regrad timer is valuable.
					if ((DateTime::Now.Hour * 3600000 + DateTime::Now.Minute * 60000 + DateTime::Now.Second * 1000 + DateTime::Now.Millisecond - TimesBegin) < 5000)
					{
						Times = 5 * 60 * 1000 + 60000 + Remaining;
					}
					else
					{
						Times = 5 * 60 * 1000 + Remaining;
					}
					//Const timer value.
					ConstTimer = 5 * 60 * 1000 + Remaining;
				}
				else
				{
					//Same as else.
					long long Remaining = Times;
					if (Remaining > 0)
					{
						Remaining = 0;
					}

					if ((DateTime::Now.Hour * 3600000 + DateTime::Now.Minute * 60000 + DateTime::Now.Second * 1000 + DateTime::Now.Millisecond - TimesBegin) < 10000)
					{
						Times = 10 * 60 * 1000 + 60000 + Remaining;
					}
					else
					{
						Times = 10 * 60 * 1000 + Remaining;
					}
					ConstTimer = 10 * 60 * 1000 + Remaining;
				}
				TimesBegin = 0;
				Paused = true;
				//Suspend timer.
				t->Abort();
			}
			Paused = true;
			TextChanged = false;
		}
	}
	/*
	std::wstring Timer::ReturnTime()
	{
		//Cal and return timer string.
		////auto o = new Object();
//C# TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
		////lock (o)
		{
			long long T = Times;
			//Cal and return timer string.
			std::wstring Houre = L"0";
			if (T >= 3600000)
			{

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
				Houre = ((static_cast<long long>(T / 3600000))).ToString();
				T = (T - static_cast<long long>(T / 3600000) * 3600000);
			}
			std::wstring Minute = L"0";
			if (T >= 60000)
			{

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
				Minute = ((static_cast<long long>(T / 60000))).ToString();
				T = (T - static_cast<long long>(T / 60000) * 60000);
			}
			std::wstring Second = StringConverterHelper::toString(T / 1000);
			return Houre + std::wstring(L":") + Minute + std::wstring(L":") + Second;
		}
	}
	*/
	void Timer::InitializeInstanceFields()
	{
		TimeEnd = false;
		Name ;
		ConstTimer = 0;
		AStarGreedytMidleTimer = 0;
		AStarGreedytLastTime = 0;
		Times = 5 * 60 * 1000;
		TimesBegin = 0;
		EndTime = false;
		Paused = true;
		TextChanged = true;
		Sign = -1;
		Infinity = false;
		order = 1;
	}

