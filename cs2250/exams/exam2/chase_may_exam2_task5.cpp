#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class MyTime {
    private:
        int hour;
        int minutes;
        int seconds;
    public:
        // constructor
        MyTime()
        {
            this->hour = 0;
            this->minutes = 0;
            this->seconds = 0;
        }
        MyTime(int hour, int minutes, int seconds)
        {
            this->hour = hour;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        // getters
        int get_hour() const
        {
            return this->hour;
        }
        int get_minutes() const
        {
            return this->minutes;
        }
        int get_seconds() const
        {
            return this->seconds;
        }
        // Setters
        void set_hour(int hour)
        {
            this->hour = hour;
        }
        void set_minutes(int minutes)
        {
            this->minutes = minutes;
        }
        void set_seconds(int seconds)
        {
            this->seconds = seconds;
        }
};

MyTime sum_time(const MyTime& t1, const MyTime& t2);
MyTime subtract_time(const MyTime& t1, const MyTime& t2);
MyTime elapsed_time(const MyTime& t1, const MyTime& t2);
void print_time(const MyTime& t);
void print_elapsed(const MyTime& t1, const MyTime& t2);

int main(int argc, char const *argv[])
{
    MyTime midnight(24, 0, 0);
    MyTime t1(3, 45, 15);
    MyTime t2(9, 44, 03);
    MyTime t3(22, 50, 59);
    MyTime t4(7, 30, 0);
    print_elapsed(t1, t2);
    cout << endl;
    print_elapsed(t2, t1);
    cout << endl;
    print_elapsed(t3, t4);
    return 0;
}

MyTime sum_time(const MyTime& t1, const MyTime& t2)
{
    MyTime sum;
    sum.set_hour(t1.get_hour() + t2.get_hour());
    sum.set_minutes(t1.get_minutes() + t2.get_minutes());
    sum.set_seconds(t1.get_seconds() + t2.get_seconds());
    if (sum.get_seconds() > 60)
    {
        sum.set_minutes(sum.get_minutes() + 1);
        sum.set_seconds(sum.get_seconds() - 60);
    }
    if (sum.get_minutes() > 60)
    {
        sum.set_hour(sum.get_hour() + 1);
        sum.set_minutes(sum.get_minutes() - 60);
    }
    return sum;
}

MyTime subtract_time(const MyTime& t1, const MyTime& t2)
{
    MyTime diff;
    diff.set_hour(t2.get_hour() - t1.get_hour());
    if (t2.get_minutes() < t1.get_minutes())
    {
        diff.set_hour(diff.get_hour() - 1);
        diff.set_minutes(t2.get_minutes() - t1.get_minutes() + 60);
    }
    else
    {
        diff.set_minutes(t2.get_minutes() - t1.get_minutes());
    }
    if (t2.get_seconds() < t1.get_seconds())
    {
        diff.set_minutes(diff.get_minutes() - 1);
        diff.set_seconds(t2.get_seconds() - t1.get_seconds() + 60);
    }
    else
    {
        diff.set_seconds(t2.get_seconds() - t1.get_seconds());
    }
    return diff;
}

MyTime elapsed_time(const MyTime& t1, const MyTime& t2)
{
    MyTime midnight(24, 0, 0);
    MyTime diff = subtract_time(t1, t2);
    if (diff.get_hour() > 0)
    {
        return diff;
    }
    else
    {
        return sum_time(subtract_time(t1, midnight), t2);
    }
}

void print_time(const MyTime& t)
{
    cout << setfill('0') << setw(2) << t.get_hour() << ":"
         << setfill('0') << setw(2) << t.get_minutes() << ":"
         << setfill('0') << setw(2) << t.get_seconds();
}

void print_elapsed(const MyTime& t1, const MyTime& t2)
{
    MyTime diff = elapsed_time(t1, t2);
    cout << "Time between ";
    print_time(t1);
    cout << " and ";
    print_time(t2);
    cout << " is ";
    print_time(diff);
    cout << endl;
}
