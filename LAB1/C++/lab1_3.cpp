#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double labGrade, midtermGrade, finalGrade, lastScore;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your lab grade: ";
    cin >> labGrade;

    cout << "Please enter your midterm grade: ";
    cin >> midtermGrade;

    cout << "Please enter your final grade: ";
    cin >> finalGrade;

    lastScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;

    cout << "Name: " << name << endl;
    cout << "Lab: " << labGrade << endl;
    cout << "Midterm: " << midtermGrade << endl;
    cout << "Final: " << finalGrade << endl;
    cout << "Last Score: " << lastScore << endl;

    return 0;
}
