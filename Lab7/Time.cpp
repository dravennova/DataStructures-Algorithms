#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int hours, int minutes, int seconds)
{
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

int Time::getHours()
{
    return hours;
}

int Time::getMinutes()
{
    return minutes;
}

int Time::getSeconds()
{
    return seconds;
}

void Time::setHours(int hours)
{
    this->hours = hours;
}

void Time::setMinutes(int minutes)
{
    this->minutes = minutes;
}

void Time::setSeconds(int seconds)
{
    this->seconds = seconds;
}
