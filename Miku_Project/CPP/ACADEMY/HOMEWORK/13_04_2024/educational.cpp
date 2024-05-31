#include <iostream>
#include <string>

using namespace std;

class educational {
    public:
        int audience;
        string capacity;
        string status;

        educational(
            int audienceEducational,
            string capacityEducational,
            string statusEducational
    
        ) : audience(audienceEducational),
            capacity(capacityEducational),
            status(statusEducational) {}

        void info() {
            cout << audience << endl;
            cout << capacity << endl;
            cout << status << endl;
        };
};


class lecture : public educational {
    public:
        using educational::educational;

};

class computer : public educational {
    public:
        using educational::educational;

};

class labarotoriy : public educational {
    public:
        using educational::educational;

};

int main() {

    cout << "Hi! My name is Aimee! Translated from Japanese, it means 'beautiful love'.I got a wonderful homework assignment from @MikuSv0! Enjoy watching!";

    lecture lect(12, "yes", "yea");
    lect.info();

    computer lab(44, "ff", "ff");
    lab.info();

    return 0;
}