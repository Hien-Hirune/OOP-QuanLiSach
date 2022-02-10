#pragma once
#include "sach.h"
#include "danhsach.h"
#include <vector>
class hoadon
{
private:
	vector <sach> a;
	vector <int> soluong;
public:
	void mua(danhsach);
	void xoa(danhsach);
	unsigned long tongtien();
	void xuat();
	hoadon();
	~hoadon();
};

