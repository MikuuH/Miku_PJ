#include <iostream>

using namespace std;

// Функция для вывода звездочек в виде квадрата

void drawSquare(int size) {
g
   for (int i = 0; i < size; i++) {

       for (int j = 0; j < size; j++) {

           cout << "*";

       }

       cout << endl;

   }

}

// Функция для вывода звездочек в виде прямоугольника

void drawRectangle(int width, int height) {

   for (int i = 0; i < height; i++) {

       for (int j = 0; j < width; j++) {

           cout << "*";

       }

       cout << endl;

   }

}

// Функция для вывода звездочек в виде треугольника

void drawTriangle(int height) {

   for (int i = 0; i < height; i++) {

       for (int j = 0; j <= i; j++) {

           cout << "*";

       }

       cout << endl;

   }

}

int main() {

   int choice;

   // Выводим меню и ждем выбора пользователя

   do {

       cout << "Выберите фигуру для отображения:" << endl;

       cout << "1 - Квадрат" << endl;

       cout << "2 - Прямоугольник" << endl;

       cout << "3 - Треугольник" << endl;

       cout << "0 - Выход" << endl;

       cin >> choice;

       // В зависимости от выбора пользователя вызываем соответствующую функцию

       switch (choice) {

       case 1:

           drawSquare(5);

           break;

       case 2:

           drawRectangle(8, 4);

           break;

       case 3:

           drawTriangle(6);

           break;

       case 0:

           cout << "Выход..." << endl;

           break;

       default:

           cout << "Неверный выбор!" << endl;

           break;

       }

   } while (choice != 0);

   return 0;

}