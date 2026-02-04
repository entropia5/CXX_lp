#include <iostream>
#include "log.h"


int main () 
{

int x = 5;

//сделаем условие, что мы хотим вывести Hello в случае когда х действительно равно 5.

//для этого мы просто введем значение и условие.

//чтобы провереть равно ли х 5 нам нужно выполнить операцию сравнения и это своего рода логический оперетор bool 

bool comparisonResult = x == 5;

if (comparisonResult)
{
 Log("Hello Debug !");
}
    
    std::cin.get();

}