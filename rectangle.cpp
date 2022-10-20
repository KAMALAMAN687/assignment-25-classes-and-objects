#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setdata(int a, int b)
    {
        length=a;
        breadth=b;
    }
    int calculatearea()
    {
        return (length*breadth);
    }

};
int main()
{
    int x,y;
    rectangle r1;
    cout<<"enter a length and breadth : ";
    cin>>x>>y;
    r1.setdata(x,y);
    cout<<"area of rectangle is "<<r1.calculatearea();

}