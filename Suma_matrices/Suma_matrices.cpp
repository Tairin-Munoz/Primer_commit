// Suma_matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//llenado de matriz
void llenado_matriz(int matriz[10][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void mostrar_matriz_(int matriz[10][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<< matriz[i][j]<<" ";
        }
        cout << endl;
    }
}

void suma_dos_matrices(int matrizA[10][10], int filasA, int columnasA, int matrizB[10][10], int filasB, int columnasB, int matriz_resultado[10][10], int &filasResu, int &columnasResu)
{
    filasResu = 0;
    columnasResu=0;
    if (filasA == filasB)
    {
 
        if (columnasA == columnasB)
        {
            filasResu = filasA;
            columnasResu = columnasB;
            for (int fila = 0; fila < filasA; fila++)
            {
                for (int columna =0; columna < columnasA; columna++)
                {
                    matriz_resultado[fila][columna] = matrizA[fila][columna] + matrizB[fila][columna];
                }
            }
        }
    }
}

int main()
{
    int filasA=4, columnasA=4;
    int matrizA[10][10];
    /*cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;*/
    cout << "Datos de la matriz A" << endl;
    llenado_matriz(matrizA, filasA, columnasA);
    mostrar_matriz_(matrizA, filasA, columnasA);

    cout << "Datos de la matriz B" << endl;
    int filasB = 4, columnasB = 4;
    int matrizB[10][10];
    llenado_matriz(matrizB, filasB, columnasB);
    mostrar_matriz_(matrizB, filasB, columnasB);

    int matrizSuma[10][10];
    int filasSuma;
    int columnasSuma;
    
    suma_dos_matrices(matrizA, filasA, columnasA, matrizB, filasB, columnasB, matrizSuma,filasSuma,columnasSuma);
    cout << "Resultado de la suma de matrices" << endl;
    mostrar_matriz_(matrizSuma, filasSuma, columnasSuma);

    return 0;
}


