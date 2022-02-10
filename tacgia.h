#pragma once
#include "danhsach.h"
class tacgia
{
private:
	string name, pass;
	int n;
public:
	void nhap(danhsach);
	void xuat(danhsach);
	void them(danhsach&);
	tacgia();
	~tacgia();
};

