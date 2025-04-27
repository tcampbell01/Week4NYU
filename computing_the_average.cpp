#include <iostream>
using namespace std;


int main() {
    int numOfStudents;
    int count;
    int current;
    int sum = 0;
    double average;

    cout << "Please enter the number of students in the class: " << endl;
    cin >> numOfStudents;

    cout << "Enter the students' grades separated by a space: " << endl;

    for (count = 1; count <= numOfStudents; count++) {
        cin >> current;
        sum += current;
    }

    average = (double)sum / (double)numOfStudents;

    cout << "The average is: " << average << endl;

 
    return 0;
}