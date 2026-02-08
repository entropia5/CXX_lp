#include <iostream>
#include "log.h"



#include "log.h"  
#include <iostream>
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


//допустим чтобы вывести это 5 раз и чтобы не копировать 5 строк кода, напишем цикл

for (int i = 0; i < 5; i++)
  {

 Log("Hello !");

  }  
    std::cin.get();

}
