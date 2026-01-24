//day02


#include <iostream>

void Log( const char* message) {     
    
     //2.создал ф-цию Log вместо cout которая принимает строку как параметр и выведем сообщение в консоль
//  3.const char*  - это у нас тип данных который может содержать строку текста


    std::cout << message << std::endl;
}

int Multiply (int a, int b) 
{
    Log ("Multiply"); 
    return a * b;

}

int main( ) {

std :: cout << Multiply(5, 5) << std :: endl; //выведем в консоль значение ф-ции умножения. Мы должны будем увидеть сообщение в логе   Log ("Multiply");  и результат умножения.
std :: cin.get(); //чтобы консоль сразу не закрывалась 


}