def getWords(string):
    list = string.split(" ")
    result = ""
    for i in range(0, len(list)):

        if list[i][0].lower() == list[i][-1].lower():
            result += list[i] + " "

    return result


string = input("Введіть рядок : ")
string = " ".join(string.split())
gg = getWords(string)
print("Кількість слів: " + str(len(gg.split(" ")) - 1))
print("Шукані слова: " + gg)
