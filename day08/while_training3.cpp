/*
3 задание
Условие :
int x = 10
пока x > 0
выводить "Countdown"
уменьшать x

*/

#include <iostream>

int main()
{
    int x = 10;

   while (x > 0)
   {
    std::cout << x << std::endl;
    x--;

   }
   

    return 0;
}