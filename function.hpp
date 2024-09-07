#include <iostream>

using namespace std;

void addNewNumberOnArray(int* myNewNumberOnArray, int* myCounter){

    int newNumber;
    cout << "Ingrese el nuevo valor que deseea agregar: "; cin >> newNumber;
    cin.ignore();
    *myNewNumberOnArray = newNumber;
    *myCounter+=1;
}

int sumAllElements(int* arrayNumber){
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum+=arrayNumber[i];
    }

    return sum;
    
}