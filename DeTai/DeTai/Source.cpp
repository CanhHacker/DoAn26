#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

struct Luong {
	string MaLuong;
	float BacLuong;
	float HeSoLuong;
};

struct NodeLuong {
	Luong Data;
	NodeLuong* pNext;
};

struct ListL {
	NodeLuong* pHead;
	NodeLuong* pTail;
};

struct NgayThang {
	int Ngay;
	int Thang;
	int Nam;
};

struct Khoa {
	string MaKhoa;
	string TenKhoa;
};

struct NodeKhoa {
	Khoa Data;
	NodeKhoa* pNext;
};

struct ListK {
	NodeKhoa* pHead;
	NodeKhoa* pTail;
};

struct NhanVien
{
	string MaNhanVien;
	string Ten;
	string Ho_Dem;
	string GioiTinh;
	string QueQuan;
	NgayThang NgaySinh;
	string TrinhDoChuyenMon;
	string ChucVu;		
	NgayThang NgayBatDauCongTac;
	string VienChuc;			//Chỗ này làm gì á???????
	NodeLuong* LuongNV;
	NodeKhoa* KhoaNV;
	
};

struct NodeNhanVien {
	NhanVien Data;
	NodeNhanVien* pNext;
};

struct ListNV {
	NodeNhanVien* pHead;
	NodeNhanVien* pTail;
};

bool Tuan[2][7];				

void KhoiTaoDSLKNV(ListNV &l);

int main() {














	
	system("pause");
	return 0;
}

void KhoiTaoDSLKNV(ListNV &l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}

void Nhap_1_Khoa(NhanVien& nv)
{
	while (getchar() != '\n');
	cout << "\nNhap ma nhan vien: ";
	getline(cin,nv.MaNhanVien);
	cout << "\nNhap ten nhan vien: ";
	getline(cin, nv.Ten);
	cout << "\nNhap ten ho va ten dem: ";
	getline(cin, nv.Ho_Dem);
	cout << "\nNhap gioi tinh: ";
	getline(cin, nv.GioiTinh);
	cout << "\nNhap que quan cua nhan vien: ";
	getline(cin, nv.QueQuan);
	cout << "\nNhap trinh do cua nhan vien: ";
	getline(cin, nv.TrinhDoChuyenMon);
}

void Xuat1Khoa(Khoa k) {
	cout << "\n\nMa khoa: " << k.Makhoa;
	cout << "\nTen Khoa: " << k.Tenkhoa;
}

void Xuat_1_List_Khoa(LIST l) {
	for (ListKhoa *k = l.pHead; k != NULL; k = k->pNext)
	{
		Xuat1Khoa(k->Data);
		cout << endl;
	}
}

ListKhoa* KhoiTaoKhoa(Khoa x)
{
	ListKhoa *p = new ListKhoa;
	p->Data = x;
	p->pNext = NULL;
	return p;
}