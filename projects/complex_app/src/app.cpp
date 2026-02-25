#include "app.hpp"

using std::cout;
using std::cin;
using std::endl;

int sum(const int& i1, const int& i2);
double sum(const double& i1, const double& i2);

int main()
{
	using complex::Complex;

	Complex z1, z2;

	cin >> z1 >> z2;

	cout << z1 << endl << z2 << endl;

	cout << std::boolalpha << (z1 == z2) << endl;
	cout << std::boolalpha << (z1 != z2) << endl;
	cout << std::boolalpha << (z1 + z2) << endl;
	cout << std::boolalpha << (z1 - z2) << endl;
	cout << std::boolalpha << (z1 / z2) << endl;
	return 0;
}
