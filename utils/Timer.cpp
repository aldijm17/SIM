#include "Timer.h"

void Timer::start()
{
    startTime=high_resolution_clock::now();
}

void Timer::stop()
{
    endTime=high_resolution_clock::now();
}

long long Timer::getMicroseconds() const
{
    return duration_cast<microseconds>(
            endTime-startTime
           ).count();
}