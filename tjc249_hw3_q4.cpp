#include <iostream>
using namespace std;

int main()
{

    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double real_number;
    int rounding_choice;
    int rounded_number;

    cout << "Please enter a Real number: ";
    cin >> real_number;

    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;

    cin >> rounding_choice;

    switch (rounding_choice)
    {
    case 1:
        if (real_number < 0)
        {
            rounded_number = (int)real_number - 1; // For negative numbers, subtract 1
        }
        else
        {
            rounded_number = (int)real_number; // Truncate for positive numbers
        }
        break;
    case 2:
        if (real_number != (int)real_number)
        {
            rounded_number = (int)real_number + 1; // Add 1 if there's a fractional part
        }
        else
        {
            rounded_number = (int)real_number; // No change if it's already an integer
        }
        break;

    case 3:
        if (real_number >= 0)
        {
            real_number = real_number + .5;
            rounded_number = int(real_number);
        }
        else if (real_number < 0)
        {
            real_number = real_number - .5;
            rounded_number = int(real_number);
        }

        break;
    default:
        cout << "Invalid choice" << endl;
        return 1; // Exit the program if the input choice is invalid
    }
    cout << rounded_number << endl;

    return 0;
}