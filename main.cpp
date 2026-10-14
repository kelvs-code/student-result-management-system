
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int marks[SIZE];
    int total = 0;
    int highest, lowest;
    double average;

    // Input marks for five students
    cout << "STUDENT RESULT MANAGEMENT SYSTEM\n";

    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Enter marks for student "
                 << i + 1 << " (0-100): ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid marks. Try again.\n";
            }
        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];
    }

    // Calculate the average
    average = static_cast<double>(total) / SIZE;

    // Find the highest and lowest marks
    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < SIZE; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    // Display individual results
    cout << "\nINDIVIDUAL STUDENT RESULTS\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1
             << ": " << marks[i]
             << " - "
             << (marks[i] >= 50 ? "Pass" : "Fail")
             << '\n';
    }

    // Display summary
    cout << "\nCLASS SUMMARY\n";
    cout << "Total marks: " << total << '\n';
    cout << "Average marks: " << average << '\n';
    cout << "Highest mark: " << highest << '\n';
    cout << "Lowest mark: " << lowest << '\n';

    return 0;
}
