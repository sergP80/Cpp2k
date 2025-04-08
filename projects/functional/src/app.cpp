#include "app.hpp"

#include <iostream>
#include <ostream>

using namespace std;

int main() {

  {
    cout << "================" << endl;
    Mutlipliyer m1;
    cout << m1 << endl;
    auto r = m1(3, 4);

    cout << r << endl;

  }

  {
    cout << "================" << endl;
    Summator s1{-5};

    cout << s1 << endl;
    auto r = s1(3, 4);
    cout << r << endl;
  }

  {
    cout << "================" << endl;
    int origin = -5;
    RefSummator s1{origin};

    cout << s1 << endl;

    cout << s1(3, 4) << endl;

    origin = -1;

    cout << s1 << endl;

    cout << s1(3, 4) << endl;
  }

  {
    cout << "Lambda summator with copy of origin===>" << endl;

    auto origin = -5;

    auto summator = [origin](int i, int j)
    {
      return origin + i + j;
    };

    auto r = summator(3, 4);

    cout << r << endl;// output 2

    origin = -2;

    r = summator(3, 4);

    cout << r << endl;// output 2 because copy of origin usage
  }

  {
    cout << "Lambda summator with reference of origin===>" << endl;
    auto origin = -5;

    auto summator = [&origin](int i, int j)
    {
      return origin + i + j;
    };

    auto r = summator(3, 4);

    cout << r << endl;// output 2

    origin = -2;

    r = summator(3, 4);

    cout << r << endl;// output 5 because reference of origin usage
  }

  return 0;
}
