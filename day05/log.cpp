
#include "log.h"  
#include <iostream>

void InitLog() {

    Log( "Initializing Log");

}

void Log (const char* message)  //функция которая возвращает void и принимает один параметр - Указатель константу char
{
 std::cout << message <<std:: endl;
}
 

 