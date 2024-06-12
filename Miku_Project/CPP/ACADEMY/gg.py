
def punishment():

    try:
        number = int(input("Ввести число: "))
        if number <= 0:
            return print("Число не натуральное!")


        text = input("Сюда текст: ")
        for _ in range(number):
            print(f'Я больше никогда не буду писать: "{text}" ')

    except ValueError:
        print("Перепроверь свой ввод! Скорее всего, ты ввел не число!")

punishment()