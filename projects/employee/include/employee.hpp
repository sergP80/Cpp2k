#pragma once

#include <iostream>
#include <string>

namespace employee {

	enum Sex {MASCULANE, FEMALE};

	class Personal {
		std::string name;
		std::string birth_date;
		Sex sex;
		std::string photo;
	public:
		Personal(const std::string& name_,
				 const std::string& birth_date_,
				 const Sex sex_,
				 const std::string& photo_)
			: name(name_)
			, birth_date(birth_date_)
			, sex(sex_)
			, photo(photo_)
		{}
		
		Personal(const std::string& name_, const std::string& birth_date_, const Sex sex_): Personal(name_, birth_date_, sex_, "")
		{}

		Personal(const Personal& rhs) = default;

		Personal() = default;
	};

	class Employee {
		Personal pesonal;
		std::string department;
		std::string position;
		double salary;

	public:
		Employee() = default;
		Employee(const Personal& pesonal_,
				 const std::string& department_,
				 const std::string& position_,
				 const double& salary_)
			
			: pesonal(pesonal_)
			, department(department_)
			, position(position_)
			, salary(salary_)
		{}

		Employee(const Employee& rhs) = default;
	};

	class Manager : public Employee {
		double bonus;

	public:
		Manager(const Personal& personal_,
				const std::string& department_,
				const std::string& position_,
				const double& salary_, const double& bonus_)
			
			: Employee(personal_, department_, position_, salary_)
			, bonus(bonus_)
		{}
	};
}