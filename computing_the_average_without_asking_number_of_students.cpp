#include <iostream>
using namespace std;

int main() {

    bool seenEndOfInput;
    int sum;
    int number_of_students;
    int current;
    double average;

    

    cout << "Please enter grades separated by a space.  End the sequence by typing -1" << endl;
   
    seenEndOfInput = false;
    number_of_students = 0;
    sum = 0;


    // choose a while loop when we don't know the number of iterations.  If we know the number of iterations, we choose a for loop 
    while (seenEndOfInput == false) {
        cin >> current;
        if (current == -1) {
            seenEndOfInput = true;
        } else {
            sum = sum + current;
            number_of_students ++;
        }

    }

    average = (double)sum / (double)number_of_students;
    cout << "The class average is: " << average << endl;


    return 0;

    } 


