a = int(input('a='))
b = int(input('b='))
c = int(input('c='))


def function1(a):
    while a > 9:
        a = a // 10
    return a


def function2(b):
    while b > 9:
        b = b // 10
    return b


def function3(c):
    while c > 9:
        c = c // 10
    return c


print('Результат :', function1(a) + function2(b) + function3(c))
