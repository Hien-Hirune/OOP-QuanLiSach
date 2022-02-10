#pragma once
#include <iostream>
#include <string>
using namespace std;
class sach
{
private:
	string ten, nxb, ms, tg;
	int gia;
public:
	void nhap();
	void xuat();
	string getten();
	string getms();
	string getnxb();
	string gettg();
	int getgia();
	void themsachnxb(string);
	void themsachtg(string);
	sach();
	~sach();
};

