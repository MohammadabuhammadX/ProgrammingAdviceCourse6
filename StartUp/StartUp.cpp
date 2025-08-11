#pragma warning(disable : 4996)
#include <iostream>
#include <cmath>
#include <vector>
#include<cctype>
#include<string>

#include<ctime>

#include<fstream>
#include <iomanip>
#include "MyMathLibrary.h";
#include "MyNumberTheoryLibrary.h";
#include "MyArrayLibrary.h";
#include "MyInputOutputLibrary.h";
#include "MyRandomLibrary.h";
#include "MyStringLibrary.h";
#include "MyPatternLibrary.h";
#include "MyStatisticsLibrary.h";
using namespace std;



int main()
{
	time_t t = time(0);

	char* dt = ctime(&t);
	cout << "Local date and time is: " << dt << endl;

	tm* gmtm = gmtime(&t);
	dt = asctime(gmtm);

	cout << "UTC date and time is: " << dt << endl;
	return 0;
}



namespace HomeworksAndMyCode {
	class MyCode1 {
		int main() {

			int Mark = MyInputOutputLibrary::ReadPositiveNumber("Please Enter A Positive Number!");

			string result = (Mark >= 50) ? "Pass" : "Fail";

			MyInputOutputLibrary::PrintMessage(result);


			return 0;
		}
	};
	class Homework1 {
		int main() {

			int Mark = MyInputOutputLibrary::ReadNumber("Please Enter A Number!");

			string result = (Mark > 0) ? "Postive Number" : "Negative Number";

			MyInputOutputLibrary::PrintMessage(result);


			return 0;
		}
	};
	class Homework2 {

		int main() {

			int Mark = MyInputOutputLibrary::ReadNumber("Please Enter A Number!");

			string result = (Mark == 0) ? "Zero" : ((Mark > 0) ? "Positive Number" : "Negative Number");

			MyInputOutputLibrary::PrintMessage(result);


			return 0;
		}
	};
	class MyCode2 {
		int main() {

			int Array[] = { 1,2,34,5,6 };

			for (auto& i : Array)
			{
				cout << i << endl;
			}

		}
	};
	class MyCode3 {
		int main() {

			cout << "Your Number is : " << MyInputOutputLibrary::ReadNumber("Please Enter a number!");

		}
	};
	class MyCode4 {
		int main() {

			cout << "Result:" << (12 && 25);
			cout << endl;
			cout << "Result:" << (12 & 25);
			cout << endl;

		}
	};
	class MyCode5 {
		int main() {

			cout << "Result:" << (12 || 25);
			cout << endl;
			cout << "Result:" << (12 | 25);
			cout << endl;

		}
	};
	class MyCode6 {
		int MySum(int a, int b, int c = 0, int d = 0) {

			return a + b + c + d;
		}

		int main() {

			cout << MySum(10, 20) << endl;
			cout << MySum(10, 20, 30) << endl;
			cout << MySum(10, 20, 30, 40) << endl;

			return 0;
		}
	};
	class MyCode7 {
		double MySum(double a, double b) {

			return (a + b);
		}
		int MySum(int a, int b) {

			return (a + b);
		}
		int MySum(int a, int b, int c) {

			return (a + b + c);
		}
		int MySum(int a, int b, int c, int d) {

			return (a + b + c + d);
		}


		int main() {

			cout << MySum(10, 20) << endl;
			cout << MySum(10.1, 20.1) << endl;
			cout << MySum(10, 20, 30) << endl;
			cout << MySum(10, 20, 30, 40) << endl;

			return 0;
		}
	};
	class MyCode8 {
		void Function4()
		{
			cout << "Hi I'm function4" << endl;
		}

		void Function3()
		{
			Function4();
		}

		void Function2()
		{
			Function3();
		}

		void Function1()
		{
			Function2();
		}

		int main()
		{
			Function1();
			return 0;
		}
	};
	class MyCode9 {
		void PrintNumbers(int n, int m) {

			if (n <= m) {
				cout << n << endl;

				PrintNumbers(n + 1, m);
			}

		}

		int main()
		{
			PrintNumbers(1, 4);
			return 0;
		}
	};
	class Homework3 {
		void PrintNumbers(int n, int m) {

			if (n >= m) {
				cout << n << endl;

				PrintNumbers(n - 1, m);
			}

		}

		int main()
		{
			PrintNumbers(10, 1);
			return 0;
		}
	};
	class Homework4 {
		int MyPower(int Base, int Power)
		{
			if (Power == 0)
				return 1;
			else
				return (Base * MyPower(Base, Power - 1));
		}

		int main()
		{
			cout << MyPower(2, 4);

			return 0;
		}
	};
	class MyCode10 {
		void MyFinc() {
			static int Number = 1;
			cout << "Value of Numbers: " << Number << "\n";
			Number++;

		}

		int main()
		{
			MyFinc();
			MyFinc();
			MyFinc();
			return 0;
		}
	};
	class MyCode11 {
		int main()
		{
			int Page = 1, TotalPage = 10;
			//print string and int variable
			printf("The page number = %d \n", Page);
			printf("You are in Page %d of %d\n", Page, TotalPage);
			//Width specification
			printf("The Page Number = %0*d\n", 2, Page);
			printf("The Page Number = %0*d\n", 3, Page);
			printf("The Page Number = %0*d\n", 4, Page);
			printf("The Page Number = %0*d\n", 5, Page);

			int Number1 = 20, Number2 = 30;

			printf("The result of %d + %d = %d\n", Number1, Number2, Number1 + Number2);

			return 0;
		}
	};
	class MyCode12 {
		int main()
		{
			float PI = 3.14159265;
			//Width specification
			printf("Precision specification of %.*f\n", 1, PI);
			printf("Precision specification of %.*f\n", 2, PI);
			printf("Precision specification of %.*f\n", 3, PI);
			printf("Precision specification of %.*f\n", 4, PI);

			float Number1 = 7.0, Number2 = 9.0;
			printf("The float division is : %.3f / %.3f = %.3f \n\n", Number1, Number2, Number1 / Number2);

			double d = 12.45;

			printf("The double value is : %.3f\n", d);
			printf("The double value is : %.4f\n", d);
			return 0;
		}
	};
	class MyCode13 {
		int main()
		{
			char Name[] = "Mohammad Abu-Hammad";
			char SchoolName[] = "Programming Advices";

			printf("Dear %s, How are you ? \n\n", Name);
			printf("Welcome to %s School!\n\n", SchoolName);

			char c = 'S';

			printf("	Setting the width of c :%*c \n ", 1, c);
			printf("	Setting the width of c :%*c \n ", 2, c);
			printf("	Setting the width of c :%*c \n ", 3, c);
			printf("	Setting the width of c :%*c \n ", 4, c);
			printf("	Setting the width of c :%*c \n ", 5, c);

			return 0;
		}
	};
	class MyCode14 {
		int main()
		{
			cout << "---------|--------------------------------|---------|" << endl;
			cout << "  Code   |               Name             |  Mark   |" << endl;
			cout << "---------|--------------------------------|---------|" << endl;

			cout << left << setw(9) << "C101" << "|"
				<< setw(32) << "introduction to Programming 1" << "|"
				<< setw(9) << "95" << "|" << endl;

			cout << setw(9) << "C102" << "|"
				<< setw(32) << "Computer Hardware" << "|"
				<< setw(9) << "88" << "|" << endl;

			cout << setw(9) << "C1035243" << "|"
				<< setw(32) << "Network" << "|"
				<< setw(9) << "75" << "|" << endl;

			cout << "---------|--------------------------------|---------|" << endl;

			return 0;
		}
	};
	class MyCode15 {
		int main()
		{
			int x[10][10];

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					x[i][j] = (i + 1) * (j + 1);
				}
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					printf("%0*d ", 2, x[i][j]);
				}
				cout << endl;
			}
			return 0;
		}
	};
	class MyCode16 {
		int main()
		{

			vector<int> vNumbers = { 10 ,20 , 30, 40, 50 };

			cout << "Number Vector = ";

			for (auto& number : vNumbers)
			{
				cout << number << " ";
			}
			cout << endl;
			return 0;
		}
	};
	class MyCode17 {
		int main()
		{

			vector<int> vNumbers;

			vNumbers.push_back(10);
			vNumbers.push_back(20);
			vNumbers.push_back(30);
			vNumbers.push_back(40);
			vNumbers.push_back(50);

			cout << "Number vectors: \n\n";

			for (auto& number : vNumbers)
			{
				cout << number << " ";
			}
			cout << endl;
			return 0;
		}
	};
	class HomeworkMyCode5 {

		vector<int> AddUserInputToVector() {

			char answer;
			vector<int> vNumber;

			do
			{

				int userInput = MyInputOutputLibrary::ReadNumber("Please Enter a Number");

				vNumber.push_back(userInput);
				cout << "Do you want to add another number? (Y/N):";

				cin >> answer;
				answer = tolower(answer);

			} while (answer == 'y');


			return vNumber;
		}


		int main()
		{


			for (auto& i : AddUserInputToVector())
			{
				cout << i << " ";
			}
			cout << endl;

			return 0;
		}
	};
	class Howework5 {
		void ReadNumber(vector <int>& vNumbers) {

			char answer = 'y';
			int Number;

			while (answer == 'y') {

				cout << "Please Enter a number ? ";
				cin >> Number;

				vNumbers.push_back(Number);

				cout << "\nDo you want to read more numbers? Y|N ?";
				cin >> answer;

				answer = tolower(answer);
			}

		}

		void PrintVectorNumbers(vector<int>& vNumbers) {

			cout << "Numbers Vector\n\n";

			for (auto& number : vNumbers)
			{
				cout << number << " ";
			}
			cout << endl;
		}
		int main()
		{

			vector<int> vNumbers;

			ReadNumber(vNumbers);
			PrintVectorNumbers(vNumbers);
			return 0;
		}
	};
	class MyCode18 {
		enum enPositionLevel {
			Junoir = 1,
			Senior = 2
		};

		enum enPosition {
			BackEndDeveloper = 1,
			FrontEndDeveloper = 2,
			FullStackDeveloper = 3,
		};

		struct stEmployee {
			short int Id;
			string firstName;
			string lastName;
			float salary;
			enPositionLevel employeePositionLevel;
			enPosition employeePosition;
		};

		string HelperMethodPositionLevelToString(enPositionLevel level) {
			switch (level)
			{
			case Junoir: return "Junior";
				break;
			case Senior:return"Senior";
				break;
			default: return "Unknown";
			}
		}

		string HelperMethodPositionToString(enPosition pos) {
			switch (pos) {
			case BackEndDeveloper: return "Back End Developer";
			case FrontEndDeveloper: return "Front End Developer";
			case FullStackDeveloper: return "Full Stack Developer";
			default: return "Unknown";
			}
		}

		void ReadEmployeesData(vector<stEmployee>& employees) {

			stEmployee employee;

			employee.Id = 1;
			employee.firstName = "Mohammad";
			employee.lastName = "Abu-Hammad";
			employee.salary = 10000.0;
			employee.employeePositionLevel = enPositionLevel::Senior;
			employee.employeePosition = enPosition::BackEndDeveloper;

			employees.push_back(employee);

			employee.Id = 2;
			employee.firstName = "Ahmmad";
			employee.lastName = "Ali";
			employee.salary = 8000.0;
			employee.employeePositionLevel = enPositionLevel::Senior;
			employee.employeePosition = enPosition::FrontEndDeveloper;
			employees.push_back(employee);


			employee.Id = 3;
			employee.firstName = "Arij";
			employee.lastName = "Kayal";
			employee.salary = 7000.0;
			employee.employeePositionLevel = enPositionLevel::Junoir;
			employee.employeePosition = enPosition::FullStackDeveloper;

			employees.push_back(employee);
		}

		void PrintAllEmployeesData(vector<stEmployee>& employees) {

			cout << left;
			cout << setw(5) << "ID" << " | "
				<< setw(15) << "First Name" << " | "
				<< setw(15) << "Last Name" << " | "
				<< setw(12) << "Salary" << " | "
				<< setw(15) << "Position Level" << " | "
				<< setw(25) << "Position" << " |" << "\n";

			cout << string(5, '=') << "=|="
				<< string(15, '=') << "=|="
				<< string(15, '=') << "=|="
				<< string(12, '=') << "=|="
				<< string(15, '=') << "=|="
				<< string(25, '=') << "=|" << "\n";

			for (stEmployee& employee : employees) {
				cout << setw(5) << employee.Id << " | "
					<< setw(15) << employee.firstName << " | "
					<< setw(15) << employee.lastName << " | "
					<< setw(12) << fixed << setprecision(2) << employee.salary << " | "
					<< setw(15) << HelperMethodPositionLevelToString(employee.employeePositionLevel) << " | "
					<< setw(25) << HelperMethodPositionToString(employee.employeePosition) << " |" << "\n";
			}
		}


		int main()
		{
			vector<stEmployee> employees;

			ReadEmployeesData(employees);

			PrintAllEmployeesData(employees);

			return 0;
		}
	};
	class Homework6 {
		enum enPositionLevel {
			Junoir = 1,
			Senior = 2
		};

		enum enPosition {
			BackEndDeveloper = 1,
			FrontEndDeveloper = 2,
			FullStackDeveloper = 3,
		};

		struct stEmployee {
			short int Id;
			string firstName;
			string lastName;
			float salary;
			enPositionLevel employeePositionLevel;
			enPosition employeePosition;
		};

		string HelperMethodPositionLevelToString(enPositionLevel level) {
			switch (level)
			{
			case Junoir: return "Junior";
				break;
			case Senior:return"Senior";
				break;
			default: return "Unknown";
			}
		}

		string HelperMethodPositionToString(enPosition pos) {
			switch (pos) {
			case BackEndDeveloper: return "Back End Developer";
			case FrontEndDeveloper: return "Front End Developer";
			case FullStackDeveloper: return "Full Stack Developer";
			default: return "Unknown";
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

				short level;
				MyInputOutputLibrary::PrintMessage("Enter Position Level (1 = Junior, 2 = Senior): ");
				cin >> level;
				emp.employeePositionLevel = (enPositionLevel)level;

				MyInputOutputLibrary::PrintMessage("Enter Position (1 = Back End, 2 = Front End, 3 = Full Stack): ");
				int position;
				cin >> position;
				emp.employeePosition = (enPosition)position;

				employees.push_back(emp);


				cout << "Do you want to add more employees Y/N";
				cin >> MoreEmployee;
				MoreEmployee = tolower(MoreEmployee);

			} while (MoreEmployee == 'y');

		}

		void PrintAllEmployeesData(vector<stEmployee>& employees) {

			cout << left;
			cout << setw(3) << "ID" << " | "
				<< setw(18) << "First Name" << " | "
				<< setw(18) << "Last Name" << " | "
				<< setw(12) << "Salary" << " | "
				<< setw(15) << "Position Level" << " | "
				<< setw(25) << "Position" << " |" << "\n";

			cout << string(3, '=') << "=|="
				<< string(18, '=') << "=|="
				<< string(18, '=') << "=|="
				<< string(12, '=') << "=|="
				<< string(15, '=') << "=|="
				<< string(25, '=') << "=|" << "\n";

			for (stEmployee& employee : employees) {
				cout << setw(3) << employee.Id << " | "
					<< setw(18) << employee.firstName << " | "
					<< setw(18) << employee.lastName << " | "
					<< setw(12) << fixed << setprecision(2) << employee.salary << " | "
					<< setw(15) << HelperMethodPositionLevelToString(employee.employeePositionLevel) << " | "
					<< setw(25) << HelperMethodPositionToString(employee.employeePosition) << " |" << "\n";
			}
		}


		int main()
		{
			vector<stEmployee> employees;

			ReadEmployeesData(employees);

			PrintAllEmployeesData(employees);

			return 0;
		}
	};
	class homwwork6WithGPT {
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
	};
	class MyCode19 {
		int main()
		{
			vector<int> vNumbers;

			vNumbers.push_back(10);
			vNumbers.push_back(20);
			vNumbers.push_back(30);
			vNumbers.push_back(40);
			vNumbers.push_back(50);

			vNumbers.clear();
			/*cout << "\nStack Size = " << vNumbers.size() << endl;

			vNumbers.pop_back();
			vNumbers.pop_back();
			vNumbers.pop_back();
			vNumbers.pop_back();

			cout << "\nStack Size = " << vNumbers.size() << endl;*/
			/*if (!vNumbers.empty())
			{
				vNumbers.pop_back();
			}*/
			/*if (vNumbers.size() > 0) {
				vNumbers.pop_back();
			}*/

			cout << "\nNumber Vector: \n\n";
			for (auto& Number : vNumbers)
			{
				cout << Number << " ";
			}
			cout << endl;

			return 0;
		}
	};
	class MyCode20 {
		int main() {
			vector<int> v;

			// ======= Capacity & Size =======
			v.push_back(10);
			v.push_back(20);
			v.push_back(30);
			cout << "Size: " << v.size() << "\n";          // number of elements
			cout << "Capacity: " << v.capacity() << "\n";  // allocated storage
			cout << "Max size: " << v.max_size() << "\n";  // theoretical max elements
			cout << "Is empty? " << v.empty() << "\n";     // check if empty

			v.reserve(10); // Pre-allocate capacity
			cout << "Capacity after reserve(10): " << v.capacity() << "\n";

			v.shrink_to_fit(); // Reduce capacity to size
			cout << "Capacity after shrink_to_fit(): " << v.capacity() << "\n\n";


			// ======= Element Access =======
			cout << "Element at index 0: " << v[0] << "\n";    // no bounds check
			cout << "Element at index 1 (safe): " << v.at(1) << "\n"; // with bounds check
			cout << "Front element: " << v.front() << "\n";    // first element
			cout << "Back element: " << v.back() << "\n";      // last element
			cout << "Pointer to data: " << v.data() << " (address)\n\n"; // pointer to first element


			// ======= Modifiers =======
			v.push_back(40); // Add at end
			v.push_back(50);

			v.pop_back(); // Remove last element

			v.insert(v.begin() + 1, 15); // Insert at index 1
			v.insert(v.end(), { 60, 70 }); // Insert at end multiple elements

			v.erase(v.begin() + 2); // Erase element at index 2
			v.erase(v.begin(), v.begin() + 1); // Erase first element

			v.resize(8, 99); // Resize to 8 elements, fill new with 99

			v.assign(3, 5); // Replace contents with 3 copies of value 5

			vector<int> other = { 100, 200, 300 };
			v.swap(other); // Swap contents with other vector

			v.clear(); // Remove all elements
			cout << "Size after clear(): " << v.size() << "\n\n";


			// ======= Iterators =======
			vector<string> names = { "Alice", "Bob", "Charlie" };

			cout << "Forward iteration:\n";
			for (auto it = names.begin(); it != names.end(); ++it) {
				cout << *it << " ";
			}
			cout << "\n";

			cout << "Reverse iteration:\n";
			for (auto rit = names.rbegin(); rit != names.rend(); ++rit) {
				cout << *rit << " ";
			}
			cout << "\n";

			cout << "Const iteration:\n";
			for (auto cit = names.cbegin(); cit != names.cend(); ++cit) {
				cout << *cit << " ";
			}
			cout << "\n";

			return 0;
		}
	};
	class MyCode21 {
		void FuncationByVal(int x) {
			x++;
		}
		void FuncationByRef(int& x) {
			x++;
		}
		int main() {

			int a = 10;

			FuncationByVal(a);
			cout << "\n\n" << a << endl;
			cout << "\n a  After calling funtionByVal: " << a << endl;
			cout << "\n\n" << &a << endl;
			FuncationByRef(a);
			cout << "\n a  After calling funtionByRef: " << a << endl;
			return 0;
		}
	};
	class MyCode22 {
		int main() {

			int a = 10;
			int& x = a;

			cout << "\n" << &a << endl;
			cout << "\n" << &x << endl;

			x = 20;

			cout << "\n" << a << endl;
			cout << "\n" << x << endl;
			return 0;
		}

	};
	class MyCode23 {
		int main() {

			vector<int> nums{ 1,2,3,4,5 };

			cout << "\n\nusing .at(i)\n";
			cout << "Element at Index 0 : " << nums.at(0) << endl;
			cout << "Element at Index 2 : " << nums.at(2) << endl;
			cout << "Element at Index 4 : " << nums.at(5) << endl;

			cout << "\n\nusing [i]\n";
			cout << "Element at Index 0 : " << nums[0] << endl;
			cout << "Element at Index 2 : " << nums[2] << endl;
			cout << "Element at Index 4 : " << nums[5] << endl;

			return 0;
		}
	};
	class MyCode24 {
		int main() {

			vector<int> nums{ 1,2,3,4,5 };

			cout << "Initial Vector: ";

			for (const auto& num : nums) //const makes the num locked , so i cant modify it .
			{
				cout << num << " ";
			}

			cout << "\n\nUpdated Vector: ";

			for (auto& num : nums)
			{
				num = 20;
				cout << num << " ";
			}

			nums[1] = 40;
			nums.at(2) = 80;
			nums.at(4) = 90;

			cout << "\n\nUpdated Vector: ";

			for (const auto& num : nums)
			{
				cout << num << " ";
			}

			return 0;
		}
	};
	class Mycode25 {
		int main() {

			vector<int> nums{ 1,2,3,4,5 };

			try
			{
				cout << nums.at(5);
			}
			catch (...)
			{
				cout << "Out of bound\n";
			}

			return 0;
		}
	};
	class MyCode26 {
		int main()
		{
			string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";

			// Prints the length of the string
			cout << S1.length() << endl;

			// Returns the letter at position 3
			cout << S1.at(3) << endl;

			// Adds @ProgrammingAdvices to the end of string
			S1.append(" @ProgrammingAdvices");
			cout << S1 << endl;

			// Inserts Ali at position 7
			S1.insert(7, " Ali ");
			cout << S1 << endl;

			// Prints all the next 8 letters from position 16
			cout << S1.substr(16, 8) << endl;

			// Adds one character to the end of the string
			S1.push_back('X');
			cout << S1 << endl;

			// Removes one character from the end of the string
			S1.pop_back();
			cout << S1 << endl;

			// Finds Ali in the string
			cout << S1.find("Ali") << endl;

			// Finds ali in the string
			cout << S1.find("ali") << endl;

			if (S1.find("ali") == S1.npos)
			{
				cout << "ali is not found" << endl;
			}

			// Clears all string letters
			S1.clear();
			cout << S1 << endl;

			return 0;
		}
	};
	class MyCode27 {
		void PrintFileContent(string FileName) {

			fstream MyFile;

			MyFile.open(FileName, ios::in);

			if (MyFile.is_open()) {
				string Line;

				while (getline(MyFile, Line)) {

					cout << Line << endl;
				}
				MyFile.close();
			}

		}



		int main()
		{

			PrintFileContent("MyFile.txt");

			return 0;
		}
	};
	class MyCode28 {
		void LoadDataFromFileToVector(string FileUrl, vector<string>& vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::in);

			if (MyFile.is_open()) {

				string Line;

				while (getline(MyFile, Line)) {
					vFileContent.push_back(Line);
				}
				MyFile.close();
			}

		}

		int main()
		{

			vector<string> vFileContent;

			LoadDataFromFileToVector("MyFile.txt", vFileContent);

			for (auto& Line : vFileContent)
			{
				cout << Line << endl;
			}

			return 0;
		}
	};
	class MyCode29 {
		void SaveVectorToFile(string FileUrl, vector<string>vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::out);

			if (MyFile.is_open()) {

				for (auto& Line : vFileContent)
				{
					if (Line != "") {
						MyFile << Line << endl;
					}
				}
				MyFile.close();
			}

		}

		int main()
		{

			vector<string> vFileContent{ "Mohammad","Ahmad","Ali","Abu-Hammad","Test" };

			SaveVectorToFile("MyFile.txt", vFileContent);

			return 0;
		}
	};
	class MyCode30 {
		void LoadDataFromFileToVector(string FileUrl, vector<string>& vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::in);

			if (MyFile.is_open()) {

				string Line;

				while (getline(MyFile, Line)) {
					vFileContent.push_back(Line);
				}
				MyFile.close();
			}

		}

		void SaveVectorToFile(string FileUrl, vector<string>vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::out);

			if (MyFile.is_open()) {

				for (auto& Line : vFileContent)
				{
					if (Line != "") {
						MyFile << Line << endl;
					}
				}
				MyFile.close();
			}

		}

		void PrintFileContent(string FileName) {

			fstream MyFile;

			MyFile.open(FileName, ios::in);

			if (MyFile.is_open()) {
				string Line;

				while (getline(MyFile, Line)) {

					cout << Line << endl;
				}
				MyFile.close();
			}

		}

		void DeleteRecordFromFile(string Filename, string Record) {

			vector<string>vFileContent;
			LoadDataFromFileToVector(Filename, vFileContent);

			for (auto& Line : vFileContent)
			{
				if (Line == Record) {
					Line = "";
				}
			}
			SaveVectorToFile(Filename, vFileContent);

		}

		int main()
		{
			string FileName = "MyFile.txt";
			string DeletedName = "Test";
			cout << "File Content Before Delete\n";
			PrintFileContent(FileName);

			DeleteRecordFromFile(FileName, DeletedName);//It will not hard deleted, Only deleted from the vector. so the orginal txt file remind the same.

			cout << "\n\nFile Content Before Delete\n";
			PrintFileContent(FileName);
			return 0;
		}
	};
	class MyCode31{
		void LoadDataFromFileToVector(string FileUrl, vector<string>& vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::in);

			if (MyFile.is_open()) {

				string Line;

				while (getline(MyFile, Line)) {
					vFileContent.push_back(Line);
				}
				MyFile.close();
			}

		}

		void SaveVectorToFile(string FileUrl, vector<string>vFileContent) {

			fstream MyFile;
			MyFile.open(FileUrl, ios::out);

			if (MyFile.is_open()) {

				for (auto& Line : vFileContent)
				{
					if (Line != "") {
						MyFile << Line << endl;
					}
				}
				MyFile.close();
			}

		}

		void PrintFileContent(string FileName) {

			fstream MyFile;

			MyFile.open(FileName, ios::in);

			if (MyFile.is_open()) {
				string Line;

				while (getline(MyFile, Line)) {

					cout << Line << endl;
				}
				MyFile.close();
			}

		}

		void UpdateRecordInFile(string FileName, string Record, string UpdateTo) {

			vector<string>vFileContent;
			LoadDataFromFileToVector(FileName, vFileContent);
			for (auto& Line : vFileContent)
			{
				if (Line == Record) {
					Line = UpdateTo;
				}
			}
			SaveVectorToFile(FileName, vFileContent);
		}


		int main()
		{
			string FileName = "MyFile.txt";
			string Record = "Ali";
			string UpdatedTo = "Omer";

			cout << "File Content Before Update\n";
			PrintFileContent(FileName);

			UpdateRecordInFile(FileName, Record, UpdatedTo);

			cout << "\n\nFile Content After Update\n";
			PrintFileContent(FileName);
			return 0;
		}
	};
}