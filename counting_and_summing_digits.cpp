#include <iostream>
using namespace std;

int main() {

    int input_number;
    int remaining_number;
    int countDigits = 1;
    int addDigits = 0;

    cout << "Please enter an integer: " << endl;
    cin >>  input_number;

    remaining_number = input_number;

    while (remaining_number != 0) {
        addDigits = addDigits + remaining_number % 10;
        countDigits ++;
        remaining_number = remaining_number / 10;
      
    }

    cout << "Total number of digits is: " << countDigits << endl;
    cout << "The sum of the digits is: " << addDigits << endl;

    return 0;
    
        
}