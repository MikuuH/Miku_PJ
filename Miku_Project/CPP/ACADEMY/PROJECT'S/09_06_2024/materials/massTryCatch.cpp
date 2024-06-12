// функция должна возвразать значение из массива по индексу,
// если индек вне диапазона то генерируем ошибк



#include <iostream>
using namespace std;


const int len_mass = 5;
int mass[len_mass] = {1,2,3,4};



int getElem(int massIndex, int* mass, const int len) {
    if (massIndex < 0 || massIndex >= len) throw out_of_range("Вне диапазона массива!");

    return mass[massIndex];
};


int main () {
    try
    {
        cout << getElem(10, mass, len_mass) << endl;
    }
    catch(const std::exception& e)
    {
        cerr << mass[0] << endl << e.what() << endl;
    }

    return 0;
}