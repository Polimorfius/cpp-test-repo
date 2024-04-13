#ifndef _TIME_CHEK
#define _TIME_CHEK

/*
запуск начала измерения происходит обявления экземпляра класса TimeChek

окончание измерения вызовом метода  TimeEnd(void);
*/

#include <chrono>
#include <iostream>

class TimeChek
{
private:
    std::chrono::high_resolution_clock::time_point startTime, startTime2;
    int itteratorColl = 0;

public:
    TimeChek(void)
    {
        startTime2 = startTime = std::chrono::high_resolution_clock::now();
    }
    void TimeCheks(void)
    {

        const std::chrono::duration<float> &&duration = std::chrono::high_resolution_clock::now() - startTime;
        ++itteratorColl;
        std::cout << "timeChek it-" << itteratorColl << "\t\t" << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    void TimeCheks(const std::string &name)
    {

        const std::chrono::duration<float> &&duration = std::chrono::high_resolution_clock::now() - startTime;
        ++itteratorColl;
        std::cout << "timeChek " << name << '-' << itteratorColl << "\t\t" << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    void TimeCheks(const int nameInt)
    {

        const std::chrono::duration<float> &&duration = std::chrono::high_resolution_clock::now() - startTime;
        std::cout << "timeChek " << nameInt << " index-" << nameInt << "\t\t" << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    ~TimeChek()
    {

        // std::chrono::duration<float> &&duration = std::chrono::high_resolution_clock::now() - startTime2;
        // ++itteratorColl;
        // std::cout << "chek_time_program index-" << itteratorColl << ' ' << duration.count() << std::endl;
    }
};

#endif //_TIME_CHEK
