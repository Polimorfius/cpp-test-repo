
#include <iostream>
#include <map>
#include <string>
#include "TimeChek.h"
#include <vector>
using namespace std;

int main(void)
{
    ////
    TimeChek tim; // обьявление начала измерения времени

    vector<string> strSity = {
        "Moscow",
        "Rome",
        "London",
    };
    tim.TimeCheks("Siti vector bild");
    for (auto &&strSi : strSity)
    {
        cout << strSi << "\n";
    }
    tim.TimeCheks("Siti vector print");

    // инициализируем map набором пар {ключ, значение}
    map<std::string, int> years = {
        {"2Moscow", 1147},
        {"2Rome", -753},
        {"2London", 47},
    };

    tim.TimeCheks("Siti map bild");

    for (auto &&[city, year] : years)
    {

        cout << city << ": " << year << "\n";
        //  tim.TimeCheks(city); // завершение измерения времени
    }
    tim.TimeCheks("Siti map print"); // timeChek it-3           2.875e-06

    return 0;
}