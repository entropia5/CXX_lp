  // sizeof возвращает размер в байтах


#include <iostream>

int main()

 {
  
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;

    return 0;
}