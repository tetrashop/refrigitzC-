#include "Chess.h"
#include "WCharC.h"


	Chess::Pieces Chess::pieceFromFEN(wchar_t piece)
	{
	  Pieces aPiece = Chess::Pieces::NONE;

	  switch (piece)
	  {
		case L'K':
		  aPiece = Chess::Pieces::WKING;
		  break;
		case L'Q':
		  aPiece = Chess::Pieces::WQUEEN;
		  break;
		case L'R':
		  aPiece = Chess::Pieces::WROOK;
		  break;
		case L'B':
		  aPiece = Chess::Pieces::WBISHOP;
		  break;
		case L'N':
		  aPiece = Chess::Pieces::WKNIGHT;
		  break;
		case L'P':
		  aPiece = Chess::Pieces::WPAWN;
		  break;
		case L'k':
		  aPiece = Chess::Pieces::BKING;
		  break;
		case L'q':
		  aPiece = Chess::Pieces::BQUEEN;
		  break;
		case L'r':
		  aPiece = Chess::Pieces::BROOK;
		  break;
		case L'b':
		  aPiece = Chess::Pieces::BBISHOP;
		  break;
		case L'n':
		  aPiece = Chess::Pieces::BKNIGHT;
		  break;
		case L'p':
		  aPiece = Chess::Pieces::BPAWN;
		  break;
	  }
	  return aPiece;
	}

	wchar_t Chess::pieceToNotation(Chess::Pieces piece)
	{
	  wchar_t aPiece = L' ';
	  switch (piece)
	  {
		case Chess::Pieces::WKING:
		case Chess::Pieces::BKING:
		  aPiece = L'K';
		  break;
		case Chess::Pieces::WQUEEN:
		case Chess::Pieces::BQUEEN:
		  aPiece = L'Q';
		  break;
		case Chess::Pieces::WROOK:
		case Chess::Pieces::BROOK:
		  aPiece = L'R';
		  break;
		case Chess::Pieces::WBISHOP:
		case Chess::Pieces::BBISHOP:
		  aPiece = L'B';
		  break;
		case Chess::Pieces::WKNIGHT:
		case Chess::Pieces::BKNIGHT:
		  aPiece = L'N';
		  break;
		case Chess::Pieces::WPAWN:
		case Chess::Pieces::BPAWN:
		  aPiece = L'P';
		  break;
	  }
	  return aPiece;
	}

