#include <iostream>
using namespace std;

void Array(int x[], int l) {
    cout << "Array elements are : " << endl;
    for (int i = 0; i < l; i++) {
        cout << x[i] << endl;
    }
}

int main() {
    int l;
    cout << "Enter length of array: ";
    cin >> l;

    int numEle;
    cout << "Enter number of elements : ";
    cin >> numEle;

    if (numEle < l) {
        int arrNum[l];
        cout << "Enter the array elements : " << endl;
        for (int i = 0; i < numEle; i++) {
            cout << "Enter elements ["<< i+
			 << "] : ";
			cin >> arrNum[i];
        }

        Array(arrNum, numEle);
    }
    return 0;
}
