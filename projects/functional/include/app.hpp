
#pragma once

#include <functional>
#include <iostream>

class Summator
{
    const int& origin;
public:

    Summator(): Summator(0) {}

    explicit Summator(const int& origin_): origin(origin_) {}

    int operator()(int i, int j) const
    {
        return origin + i + j;
    }

    friend std::ostream& operator<<(std::ostream&, const Summator&);
};



inline std::ostream& operator<<(std::ostream& os, const Summator& s)
{
    os << "Summator with copy origin: [" << s.origin << "]";
    return os;
}

class RefSummator
{
    int& origin;
public:

    explicit RefSummator(int& origin_): origin(origin_) {}

    int operator()(int i, int j) const
    {
        return origin + i + j;
    }

    friend std::ostream& operator<<(std::ostream&, const RefSummator&);
};



inline std::ostream& operator<<(std::ostream& os, const RefSummator& s)
{
    os << "Summator with reference origin: [" << s.origin << "]";
    return os;
}

class Mutlipliyer
{
  int shift;
public:

    Mutlipliyer(): Mutlipliyer(1) {}

    Mutlipliyer(int shift_): shift(shift_) {}

    int operator()(int i, int j) const
    {
        return shift * i * j;
    }

    friend  std::ostream& operator<<(std::ostream&, const Mutlipliyer&);

};

inline std::ostream& operator<<(std::ostream& os, const Mutlipliyer& s)
{
    os << "Mutlipliyer with shift: [" << s.shift << "]";
    return os;
}