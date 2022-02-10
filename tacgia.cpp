#include "stdafx.h"
#include "tacgia.h"


void tacgia::nhap(danhsach b)
{
	getchar();
	cout << "\nNhap ten nha tac gia: ";
	getline(cin, name);
	cout << "Nhap password: ";
	getline(cin, pass);
	n = 0;
	for (int i = 0; i < b.getn(); i++)
	{
		sach c = b.timvitri(i);
		if (name == c.gettg())
			n++;
	}
}

void tacgia::xuat(danhsach b) 
{
	cout << "\n**************************************\nTHONG TIN TAC GIA " << name << ":\n";
	for (int i = 0; i < b.getn(); i++)
	{
		sach c = b.timvitri(i);
		if (name == c.gettg())
		{
			cout << i+1 << ". ";
			c.xuat();
		}
	}
	cout << "So luong: " << n << endl;
	cout << "**************************************\n";
}

void tacgia::them(danhsach &b)
{
	b.themsachtg(name);
	n++;
}

tacgia::tacgia()
{
}


tacgia::~tacgia()
{
}
