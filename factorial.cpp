#include<iostream>
using namespace std;
class factorial
{
    private:
    int a;
    public:
    void calculatefact()
    {
        int b=1;
        while(a)
        {
           b=b*a;
           a--; 
        }
        cout<<b<<"\n";

    }
    void setdata(int r)
    {
        a=r;
    }
};
int main()
{
    factorial f1;
    f1.setdata(8);
    f2.setdata(7);
    f1.calculatefact();
    f2.calculatefact();
    return 0;


}