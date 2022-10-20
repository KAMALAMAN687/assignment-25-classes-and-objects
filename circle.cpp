#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<math.h>

using namespace std;
class circle
{
    private:
    int radius;
    public:
    void setdata(int r)
    {
        radius=r;
    }
    float getarea()
    {
        return ( M_PI*radius*radius); 
    }
};
int main()
{
    int a;
    cout<<"enter radius of circle";
    cin>>a;
    circle c1;
    c1.setdata(a);
    cout<<"araea of circle is "<<c1.getarea();
    return 0;


}