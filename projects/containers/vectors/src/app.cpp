#include "app.hpp"

#include <ostream>

using namespace std;

template<typename K, typename V>
struct Pair {
    K key;
    V value;
};


template<typename K, typename V>
class Map
{
    Pair<K, V> data[100];
};

class IntVector {
    int data[10];
public:
    int get(int id)
    {
        return data[id];
    }

    void set(int id, int value)
    {
        data[id] = value;
    }
};

class DoubleVector {
    double data[10];
public:
    double get(int id)
    {
        return data[id];
    }

    void set(int id, double value)
    {
        data[id] = value;
    }
};

template<typename T>
class Vector {
    T data[10];
public:
    T get(int id)
    {
        return data[id];
    }

    void set(int id, T value)
    {
        data[id] = value;
    }
};


class Person
{
  int age;
  string name;
public:
  Person() = default;

  [[nodiscard]] Person(const int age_, const string& name_)
    : age(age_),
      name(name_)
  {
  }

  ~Person() = default;

  [[nodiscard]] int get_age() const
  {
    return age;
  }

  void set_age(const int age)
  {
    this->age = age;
  }

  [[nodiscard]] string get_name() const
  {
    return name;
  }

  void set_name(const string& name)
  {
    this->name = name;
  }

  friend std::ostream& operator<<(std::ostream& os, const Person& obj);

  friend std::istream& operator>>(std::istream& is, Person& obj);

};

std::ostream& operator<<(std::ostream& os, const Person& obj)
{
  return os
    << "age: " << obj.age
    << " name: " << obj.name;
}

std::istream& operator>>(std::istream& is, Person& obj)
{
  int age;
  string name;

  is >> age >> name;

  obj.age = age;

  obj.name = name;

  return is;
}

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
    int result = -1;

    for (int i = 0; i < size; ++i)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return result;
}


int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  {
      Vector<int> intv1;

      Vector<double> doublev1;
  }
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

  
  // {
  //   for (auto item: v)
  //   {
  //     if (item % 2 != 0)
  //     {
  //       cout << item << endl;
  //     }
  //   }
  // }

  // {
  //   for_each(v.begin(), v.end(), [](int i)
  //   {
  //     if (i % 2 != 0)
  //     {
  //       cout << i << endl;
  //     }
  //   });
  // }

  // {
  //   auto it = remove_if(
  //     v.begin(), v.end(),
  //     [](int i) {return i %2 != 0;}
  //     );
  //
  //   v.erase(it, v.end());
  //
  //   for (auto it = v.begin(); it != v.end(); ++it)
  //   {
  //     cout << *it << endl;
  //   }
  // }

 
  /*{
    vector<Person> persons;

    persons.emplace_back(12, "Helen");
    persons.emplace_back(18, "Jhon");
    persons.emplace_back(22, "Alex");
    persons.emplace_back(14, "Sonny");

    sort(v.begin(), v.end());

    cout << persons[0] << endl;

    string s = "Alex1";

    auto it = find_if(persons.begin(), persons.end(), [&](const auto& item)
    {
      return item.get_name() == s;
    });

    if (it != persons.end())
    {
      cout << *it << endl;
    } else
    {
      cout << "Person with name: " << s << " was not found" << endl;
      cout << "Do you want to add it? (Y/N):";
      char answer;
      cin >> answer;
      if (answer != 'Y' && answer != 'y')
      {
        cout << "Bye!" << endl;
        return 0;
      }

      cout << "Enter age, name via space: ";
      Person new_person;

      cin >> new_person;

      persons.emplace_back(new_person);

      for (const auto& person : persons)
      {
        cout << person << endl;
      }
    }
  }*/
  return 0;
}