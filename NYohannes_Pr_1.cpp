/*
 * Class: CMSC140 CRN 20088
 * Instructor: Dr. Ahmed Tarek
 * Project<1>
 * Description
 * Due Date: 9/26/22
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Name: Nathnael Yohannes
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {


    string robotName;
    robotName = "Nao";
    cout << "Hello, welcome to Montgomery College! My name is " << robotName << ". " << "May I have your name? ";
    

    string visitorName;
    getline(cin, visitorName);
    cout << "Nice to have you with us today, " << visitorName << "! " << endl;
    cout << "Let me impress you with a small game. " << endl;
    cout << "Give me the age of an important person or a pet to you. " << endl;


    int age;
    cout << "Please give me only a number: " << endl;
    cin >> age;
    cout << "You have entered " << age << ". " << endl << "\n";


    int human, months, days, hours, minutes, seconds, dog, goldfish;

    const int human_years = 1;
    human = age * human_years;
    cout << "If this is for a person, the age can be expressed as: " << endl;
    cout << human << " years " << endl;

    const int months_per_year = 12;
    months = age * months_per_year;
    cout << "or " << months << " months " << endl;


    const int days_per_year = 360;
    days = days_per_year * age;
    cout << "or about " <<  days << " days " << endl;


    const int hours_per_year = 8640;
    hours = hours_per_year * age;
    cout << "or about " << hours << " hours " << endl;


    const int minutes_per_year = 518400;
    minutes = minutes_per_year * age;
    cout << "or about " << minutes << " minutes " << endl;


    const int seconds_per_year = 31104000;
    seconds = seconds_per_year * age;
    cout << "or about " << seconds << " seconds " << endl;


    const int dog_year = 7;
    dog = dog_year * age;
    cout << "If this is for a dog, it is " << dog << " years old in human age. " << endl;


    const int gold_fish_year = 5;
    goldfish = gold_fish_year * age;
    cout << "If this is for a gold fish, it is " << goldfish << " years old in human age." << endl << "\n";


    double whole_number1;
    cout << "Let's play another game, " << visitorName << ". " << "Give me a whole number. " << endl;
    cin >> whole_number1;


    double whole_number2;
    cout << "Very well. Give me another whole number. " << endl;
    cin >> whole_number2;


    double addition;
    addition = whole_number1 + whole_number2;
    cout << "Using the operator '+' in C++, the result of " << whole_number1 << " + " << whole_number2 << " is " << addition << ". " << endl;


    double division;
    division = whole_number1 / whole_number2;
    cout << fixed << showpoint << setprecision(0);
    cout << "Using the operator '/', the result of " << whole_number1 << " / " << whole_number2 << " is " << division << endl;


    double division2;
    division2 = whole_number1 / whole_number2;
    cout << fixed << showpoint << setprecision(1);
    cout << "however, the result for " << whole_number1 << " / " << whole_number2 << " is about " << division2 << endl << "\n";


    cout << "Thank you for testing my program!! " << endl;

    const string programmer = " Nathnael Yohannes ";
    cout << "PROGRAMMER:" << programmer << endl;

    const int project_number = 1;
    cout << "CMSC140 Common Project " << project_number << endl;

    const int due_day = 26;
    const int due_month = 9;
    const int due_year = 2022;

    cout << "Due Date: " << due_day << "/" << due_month << "/" << due_year << endl;

    return 0;

}