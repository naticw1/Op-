

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr"); // ������� �������� ����
    float  r, h; //���� ��� r,h
    cout << "������ �������� r:";
    cin >> r; //����� �� r
    cout << "������ �������� h:";
    cin >> h; //����� �� h
    float V; // ������ ��'��
    V = 1./ 3 *r*r*h*(M_PI) ; // ���������� ��'��� 
    cout << "��'�� ������ = " << V<< endl ; // ���� ��'��� ������
    cout << "��'�� ������� = " << V *3; // ���� ���� ������� 
    system("pause");
    return 0;
}


