
#include <iostream>
#include <map>
#include <string>
#include "TimeChek.h"
using namespace std;


int main(void)
{
    
    TimeChek tim; // обьявление начала измерения времени
   

    // инициализируем map набором пар {ключ, значение}
    map< std::string, int> years = {
        {"Moscow", 1147},
        {"Rome", -753},
        {"London1", 47},
    };

    int it = 0;

    for (const auto &[city, year] : years)
    {
        cout << city << ": " << year << "\n";
         tim.TimeCheks(city); // завершение измерения времени
         ++it;
    }


    return 0;
}