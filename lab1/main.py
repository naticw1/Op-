import math
r=float(input("Введіть радіус r:")) #запит на дані щодо r
h=float(input("Введіть висоту h:")) #запит на дані щодо h
V= float(1/3*r*r*h* math.pi) # обчислення дійсного значення об'єму
print("Об'єм конуса=" ,V ) #вивід обєму конуса
print("Об'єм циліндра=" ,V *3) #вивід ою'єму циліндра
