#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

struct Luong {
	float MaLuong;
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
	bool GioiTinh;
	string QueQuan;
	//int NgaySinh;			//concern
	//int ThangSinh;			//concern
	//int NamSinh;			//concern
	NgayThang NgaySinh;
	string TrinhDoChuyenMon;
	string ChucVu;		
	//int NgayBatDauCongTac;			//concern
	//int ThangBatDauCongTac;			//concern
	//int NamBatDauCongTac;			//concern
	NgayThang NgayBatDauCongTac;
	bool HopDong;
	string VienChuc;			//Chỗ này làm gì á???????
	NodeLuong* LuongNV;
};

struct NodeNhanVien {
	NhanVien Data;
	NodeNhanVien* pNext;
};

struct ListNV {
	NodeNhanVien* pHead;
	NodeNhanVien* pTail;
};

int main() {

	system("pause");
	return 0;
}