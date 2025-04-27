#include <iostream>
using namespace std;

int main() {
    int input_number;
    int current_number;

    cout << "Please enter a positive integer: ";
    cin >> input_number;

    for (current_number = 0; current_number < input_number; current_number++) {
        cout << current_number << endl; //initialize; condition; increment;
    } 

    return 0;

}