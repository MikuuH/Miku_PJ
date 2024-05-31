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
            string capacityEducational
            string statusEducational
        ) {
            audience = audienceEducational;
            capacity = capacityEducational;
            status = statusEducational;
        };

        
};


class lecture : public educational {

};

class computer : public educational {

};

class labarotoriy : public educational {

};



int main() {

    return 0;
}