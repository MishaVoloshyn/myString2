#pragma once
class myString {
private:
	char* str;
	int length;
	static int counterObject;
public:
	myString();//�	����������� �� ���������, ����������� ������� ������ ������ 80 ��������; 
	myString(int size);//�	�����������, ����������� ��������� ������ ������������� �������; 
	myString(char* str);//�	�����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������. 
	~myString();//�	����������;

	void Input();
	void PrintConsole();

	void SetStr(char* str);//����� �������������� ���� ������ �� ����������
	void SetLen(int userLenght);//����� �������������� ���� ����� �� ����������
	char* GetStr();//������ ���������� ������
	int GetLen();//������ ���������� �����

	myString(myString& otherObj);// ����������� �����
	bool MyStrStr(const char* str);// ����� ��������� � ������
	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	int MyStrLen();// ���������� ����� ������
	void MyStrCat(myString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������ 
	int MyStrCmp(myString& b); // ��������� ����� 

};
