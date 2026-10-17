
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- Array Manipulation Menu ---\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Find Sum of Elements\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2: {
                int pos, value;
                if (n >= 100) {
                    cout << "Array is full!\n";
                    break;
                }
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position!\n";
                    break;
                }
                cout << "Enter value: ";
                cin >> value;

                for (int i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = value;
                n++;

                cout << "Element inserted successfully.\n";
                break;
            }

            case 3: {
                int pos;
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n) {
                    cout << "Invalid position!\n";
                    break;
                }

                for (int i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;

                cout << "Element deleted successfully.\n";
                break;
            }

            case 4: {
                int value, found = 0;
                cout << "Enter element to search: ";
                cin >> value;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position "
                             << i + 1 << endl;
                        found = 1;
                    }
                }

                if (!found) {
                    cout << "Element not found.\n";
                }
                break;
            }

            case 5: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum of elements = " << sum << endl;
                break;
            }

            case 6:
                cout << "Program exited successfully.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
