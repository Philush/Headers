#include "MyString.h"

unsigned int strLen(const char* str)
{
	int result = 0;
	while (*str++)
	{
		result++;
	}
	return result;
}

void strCpy(char* dest, const char* source) // копирует вторую строку в первую (source -> destination)
{
	int i = 0;

	do
	{
		dest[i] = *source;
		i++;
	}
	while (*source++);
}

void strCat(char* dest, const char* source) // объединяет две строки в одну. результат оказывается в dest
{

	int n = strLen(dest);
	int i = 0;
	do
	{
		dest[i + n] = *source;
		i++;
		
	} while (*source++);
}

void strReverse(char* str) // разворот строки в обратную сторону
{
	char* StrReverse = new char;
	strCpy(StrReverse, str);

	int i = strLen(str) - 1;
	int j = 0;
	while (i >= 0)
	{
		str[j] = StrReverse[i];
		i--;
		j++;
	}

	delete StrReverse;
}

void strToUpper(char* str) // все символы представить в верхнем регистре
{
	char strUp[27]{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	char strLow[27]{ "abcdefghijklmnopqrstuvwxyz" };
	int len = strLen(strUp);

	do
	{
		for (int i = 0; i < 27; i++)
		{
			if (str[0] == strLow[i])
			{
				str[0] = strUp[i];
			}
		}

	} while (*str++);
}

void strToLower(char* str) // в нижнем
{
	char strUp[27]{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	char strLow[27]{ "abcdefghijklmnopqrstuvwxyz" };
	int len = strLen(strUp);

	do
	{
		for (int i = 0; i < 27; i++)
		{
			if (str[0] == strUp[i])
			{
				str[0] = strLow[i];
			}
		}

	} while (*str++);
}

int strStr(const char* str, const char* substr) // возвращает индекс первого вхождения подстроки substr в str, если вхождений нет, то -1
{
	int Index = -1;
	int lenStr = strLen(str);
	int lenSub = strLen(substr);

	if (lenSub > lenStr)			// если строка меньше подстроки
	{
		return Index;
	}

	for (int i = 0; i <= (lenStr - lenSub); i++)
	{
		int check = 0;

		for (int j = 0; j < lenSub; j++)
		{
			if (substr[j] == str[i + j])
			{
				check++;
			}
			else 
			{
				break;
			}
		}

		if (check == lenSub)
		{
			return i;
		}

	}

	return Index;
}

int strCmp(const char* str1, const char* str2) // возвращает 0, если равны, 1, если первая больше, -1 если вторая больше.
{
	int lenStr1 = strLen(str1);
	int lenStr2 = strLen(str2);

	if (lenStr1 > lenStr2)
	{
		return 1;
	}
	if (lenStr1 < lenStr2)
	{
		return -1;
	}

	for (int i = 0; i < lenStr1; i++)
	{
		return (int)(str1[i]) > (int)(str2[i]) ? 1 : -1;
	}

	return 0;
}