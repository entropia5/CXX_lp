#include <iostream>

int main() {
    signed short x = 32767; // Максимум для short
    x = x + 1; 
    std::cout << "32767 + 1 = " << x << std::endl; 

    unsigned short y = 65535; // Максимум для unsigned short
    y = y + 1;
    std::cout << "65535 + 1 = " << y << std::endl;

    return 0;
}



//В signed уйдет в самый большой минус, а в unsigned превратится в ноль.