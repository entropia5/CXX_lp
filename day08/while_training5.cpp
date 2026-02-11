//while 

#include <iostream>

int main()
{
 
bool running = true;
int count = 0;
while (running)
{
    
    count ++;

if (count == 3)
    running = false;

    std::cout << "Tick"<< std::endl;
}


    return 0;
}