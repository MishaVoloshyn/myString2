#pragma once
class myString {
private:
	char* str;
	int length;
	static int counterObject;
public:
	myString();//Х	конструктор по умолчанию, позвол€ющий создать строку длиной 80 символов; 
	myString(int size);//Х	конструктор, позвол€ющий создавать строку произвольного размера; 
	myString(char* str);//Х	конструктор, который создаЄт строку и инициализирует еЄ строкой, полученной от пользовател€. 
	~myString();//Х	деструктор;

	void Input();
	void PrintConsole();

	void SetStr(char* str);//—етер инициализируем поле строку из приватного
	void SetLen(int userLenght);//—етер инициализируем поле длину из приватного
	char* GetStr();//√еттер возвращаем строку
	int GetLen();//√еттер возвращаем длину

	myString(myString& otherObj);// копирование строк
	bool MyStrStr(const char* str);// поиск подстроки в строке
	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
	int MyStrLen();// возвращает длину строки
	void MyStrCat(myString& b); // объединение строк
	void MyDelChr(char c); // удал€ет указанный символ 
	int MyStrCmp(myString& b); // сравнение строк 

};
