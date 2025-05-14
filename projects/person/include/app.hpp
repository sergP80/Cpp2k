#pragma once

#include <iostream>
#include <string>
#include <cmath>

enum Sex {MALE, FEMALE};

class Person {
	int age;
	std::string name;
	float height;
	Sex sex;
public:
	const int& get_age() const
	{
		return this->age;
	}

	Person& set_age(const int& age)
	{
		this->age = age;

		return *this;
	}

	const std::string& get_name() const
	{
		return this->name;
	}

	Person& set_name(const std::string& name)
	{
		this->name = name;

		return *this;
	}

	const float& get_height() const
	{
		return this->height;
	}

	Person& set_height(const float& height)
	{
		this->height = height;

		return *this;
	}

	const Sex& get_sex() const
	{
		return this->sex;
	}

	Person& set_sex(const Sex& sex)
	{
		this->height = height;

		return *this;
	}

	friend bool operator==(const Person& p1, const Person& p2);

};


bool operator==(const Person& p1, const Person& p2)
{
	return p1.name == p2.name && p1.age == p2.age && p1.sex == p2.sex && std::fabs(p1.height - p2.height) <= 1e-2;
}

class Family
{

};