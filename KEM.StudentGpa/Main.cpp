#include <conio.h>
#include"Student.h"
#include <string>
int main()
{
	std::string name;
	std::string choice;
	double gpa;

	Student student;
	std::cout << "Enter the name of the student: " << "\n";
	std::getline(std::cin, name);

	std::cout << "Enter the GPA of the student: "<<"\n";
	std::cin >> gpa;

	student.setName(name);
	student.SetGPA(gpa);

	student.Display();
	std::cout << "Do you want to create another student (Y/N)";
	std::cin >> choice;
	if (choice == "y" || choice == "Y")
	{
		std::cout << "Enter the name of the student: ";
		std::cin >> name;
		std::cout << "Enter the GPA of the student: ";
		std::cin >> gpa;

		Student* pStudent = new Student(name, gpa);
		pStudent->Display();
		delete pStudent;
	}
	
	_getch();
	return 0;
}