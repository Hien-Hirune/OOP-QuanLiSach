#include "stdafx.h"
#include "danhsach.h"


void danhsach::nhap()
{
	cout << "Nhap so luong quyen sach: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin quyen sach thu " << i + 1 << ":\n";
		sach c;
		c.nhap();
		a.push_back(c);
		//a[i].nhap();
	}
}

void danhsach::xuat()
{
	cout << "\n***************************\nDanh sach vua nhap:\n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". ";
		a[i].xuat();
	}
}

int danhsach::timsach() //trả về vị trí tìm cuốn sách, nếu k tìm thấy trả về -1
{ 
	string s, m;
	getchar();
	cout << "Nhap ten sach: ";
	getline(cin, s);
	cout << "Nhap ma so sach: ";
	getline(cin, m);
	for (int i = 0; i < n; i++)
		if (s == a[i].getten() && m == a[i].getms())
			return i;
	return -1; //nếu k tìm thấy thì trả về -1
}

sach danhsach::timvitri(int i) //trả về cuốn sách ở vị trí thứ i
{
	return a[i];
}

int danhsach::getn()
{
	return n;
}

void danhsach::themsachnxb(string n)
{
	cout << "Nhap thong tin quyen sach:\n";
	sach c;
	c.themsachnxb(n);
	a.push_back(c);
}

void danhsach::themsachtg(string n)
{
	cout << "Nhap thong tin quyen sach:\n";
	sach c;
	c.themsachtg(n);
	a.push_back(c);
}



void danhsach::xoasach()
{
}

danhsach::danhsach()
{
}


danhsach::~danhsach()
{
}
