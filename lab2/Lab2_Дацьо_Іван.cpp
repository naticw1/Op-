#include<iostream>
#include <math.h>
#include <locate>


using namespace std;

int main()
{
    setlocate(LC_TYPE, "ukr");
    float a, b, c;
    cout << ("Введіть три дійсні числа ");
    cin >> a >> b >> c;
    if ((a + b) % 2 == 0) {
        cout << ("Існує пара чисел сума яких є парним числом");
    }
    else if ((a + c) % 2 == 0) {
        cout << ("Існує пара чисел сума яких є парним числом");
    }
    else if ((b + c) % 2 == 0) {
        cout << ("Існує пара чисел сума яких є парним числом");
    }
    else {
        cout << ("Такої пари чисел немає");
    }
    return 0;