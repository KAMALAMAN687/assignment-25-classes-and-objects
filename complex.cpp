#include<iostream>
using namespace std;
class complex 
{
private:
int a, b;
public:
void setdata(int x,int y)
{
    a=x;
    b=y;

}
void printcomplex()
{
    cout<<"real= "<<a<<" complex = "<<b;
}
};
int main()
{
    complex c1,c2,c3;
    int a,b;
    cin>>a>>b;
    c1.setdata(a,b);
    c2.setdata(4,5);
    c3.setdata(7,8);
    c1.printcomplex();
    c2.printcomplex();
    return 0;
}