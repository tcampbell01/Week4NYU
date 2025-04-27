#include <iostream>
using namespace std;

int main()
{

    int pounds;
    int inches;
    double kilograms;
    double meters;
    double bmi;
    string weight_status;

    cout << "Please enter weight (in pounds): " << endl;
    cin >> pounds;

    cout << "Please enter height (in inches): " << endl;
    cin >> inches;

    kilograms = pounds * 0.453592;
    meters = inches * 0.0254;

    bmi = kilograms / (meters * meters);

    if (bmi < 18.5)
    {
        weight_status = "Underweight";
    }
    else if (bmi >= 18.5 && bmi <= 25)
    {
        weight_status = "Normal";
    }
    else if (bmi > 25 && bmi < 30)
    {
        weight_status = "Overweight";
    }
    else
    {
        weight_status = "Obese";
    }

    cout << "The weight status is: " << weight_status << endl;

    return 0;
}
