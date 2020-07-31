#include "WCharC.h"
WCharC* WCharC::Split(WCharC*src, wchar_t indstr)
{
	WCharC*str;

	int lensrc = 64;

	int lenindstr = getlenght(&indstr);
	int i = 0,j; bool Is;
	for (i = 0; i < lensrc; i++)
		for (int j = 0; j < lenindstr; j++)
		{
			Is = true;
			if (*(src->coBoard[i,j]) != indstr)
				continue;
			for (int j = 0; j < lenindstr; j++) {
				Is = Is && (*(src->coBoard[i, j]) == indstr);
			}
			if (Is&&i!=0 && j != 0) 
			{
				int h = 0;
				str = new WCharC();
				for (int ii = 0; ii < i; ii++)
					for (int jj = 0; jj < j; jj++)
					{
						str->coBoard[ii,jj] = (src->coBoard[ii, jj]);
					}
			}
		}
	return str;
}
void WCharC::Append(wchar_t **src, wchar_t dst)
{
	for (int i = 0; i < 64; i++)
	{

		src[Length, i] = &dst;

	}
	Length++;
	return;
}
void WCharC::Append(wchar_t **src, wchar_t dst, int len)
{
	//int lensrc = getlenght(src);
	for (int h = 0; h < 64; h++)
		{
			*src[Length, h] = dst;
		}
	return;
}
void WCharC::Append(wchar_t **src, std::string dst)
{
	//int lensrc = getlenght(src);
	*src = new wchar_t[64];

	for (int i = 0; i < 64; i++) {
		src[i] = new wchar_t[64];
		for (int h = 0; h < (int)dst.length; h++)
		{
			*src[i, h] << ((dst.c_str()[h])) ;
		}
	}
	return;
}
int WCharC::getlenght(wchar_t *src)
{
	int len = 0;
	while (src[len]!='\0')
	{
		len++;
	}
	return len;
}
