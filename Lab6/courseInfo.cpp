#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <vector>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Course {
    string name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;
};

struct Student{
    struct Course course;
    struct Time time;
};


Time get_time(const string& line) {
    Time t;
    sscanf(line.c_str(), "%d:%d:%d", &t.hours, &t.minutes, &t.seconds);
    return t;
}

string convertToAMPM(Time t) {
    string period = " AM";
    int hour = t.hours;

    if (hour == 0) {
        hour = 12;  // am
    } else if (hour == 12) {
        period = " PM"; 
    } else if (hour > 12) {
        hour -= 12;
        period = " PM";
    }
    stringstream ss;
    ss << setw(2) << setfill('0') << hour << ":" 
       << setw(2) << setfill('0') << t.minutes << ":" 
       << setw(2) << setfill('0') << t.seconds << period;

    return ss.str();
}

void printStudentInfo(struct Student student, int n)
{
    cout << "Course " << n << " : " << student.course.name << endl;

    if (student.course.majorRequirement) {
        cout << "Note: This major is a requirement" << endl;
    } else {
        cout << "Note: This major is not a requirement" << endl;
    }

    cout << "Number of credits: " << student.course.credits << endl;
    cout << "Days of Lectures: " << student.course.days << endl;

    cout << "Lecture Time: " << convertToAMPM(student.course.startTime) 
         << " - " << convertToAMPM(student.course.endTime) << endl;

    cout << "Stat: on average students get " << student.course.avgGrade << "% in this course" << endl;
    cout << "------------------------------ " << endl;
}


int main() {
    ifstream file("in.txt");
    string line;

    struct Student student;
    int numberOfCourses;
    int count = 1;
    bool isFirstLine = true;

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "------------------------------" << endl;
    cout << "SCHEDULE OF STUDENT" << endl;
    cout << "------------------------------" << endl;

    // Read file line by line
    while (getline(file, line)) {
        if (isFirstLine) {
            numberOfCourses = stoi(line); 
            isFirstLine = false;
        } else {
            // Read course name
            student.course.name = line;

            // Read credits
            getline(file, line);
            student.course.credits = stoi(line);

            // Read major requirement (0 or 1)
            getline(file, line);
            student.course.majorRequirement = stoi(line);

            // Read average grade
            getline(file, line);
            student.course.avgGrade = stod(line);

            // Read lecture days
            getline(file, line);
            student.course.days = line;

            // Read start time
            getline(file, line);
            student.course.startTime = get_time(line);

            // Read end time
            getline(file, line);
            student.course.endTime = get_time(line);

            // Print student info
            printStudentInfo(student, count);
            count++;
        }
    }

    return 0;
}