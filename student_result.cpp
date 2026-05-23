#include <iostream>
#include <string>
using namespace std;

// Function to check pass/fail
string student_result(int average) {
    if (average >= 50) {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main() {
    string name;
    int math1, datastructure2, operatingsystem3;
    char choice;

    do {
        cout << "\t\tEnter Student Name:______";
        cin >> name ;
        cout << "\t\tEnter marks for math 1: ";
        cin >> math1;
        cout << "\t\tEnter marks for datastrucure 2: ";
        cin >> datastructure2;
        cout << "\t\tEnter marks for operatingsystem 3: ";
        cin >> operatingsystem3;

    
        int total = math1 + datastructure2 + operatingsystem3;
        int average = total / 3;

        cout << "\t\t===== Student Result =====\n";
        cout << "\t\tName: " << name << endl;
        cout << "\t\tTotal Marks: " << total << endl;
        cout << "\t\tAverage Marks: " << average << endl;
        cout << "\t\tResult: " << student_result(average) << endl;
        cout << "\t\t\nDo you want to enter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    cout << "\nExiting Student Result\n";
    return 0;
}
