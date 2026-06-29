#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[100], str2[100];
    int choice;
    do {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Copy String\n";
        cout << "5. Concatenate Strings\n";
        cout << "6. Compare Strings\n";
        cout << "7. Reverse String\n";
        cout << "8. Convert to Uppercase\n";
        cout << "9. Convert to Lowercase\n";
        cout << "10. Check Palindrome\n";
        cout << "11. Count Vowels\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Enter first string: ";
            cin.getline(str1, 100);
            break;
        case 2:
            cout << "String: " << str1 << endl;
            break;
        case 3:
            cout << "Length = " << strlen(str1) << endl;
            break;
        case 4:
            strcpy(str2, str1);
            cout << "Copied String: " << str2 << endl;
            break;
        case 5:
            cout << "Enter second string: ";
            cin.getline(str2, 100);
            strcat(str1, str2);
            cout << "Concatenated String: " << str1 << endl;
            break;
        case 6:
            cout << "Enter second string: ";
            cin.getline(str2, 100);
            if (strcmp(str1, str2) == 0)
                cout << "Strings are Equal.\n";
            else
                cout << "Strings are Not Equal.\n";
            break;
        case 7: {
            char temp[100];
            strcpy(temp, str1);
            strrev(temp);
            cout << "Reversed String: " << temp << endl;
            break;
        }
        case 8:
            for (int i = 0; str1[i] != '\0'; i++) {
                if (str1[i] >= 'a' && str1[i] <= 'z')
                    str1[i] = str1[i] - 32;
            }
            cout << "Uppercase: " << str1 << endl;
            break;
        case 9:
            for (int i = 0; str1[i] != '\0'; i++) {
                if (str1[i] >= 'A' && str1[i] <= 'Z')
                    str1[i] = str1[i] + 32;
            }
            cout << "Lowercase: " << str1 << endl;
            break;
        case 10: {
            char temp[100];
            strcpy(temp, str1);
            strrev(temp);
            if (strcmp(str1, temp) == 0)
                cout << "Palindrome String\n";
            else
                cout << "Not a Palindrome String\n";
            break;
        }
        case 11: {
            int count = 0;
            for (int i = 0; str1[i] != '\0'; i++) {
                char ch = str1[i];
                if (ch == 'a' || ch == 'e' || ch == 'i' ||
                    ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' ||
                    ch == 'O' || ch == 'U')
                    count++;
            }
            cout << "Number of Vowels = " << count << endl;
            break;
        }
        case 12:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 12);
    return 0;
}