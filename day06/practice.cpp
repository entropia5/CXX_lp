// Задание 1 — Целочисленное vs дробное деление
/*
int a = 7;
int b = 2;

Выведи a / b как есть
Выведи static_cast<double>(a) / b
понять разницу результатов

*/


#include <iostream>

int main () {
    int a = 7;
    int b = 2;
double result = static_cast<double> (a) / (b);

std :: cout << result << std :: endl;

return 0; 
}

