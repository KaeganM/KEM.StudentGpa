#pragma once
#include <iostream>
#include <string>
class Student
{
private:
	std::string m_name;
	double m_gpa;
public:
	Student()
	{
		setName("Unknown");
		SetGPA(0.0);
	}
	Student(const std::string name, const double gpa)
	{
		setName(name);
		SetGPA(gpa);
	}
	void setName(const std::string name) { this->m_name = name; }
	void SetGPA(const double newGPA) {
		if (newGPA >= 0) m_gpa = newGPA;
		if (newGPA > 4.0) m_gpa = 4.0;
	}

	std::string getName() const { return m_name; }
	double getGPA() const { return m_gpa; }

	void Display() const
	{
		std::cout << "Name: " << getName() << "\n";
		std::cout << "GPA: " << getGPA() << "\n";
		std::cout << getName() << " has a GPA of " << getGPA() << "\n";
	}
};

