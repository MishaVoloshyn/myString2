#pragma once
class myString {
private:
	char* str;
	int length;
	static int counterObject;
public:
	myString();//�	����������� �� ���������, ����������� ������� ������ ������ 80 ��������; 
	myString(int size);//�	�����������, ����������� ��������� ������ ������������� �������; 
	myString(const char* str);//�	�����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������. 
	~myString();//�	����������;

	void Input();
	void PrintConsole();

	void SetStr(char* str);//����� �������������� ���� ������ �� ����������
	void SetLen(int userLenght);//����� �������������� ���� ����� �� ����������
	char* GetStr();//������ ���������� ������
	int GetLen();//������ ���������� �����

	myString(myString& otherObj);// ����������� �����
	void AskStrToCheck();
	bool MyStrStr(const char* str, const char* p);// ����� ��������� � ������
	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	int MyStrLen();// ���������� ����� ������
	myString operator+(myString& otherObj);
	void MyDelChr(char c); // ������� ��������� ������ 
	int MyStrCmp(myString& b); // ��������� ����� 

	bool operator>(myString& otherObj);
	bool operator<(myString& otherObj);
	bool operator==(myString& otherObj);
};
