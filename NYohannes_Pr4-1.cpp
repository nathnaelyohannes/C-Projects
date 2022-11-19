#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int NumOfEmployees();
int TotDaysAbsent(int);
double AverageAbsent(int, int);

int main(){
    int employees = 0;
    int absent = 0;
    int Average = 0;

    employees = NumOfEmployees();
    absent = TotDaysAbsent(employees); 
    Average = AverageAbsent(absent, employees);



}

int NumOfEmployees()
{
	int NumOfEmployees_1;

	cout << "Please enter the number of the employees in the company: ";
	cin >> NumOfEmployees_1;

	while (NumOfEmployees_1 < 1)
	{
		cout << "The number of employee must be greater than 0.";
		cout << "Please re-enter the number of employee.";
		cin >> NumOfEmployees_1;
	}
	return NumOfEmployees_1;
}

int TotDaysAbsent(int e)
{
    ofstream myFile;
    myFile.open("employeesAbsences.txt", ios::out);
    myFile << "EMPLOYEE ABSENCE REPORT" << endl;
    myFile << "employees id" << setw(20) << "days absent" << endl;


	int NumOfEmployees = e;
    double AvgAbsent;
	int TotDaysAbsent_1;
	int total_days = 0;

	for (int i = 0; i < NumOfEmployees; i++)
	{
		int employeeId;

		cout << "Please enter employee ID: ";
		cin >> employeeId;
		cout << "Enter number of Days this employee was absent: ";
		cin >> TotDaysAbsent_1;
		total_days += TotDaysAbsent_1;

		if (TotDaysAbsent_1 < 0)
		{
			cout << "The number of days must not be negative." << endl;
			cout << "Please re-enter the number of days absent: ";
			cin >> TotDaysAbsent_1;
		}

        myFile << employeeId << setw(20) << TotDaysAbsent_1 << endl;
	}
    myFile << "The " << NumOfEmployees << " employees were absent a total of " << total_days << " days." << endl;
        AvgAbsent = total_days / NumOfEmployees;
        myFile << fixed << setprecision(1) << showpoint;
        myFile << "The average number of days absent is " << AvgAbsent << " days." << endl;
        myFile << "Programmer: Nathnael Yohannes";
        cout << "Programmer: Nathnael Yohannes";

	
	return total_days;
}

double AverageAbsent(int a, int b)
{
	int NumOfEmployees_1 = a;
	int total_days = b;
	double AverageAbsent_1;

	AverageAbsent_1 = total_days /NumOfEmployees_1;
	return AverageAbsent_1;

}