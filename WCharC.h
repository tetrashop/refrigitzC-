#pragma once
#include "stdafx.h"

class WCharC
{
public:
	WCharC* Split(WCharC*src ,wchar_t indstr);
	void Append(wchar_t ** src, wchar_t dst);
	void Append(wchar_t ** src, wchar_t  dst, int len);
	void Append(wchar_t ** src, std::wstring dst);
	int getlenght(wchar_t *src);

	int Length;
	wchar_t **coBoard;
};