#include<iostream>
using namespace std;
class time 
{
    private:
    int hour,minute ,seconds;
    public:
    void setdata(int a,int b,int c)
    {
        hour=a;
        minute=b;
        seconds=c;
    }
    void showtime()
    {
        cout<<hour <<"hr "<<minute<<" min "<<seconds<<" sec\n";
    }
};
int main()
{
    int a,b,c;
    time t1;
    cout<<"enter hour minutes and time : ";
    cin>>a>>b>>c;
    t1.setdata(a,b,c);
    t1.showtime();
    return 0;
}