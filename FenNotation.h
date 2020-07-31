#pragma once
//#include "stdafx.h"
//#
//#include "Chess.h"
//#
#include <string>
#include <cctype>
#include <stdexcept>
#include "WCharC.h"
/*
                 \\|//
                 (o o)
--------------ooO-(_)-Ooo--------------
 Copyright 2004 By Gregory A-> Prentice
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
  /// For reference see: "Portable Game Notation Specification 
  /// and Implementation Guide"  section 16.1: FEN.  
  /// </summary>
  class FenNotation 
  {
	public:
		std::string move;
		bool WK;
		bool WQ;
		bool BK;
		bool BQ;
		WCharC coBoard;
		/// <summary>
		/// Holds our board position based on squares 0 thru 63.
		/// </summary>
	private:
		

	//typedef void (*placePiece)(Chess::Pieces piece, int square);
//C# TO C++ CONVERTER TODO TASK: There is no direct equivalent to .NET events in native C++:
	//public event placePiece EventPlacePiece;

	/// Defines the color hooks that allow call back to set who's move it is.
	typedef void (*setColor)(bool bColor);
//C# TO C++ CONVERTER TODO TASK: There is no direct equivalent to .NET events in native C++:
//	public event setColor EventSetColor;

	typedef void (*setCastling)(bool WK, bool WQ, bool BK, bool BQ);
//C# TO C++ CONVERTER TODO TASK: There is no direct equivalent to .NET events in native C++:
//	public event setCastling EventSetCastling;

	typedef void (*finished)();
//C# TO C++ CONVERTER TODO TASK: There is no direct equivalent to .NET events in native C++:
//	public event finished EventFinished;


	/// <summary>
	/// The color to move given the current position.
	/// Must be 'w' or 'b'.
	/// </summary>
public:
  const wchar_t &getColor() const;
  void setColor(const wchar_t &value);
private:
	wchar_t coActiveColor;

	/// <summary>
	/// If true then white can still castle king side.
	/// </summary>
public:
  const bool &getWhiteCastleKing() const;
  void setWhiteCastleKing(const bool &value);
private:
	bool coWKCastle;

	/// <summary>
	/// If true then white can still castle queen side.
	/// </summary>    
public:
  const bool &getWhiteCastleQueen() const;
  void setWhiteCastleQueen(const bool &value);
private:
	bool coWQCastle;

	/// <summary>
	/// If true then black can still castle king side.
	/// </summary>
public:
  const bool &getBlackCastleKing() const;
  void setBlackCastleKing(const bool &value);
private:
	bool coBKCastle;

	/// <summary>
	/// If true then black can still castle queen side.
	/// </summary>
public:
  const bool &getBlackCastleQueen() const;
  void setBlackCastleQueen(const bool &value);
private:
	bool coBQCastle;

	/// <summary>
	/// Algebraic square for enpassant captures or '-'.
	/// </summary>
public:
  const std::string &getEnpassant() const;
  void setEnpassant(const std::string &value);
private:
	std::string coEnPassant;

	/// <summary>
	/// Number of half moves to determine the 50 move rule.
	/// </summary>
public:
  const int &getHalfMoves() const;
  void setHalfMoves(const int &value);
private:
	int coHalfMove;

	/// <summary>
	/// Number of completed move cycles, i.e. after black moves.
	/// </summary>
public:
  const int &getFullMoves() const;
  void setFullMoves(const int &value);

  wchar_t * operator*(int ndx);
 
private:
	int coFullMove;

	/// <summary>
	/// Indexer into the board.  Returns an upper case character for white and
	/// a lower case character for black.  The index number equals the board
	/// square.  Characters are 'PKQNBR' for white and 'pkqnbr' for black.
	/// </summary>
public:
	wchar_t *operator [](int ndx);

	/// <summary>
	/// Constructs a class by parsing a FEN notation string.
	/// </summary>
	/// <param name="str">A valid FEN notation data string</param>
	FenNotation(const std::string &str);

	/// <summary>
	/// Constructs a default FEN notation object with the board cleared,
	/// all castling available, white to move.
	/// </summary>
	FenNotation();

	/// <summary>
	/// Clears the notation to an empty board, white to move, all castling available.
	/// </summary>
	void clear();


	/// <summary>
	/// Creates our FEN notation string.
	/// </summary>
	/// <returns>FEN notation</returns>
	/*virtual std::string ToString() override;
		/// <summary>
		/// Parses our FEN notation into our class.
		/// For example: rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1
		/// </summary>
		/// <param name="str"></param>*/
		void parse(const std::string &str);
	/*void addEvents(IPositionEvents *ievents);
	void removeEvents(IPositionEvents *ievents);
	*/

  private:
	  void InitializeInstanceFields();
  };

