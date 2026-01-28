//взято с чата gpt


#include <iostream>
#include <climits> // Библиотека с лимитами (максимальными значениями типов)

int main() {
    // Чтобы вывод был красивым, используем символ табуляции \t
    std::cout << "Type\t\tSize (bytes)\tMax Value" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

    // 1. СИМВОЛЬНЫЙ ТИП
    // 1 байт = 8 бит. 2 в 8-й степени = 256 комбинаций.
    std::cout << "char\t\t" << sizeof(char) << "\t\t" << SCHAR_MAX << std::endl;

    // 2. ЦЕЛОЧИСЛЕННЫЕ ТИПЫ
    // short обычно 2 байта
    std::cout << "short\t\t" << sizeof(short) << "\t\t" << SHRT_MAX << std::endl;

    // int обычно 4 байта. Самый часто используемый тип.
    std::cout << "int\t\t" << sizeof(int) << "\t\t" << INT_MAX << std::endl;

    // long long — настоящий гигант, 8 байт (64 бита)
    std::cout << "long long\t" << sizeof(long long) << "\t\t" << LLONG_MAX << std::endl;

    // 3. ТИПЫ С ПЛАВАЮЩЕЙ ТОЧКОЙ (Дробные)
    std::cout << "float\t\t" << sizeof(float) << "\t\t" << "3.4E+38 (approx)" << std::endl;
    std::cout << "double\t\t" << sizeof(double) << "\t\t" << "1.7E+308 (approx)" << std::endl;

    // 4. ЛОГИЧЕСКИЙ ТИП
    // Казалось бы, для true/false нужен 1 бит, но компьютер выделяет минимум 1 байт
    std::cout << "bool\t\t" << sizeof(bool) << "\t\t" << "1 (true)" << std::endl;

    return 0;
}