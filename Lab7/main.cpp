#include <iostream>
#include "Time.h"
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

bool getTimeFromUser(Time &t, string timeType)
{
    string inputTime;
    getline(cin, inputTime);
    int firstColon = inputTime.find(":");
    int secondColon = inputTime.find(":", firstColon+1);
    string hourString = inputTime.substr(0, firstColon);
    string minuteString = inputTime.substr(firstColon + 1, secondColon - firstColon + 1);
    string secondString = inputTime.substr(secondColon + 1);

    if(hourString.empty() || minuteString.empty() || secondString.empty())
    {
        cout << "The " << timeType << " is invalid!" << endl;
        return false;
    }
     
    for(int i = 0; i < hourString.length(); i++)
    {
        if(!isdigit(hourString[i]))
        {
            cout << "The " << timeType << " time is invalid!" << endl;
            return false;
        }
    }

    for(int i = 0; i < hourString.length(); i++)
    {
        if(!isdigit(minuteString[i]))
        {
            cout << "The " << timeType << " time is invalid!" << endl;
            return false;
        }
    }

    for(int i = 0; i < secondString.length(); i++)
    {
        if(!isdigit(secondString[i]))
        {
            cout << "The " << timeType << " time is invalid!" << endl;
            return false;
        }
    }

    t.setHours(atoi(hourString.c_str()));
    t.setMinutes(atoi(minuteString.c_str()));
    t.setSeconds(atoi(secondString.c_str()));

    if (t.getHours() > 23 || t.getMinutes() > 59 || t.getSeconds() > 59 || t.getHours() < 0 || t.getMinutes() < 0 || t.getSeconds() < 0)
    {
        cout << "The " << timeType <<" time is invalid" << endl;
        return false;
    }
    return true;
}

string print24Hour(Time t)
{
    stringstream ss;
    ss << setw(2) << setfill('0') << t.getHours() << ":"
       << setw(2) << setfill('0') << t.getMinutes() << ":"
       << setw(2) << setfill('0') << t.getSeconds();
    return ss.str();
}

int main(){
    Time startTime;
    Time endTime;

    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    if (!getTimeFromUser(startTime, "start")) return 1;

    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    if(!getTimeFromUser(endTime, "end")) return 1;

    cout << "The lecture starts at " << print24Hour(startTime)
    << " and ends at " << print24Hour(endTime) << endl;
}