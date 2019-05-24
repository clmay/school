/*
 * Write a function ElapseTime that takes as its argument two MyTime structures
 * and returns a MyTime structure that represents the elapse time (in hours,
 * minutes, and seconds) between two times. So the call
 * 
 *      `ElapseTime (time1, time2);`
 * 
 * where time1 represent 3:45:15 and time2 represents 9:44:03, should return a
 * MyTime structure that represents 5 hours, 58 minutes, and 48 seconds. Be
 * careful with the times that cross midnight.
 */

typedef struct MyTime_t
{
    int hours;
    int minutes;
    int seconds;
} MyTime;

MyTime elapsed(const MyTime *t1, const MyTime *t2);
void printElapsed(MyTime t);

int main(int argc, char const *argv[])
{
    
    return 0;
}

MyTime elapsed(const MyTime *t1, const MyTime *t2)
{

}

void printElapsed(MyTime t)
{
    
}