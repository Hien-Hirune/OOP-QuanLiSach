#pragma once
#include "danhsach.h"
class nxb
{
private:
	string name, pass;
	int n;
public:
	void nhap(danhsach);
	void xuat(danhsach);
	void them(danhsach&);
	nxb();
	~nxb();
};

