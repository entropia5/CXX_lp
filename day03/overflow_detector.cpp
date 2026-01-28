#include <iostream>
#include <climits> //чтобы знать границы типов

int main ()
{

//используем short (он 2 байта) чтобы легче достичь лимита

short number;

std :: cout << "--- Интерактивный текст переполнения ---" << std :: endl;
std :: cout << "Лимит типа short: от " << SHRT_MIN << " до " << SHRT_MAX << std :: endl; 
std :: cout << "Введи число: ";

std :: cin >> number; // Программа остановится и будет ждать, пока ты введешь число и нажмешь Enter

std :: cout << "Вы ввели: " << number << std :: endl;

//Магия переполнения

number = number + 1;
std :: cout << "После прибавления +1 стало: " << number << std :: endl;

if (number < 0) 
{

std:: cout << "STACK OVERFLOW в минус!" << std :: endl;

}

return 0;

}