#include <iostream>
using namespace std;

int main() {

    string name;
    int grad_year;
    int current_year;
    string status;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your graduation year: ";
    cin >> grad_year;

    cout << "Please enter current year: ";
    cin >> current_year;

    if (grad_year == current_year) {
        status = "Graduated";
        
    } 
    else if (grad_year - current_year == 4) {
        status = "Freshman";
    }
    else if (grad_year - current_year == 3) {
        status = "Sophomore";
    } 
    else if (grad_year - current_year == 2) {
        status = "Junior";
    } 
    else if (grad_year - current_year == 1) {
        status = "Senior";
    } else {
        status = "not in college yet";
    }

    cout << name << ", " << "you are a " << status << endl;

    return 0;
}