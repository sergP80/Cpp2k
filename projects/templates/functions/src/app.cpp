#include "app.hpp"

#include <ostream>

using namespace std;


//
//int find_first(int a[], int size, int key)
//{
//    int result = -1;
//
//    for (int i = 0; i < size; ++i)
//    {
//        if (a[i] == key)
//        {
//            return i;
//        }
//    }
//
//    return result;
//}
//
//int find_first(double a[], int size, double key)
//{
//    int result = -1;
//
//    for (int i = 0; i < size; ++i)
//    {
//        if (a[i] == key)
//        {
//            return i;
//        }
//    }
//
//    return result;
//}

template<typename T>
int find_first(T a[], int size, T key)
{
    for (int i = 0; i < size; ++i)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}


int main() {
  {
      cout << "Find in int array=============" << endl;
      int a1[] = {-1, 4, -2, 6, 7};

      int size = sizeof(a1) / sizeof(a1[0]);

      int result = find_first<int>(a1, size, 6);

      cout << result << endl;

      result = find_first(a1, size, 8);

      cout << result << endl;
  }


  {
      cout << "Find in double array=============" << endl;
      double a1[] = { -1.2, 11.3, 6.15, 7.21, -8.13 };

      int size = sizeof(a1) / sizeof(a1[0]);

      int result = find_first<double>(a1, size, 6.15);

      cout << result << endl;

      result = find_first(a1, size, -8.20);

      cout << result << endl;
  }

  return 0;
}