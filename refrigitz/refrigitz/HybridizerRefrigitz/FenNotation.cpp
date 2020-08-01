#include "stdafx.h"
#include "FenNotation.h"
#include "Chess.h"
	const wchar_t &FenNotation::getColor() const
	{
		return coActiveColor;
	}

	void FenNotation::setColor(const wchar_t &value)
	{
	  if (value == L'w' || value == L'b')
	  {
		coActiveColor = value;
	  }
	  else
	  {
		//th[So2]. std::exception("Specify: 'w' or 'b'");
	  }
	}

	const bool &FenNotation::getWhiteCastleKing() const
	{
		return coWKCastle;
	}

	void FenNotation::setWhiteCastleKing(const bool &value)
	{
		coWKCastle = value;
	}

	const bool &FenNotation::getWhiteCastleQueen() const
	{
		return coWQCastle;
	}

	void FenNotation::setWhiteCastleQueen(const bool &value)
	{
		coWQCastle = value;
	}

	const bool &FenNotation::getBlackCastleKing() const
	{
		return coBKCastle;
	}

	void FenNotation::setBlackCastleKing(const bool &value)
	{
		coBKCastle = value;
	}

	const bool &FenNotation::getBlackCastleQueen() const
	{
		return coBQCastle;
	}

	void FenNotation::setBlackCastleQueen(const bool &value)
	{
		coBQCastle = value;
	}

	const std::string &FenNotation::getEnpassant() const
	{
		return coEnPassant;
	}

	void FenNotation::setEnpassant(const std::string &value)
	{
		coEnPassant = value;
	}

	const int &FenNotation::getHalfMoves() const
	{
		return coHalfMove;
	}

	void FenNotation::setHalfMoves(const int &value)
	{
		coHalfMove = value;
	}

	const int &FenNotation::getFullMoves() const
	{
		return coFullMove;
	}

	void FenNotation::setFullMoves(const int &value)
	{
		coFullMove = value;
	}

	wchar_t * FenNotation::operator *(int ndx)
	{
		return  coBoard.coBoard[ndx];
	}

//C# TO C++ CONVERTER TODO TASK: You cannot specify separate 'set' logic for indexers in native C++:
//	void FenNotation::setdefault(const int &ndx, wchar_t value)
//	{
//	  std::string str = "KQRBNPkqrbnp";
//	  if(str.IndexOf(value) >= 0)
//	  {
//		coBoard.coBoard[ndx] = value;
//	  }
//	  else
//	  {
//		//th[So2]. std::exception(std::string("Invalid piece value (") + value + std::string(") use one of: ") + str);
//	  }
//	}

	FenNotation::FenNotation(const std::string &str)
	{
	  InitializeInstanceFields();
	  *coBoard.coBoard = new wchar_t(64);
	  for (int i = 0; i < 64; i++)
		  coBoard.coBoard[i] = new wchar_t(64);
	  parse(str);
	}

	FenNotation::FenNotation()
	{
	  InitializeInstanceFields();
	  *coBoard.coBoard = new wchar_t[64];
	  for(int i=0;i<64;i++)
		 coBoard.coBoard[i] = new wchar_t[64];
	  clear();
	}

	void FenNotation::clear()
	{
	  coBoard.Length = 0;
	  coBoard.Append(coBoard.coBoard,L' ', 64);
	  coEnPassant = "-";
	  coActiveColor = L'w';
	  coWKCastle = true;
	  coWQCastle = true;
	  coBKCastle = true;
	  coBQCastle = true;
	  coHalfMove = 0;
	  coFullMove = 0;
	}

/*	std::string FenNotation::ToString()
	{
	  WCharC *note = new WCharC();
	  int count = 0;

	  for (int ndx = 56;ndx >= 0;ndx -= 8)
	  {
		count = 0;
		for (int cnt = 0;cnt < 8;cnt++)
		{
		  wchar_t* achar = coBoard.coBoard[ndx , cnt];
		  if (*achar == L' ')
		  {
			count++;
		  }
		  else
		  {
			if (count > 0)
			{
			  note->Append(note->coBoard, StringConverterHelper::toString(count));
			}
			count = 0;
			note->Append(note->coBoard,*achar);
		  }
		}

		if (count > 0)
		{
			note->Append(note->coBoard, StringConverterHelper::toString(count));
		}
		if (ndx != 0)
		{
		  note->Append(note->coBoard, L'/');
		}
	  }

	  note->Append(note->coBoard, L' ');
	  note->Append(note->coBoard, coActiveColor);
	  note->Append(note->coBoard, L' ');

	  if (coWKCastle)
	  {
		note->Append(note->coBoard, L'K');
	  }
	  if (coWQCastle)
	  {
		note->Append(note->coBoard, L'Q');
	  }
	  if (coBKCastle)
	  {
		note->Append(note->coBoard, L'k');
	  }
	  if (coBQCastle)
	  {
		note->Append(note->coBoard, L'q');
	  }

	  note->Append(note->coBoard, L' ');
	  note->Append(note->coBoard, coEnPassant);
	  note->Append(note->coBoard, L' ');
	  note->Append(note->coBoard, StringConverterHelper::toString(coHalfMove));
	  note->Append(note->coBoard, L' ');
	  note->Append(note->coBoard, StringConverterHelper::toString(coFullMove));

//C# TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'ToString':
	  return note->ToString();
	}
	*/
	void FenNotation::parse(const std::string &str)
	{
		// Clear all current settings.
		clear();
		int ndx = 56;
		int cnt = 0;
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: string* note = str.Split(' ');
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		WCharC *note = new WCharC();
		note=note->Split(note, L' ');

		// 16.1.3.1: Parse piece placement data
//C# TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, C# to C++ Converter has converted this array to a pointer.  You will need to call 'delete*' where appropriate:
//ORIGINAL LINE: string* row = note->Split('/');
//C# TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to this .NET String method:
		WCharC *row = new WCharC();
		row = note->Split(row, L'/');

		if (row->Length != 8)
		{
			//throw ArgumentException(std::string("Invalid board specification, ") + row->Length + std::string(" ranks are defined, there should be 8."));
		}

		for (int i=0;i<row->Length;i++)
		{
			cnt = 0;
			for (int j=0;j<64;j++)
			{
				wchar_t achar = *row->coBoard[i, j];
				if (achar >= L'0' && achar <= L'9')
				{
					cnt += static_cast<int>(achar - L'0');
				}
				else
				{
					if (Chess::pieceFromFEN(achar) != Chess::Pieces::NONE)
					{
						if (cnt > 7) //This check needed here to avoid overrunning index below under some error conditions.
						{
							//throw ArgumentException(std::string("Invalid board specification, rank ") + (ndx / 8 + 1) + std::string(" has more then 8 items specified."));
						}
						EventPlacePiece(Chess::pieceFromFEN(achar), ndx + cnt);
						this->operator*(ndx + cnt) = &achar;
					}
					cnt++;
				}
			}

			if (cnt == 0) // Allow null lines = /8/
			{
				cnt += 8;
			}

			if (cnt != 8)
			{
				//throw ArgumentException(std::string("Invalid board specification, rank ") + (ndx / 8 + 1) + std::string(" has ") + cnt + std::string(" items specified, there should be 8."));
			}

			ndx -= 8;
		}

		if (note->Length >= 2)
		{
			// 16.1.3.2: Parse active color
			if (note[1].getlenght() > 0)
			{
				wchar_t colorchar = tolower(note->coBoard[1][0]);
				if (colorchar==(L'w') || colorchar==(L'b'))
				{
					setColor(colorchar);
					//EventSetColor(colorchar==(L'w') ? true : false);
				}
				else
				{
					//throw ArgumentException("Invalid color designation, use w or b as 2nd field separated by spaces.");
				}

				if (note->coBoard[1]->getlenght() != 1)
				{
					//throw ArgumentException(std::string("Invalid color designation, 2nd field is ") + note[1].length() + std::string(" chars long, only 1 allowed."));
				}
			}
		}

		// 16.1.3.3: Parse castling availability
		 WK = false;
		 WQ = false;
		 BK = false;
		 BQ = false;

		if (note->Length >= 3)
		{
			for (int i=0;i<3;i++)
			{
				wchar_t achar =*( note->coBoard[2, i]);
				switch (achar)
				{
					case L'K':
						WK = true;
						break;
					case L'Q':
						WQ = true;
						break;
					case L'k':
						BK = true;
						break;
					case L'q':
						BQ = true;
						break;
					case L'-':
						break;
					default:
						throw std::exception("Invalid castle privileges designation, use: KQkq or -");
				}
			}
		}
		EventSetCastling(WK, WQ, BK, BQ);

		try
		{
			if (note->Length >= 4)
			{
				// 16.1.3.4: Parse en passant target square such as "e3"
				coEnPassant = note[3];
				move = coEnPassant;
			}

			if (note->Length >= 5)
			{
				// 16.1.3.5: Parse halfmove c//lock, count of half-move since last pawn advance or unit capture
				coHalfMove = static_cast<short>(note->coBoard[4]);
			}

			if (note->Length >= 6)
			{
				// 16.1.3.6: Parse fullmove number, increment after each black move
				coFullMove = static_cast<short>(note[5]);
			}
		}
		catch (...)
		{
		}

		//EventFinished();
	}

	

	void FenNotation::InitializeInstanceFields()
	{
		move = "";
		WK = false;
		WQ = false;
		BK = false;
		BQ = false;
		coActiveColor = L'\0';
		coWKCastle = false;
		coWQCastle = false;
		coBKCastle = false;
		coBQCastle = false;
		coHalfMove = 0;
		coFullMove = 0;
	}

