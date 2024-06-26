// вывести на єкран номер ноды в которой значение 9


#include <iostream>
using namespace std;

struct Node
{
    string val;
    Node* next;
    Node(string _val) : val(_val), next(nullptr) {}
};


struct list
{
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}



    bool is_empty() {
        return first == nullptr;
    }


    void push_back(string _val) {
        Node* p = new Node(_val);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    Node* find(string _val) {
        Node* p = first;
        while (p && p->val != _val) {
            p = p->next;
        }
        return (p && p->val == _val) ? p : nullptr;
    }

    void print() {
        if (is_empty()) return;
        Node* p = first;
        while (p) {
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }

};

int main() {
    list l;
    l.push_back("3");
    l.push_back("9");

    Node* find_f = l.find("9");
    if (find_f) {
        cout << find_f->val;
    } else {
        cout << "Узел не найден." << endl;
    }

    return 0;
}







