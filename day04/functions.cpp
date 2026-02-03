#include <iostream>

int Multiply (int a, int b) 
{
return a * b;    //функция выполняет расчёт и return результат обратно тому кто её вызвал
}


void MultiplyAndLog (int a, int b)  //дополнительная функция. void означает пустота..тоесть эта функция ничего не возвращает она просто делает работу и завершается. 
//Она берет два числа передает их первой функции  Multiply, сохраняет ответ переменную result и передает его в консоль.
{
    int result = Multiply (a, b);
    std::cout << result << std :: endl;
}
int main() //наш главный пункт правления main. Когда мы пишем MultiplyAndLog (3, 2) Программа прыгает в код этой функции выполняет её и возвращается обратно чтобы перейти к следующей строке.
{

MultiplyAndLog (3, 2);
MultiplyAndLog (3, 3);
MultiplyAndLog (3, 4);
MultiplyAndLog (3, 5);


std :: cin.get();

return 0;


}



/* 

Вызываем MultiplyAndLog (3, 2).
Числа 3 и 2 летят в функцию MultiplyAndLog.
Внутри неё они перенаправляются в Multiply.
Multiply считает: 3×2=6.
Число 6 возвращается в MultiplyAndLog и записывается в result.
std::cout выводит 6 на экран.

*/