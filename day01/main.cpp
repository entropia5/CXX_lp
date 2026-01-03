#include <iostream>


 void Log(const char* massege);

int main( ) {

    //std::cout << "Hello World!"  <<  std::endl; 

    // 1.принял решение не использовать ф-цию cout и создал свою которая будет похожа на cout

    
    Log("Hello World!!!"); //4.теперь мы вместо cout вызываем Log и передаем ей "Hello World!!!" как параметр
    std::cin.get();
}