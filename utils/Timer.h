#ifndef TIMER_H
#define TIMER_H

#include <chrono>

using namespace std;
using namespace chrono;

class Timer
{
private:

    high_resolution_clock::time_point startTime;
    high_resolution_clock::time_point endTime;

public:

    void start();

    void stop();

    long long getMicroseconds() const;
};

#endif