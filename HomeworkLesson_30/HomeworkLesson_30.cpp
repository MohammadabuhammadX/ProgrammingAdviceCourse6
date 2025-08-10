#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include "../StartUp/MyInputOutputLibrary.h"

using namespace std;

enum enPositionLevel {
	Intern = 1,
	Junior = 2,
	MidLevel = 3,
	Senior = 4,
	Lead = 5,
	Manager = 6,
	Director = 7
};
enum enDepartment {
	HR = 1,
	IT = 2,
	Finance = 3,
	Marketing = 4
};
enum enPosition {
	// IT
	BackEndDeveloper = 1,
	FrontEndDeveloper = 2,
	FullStackDeveloper = 3,
	SystemAdministrator = 4,
	NetworkEngineer = 5,

	// HR
	HRManager = 6,
	HROfficer = 7,
	RecruitmentSpecialist = 8,

	// Finance
	Accountant = 9,
	FinancialAnalyst = 10,
	PayrollSpecialist = 11,

	// Marketing
	MarketingManager = 12,
	SEO_Specialist = 13,
	ContentCreator = 14
};

struct stAddress {
	string street;
	string city;
	string country;
	string postalCode;
};
struct stDepartment {
	enDepartment departmentId;
	string departmentName;
};
struct stEmployee {
	short int Id;
	string firstName;
	string lastName;
	float salary;
	enPositionLevel employeePositionLevel;
	enPosition employeePosition;
	stDepartment department;
	stAddress address;
};

string HelperMethodPositionLevelToString(enPositionLevel level) {
	switch (level) {
	case Intern: return "Intern";
	case Junior: return "Junior";
	case MidLevel: return "Mid Level";
	case Senior: return "Senior";
	case Lead: return "Lead";
	case Manager: return "Manager";
	case Director: return "Director";
	default: return "Unknown";
	}
}
string HelperMethodPositionToString(enPosition pos) {
	switch (pos) {
	case BackEndDeveloper: return "Back End Developer";
	case FrontEndDeveloper: return "Front End Developer";
	case FullStackDeveloper: return "Full Stack Developer";
	case SystemAdministrator: return "System Administrator";
	case NetworkEngineer: return "Network Engineer";

	case HRManager: return "HR Manager";
	case HROfficer: return "HR Officer";
	case RecruitmentSpecialist: return "Recruitment Specialist";

	case Accountant: return "Accountant";
	case FinancialAnalyst: return "Financial Analyst";
	case PayrollSpecialist: return "Payroll Specialist";

	case MarketingManager: return "Marketing Manager";
	case SEO_Specialist: return "SEO Specialist";
	case ContentCreator: return "Content Creator";

	default: return "Unknown";
	}
}
string HelperMethodDepartmentToString(enDepartment dept) {
	switch (dept) {
	case HR: return "HR";
	case IT: return "IT";
	case Finance: return "Finance";
	case Marketing: return "Marketing";
	default: return "Unknown";
	}
}

void ShowPositionsByDepartment(enDepartment dept) {
	cout << "\nSelect Position:\n";
	switch (dept) {
	case IT:
		cout << "1 - Back End Developer\n";
		cout << "2 - Front End Developer\n";
		cout << "3 - Full Stack Developer\n";
		cout << "4 - System Administrator\n";
		cout << "5 - Network Engineer\n";
		break;
	case HR:
		cout << "6 - HR Manager\n";
		cout << "7 - HR Officer\n";
		cout << "8 - Recruitment Specialist\n";
		break;
	case Finance:
		cout << "9 - Accountant\n";
		cout << "10 - Financial Analyst\n";
		cout << "11 - Payroll Specialist\n";
		break;
	case Marketing:
		cout << "12 - Marketing Manager\n";
		cout << "13 - SEO Specialist\n";
		cout << "14 - Content Creator\n";
		break;
	}
}

void ReadEmployeesData(vector<stEmployee>& employees) {

	char MoreEmployee = 'y';
	short idCounter = 1;
	do
	{
		stEmployee emp;
		emp.Id = idCounter++;

		MyInputOutputLibrary::PrintMessage("\nEnter First Name");
		cin >> emp.firstName;

		MyInputOutputLibrary::PrintMessage("\nEnter Last Name");
		cin >> emp.lastName;

		MyInputOutputLibrary::PrintMessage("\nEnter Salary");
		cin >> emp.salary;

		int dept;
		MyInputOutputLibrary::PrintMessage("Enter Department (1 = HR, 2 = IT, 3 = Finance, 4 = Marketing): ");
		cin >> dept;
		emp.department.departmentId = (enDepartment)dept;
		emp.department.departmentName = HelperMethodDepartmentToString((enDepartment)dept);

		ShowPositionsByDepartment(emp.department.departmentId);
		int position;
		cin >> position;
		emp.employeePosition = (enPosition)position;

		MyInputOutputLibrary::PrintMessage("Enter Position Level (1 = Intern, 2 = Junior, 3 = MidLevel, 4 = Senior, 5 = Lead, 6 = Manager, 7 = Director): ");
		short level;
		cin >> level;
		emp.employeePositionLevel = (enPositionLevel)level;

		cout << "Enter Street: ";
		cin.ignore();
		getline(cin, emp.address.street);

		cout << "Enter City: ";
		getline(cin, emp.address.city);

		cout << "Enter Country: ";
		getline(cin, emp.address.country);

		cout << "Enter Postal Code: ";
		getline(cin, emp.address.postalCode);

		employees.push_back(emp);


		cout << "Do you want to add more employees Y/N";
		cin >> MoreEmployee;
		MoreEmployee = tolower(MoreEmployee);

	} while (MoreEmployee == 'y');

}

void PrintAllEmployeesData(vector<stEmployee>& employees) {
	cout << left;
	cout << setw(3) << "ID" << " | "
		<< setw(15) << "First Name" << " | "
		<< setw(15) << "Last Name" << " | "
		<< setw(10) << "Salary" << " | "
		<< setw(15) << "Level" << " | "
		<< setw(25) << "Position" << " | "
		<< setw(12) << "Department" << " | "
		<< setw(15) << "City" << " | "
		<< setw(15) << "Country" << " | "
		<< setw(10) << "Postal Code" << " |" << "\n";

	cout << string(3, '=') << "=|="
		<< string(15, '=') << "=|="
		<< string(15, '=') << "=|="
		<< string(10, '=') << "=|="
		<< string(15, '=') << "=|="
		<< string(25, '=') << "=|="
		<< string(12, '=') << "=|="
		<< string(15, '=') << "=|="
		<< string(15, '=') << "=|="
		<< string(10, '=') << "=|" << "\n";

	for (stEmployee& employee : employees) {
		cout << setw(3) << employee.Id << " | "
			<< setw(15) << employee.firstName << " | "
			<< setw(15) << employee.lastName << " | "
			<< setw(10) << fixed << setprecision(2) << employee.salary << " | "
			<< setw(15) << HelperMethodPositionLevelToString(employee.employeePositionLevel) << " | "
			<< setw(25) << HelperMethodPositionToString(employee.employeePosition) << " | "
			<< setw(12) << employee.department.departmentName << " | "
			<< setw(15) << employee.address.city << " | "
			<< setw(15) << employee.address.country << " | "
			<< setw(10) << employee.address.postalCode << " |" << "\n";
	}
}


int main()
{
	vector<stEmployee> employees;

	ReadEmployeesData(employees);

	PrintAllEmployeesData(employees);

	return 0;
}
