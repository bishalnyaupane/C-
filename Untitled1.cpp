#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter the percentage: ";
    cin >> percentage;

    if (percentage >= 0 && percentage <= 100) {
        char grade;
        if (percentage >= 90 && percentage <= 100)
            grade = 'A';
        else if (percentage >= 80 && percentage <= 90)
            grade = 'B';
        else if (percentage >= 70 && percentage <= 80)
            grade = 'c';
        else if (percentage >= 60 && percentage <= 70)
            grade = 'D';
        else if (percentage >= 50 && percentage <= 60)
            grade = 'e';
        else
            grade = 'F';

        cout << "Grade: " << grade << endl;
    } else {
        cout << "Invalid percentage! Please enter a percentage between 0 and 100." << endl;
    }

    return 0;
}

