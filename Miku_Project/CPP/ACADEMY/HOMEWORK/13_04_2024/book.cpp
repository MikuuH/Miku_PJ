



#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        string name;
        string author;
        double price;

        Book(string nameBook, string authorBook, double priceBook) {
            name = nameBook;
            author = authorBook;
            price = priceBook;
        };

        virtual void fullBookInfo () const {
            cout << "name book: " << name << endl;
            cout << "author book: " << author << endl;
            cout << "price book: " << price << endl;
        };
};


// Ebook - format ? pdf / ...
class Ebook : public Book {
    public:
        string format;

        Ebook(string format, string nameBook, string authorBook, double priceBook) : Book(nameBook, authorBook, priceBook), format(format) {};

        void fullBookInfo () const override {
            Book::fullBookInfo();
            cout << "format book: " << format << endl;
        };
};


int main () {

    cout << "Hi! My name is Aimee! Translated from Japanese, it means 'beautiful love'.I got a wonderful homework assignment from @MikuSv0! Enjoy watching!";

    Ebook book("pdf", "дядя печкин враждует с васей", "шекспир", 1987.0);
    book.fullBookInfo();

    return 0;
}