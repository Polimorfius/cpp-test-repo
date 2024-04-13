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
        ++itteratorColl;
        std::chrono::duration<float> duration = std::chrono::high_resolution_clock::now() - startTime;
        std::cout << "chek it-" << itteratorColl << ' ' << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    void TimeCheks(const std::string &name)
    {
        ++itteratorColl;
        std::chrono::duration<float> duration = std::chrono::high_resolution_clock::now() - startTime;
        std::cout << "chek " << name << '-' << itteratorColl << ' ' << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    void TimeCheks(const int nameInt)
    {

        std::chrono::duration<float> duration = std::chrono::high_resolution_clock::now() - startTime;
        std::cout << "chek " << nameInt << " index-" << nameInt << ' ' << duration.count() << std::endl;
        startTime = std::chrono::high_resolution_clock::now();
    }
    ~TimeChek()
    {
        
        std::chrono::duration<float> duration = std::chrono::high_resolution_clock::now() - startTime2;
        ++itteratorColl;
        std::cout << "chek_time_program index-" << itteratorColl << ' ' << duration.count() << std::endl;
    }
};

#endif //_TIME_CHEK
