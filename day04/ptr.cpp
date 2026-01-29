#include <iostream>


int main ()

{ 
int a = 5;
int* ptr = &a;

std::cout << &a << std::endl;  // показа адрес
std::cout << ptr << std::endl; // тоже адрес
std::cout << *ptr << std::endl; // значение 5

}
