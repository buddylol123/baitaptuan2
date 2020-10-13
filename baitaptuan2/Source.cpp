#include "Header.h"

float phepToanCoBan(float a, float b)
{
	int chon;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Chon cong thuc: ";
	cin >> chon;
	switch (chon)
	{
	case 1:
			cout << a + b << endl;//tong cong
	case 2:
			cout << a - b << endl;
	case 3:
			cout << a * b << endl;
	case 4:
			cout << a / b << endl;
	}
	return 1;
}