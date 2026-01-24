//day02


#include <iostream>

void Log( const char* message); //добавил объявление функции log 

int Multiply (int a, int b) 
{
    Log ("Multiply"); 
    return a * b;

}

int main( ) {

std :: cout << Multiply(5, 5) << std :: endl; //выведем в консоль значение ф-ции умножения. Мы должны будем увидеть сообщение в логе   Log ("Multiply");  и результат умножения.
std :: cin.get(); //чтобы консоль сразу не закрывалась 


}