#include <iostream>
#include <string>

using namespace std;

/*
array[1, 2, 3, 4]

producto, nombre y stock

Product array[]

[nombre][stock][descripcion]
[nombre2][stock2][descripcion2]
[nombre3][stock3][descripcion3]

structura  = struct

struct Product{
    string nombre;
    int stock;
};

7 = ""

*/

/*

    Private: Que solo funciones o variables que se encuentran dentro del mismo bloque de codigo, pueden acceder a ella

    Public(default): Que todas las funciones, variables o archivos que incluyan el bloque codigo o este asoaicada a ellas, pueden acceder a ese bloque
*/

struct UCAStudent
{
    string name;
    int age = 0;
    string dni;
    string emotionalSituacion;

    // Tema algo avanzado para ped
    // Setter y Getters
    /*void setCareer(string _career){
        this->career = _career;
    }

    string getCareer(){
        return this->career;
    }*/

    // private:
    string career;
};

int main()
{

    /*int aaronOption;
    aaronOption = 5;
    myFunction(5);*/

    UCAStudent students[10];
    //UCAStudent[10];

    //type name = valor
    //type name2 = valor2
    //string myName = "Henry"
    //int myAge = 23
    //string myDni = "061099208"
    //UCAStudent currentStudent;

    //type name[tamaño];
    //string friendsNames[20];
    //int friendsAge[20]


    /*

        UCAStudents:
            UCAStudent
            UCAStudent
            UCAStudent

        People:
            Person
            Person
            Person

        Person:
            name
            age
    
    
    */
    // students[UCAStudent, UCAStudent, UCAStudent, UCAStudent]
    // students = [{name = Henry, age = 23, dni = 061099208, emotionalSituacion = "depresion", career = "La mejor de todas"},{name = Aaron, age = 19, dni = 123456789, emotionalSituacion = happy,
    // career = "la mejor de todas"},{},{}]

    /*int myArray[5]; // [1, 2, 3, 4 ,5, "Henry"]

    int myInt = 0; // 0
*/
    bool stopCondition = true;

    int count = 0; // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

    do
    {
        cout << "\n1- Agregar un estudiante (10 maximo)\n2- Listar estudiantes\n3- Salir\n";
        cout << "Ingrese la opcion a la que desea ingresar: ";
        int userOption;
        cin >> userOption;

        switch (userOption)
        {
        case 1:
        {
            // Guardar, Borrar, Guardar, Borrar
            UCAStudent currentStudent;
            cout << "Ingrese el nombre del estudiante: ";
            cin.ignore();
            getline(cin, currentStudent.name);
            cout << "Ingrese la edad del estudiante: ";
            cin >> currentStudent.age;
            cout << "Ingrese el dni del estudiante: ";
            cin >> currentStudent.dni;
            cout << "Ingrese la situacion emocional del estudiante: ";
            cin.ignore();
            getline(cin, currentStudent.emotionalSituacion);
            cout << "Ingrese el nombre de la carrera del estudiante: ";
            getline(cin, currentStudent.career);
            
            students[count] = currentStudent;
            count++;
            break;
        }
        case 2:
        {
            for (int i = 0; i < 10; i++)
            {
                cout << "\nNombre del estudiante: " << students[i].name;
                cout << "\nEdad del estudiante: " << students[i].age;
                cout << "\nDNI del estudiante: " << students[i].dni;
                cout << "\nEstado emocional del estudiante: " << students[i].emotionalSituacion;
                cout << "\nCarrera del estudiante: " << students[i].career << endl ;
            }
            break;
        }
        case 3:
        {
            cout << "Gracias por usar nuestro sistema";
            stopCondition = false;
            break;
        }
        default:
        {
            cout << "Esa opcion es invalida";
            break;
        }
        }
    } while (stopCondition);

    return 0;
}
/*void myFunction(int myNumber)
{
    int mySecondNumber;
    mySecondNumber = myNumber;
}*/

// Entidades = Un objeto, persona, situacion, estado, y demas que posee propiedaes,
// Propiedades = Caracteristicas del objeto o posesiones

/*
Carro:
    Color
    Marca
    Modelo
    Año
    Placa
    Dueño
    Procedencia

Persona:
    Nombre
    Apellidos
    Edad
    Fecha de nacimiento
    Color de piel
    Genero, femenino o masculino

*/