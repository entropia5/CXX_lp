#include <iostream>

void Log( const char* message) {      //2.создал ф-цию Log вместо cout которая принимает строку как параметр и выведем сообщение в консоль
//  3.const char*  - это у нас тип данных который может содержать строку текста


    std::cout << message << std::endl;

}