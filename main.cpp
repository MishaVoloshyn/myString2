#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include"myString.h";
#include <iostream>


using namespace std;

int main() {

	myString str("Weather");
	myString userstr = str;
	userstr.PrintConsole();
	str.PrintConsole();

	str.AskStrToCheck();

	char c;
	cin >> c;
	cout << str.MyChr(c) << endl;

	cout << str.MyStrLen() << endl;

	char delch;
	cin >> delch;

	userstr.MyDelChr(delch);


	cout << str.MyStrCmp(userstr) << endl;
	if (str > userstr) {
		cout << "str > userstr" << endl;
	}
	if (str < userstr) {
		cout << "str < userstr" << endl;
	}

	if (str == userstr) {
		cout << "str == userstr" << endl;
	}

}