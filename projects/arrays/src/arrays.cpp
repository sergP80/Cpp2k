#include "arrays.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void demo_simple_static_array()
{
	const int max_size = 1000;

	int ia[max_size];

	int size;

	cout << "Enter array size: ";
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cout << "Type a[" << i << "]:";
		cin >> ia[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (ia[i] % 2 == 0)
		{
			cout << ia[i] << " ";
		}
	}

	cout << endl;
}

void demo_simple_dynamic_array()
{
		std::mt19937 mt{};

		std::uniform_int_distribution uif{ -1000, 1000 };

		do {

			int size;

			cout << "Enter array size: ";
			cin >> size;
			cin.ignore(1, '\n');

			int* ia = new int[size];

			//int* pi = new int(8);


			for (int i = 0; i < size; ++i)
			{
				ia[i] = uif(mt);
			}

			for (int i = 0; i < size; ++i)
			{
				if (ia[i] % 2 == 0)
				{
					cout << ia[i] << " ";
				}
			}

			delete[] ia;

			cout << endl;

			cout << "Do you want to continue? (Y/any key)";

			char c;
			
			cin.get(c);

			if (c != 'Y' && c != 'y') {
				break;
			}
		} while (true);

	}


void demo_simple_dynamic_matrix()
{
	std::mt19937 mt{};

	std::uniform_int_distribution uif{ -1000, 1000 };

	do {

		int rows, cols;

		cout << "Enter matrix size: ";
		cin >> rows >> cols;
		cin.ignore(1, '\n');

		int** m = new int* [rows];

		for (int i = 0; i < rows; ++i)
		{
			m[i] = new int[cols];
		}

		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				m[i][j] = uif(mt);
			}
		}


		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cout << m[i][j] << " ";
			}

			cout << endl;
		}

		for (int i = 0; i < rows; ++i)
		{
			delete[] m[i];
		}

		delete[] m;

		cout << endl;

		cout << "Do you want to continue? (Y/any key)";

		char c;

		cin.get(c);

		if (c != 'Y' && c != 'y') {
			break;
		}
	} while (true);

}

void demo_simple_vector()
{
	std::mt19937 mt{};

	std::uniform_int_distribution uif{ -1000, 1000 };

	do {

		int size;

		cout << "Enter array size: ";
		cin >> size;
		cin.ignore(1, '\n');


		vector<int> ia;


		for (int i = 0; i < size; ++i)
		{
			ia.push_back(uif(mt));
		}

		for (int i = 0; i < size; ++i)
		{
			if (ia[i] % 2 == 0)
			{
				cout << ia[i] << " ";
			}
		}

		cout << endl;

		cout << "Do you want to continue? (Y/any key)";

		char c;

		cin.get(c);

		if (c != 'Y' && c != 'y') {
			break;
		}
	} while (true);

}

void demo_vector_matrix()
{
	std::mt19937 mt{};

	std::uniform_int_distribution uif{ -1000, 1000 };

	do {

		int rows, cols;

		cout << "Enter matrix size: ";
		cin >> rows >> cols;
		cin.ignore(1, '\n');

		vector<vector<int>> m(rows);

		for (int i = 0; i < rows; ++i)
		{
			m.push_back(vector<int>(cols));

			for (int j = 0; j < cols; ++j)
			{
				m[i].push_back(uif(mt));
			}
		}


		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cout << m[i][j] << " ";
			}

			cout << endl;
		}

		cout << endl;

		cout << "Do you want to continue? (Y/any key)";

		char c;

		cin.get(c);

		if (c != 'Y' && c != 'y') {
			break;
		}
	} while (true);

}