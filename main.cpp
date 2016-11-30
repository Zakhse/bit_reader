/**
 * Created by Zakharov Sergey (aka Zakhse),
 * Student of NRU HSE, the Faculty of Computer Science, Software Engineering
 * 2k16, November
 */
#include <iostream>
#include <fstream>
#include <locale>
#include <chrono>
#include <bitset>

int main()
{
    std::cout << "Enter path to file: ";
    std::string path;
    std::cin >> path;

    std::ifstream file;
    file.open(path);

    char ch;
    long long i = 0;
    std::cout << "         1        2        3        4        5        6        7        8        9       10\n";
    while (file.get(ch))
    {
        if (i % 10 == 0)
            std::cout << "\n" << i / 10 * 10 << " ";
        ++i;
        std::cout << std::bitset<8>(ch).to_string() << " ";
    }
    std::cout << "\n";
}