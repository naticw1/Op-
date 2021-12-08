
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int a , b, c;
    cout << "Ведіть три змінні" << endl;
    cin >> a >> b >> c ;
    void function1 (int );
    void function2 (int );   
    void function3 (int );
    function1 (a);
    function2 (b);
    function3 (c);
    cout <<"Сума перших цифр : " << function1 (a) + function2 (b) + function3 (c)  << endl;
}
void function1 ( int a )
{
    while (a > 9)
    {
        a = a / 10;
    }
}
void function2 ( int b )
{
    while (b > 9)
    {
        b = b / 10;
    }
}
void function3 ( int c )
{
    while (c > 9)
    {
        c = c / 10;
    }
}