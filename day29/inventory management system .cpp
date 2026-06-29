#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int MAX = 100;
    int id[MAX], quantity[MAX], n = 0, choice, searchId;
    float price[MAX];
    string name[MAX], category[MAX], supplier[MAX];
    do {
        cout << "\n========== INVENTORY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Delete Product\n";
        cout << "6. Increase Stock\n";
        cout << "7. Decrease Stock\n";
        cout << "8. Show Total Inventory Value\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            if (n < MAX) {
                cout << "Enter Product ID: ";
                cin >> id[n];
                cin.ignore();
                cout << "Enter Product Name: ";
                getline(cin, name[n]);
                cout << "Enter Category: ";
                getline(cin, category[n]);
                cout << "Enter Quantity: ";
                cin >> quantity[n];
                cout << "Enter Price: ";
                cin >> price[n];
                cin.ignore();
                cout << "Enter Supplier Name: ";
                getline(cin, supplier[n]);
                n++;
                cout << "Product Added Successfully.\n";
            } else {
                cout << "Inventory Full!\n";
            }
            break;
        case 2:
            if (n == 0) {
                cout << "No Products Available.\n";
            } else {
                cout << "\n-------------------------------------------------------------\n";
                cout << left << setw(8) << "ID"
                     << setw(20) << "Name"
                     << setw(15) << "Category"
                     << setw(10) << "Qty"
                     << setw(10) << "Price" << endl;
                for (int i = 0; i < n; i++) {
                    cout << left << setw(8) << id[i]
                         << setw(20) << name[i]
                         << setw(15) << category[i]
                         << setw(10) << quantity[i]
                         << setw(10) << price[i] << endl;
                }
            }
            break;
        case 3: {
            cout << "Enter Product ID: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Category: " << category[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                    cout << "Price: " << price[i] << endl;
                    cout << "Supplier: " << supplier[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found.\n";
            break;
        }
        case 4: {
            cout << "Enter Product ID to Update: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cin.ignore();
                    cout << "Enter New Product Name: ";
                    getline(cin, name[i]);
                    cout << "Enter New Category: ";
                    getline(cin, category[i]);
                    cout << "Enter New Quantity: ";
                    cin >> quantity[i];
                    cout << "Enter New Price: ";
                    cin >> price[i];
                    cin.ignore();
                    cout << "Enter New Supplier: ";
                    getline(cin, supplier[i]);
                    cout << "Product Updated Successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found.\n";
            break;
        }
        case 5: {
            cout << "Enter Product ID to Delete: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    for (int j = i; j < n - 1; j++) {
                        id[j] = id[j + 1];
                        name[j] = name[j + 1];
                        category[j] = category[j + 1];
                        quantity[j] = quantity[j + 1];
                        price[j] = price[j + 1];
                        supplier[j] = supplier[j + 1];
                    }
                    n--;
                    cout << "Product Deleted Successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found.\n";
            break;
        }
        case 6: {
            cout << "Enter Product ID: ";
            cin >> searchId;
            int addQty;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "Enter Quantity to Add: ";
                    cin >> addQty;
                    quantity[i] += addQty;
                    cout << "Stock Updated.\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found.\n";
            break;
        }
        case 7: {
            cout << "Enter Product ID: ";
            cin >> searchId;
            int removeQty;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "Enter Quantity to Remove: ";
                    cin >> removeQty;

                    if (removeQty <= quantity[i])
                        quantity[i] -= removeQty;
                    else
                        cout << "Insufficient Stock!\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found.\n";
            break;
        }
        case 8: {
            float total = 0;

            for (int i = 0; i < n; i++)
                total += quantity[i] * price[i];

            cout << "Total Inventory Value = " << total << endl;
            break;
        }
        case 9:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 9);
    return 0;
}