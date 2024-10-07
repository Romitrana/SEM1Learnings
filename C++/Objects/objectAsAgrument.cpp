#include<iostream>
using namespace std;

class Time{  //ALWAYS REMEMBER TO GIVE CAPITAL STARTING CLASS NAME FIRST LETTER
private:
    int minutes;
    int hours;
public:
    void setTime(int hour, int minute) {
        minutes = minute;
        hours = hour;
    }

    void getTime() {
        cout << "Hour = " << hours << endl;
        cout << "Minutes = " << minutes << endl;
    }

    void sum(Time, Time);
};  // <-- Ensure this semicolon is present.

void Time::sum(Time t1, Time t2) {
    int totalMinutes = t1.minutes + t2.minutes;
    int extraHours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    hours = t1.hours + t2.hours + extraHours;
}

int main() {
 Time t1,t2,t3;  // Ensure there's no syntax error before this line.

    t1.setTime(2,45);
    t2.setTime(1,30);
    t3.sum(t1,t2);

    cout << "-----Printing time------" << endl;
    cout << "----T1----" << endl;
    t1.getTime();
    cout << "----T2----" << endl;
    t2.getTime();
    cout << "----T3----" << endl;
    t3.getTime();

    return 0;
}
