#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) : data(data), next(nullptr) {}
};

class SinglyLinkedList {
    private:
        Node* head;

    public:
        SinglyLinkedList() : head(nullptr) {}

        // Деструктор для освобождения памяти, занимаемой элементами списка
        ~SinglyLinkedList() {
            Node* current = head;
            while (current != nullptr) {
                Node* next = current->next;
                delete current;
                current = next;
            }
        }

        // Добавление нового элемента в начало списка
        void pushFront(int data) {
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        }

        // Удаление первого элемента списка
        void popFront() {
            if (head == nullptr) return;
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        // Вставка элемента в указанную позицию списка
        void insert(int index, int data) {
            if (index == 0) {
                pushFront(data);
                return;
            }
            Node* current = head;
            for (int i = 0; current != nullptr && i < index - 1; i++) {
                current = current->next;
            }
            if (current == nullptr) {
                cout << "Index out of bounds" << endl;
                return;
            }
            Node* newNode = new Node(data);
            newNode->next = current->next;
            current->next = newNode;
        }

        // Удаление элемента из указанной позиции списка
        void remove(int index) {
            if (head == nullptr) return;
            if (index == 0) {
                popFront();
                return;
            }

            Node* current = head;
            Node* prev = nullptr;

            for (int i = 0; current != nullptr && i < index; i++) {
                prev = current;
                current = current->next;
            }
            if (current == nullptr) {
                cout << "Index out of bounds" << endl;
                return;
            }
            prev->next = current->next;

            delete current;
        }

        // Вывод элементов списка
        void print() {
            Node* current = head;
            while (current != nullptr) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }
};

int main() {
    SinglyLinkedList list;
    list.pushFront(10);
    list.pushFront(20);
    list.pushFront(30);
    list.insert(1, 25);

    cout << "List after inserting 25 at index 1: ";
    list.print();

    list.remove(2);

    cout << "List after removing the element at index 2: ";
    list.print();

    return 0;
}
