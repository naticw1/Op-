Sum1 = 0.
Sum2 = 0.
for i in range(1, 101):                 # цикл 1
    term1 = float(((-1) ** (i + 1))/i)  # елементи
    Sum1 = (Sum1 + term1)
for j in range(100, 0, -1):             # цикл 2
    term2 = float(((-1) ** (j + 1))/j)  # елементи у зроротньому порядку
    Sum2 = (Sum2 + term2)
Sum1 = round(Sum1, 15)                  # заокруглення суми до 15 знаків після коми
Sum2 = round(Sum2, 15)
if Sum1 > Sum2:                         # поівняння сум
    print("Перша сума більша за другу")
elif Sum1 == Sum2:
    print("Суми рівні")
else:
    print("Перша сума менша за другу")
# print(Sum2)
# print(Sum1)
