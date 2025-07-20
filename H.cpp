#include <iostream>
#include <limits>
using namespace std;

bool f = false;
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

void menu_6(){

cout << "Enter Index To Delete it :" << endl;  

                cin >> indexV;  
                if(indexV<numEle){
                for(int i = indexV; i < numEle; i++ ){
                        arrNum[i] = arrNum[i+1];
                     }
                     arrNum[numEle-1]=0;
                     numEle--;
                     printArray(arrNum, numEle);
               }else{
               
               cout << "Index of Elements Not found !" << endl;
          }     
}
void menu_7(){

cout << "Enter Index value :" << endl;
cin >> indexV;
cout << "Enter New value :" << endl;
cin >> value;
arrNum[indexV] = value;
printArray(arrNum, numEle);

}

void menu_8(){

bool f = false;
int oldValue;
cout << "Enter Old Value : " << endl; 
cin >> oldValue;
for(int i = 0 ; i < numEle; i++){
if(arrNum [i] == oldValue){

cout << "Enter A New Value : " << endl;
cin >> value;
arrNum [i] = value;
printArray(arrNum, numEle);
f = true;
break;

}
}if(f == false){

cout << "Not Found !!" << endl;

}
}

void menu_9(){

cout << "Enter the value to Search in Array" << endl;
cin >> value;

for(int i = 0; i < numEle; i++){

if(arrNum[i]==value){
cout << value <<" found in index " << i << endl;
}

f=true;

}if(!f){

cout << "Not Found!" << endl;

}
}

void menu_10(){

for(int i = 1; i < numEle; i++ ){

for(int j = 0; j > numEle; j++){

if(arrNum[j]<arrNum[i]){
int temp = arrNum[j];
arrNum[j]=arrNum[i];
arrNum[i]= temp;

}

}

}
printArray(arrNum, numEle);

}

int main() {
    cout << "Enter array :\n";
    cin >> l;
    if (l > 100 || l <= 0) {
        cout << "Invalid capacity!\n";
        return 0;
    }

    cout << "Enter initial number of elements:\n";
    cin >> numEle;

    if (numEle > l || numEle < 0) {
        cout << "Invalid number of initial elements!\n";
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
        cout << "[4] To Delete last Element\n";
        cout << "[5] To Delete From Start Element\n";
        cout << "[6] To Delete From Index of Element\n";
        cout << "[7] To Update by Index of Element\n";
        cout << "[8] To Update by Value of Element\n";
        cout << "[9] To Print Array\n";
        cout << "[10] To Search Array\n";
        cout << "[11] To Sort Array\n";
        cout << "[0] To Exit .. \n";
        cout << ">_ ";
        cin >> menu;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            menu = 0;
        }

        switch (menu) {
            case 0:
                cout << "Thank You For Testing My Program ( :" << endl;
            return 0;
            
             
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
                cout << "We going to delete the last Element :\n";
                arrNum[numEle-1]=0;
                numEle--;
                printArray(arrNum, numEle);
                break;
                
            case 5:
                cout << "We going to delete the last Element :\n";
                for(int i = 0; i < numEle; i++){
                
                arrNum[i] = arrNum[i+1];
                
                }
                arrNum[numEle-1]=0;
                numEle--;
                printArray(arrNum, numEle);
                break;
            
            case 6:
               menu_6();
                break;
           
            case 7:
                menu_7();
                break;  
                
            case 8:
                menu_8();
                break;      
            case 9:
                printArray(arrNum, numEle);
                break;      
           
            case 10:
                menu_9();
                break; 
                
            case 11:
                menu_10();
                break;     
                     
            default:
                cout << "Choose again!\n";
                break;
        }
    } while (menu != 10);

    return 0;
}
