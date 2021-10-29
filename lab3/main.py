import math
Sum = term = 1.
n = 1
print('Введіть значення точності')
E = float(input())                              # введення точності
print('Введіть значення x')
x = float(input())                              # введення x
while abs(term) > E:                            # порівняння з точністю
    factorial = math.factorial(2*n)             # факторіал в знаменникку
    term = ((-1) ** n)*(x ** 2*n) / factorial   # елементи
    Sum = Sum + term
    n = n + 1                                   # збільшення n на один
else:
    print('Cos(x)=' + str(Sum))