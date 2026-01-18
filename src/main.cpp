#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n=== Student Grade System ===\n";
        cout << "1. Add student\n";
        cout << "2. Delete student\n";
        cout << "3. Update grade\n";
        cout << "4. Show report\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Add student selected\n";
                break;
            case 2:
                cout << "Delete student selected\n";
                break;
            case 3:
                cout << "Update grade selected\n";
                break;
            case 4:
                cout << "Show report selected\n";
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
