
#include "log.h"  
#include "Common.h"   
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
 

 