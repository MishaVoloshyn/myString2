#include"myString.h";
#include <iostream>

using namespace std;

myString::myString()
{
	length = 80;
	str = new char[length + 1];
}

myString::myString(int size)
{
	length = size;
	str = new char[length + 1];
}

myString::myString(char* user)
{
	length = strlen(user) + 1;
	str = new char[length];
	strcpy_s(str, strlen(user) + 1, user);
}

myString::~myString()
{
	delete[]str;
}

void myString::Input()
{
	char buffer[88];
	cout << "Input your string!!!" << endl;
	cin.getline(buffer, strlen(buffer));
	length = strlen(buffer);
	str = new char[strlen(buffer) + 1];
	strcpy_s(str, strlen(buffer) + 1, buffer);
}

void myString::PrintConsole()
{
	cout << str << endl;
}

void myString::SetStr(char* userStr)
{
	str = userStr;
}

void myString::SetLen(int userLenght)
{
	length = userLenght;
}

char* myString::GetStr()
{
	return str;
}

int myString::GetLen()
{
	return length;
}



myString::myString(myString& otherObj)
{
	length = otherObj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, otherObj.str);
}

bool myString::MyStrStr(const char* str)
{
	return false;
}

int myString::MyChr(char c)
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] == c)
		{
			cout << "index= ";
			return i;

		}

	}
	return -1;
}

int myString::MyStrLen()
{
	return 0;
}

void myString::MyStrCat(myString& b)
{
}

void myString::MyDelChr(char c)
{
}

int myString::MyStrCmp(myString& b)
{
	return 0;
}
