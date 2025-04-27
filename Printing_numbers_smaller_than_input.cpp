#include <iostream>
using namespace std;

int main() {
    int input_number;
    int current_number = 0;

    cout << "Please enter a positive integer: "<< endl;
    cin >> input_number;
    cout << "You chose number: " << input_number << endl;

    cout << "Here are all the numbers that are smaller than the number you chose, starting with 0: " << endl;
    while (current_number < input_number) {
        cout << current_number << endl;
        current_number = current_number + 1; //could also write current_number++
    }

    return 0;

}

