/*
 * Class: CMSC140 CRN 20088
 * Instructor: Professor Ahmed Tarek
 * Project<2>
 * Due Date:10/10/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nathnael Yohannes
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {

    string country_name;
    cout << "Enter a country name: ";
    cin >> country_name;

    int temprature, celsius, fahrenheit;
    double distance, weight, kilometer, mile, kilogram, pound;
    int choice;

    cout << endl << endl << "Converter Toolkit " << endl;
    cout << "----------------- " << endl;
    cout << "1. Temprature Converter " << endl;
    cout << "2. Distance Converter " << endl;
    cout << "3. Weight Converter " << endl;
    cout << "4. Quit " << endl << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1){
        cout << "Please enter Temprature in Celsius (such as 24): ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << fixed << setprecision(0);
        cout << "It is " << fahrenheit << " in fahrenheit " << endl << endl;
    }
    else if (choice == 2){
        cout << "Please enter Distance in Kilometer (such as 18.54): ";
        cin >> kilometer;
        if (kilometer >= 0){
            mile = 0.6 * kilometer;
            cout << fixed << setprecision(2);
            cout << "It is " << mile << " in mile " << endl << endl;
        }
        else{
            cout << "!!! Program does not convert Negative numbers " << endl << endl;
        }
    }
    else if (choice == 3){
        cout << "Please enter Weight in Kilogram (such as 121.6): ";
        cin >> kilogram;
        if (kilogram >= 0){
            pound = 2.2 * kilogram;
            cout << fixed << setprecision(1);
            cout << "It is " << pound << " in pound " << endl << endl;
        }
        else{
            cout << "!!! Program does not convert Negative numbers " << endl << endl;
        }
    }
    else if (choice == 4){
        cout << "END! " << endl << endl;
    }
    else{
        cout << "!!! Number Entered Invalid !!! " << endl << endl;
    }

    cout << country_name << " sounds fun " << endl << endl << endl;

    cout << "Thank you for testing my program!! " << endl;
    cout << "PROGRAMMER: Nathnael Yohannes " << endl;
    cout << "CMSC140 Common Project 2 " << endl;
    cout << "Due Date: 10/10/2022 " << endl << endl;

    return 0;
}