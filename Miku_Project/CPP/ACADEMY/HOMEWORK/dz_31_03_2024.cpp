//Задача 5 : Комплексная задача с использованием структур
//Цель : Создать систему для управления библиотекой.
//
//Определите структуры Book(с полями : название, автор, год издания) и Library(содержащую массив книг и количество книг).
//Реализуйте функции для добавления книги в библиотеку, поиска книги по названию и вывода всего списка книг.

#include<iostream>
#include<string.h>

using namespace std;

// данная структура нужна для книг.
struct  Book
{
    string Name;
    string Author;
    int year;
};

// Структура Library привязанна к Book. содержиться массив и количество.
struct Library
{
    Book books[100];
    int count;
};

// добавляет книги.
void addBook(Library* library, const Book* book)
{

    if (library->count < 100) {

        library->books[library->count] = *book;
        library->count++;

    } else {
        cout << "there are no more places.";
    }

}

// Поиск книг по их имени.
void searchBook(Library* library, char *name)
{
    for (int i = 1; i <= library->count;  i++) {
        if (strcmp(library->books[i].Name.c_str(), name) == 0) { // стыбзил поиск с ГПТ.
            cout << "Book Find!" << endl;
            cout << "Name: " << library->books[i].Name << endl;
            cout << "Author: " << library->books[i].Author << endl;
        }
    }
}


int main() {
    int select;
    char name;

    Library myLib;
    Book myBook;
    myLib.count = 0;

    cout << "Select an action: " << endl;
    cout << "1 - add a book" << endl << "2 - search book";
    cin >> select;

    if (select == 1) {
        // add Book.
        cout << "Name book?" << endl;
        cin >> myBook.Name;

        cout << "Author Book?" << endl;
        cin >> myBook.Author;

        cout << "year book?" << endl;
        cin >> myBook.year;

        addBook(&myLib, &myBook);

    } else if (select == 2)
    // Search Book.
    {
        cout << "Enter Name Book: " << endl;
        cin >> name;

        searchBook(&myLib, &name);
        }
    return 0;
}


