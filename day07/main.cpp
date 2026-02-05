#include <iostream>
#include "log.h"


int main () 
{

//если у нас есть указатель

const char* ptr = "Hello ";

if (ptr) 
 Log(ptr);

else if (ptr == "Hello")
    Log("Ptr Hello");

 else 
    Log("Ptr is null!");

    
    std::cin.get();

}