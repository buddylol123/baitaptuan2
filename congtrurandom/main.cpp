#include"toancap1.h"
#include"cstdlib"
#include"ctime"
using namespace std;

void main()
{
	int a, b, c;
	srand(time(NULL));
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	cout <<a<< " + "<<b<<" = ???" << endl;
	cout << "Moi ban nhap ket qua!!!!" << endl;
	cin >> c;
	if (c == congrandom(a, b))
		cout << "Dung" << endl;
	else
		cout << "Sai" << endl;

	cout << a << " - " << b << " = ???" << endl;
	cout << "Moi ban nhap ket qua!!!!" << endl;
	cin >> c;
	if (c == trurandom(a, b))
		cout << "Dung" << endl;
	else
		cout << "Sai" << endl;

	system("pause");
}