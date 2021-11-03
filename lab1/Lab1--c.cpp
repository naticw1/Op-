

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr"); // додання укріїнської мови
    float  r, h; //дійсні дані r,h
    cout << "Введіть значення r:";
    cin >> r; //запит на r
    cout << "Введіть значення h:";
    cin >> h; //запит на h
    float V; // дійсний об'єм
    V = 1./ 3 *r*r*h*(M_PI) ; // обчислення об'єму 
    cout << "Об'єм конуса = " << V<< endl ; // вивід об'єму конуса
    cout << "Об'єм циліндра = " << V *3; // вивід обєму циліндра 
    system("pause");
    return 0;
}


