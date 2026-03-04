#include "app.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	demo_func_t examples[] = {
		demo_simple_static_array,
		demo_simple_dynamic_array,
		demo_simple_dynamic_matrix,
		demo_simple_vector,
		demo_vector_matrix
	};

	int sz = sizeof(examples) / sizeof(examples[0]);

	do {
		menu();

		int example_id = select_example();

		if (example_id <= 0 || example_id > sz)
		{
			cout << "Wrong example index " << example_id << endl;
			continue;
		}

		examples[example_id - 1]();

		cout << "Do you want to continue? (any/N(n)):";

		char c;
		cin.get(c);

		if (c == 'N' && c == 'n')
		{
			break;
		}

	} while (true);


	return 0;
}

void menu()
{
	cout << "[1] Static array usage" << endl;
	cout << "[2] Raw dynamic array usage" << endl;
	cout << "[3] Raw dynamic matrix usage" << endl;
	cout << "[4] Dynamic vector usage" << endl;
	cout << "[5] Dymamic vector matrix usage" << endl;
}

int select_example()
{
	cout << "Select example:";

	int i;

	cin >> i;

	return i;
}
