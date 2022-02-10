#pragma once
#include "sach.h"
#include <vector>
class danhsach
{
protected:
	vector <sach> a;
	int n;
public:
	void nhap();
	void xuat();
	int timsach();
	sach timvitri(int);
	int getn();
	void themsachnxb(string);
	void themsachtg(string);
	void xoasach();

	danhsach();
	~danhsach();
};

