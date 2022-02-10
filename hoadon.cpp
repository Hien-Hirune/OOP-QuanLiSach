#include "stdafx.h"
#include "hoadon.h"




void hoadon::mua(danhsach b)
{
	int n;
	bool ok = false;
	int k = b.timsach();
	if (k >= 0) //nếu tìm thấy sách
	{
		cout << "Nhap so luong: ";
		cin >> n;

		sach c = b.timvitri(k);
		for (int i = 0; i < a.size(); i++) //kt xem đã có sách này ở trong đơn hàng chưa
		if (c.getms() == a[i].getms())
		{
			soluong[i] += n; //nếu có chỉ cần cập nhật lại số lượng
			ok = true;
			break;
		}
		if (ok == false) //nếu là cuốn sách mới
		{
			a.push_back(c);
			soluong.push_back(n);
		}
	}
	else if (k == -1) //nếu không tìm thấy sách
		cout << "Khong tim thay sach!\n";
}

void hoadon::xoa(danhsach b)
{
	int n;
	bool ok = false;
	int k = b.timsach();
	if (k >= 0) //nếu tìm thấy sách
	{
		cout << "Nhap so luong can xoa: "; 
		cin >> n;

		sach c = b.timvitri(k);
		for (int i = 0; i < a.size(); i++) //kt xem đã có sách này ở trong đơn hàng chưa
			if (c.getms() == a[i].getms())
			{
				while (n > soluong[i]) //nếu số lượng cần xoá lớn hơn số sách trong hoá đơn
				{
					cout << "Sach " << a[i].getten() << " ban chi co " << soluong[i] << " cuon! Xin nhap lai so luong nho hon " << soluong[i] << ": ";
					cin >> n;
				}
				soluong[i] -= n; //nếu có chỉ cần cập nhật lại số lượng
				if (soluong[i] < 1) //nếu số sách xoá nhỏ hơn 1
				{
					a[i].~sach();
					a.erase(a.begin() + i);
					soluong.erase(soluong.begin() + i);
				}
				ok = true;
				break;
			}
		if (ok == false) //nếu là cuốn sách k có trong đơn hàng
			cout << "Cuon sach nay khong co trong don hang cua ban!\n";
	}
	else if (k == -1) //nếu không tìm thấy sách
		cout << "Khong tim thay sach!\n";
}


unsigned long hoadon::tongtien()
{
	unsigned long t = 0;
	for (int i = 0; i < a.size(); i++)
		t += a[i].getgia()*soluong[i];
	return t;
}

void hoadon::xuat()
{
	cout << "\n**************************************\nHOA DON CUA BAN: \n";
	for (int i = 0; i < a.size(); i++)
	{
		a[i].xuat();
		cout << " - So luong: " << soluong[i] << endl;
		cout << " - Gia tien: " << a[i].getgia()*soluong[i] << endl;
		cout << "---------------" << endl;
	}
	cout << "\n**************************************\nTONG SO TIEN: " << tongtien() << "d" << endl;
}

hoadon::hoadon()
{
}


hoadon::~hoadon()
{
}
