#include "app.hpp"

int main()
{
	Person p1;
	
	p1.set_name("John Doe")
	.set_height(1.858f)
	.set_sex(Sex::MALE);

	Person p2;

	p2.set_name("John Doe")
		.set_height(1.869f)
		.set_sex(Sex::MALE);

	if (p1 == p2)
	{
		std::cout << "Are equals" << std::endl;
	}
	else {
		std::cout << "Are not equals" << std::endl;
	}

	return 0;
}