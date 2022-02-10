#include "stdafx.h"
#include "nxb.h"


void nxb::nhap(danhsach b)
{
	getchar();
	cout << "\nNhap ten nha xuat ban: ";
	getline(cin, name);
	cout << "Nhap password: ";
	getline(cin, pass);
	n = 0;
	for (int i = 0; i < b.getn(); i++)
	{
		sach c = b.timvitri(i);
		if (name == c.getnxb())
			n++;
	}
}



void nxb::xuat(danhsach b)
{
	cout << "\n**************************************\nTHONG TIN NHA XUAT BAN " << name << ":\n";
	for (int i = 0; i < n; i++)
	{
		sach c = b.timvitri(i);
		if (name == c.getnxb())
		{
			cout << i+1 << ". ";
			c.xuat();
		}
	}
	cout << "So luong: " << n << endl;
	cout << "**************************************\n";
}



void nxb::them(danhsach &b)
{
	b.themsachnxb(name);
	n++;
}

nxb::nxb()
{
}


nxb::~nxb()
{
}
