#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	double a, b, c;
	cout << "Введите поочередно члены коэфициенты уравнения(a,b,c): ";
	cin >> a >> b >> c;

	cout << a << "x2 + " << b << "x + " << c << " = 0" << endl;
	int D = b * b - 4 * a * c;

	if (D >= 0) {
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		if (x1 == x2)
		{
			cout << "Уравнение имеет один корень x: " << x1;
		}
		else {
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
	else if(D<0){
		cout << "Действительных корней нет";
	}



	return 0;
}