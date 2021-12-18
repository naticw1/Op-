#include <iostream>
#include <stdlib.h>
using namespace std ;
void input (int d[], int n){
    srand(time(NULL));
    for ( int i = 0 ; i < n ; i++){
        d[i] = rand()%500 - 100 ; //ініціалізація масиву із від'ємними значеннями
    }
}
void output(int d[], int n){
    for (int i = 0 ; i < n ; i++){
        cout << d[i]<<"\t"; //вивід маиву для виразності
    }
}
void min_el ( int d[], int n, int &index1 ){
    int min;
    for (int i = 0; i < n; i++){
        if ( (d[i] > 0) && (d[i] < d[index1])){ //умова для мінімального елемента
            min = d[i];
            index1 = i; // індекс мінімального 
        }
    }
    cout << endl;
    cout << "Мінімальний додатний елемент: " << min << endl;
    cout << "Індекс елементу: " << index1 << endl;
}
void max_el( int d[], int n, int &index2){
    int max;
    for (int i = 0; i < n; i++){
        if (d[i] > d[index2] ){
            max = d[i];
            index2 = i ;    // для зручності індекс максимального
        }
    }
}
void replace (int d[] , int n, int &index1 , int &index2 ){
    int x = d [index1];
    d[index1]= d[index2];
    d[index2] = x ;
    cout <<endl;
    for( int i = 0 ; i < n ; i++){
        cout << d[i] <<"\t";    // вивід кінцевого масиву
    }
}
int main(){
    setlocale(LC_CTYPE, "ukr");
    int n ;
    int d[n] ;
    cout <<"n=";
    cin >> n;
    int index1 = 0 ;
    int index2 = 0 ;
    input ( d, n);
    cout << "Заданий масив: " << endl;
    output( d, n);
    min_el( d, n, index1 );
    max_el( d, n, index2 );
    cout << "Змінений масив :" << endl;
    replace ( d, n, index1 , index2 );
}