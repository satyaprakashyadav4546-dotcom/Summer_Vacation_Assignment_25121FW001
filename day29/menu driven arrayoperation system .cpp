#include <iostream>
using namespace std;
int main() {
    int arr[100], n = 0;
    int choice, element, position;
    int i, j;
    do {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Find Maximum\n";
        cout << "7. Find Minimum\n";
        cout << "8. Calculate Sum\n";
        cout << "9. Calculate Average\n";
        cout << "10. Sort Array\n";
        cout << "11. Reverse Array\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter size of array: ";
            cin >> n;
            cout << "Enter " << n << " elements:\n";
            for (i = 0; i < n; i++)
                cin >> arr[i];
            break;
        case 2:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                cout << "Array Elements: ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            break;
        case 3:
            cout << "Enter position (1-" << n + 1 << "): ";
            cin >> position;
            cout << "Enter element: ";
            cin >> element;
            if (position >= 1 && position <= n + 1) {
                for (i = n; i >= position; i--)
                    arr[i] = arr[i - 1];
                arr[position - 1] = element;
                n++;
                cout << "Element inserted successfully.\n";
            } else {
                cout << "Invalid position!\n";
            }
            break;
        case 4:
            cout << "Enter position to delete: ";
            cin >> position;

            if (position >= 1 && position <= n) {
                for (i = position - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
                cout << "Element deleted successfully.\n";
            } else {
                cout << "Invalid position!\n";
            }
            break;
        case 5:
            cout << "Enter element to search: ";
            cin >> element;
            for (i = 0; i < n; i++) {
                if (arr[i] == element) {
                    cout << "Element found at position " << i + 1 << endl;
                    break;
                }
            }
            if (i == n)
                cout << "Element not found.\n";
            break;
        case 6:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max << endl;
            }
            break;
        case 7:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int min = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                cout << "Minimum = " << min << endl;
            }
            break;
        case 8:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
            }
            break;
        case 9:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Average = " << (float)sum / n << endl;
            }
            break;
        case 10:
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Array sorted successfully.\n";
            break;
        case 11:
            for (i = 0; i < n / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[n - 1 - i];
                arr[n - 1 - i] = temp;
            }
            cout << "Array reversed successfully.\n";
            break;
        case 12:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 12);
    return 0;
}