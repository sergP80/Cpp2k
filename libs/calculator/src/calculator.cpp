#include "calculator.h"
#include <cmath>

namespace calc {

	using std::pow;
	using std::log;

	Calculator::Calculator(const double& a, const double& b)
	{
		this->a = a;
		this->b = b;
	}

	const double Calculator::compute(const double& x) const
	{
		auto exp_value {x * log(6-x)/3.0};

		return pow(x, a) - pow(b, exp_value);
	}
}

