#include "stdafx.h"
#include "sach.h"


void sach::nhap()
{
	getchar();
	cout << " - Nhap ten sach: ";
	getline(cin, ten);
	cout << " - Nhap ma so sach: ";
	getline(cin, ms);
	cout << " - Nhap ten nha xuat ban: ";
	getline(cin, nxb);
	cout << " - Nhap ten tac gia: ";
	getline(cin, tg);
	cout << " - Nhap gia tien sach: ";
	cin >> gia;
}

void sach::xuat()
{
	cout << "Ten sach: " << ten << endl;
	cout << " - Ma so: " << ms << endl;
	cout << " - Don gia: " << gia << endl;
}

string sach::getten()
{
	return ten;
}

string sach::getms()
{
	return ms;
}

string sach::getnxb()
{
	return nxb;
}

string sach::gettg()
{
	return tg;
}

int sach::getgia()
{
	return gia;
}

void sach::themsachnxb(string n)
{
	cout << " - Nhap ten sach: ";
	getline(cin, ten);
	cout << " - Nhap ma so sach: ";
	getline(cin, ms);
	cout << " - Nhap ten tac gia: ";
	getline(cin, tg);
	cout << " - Nhap gia tien sach: ";
	cin >> gia;
	nxb = n;
}

void sach::themsachtg(string n)
{
	cout << " - Nhap ten sach: ";
	getline(cin, ten);
	cout << " - Nhap ma so sach: ";
	getline(cin, ms);
	cout << " - Nhap ten nxb: ";
	getline(cin, nxb);
	cout << " - Nhap gia tien sach: ";
	cin >> gia;
	tg = n;
}

sach::sach()
{
}


sach::~sach()
{
}
