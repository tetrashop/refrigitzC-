#pragma once
#include "stdafx.h"
#include "WCharC.h"
/*
                 \\|//
                 (o o)
--------------ooO-(_)-Ooo--------------
 Copyright 2004 By Gregory A. Prentice
                      Ooo.
--------------.ooO----(  )-------------
              (  )    (_/
               \_)
If you wish to use this code in any part
I request that you simply let me know where
and give the author credit for his work.
gregoryprentice@comcast.net
www.cafechess.org
*/


  /// <summary>
  /// Defines some basic constants and conversion routines.
  /// </summary>
  class Chess
  {
public:
	enum class Pieces
	{
	  NONE,
	  WKING,
	  WQUEEN,
	  WROOK,
	  WBISHOP,
	  WKNIGHT,
	  WPAWN,
	  BKING,
	  BQUEEN,
	  BROOK,
	  BBISHOP,
	  BKNIGHT,
	  BPAWN,
	  OPENHAND,
	  CLOSEDHAND
	};
public:
	enum class Operation
	{
	  NONE,
	  MOVE,
	  ADD,
	  DELETE
	};

public:
Chess::Pieces pieceFromFEN(wchar_t piece);
	static wchar_t pieceToNotation(Chess::Pieces piece);
  };

