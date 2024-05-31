#include <iostream>
#include <string>
using namespace std;


class Person {
    public:
        string name;
        int years;

        Person(string namePreson, int yearsPerson) {
            name = namePreson;
            years = yearsPerson;
        };

        virtual void fullPersonInfo () const {
            cout << "name Person: " << name << endl;
            cout << "years Person: " << years << endl;
        };

};


class Student : public Person {
    public:
        int studentNumber;

        Student(string namePerson, int yearsPerson, int studentNumber) : Person( namePerson,  yearsPerson), studentNumber(studentNumber) {};

        void fullPersonInfo () const override {
            Person::fullPersonInfo();
            cout << "Student Number: " << studentNumber << endl;
        };
};


int main () {

    cout << "Hi! My name is Aimee! Translated from Japanese, it means 'beautiful love'.I got a wonderful homework assignment from @MikuSv0! Enjoy watching!"

    Student student("John", 20, 1234567);

    student.fullPersonInfo();

    return 0;
}