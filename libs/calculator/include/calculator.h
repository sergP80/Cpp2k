#pragma once


namespace calc {

	class Calculator {
	private:
		double a;
		double b;
	public:
		Calculator(const double&, const double&);

		const double compute(const double&) const;
		
		const double operator()(const double& x) const
		{
			return compute(x);
		}

	};
}