#pragma once
#include "hoadon.h"
class user: public hoadon
{
private:
	string name, pass;
	int tuoi;
public:
	void nhap();
	void xuat();
	void luachon(danhsach);
	user();
	~user();
};

