// QuanLiSach.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "danhsach.h"
#include "hoadon.h"
#include "user.h"
#include "nxb.h"
#include "tacgia.h"


int main()
{
	danhsach a;
	int n;
	a.nhap();
	hoadon b;
	cout << "Nhap lua chon nguoi dung (1-User, 2-NXB, 3-Tacgia): ";
	cin >> n;
	user c; nxb d; tacgia e;
	switch (n)
	{
	case 1:
		//user c;
		c.nhap();
		c.luachon(a);
		c.xuat();
		break;
	case 2:
		//nxb d;
		d.nhap(a);
		d.xuat(a);
		d.them(a);
		d.xuat(a);
		break;
	case 3:
		//tacgia e;
		e.nhap(a);
		e.xuat(a);
		e.them(a);
		break;
	}
	
	
	
    return 0;
}

