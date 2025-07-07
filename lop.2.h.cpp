#include <iostream>
#include <limits>
using namespace std;

int l;
int arrNum[100];
int menu;
int value;
int indexV;
int numEle;

void printArray(int x[], int len) {
    cout << "\nArray Elements:\n";
    for (int i = 0; i < len; i++) {
        cout << "[ " << x[i] << " ]\n";
    }
}

void menu_1() {
    if (numEle >= l) {
        cout << "Array is full!\n";
        return;
    }
    cout << "Enter the new value:\n";
    cin >> value;
    for (int i = numEle; i > 0; i--) {
        arrNum[i] = arrNum[i - 1];
    }
    arrNum[0] = value;
    numEle++;
    printArray(arrNum, numEle);
}

void menu_2() {
    if (numEle >= l) {
        cout << "Array is full!\n";
        return;
    }
    cout << "Enter the new value:\n";
    cin >> value;
    cout << "Enter the index (0 to " << numEle-1 << "):\n";
    cin >> indexV;
    if (indexV < 0 || indexV > numEle) {
        cout << "Invalid index!\n";
        return;
    }
    for (int i = numEle; i > indexV; i--) {
        arrNum[i] = arrNum[i - 1];
    }
    arrNum[indexV] = value;
    numEle++;
    printArray(arrNum, numEle);
}

void menu_3() {
    if (numEle >= l) {
        cout << "Array is full!\n";
        return;
    }
    cout << "Enter the new value:\n";
    cin >> value;
    arrNum[numEle] = value;
    numEle++;
    printArray(arrNum, numEle);
}

int main() {
    cout << "Enter array capacity (max 100):\n";
    cin >> l;
    if (l > 100 || l <= 0) {
        cout << "Invalid capacity!\n";
        return 0;
    }

    cout << "Enter initial number of elements:\n";
    cin >> numEle;

    if (numEle > l || numEle < 0) {
        cout << "Inval""id number of initial elements!\n";
        return 0;
    }

    cout << "Enter the array elements:\n";
    for (int i = 0; i < numEle; i++) {
        cin >> arrNum[i];
    }

    printArray(arrNum, numEle);

    do {
        cout << "\n#-#-#-#-#-[MENU]-#-#-#-#-#\n";
        cout << "[1] Insert at beginning\n";
        cout << "[2] Insert at any position\n";
        cout << "[3] Insert at end\n";
        cout << "[4] Exit\n";
        cout << ">_ ";
        cin >> menu;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            menu = 0;
        }

        switch (menu) {
            case 1:
                menu_1();
                break;
            case 2:
                menu_2();
                break;
            case 3:
                menu_3();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Choose again!\n";
                break;
        }
    } while (menu != 4);

    return 0;
}