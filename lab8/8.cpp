#include <iostream>
#include <iomanip>
#include <stdarg.h>
#include <cmath>
#include <time.h>
using namespace std ;
int randomNum();
int inputSize ();
int **newArray (int n);
int filArray(int ** array, int n);
void output (int **array , int n);
int sumaElemen (int **array, int n, int &middle);
int maxEl (int **array, int n, int &middle);
void final (int **array, int n, int &middle);

void deleteArray(int **array, int n);
int randomNum(){
    return rand()% 31 - 10 ;
}
int inputSize (){
    cout << " n = ";
    int n ;
    cin >> n ;
    if (n % 2 == 0){
        cout <<"The size value must be an odd number!!!";
        return 0;
    }
    return n;
}
int **newArray (int n){
    int **array = new  int*[n];
    for (int i = 0; i < n; i++){
        array [i] = new int [n];
    }
    for (int i = 0; i < n ; i++ ){
        for (int j = 0; j < n ; j++){
            array[i][j] = randomNum() ;
        }
    }
    return array;
}
void output (int **array , int n){
    for (int i = 0; i < n ; i++ ){
        for (int j = 0; j < n ; j++){
            cout << array[i][j] <<"\t";
        }
        cout << endl;
    }
}
int sumaElemen (int **array, int n, int &middle){
    int suma1 = 0;
    int suma2 = 0;
    for (int i = 0; i < n; i++) {
        if (i < middle) {
            for (int j = middle - i; j <= middle + i; j++) {
                suma1 +=array[i][j];
            }
        }
        else if (i >= middle) {
            for (int j = i - middle; j < n + middle - i; j++) {
                suma2 +=array[i][j];
            }
        }
    }
    return suma1 + suma2;
}
int maxEl (int **array, int n, int &middle){
    int max1 = array [0][middle];
    int max2 = array [middle][0];
    for (int i = 0; i < n; i++) {
        if (i < middle) {
            for (int j = middle - i; j <= middle + i; j++) {
                if ( array[i][j] > max1){
                    max1 = array[i][j];
                }
            }
        }
        else if (i >= middle) {
            for (int j = i - middle; j < n + middle - i; j++) {
                if ( array[i][j] > max2){
                    max2 = array[i][j];
                }
            }
        }
    }
    if (max1 > max2){
        return max1;
    }
    else{
        return max2;
    }
}
void final (int **array, int n, int &middle){
    for (int i = 0; i < n; i++) {
        if (i < middle) {
            for (int j = middle - i; j <= middle + i; j++) {
                cout << array[i][j]<< "\t";
            }
        }
        else if (i >= middle) {
            for (int j = i - middle; j < n + middle - i; j++) {
                cout << array[i][j]<< "\t";
            }
        }
        cout << endl ;
    }
}
void deleteArray(int **array, int n){
    for (int i = 0; i < n; i++)
    {
        delete[] array [i] ;
    }
    delete [] array; 
}

int main(){
    srand(time(NULL));
    int n = inputSize();
    int middle = n / 2 ;
    int **array = newArray (n);
    cout << "\nFirst Array" << endl;
    output(array, n);
    cout << "sum = " << sumaElemen (array, n , middle) << endl;
    cout << "max = " << maxEl (array, n , middle ) << endl;
    cout << "\nFinal Array" << endl;
    final (array, n, middle);
    deleteArray(array, n);
}