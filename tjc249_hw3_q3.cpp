#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     cout << fixed;
    cout.precision(1);

    int a;
    int b;
    int c;

    cout << "Please enter a value of a: ";
    cin >> a;
    cout << "Please enter a value of b: ";
    cin >> b;
    cout << "Please enter a value of c: ";
    cin >> c;

    double real_solution_1 = -b + sqrt((b * b) - (4 * a * c)) / (2 * a);
    double real_solution_2 = -b - sqrt((b * b) - (4 * a * c)) / (2 * a);
    double one_real_solution = (-b / (2 * a));

    if (a == 0 && b == 0 && c == 0) 
    {
        cout << "This equation has infinite solutions" << endl;
    }
    else if (a == 0 && c == 0)
    {
        cout << "This equation has no solutions at all" << endl;
    }
    else if (!(a == 0) && ((b * b) - (4 * a * c)) < 0)
    {
        cout << "This equation has no real solutions" << endl;
    }
    else if (!(a == 0) && ((b * b )  - (4.0 * a * c) == 0))
    {
        cout << "This equation has one real solution x=" << one_real_solution << endl;
    }
    else if (!(a == 0) && ((b * b) - (4.0 * a * c)) > 0)
    {
        cout << "This equation has two real solutions x= " << real_solution_1 << " and x=" << real_solution_2 << endl;
    }
    else
    {
        cout << "There seems to be a mistake.  Please try again.";
    }


    return 0;
}

