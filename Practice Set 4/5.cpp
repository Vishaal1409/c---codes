#include<iostream>
using namespace std;
class Time
{
    private:
    int hours;
    int mins;
    int secs;
    public:
    Time()
    {
        hours=0;
        mins=0;
        secs=0;
    }
    Time(int h, int m)
    {
        hours=h;
        mins=m;
        secs=0;
    }
    Time(int h, int m, int s)
    {
        hours=h;
        mins=m;
        secs=s;
    }
    void get()
    {
        cout<<"Time is: "<<hours<<" hours "<<mins<<" minutes "<<secs<<" seconds"<<endl;
    }
};
int main()
{
    Time t1;
    t1.get();
    Time t2(12,06);
    t2.get();
    Time t3(12,07,37);
    t3.get();
    return 0;   
}