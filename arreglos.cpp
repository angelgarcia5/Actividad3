///
//  main.cpp
//  Arreglos
//
//  Created by Ma. Guadalupe Roque Díaz de León on 31/10/22.
//
// Objetivos - arreglos unidimensionales -
//           - ciclo for
//           - uso de condicionales if - else
//           - arreglos como parámetros de una función - paso de parámetros x REFERENCIA
//           - llamar a una función usando arreglos
//           - funciones void en c++
//
#include <iostream>
using namespace std;
//*************************************************
//* Nombre:Angelberto Garcia Pachuca
//* Matricula:A00837832
//* Carrera: ITC
//*************************************************

// Función que lee del teclado todos los valores que
// almacenará en el arreglo
// concepto muy importante - paso de parámetros por referencia - tu y Yo somos uno mismo
// el argumento correspondiente es el que se modifica directamente
void leerArreglo(int arrA[], int size){
     for (int indice = 0; indice < size; indice++){
        cin >> arrA[indice];
     }
}


// Función que despliega el contenido del arreglo
//    - cada elemento en un renglón diferente  y
// además calcula y despliega la suma y promedio de todos los elementos del arreglo
// ver casos de prueba opcion 1
void sumaYpromedioArreglo(int arrA[], int size){
    int suma = 0;
    for (int indice = 0; indice < size; indice++) {
        suma += arrA[indice];

}
   double promedio = static_cast<double>(suma) / size;

    for (int indice = 0; indice < size; indice++) {
        cout << arrA[indice] << endl;
    }

    cout << "Total = " << suma << endl;
    cout << "Promedio = " << promedio << endl;
}

void sumaValoresPares(int arrA[], int size){
    int sumaPares = 0;
    int cantidadPares = 0;
    for (int indice = 0; indice < size; indice++) {
        if (arrA[indice] % 2 == 0) {
            cout << arrA[indice] << endl;
            sumaPares += arrA[indice];
            cantidadPares++;
        }
}

    if (cantidadPares == 0) {
        cout << "No hubo valores pares en el arreglo" << endl;
    } else {
        double promedioPares = static_cast<double>(sumaPares) / cantidadPares;
        cout << "Total = " << sumaPares << endl;
        cout << "Promedio = " << promedioPares << endl;
    }
}

void reporteAlumnos(string arrNombresAlumnos[], int arrCalificacionesAlumnos[], int size, int calificacion){
    int totalAlumnosCumplen = 0;
    for (int indice = 0; indice < size; indice++) {
        if (arrCalificacionesAlumnos[indice] >= calificacion) {
            totalAlumnosCumplen++;
            cout << indice + 1 << " " << arrNombresAlumnos[indice] << " " << arrCalificacionesAlumnos[indice] << endl;
        }
    }

    if (totalAlumnosCumplen == 0) {
        cout << "No hubo alumnos" << endl;
    } else {
        cout << "Total = " << totalAlumnosCumplen << endl;
    }
}


int main() {
    int arrB[5];
    // Inicialización de arreglos desde código
    string arrNombres[] = {"Felipe","Natalia","Gustavo","Victoria", "Debanhi", "Paulina", "Vicente", "Ana Paula", "Gerardo", "Sergio", "Cho", "Gaby"};
    int arrCalificaciones[] = {110,110,100,100,100,110,120,100,110,110,100,105};
    int size = 5;
    int opcion, calificacion;

    // leer la opcion a ejecutar
    cin >> opcion;

    if (opcion == 1 || opcion == 2) {
        leerArreglo(arrB, size);
    }

    if (opcion == 1) {
        sumaYpromedioArreglo(arrB, size);
    } else if (opcion == 2) {
        sumaValoresPares(arrB, size);
    } else if (opcion == 3) {
        cin >> calificacion;
        reporteAlumnos(arrNombres, arrCalificaciones, 12, calificacion);
    } else {
        cout << "Opción incorrecta" << endl;
    }

    return 0;
}

/* Casos de Prueba
// caso 1 - opcion 1
Datos de entrada:
1
90
100
40
30
40
Datos de salida:
90
100
40
30
40
Total = 300
Promedio = 60

// caso 2 - opcion 1
Datos de entrada:
1
2
3
4
5
6
Datos de salida:
2
3
4
5
6
Total = 20
Promedio = 4

// caso 3 - opcion 1
Datos de entrada
1
10
20
30
40
50
Datos de salida
10
20
30
40
50
Total = 150
Promedio = 30

// caso 4 - opcion 2
Datos de entrada:
2
1
3
5
7
9
Datos de salida:
No hubo valores pares en el arreglo

// caso 5 - opcion 2
Datos de entrada:
2
10
15
20
25
30
Datos de salida:
10
20
30
Total = 60
Promedio = 20

// caso 6 - opcion 2
Datos de entrada:
2
1
500
2
700
7
Datos de salida:
500
2
700
Total = 1202
Promedio = 400.667

// caso 7 - opcion 3
Datos de entrada:
3
110

Datos de salida:
1 Felipe 110
2 Natalia 110
3 Paulina 110
4 Vicente 120
5 Gerardo 110
6 Sergio 110
Total = 6

// caso 8 - opcion 3
Datos de entrada:
3
120

Datos de salida:
1 Vicente 120
Total = 1

// caso 9 - opcion 3
Datos de entrada:
3
300
Datos de salida:
No hubo alumnos

ej
*/
