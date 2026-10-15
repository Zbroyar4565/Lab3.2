#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, c, x, F;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;
    cout << "Введіть значення x: ";
    cin >> x;

    if (x < 0 && b != 0)
        F = -((2 * x) - c / (c * x) - a);
    if (x > 0 && b != 0)
        F = (x - a) / (x - c);
    if (!(x < 0 && b != 0) && !(x > 0 && b != 0))
        F = (- x / c) + (-c / (2 * x));
    cout << "Значення F (скорочена форма, if): " << F << endl;

    if (x < 0 && b != 0)
        F = -((2 * x) - c / (c * x) - a);
    else if (x > 0 && b != 0)
        F = (x - a) / (x - c);
    else F = (-x / c) + (-c / (2 * x));

    cout << "Значення F (повна форма, if-else): " << F << endl;

}

