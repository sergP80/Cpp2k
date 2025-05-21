#include "app.hpp"

#include <ostream>

using namespace std;

//class IntVector {
//    int data[10];
//public:
//    int get(int id)
//    {
//        return data[id];
//    }
//
//    void set(int id, int value)
//    {
//        data[id] = value;
//    }
//};
//
//class DoubleVector {
//    double data[10];
//public:
//    double get(int id)
//    {
//        return data[id];
//    }
//
//    void set(int id, double value)
//    {
//        data[id] = value;
//    }
//};

struct xOutOfIndexArray{
    int id;

    xOutOfIndexArray(int id_): id(id_)
    {}
};

template<typename T, int size>
class Array {
    T data[size];
    int size_;
public:
    Array()
    {
        size_ = size;
    }

    const T& get(int id) const
    {
        if (id < 0 || id >= size)
        {
            throw xOutOfIndexArray(id);
        }

        return data[id];
    }

    void set(int id, T value)
    {
        if (id < 0 || id >= size)
        {
            throw xOutOfIndexArray(id);
        }

        data[id] = value;
    }

    const int size() const
    {
        return size_;
    }

    int find_first(const T& key)
    {
        for (int i = 0; i < size_; ++i)
        {
            if (data[i] == key)
            {
                return i;
            }
        }

        return -1;
    }
};


int main() {

    Array<int, 3> v1;

    v1.set(0, -1);
    v1.set(1, 5);
    v1.set(2, 4);

    int idx = v1.find_first(5);

    cout << idx << endl;
    
    Array<string, 5> s_vector;

  return 0;
}