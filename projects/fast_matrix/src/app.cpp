#include "app.h"

using std::cout;
using std::cin;
using std::endl;
using matrix::FastMatrix;
using matrix::xInvalidIndices;

int main()
{
	using IntMatrix2D = FastMatrix;

	IntMatrix2D m1(2, 3);

	for (int i = 0; i < m1.rows(); ++i)
	{
		for (int j = 0; j < m1.cols(); ++j)
		{
			m1.set(i, j, (i + 1) * (j + 1));
		}
	}

	cout << m1 << endl;

	cout << m1.max() << endl;

	return 0;
}
