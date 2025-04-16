#include "app.hpp"

#include <ostream>

using namespace std;

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




int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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

  {
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
  }
  return 0;
}