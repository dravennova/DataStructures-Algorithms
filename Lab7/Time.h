#ifndef TIME_H
#define TIME_H

class Time
{
    private: 
        int hours;
        int minutes;
        int seconds;

    public:
        Time() : hours(0), minutes(0), seconds(0) {} //default constructor
        Time(int hours, int minutes, int seconds) //parameterized constructor
        {
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        int getHours() 
        {
            return hours;
        }

        int getMinutes()
        {
            return minutes;
        }

        int getSeconds()
        {
            return seconds;
        }

        void setHours(int hours)
        {
            this->hours = hours;
        }

        void setMinutes(int minutes)
        {
            this->minutes = minutes;
        }

        void setSeconds(int seconds)
        {
            this->seconds = seconds;
        }
        ~Time() {}
};

#endif

