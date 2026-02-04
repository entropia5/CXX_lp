#include <iostream>
#include "log.h"


//#include "log.h"  
//#include <iostream>
//#pragma once 

#ifndef _log_h
#define _log_h



void InitLog();
void Log (const char* message) ;

 struct Player {};
#endif

void InitLog() {

    Log( "Initializing Log");

}

void Log (const char* message)  //функция которая возвращает void и принимает один параметр - Указатель константу char
{
 std::cout << message <<std:: endl;
}
 

int main () 
{

    int a = 8;
    a++;
    const char* string = "Hello"; //создади строку 

    //теперь напишем очень простой цикл for который будет перебирать эту строку и выводить каждый символ на отдельной строке

    for (int i = 0; i < 5; i++ )

    {
        const char c = string[ i ];
        std:: cout << c << std :: endl;

    }

    Log("Hello !");
    std::cin.get();

}