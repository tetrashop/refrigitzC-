﻿#include "Program.h"
#include "uci.h"

int Program::main(int argc, char *argv[])
//Main Programm.
//[STAThread]
{
	/* cuda.DeviceSynchronize();
	 HybRunner runner = HybRunner.Cuda("Hybridizer.Runtime.CUDAImports.dll").SetDistrib(1, 2);
	 GlobalMembersUci.t = new ArtificialInteligenceMove(new HybridizerRefrigitzForm();
	 runner.Wrap(GlobalMembersUci.t);
	 */
	if (GlobalMembersUci::tP == nullptr)
	{
		GlobalMembersUci::tP = new HybridizerRefrigitzForm();

		if (!GlobalMembersUci::tP->LoadP)
		{
			GlobalMembersUci::tP->Form1_Load();
		}

	}
	else
	{

		if (!GlobalMembersUci::tP->LoadP)
		{
			GlobalMembersUci::tP->Form1_Load();
		}

	}
	GlobalMembersUci::loop(argc, argv);

}

	
