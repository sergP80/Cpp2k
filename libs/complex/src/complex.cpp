#include "complex.hpp"
#include <cmath>

namespace complex {
    Complex operator+(const Complex &z1, const Complex &z2)
    {
		Complex res;
		
		res.re = z1.re + z2.re;
		res.im = z1.im + z2.im;

        return std::move(res);
    }

    Complex operator-(const Complex &z1, const Complex &z2)
    {
        Complex res;
		
		res.re = z1.re - z2.re;
		res.im = z1.im - z2.im;

        return std::move(res);
    }

    Complex operator*(const Complex &z1, const Complex &z2)
    {
        Complex res;
		
		res.re = z1.re * z2.re - z1.im * z2.im;
		res.im = z1.im * z2.re + z2.im * z1.re;

        return std::move(res);
    }
    Complex operator*(const Complex &z, const double &a)
    {
        Complex res;
		
		res.re = z.re * a;
		res.im = z.im * a;

        return std::move(res);
    }
    Complex operator/(const Complex &z1, const Complex &z2)
    {
        Complex res;
		
		double z2_abs = cabs(z2);

		res.re = (z1.re * z2.re + z1.im * z2.im)/z2_abs;
		res.im = (z1.im * z2.re - z2.im * z1.re)/z2_abs;

        return std::move(res);
    }

    Complex operator/(const Complex &z, const double &a)
    {
        Complex res;
		
		res.re = z.re / a;
		res.im = z.im / a;

        return std::move(res);
    }

    bool operator==(const Complex &z1, const Complex &z2)
    {
		const auto tol = 1e-9;

        return std::fabs(z1.re - z2.re) <= tol && std::fabs(z1.im - z2.im) <= tol;
    }

    bool operator!=(const Complex &z1, const Complex &z2)
    {
        return !(z1 == z2);
    }

    std::ostream &operator<<(std::ostream &os, const Complex &c)
    {
	   os << "{Re: " << c.re << ", Im: " << c.im << "}";
       return os;
    }

    std::istream &operator>>(std::istream &is, Complex &c)
    {
		is >> c.re >> c.im;
        return is;
    }

    double cabs(const Complex & c)
    {
		using std::sqrt;
        
		return sqrt(c.re*c.re + c.im * c.im);
    }
}
