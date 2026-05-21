#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice, subChoice;
    string line;

    do {
        cout << "\n=== Foundations and History of C++ ===\n";
        cout << "1. View History of C++\n";
        cout << "2. Learn about C++ Concepts\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\n--- History of C++ ---\n";
            cout << "1. Origin of C++\n";
            cout << "2. Development of C++\n";
            cout << "3. Evolution of C++\n";
            cout << "Enter chapter number: ";
            cin >> subChoice;

            if (subChoice == 1) {
                cout << "\nOrigin of C++:\n";
                cout << "C++ was developed by Bjarne Stroustrup in 1979 at Bell Labs...\n";
            } else if (subChoice == 2) {
                cout << "\nDevelopment of C++:\n";
                cout << "C++ evolved from C with classes, adding object-oriented features...\n";
            } else if (subChoice == 3) {
                cout << "\nEvolution of C++:\n";
                cout << "C++ has undergone multiple standard revisions: C++98, C++11, C++17, C++20...\n";
            } else {
                cout << "Invalid chapter.\n";
            }
            break;

        case 2:
            cout << "\n--- Learn about C++ Concepts ---\n";
            cout << "1. Data Types\n";
            cout << "2. Control Flow\n";
            cout << "3. Loops\n";
            cout << "4. Arrays\n";
            cout << "5. File Streams\n";
            cout << "Enter chapter number: ";
            cin >> subChoice;

            if (subChoice == 1) {
                cout << "\nData Types:\n";
                cout << "C++ supports int, float, double, char, bool, etc.\n";
            } else if (subChoice == 2) {
                cout << "\nControl Flow:\n";
                cout << "Includes if-else, switch-case, and conditional operators.\n";
            } else if (subChoice == 3) {
                cout << "\nLoops:\n";
                cout << "For, while, and do-while loops are used for iteration.\n";
            } else if (subChoice == 4) {
                cout << "\nArrays:\n";
                cout << "Arrays store multiple values of the same type in contiguous memory.\n";
            } else if (subChoice == 5) {
                cout << "\nFile Streams:\n";
                ifstream file("filestream.txt"); // external file
                if (file.is_open()) {
                    while (getline(file, line)) {
                        cout << line << endl;
                    }
                    file.close();
                } else {
                    cout << "Unable to open filestream.txt. Please create the file.\n";
                }
            } else {
                cout << "Invalid chapter.\n";
            }
            break;

        case 3:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
