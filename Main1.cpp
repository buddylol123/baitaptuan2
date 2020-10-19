#include"toan cap 1.h"
void main()
{
	
	int dai, rong, canh, r;
	cout << "Nhap chieu dai : ";
	cin >> dai;
	cout << "Nhap chieu rong : ";
	cin >> rong;
	cout << "Nhap canh : ";
	cin >> canh;
	cout << "Nhap ban kinh : ";
	cin >> r;

	float kq5 = TinhChuviHCN(dai, rong);
	cout << "chu vi hcn = "<<kq5<<endl;
	float kq6 = TinhDientichHCN(dai, rong);
	cout << "dien tich hcn = " << kq6 << endl;
	float kq7 = TinhChuviVuong(canh);
	cout << "chu vi hv = " << kq7 << endl;
	float kq8 = TinhDientichVuong(canh);
	cout << "dien tich hv = " << kq8 << endl;
	float kq9 = TinhChuviTron(r);
	cout << "chu vi ht = " << kq9 << endl;

	float kq10 = TinhDientichTron(r);
	cout << "dien tich ht = " << kq10 << endl;
	system("pause");
}