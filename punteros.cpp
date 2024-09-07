#include <iostream>
#include "function.hpp"

using namespace std;
/*
void setNewValue(int*);
int main() {

    int userAge = 18;
    cout << userAge << endl;

    setNewValue(&userAge);

    cout << userAge;
    
    return 0;
}

void setNewValue(int* userAge){
        cout << "Ingrese su edad: "; cin >> *userAge;
        cout << *userAge << endl;
}*/


void addNewNumberOnArray(int*, int*);
void showAllElements(int*);

int main (){

    //[1, 2, 3, 4, 5], [int, int, int, int, int] [4B, 5B, 6B, 7, 8B, 9B]

    int myNumbersArray[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        //Modularizacion
        addNewNumberOnArray(&myNumbersArray[i], &count);
    }
    
    showAllElements(myNumbersArray);
    //--&espacio1, &espacio 2, &espacio3

    return 0;
}

void showAllElements(int* myArray){
    for(int i = 0; i<4; i++){
        cout << myArray[i] << endl;
    }
}