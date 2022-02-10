#include "stdafx.h"
#include "user.h"


void user::nhap()
{
	getchar();
	cout << "\nNhap ten nguoi dung: ";
	getline(cin, name);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	getchar();
	cout << "Nhap password: ";
	getline(cin, pass);
}

void user::xuat()
{
	cout << "\n**************************************\nTHONG TIN USER: \n";
	cout << " - Ten: " << name << endl;
	cout << " - Tuoi: " << tuoi << endl;
	cout << "**************************************\n";
	hoadon::xuat();
}

void user::luachon(danhsach b)
{
	do
	{
		int n, chon=1;
		cout << "\nNhap lua chon (1-Mua, 2-Them, 3-Xoa, 4-Thoat): ";
		cin >> n;
		switch (n)
		{
		case 1: case 2:
			do
			{
				hoadon::mua(b);
				cout << "Ban co muon mua tiep khong? (1: Co, 0: Khong): ";
				cin >> chon;
				if (chon == 0) //nếu không mua
					break;
			} while (chon == 1);
			break;
		case 3:
			do
			{
				hoadon::xoa(b);
				cout << "Ban co muon xoa tiep khong? (1: Co, 0: Khong): ";
				cin >> chon;
				if (chon == 0) //nếu không xoá
					break;
			} while (chon == 1);
			break;
		case 4:
			return;
		}
	} while (1);
}

user::user()
{
}


user::~user()
{
}
