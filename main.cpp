
#include <iostream>
#include <map>
#include <string>
#include "TimeChek.h"
#include <vector>
using namespace std;

int main(void)
{
    ///

    TimeChek tim; // обьявление начала измерения времени

    vector<string> strSity = {
        "Moscow",
        "Rome",
        "London",
    };
    tim.timeChek("Siti vector bild");
    for (auto &&strSi : strSity)
    {
        cout << strSi << "\n";
    }
    tim.timeChek("Siti vector print");

    // инициализируем map набором пар {ключ, значение}
    map<std::string, int> years = {
        {"2Moscow", 1147},
        {"2Rome", -753},
        {"2London", 47},
    };

    tim.timeChek("Siti map bild");

    for (auto &&[city, year] : years)
    {

        cout << city << ": " << year << "\n";
        //  tim.TimeCheks(city); // завершение измерения времени
    }
    tim.timeChek("Siti map print"); // timeChek it-3           2.875e-06

    return 0;
}