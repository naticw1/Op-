#include <iostream>
using namespace std;

int main() {
    int i ;
    for (i = 100; i <= 200; i++){//перебираємо числа із задоного проміжку
        int k = 0;
        int j ;
        for (j = 1; j <= i+1; j++){//перебирараємо числа із проміжку дільників
            if (i % j == 0){//перевіряємо число з i на остачу від ділення на j
            k += 1;//в разі вірності збільшуємо показник на 1
            }
        }
        if (k == 2){//перевіряємо k після виконання циклу
            int a;
            a = i;
            int total = 0;
            while (a > 0){//цикл знаходження total
                total = total + (a % 10);
                a = a / 10;
                if (total > 9){//перевірка чи чило є двоцифровим
                    total = total / 10 + total % 10;
                }
            }
            cout<<i<<'='<<total<<endl;
        }
    }
}