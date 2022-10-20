#include<iostream>
using namespace std;
class largestnumber
{
    private :
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
    void largest(largestnumber p, largestnumber q)
    {
        if(a>p.a)
        cout<<a << " is greatest number";
        else
        {
            if(p.a>q.a)
            cout<<p.a << " is greatest number";
            else
            cout<<q.a << " is greatest number";
        }
        
    }
};
int main()
{
    largestnumber l1,l2,l3;
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    l1.setdata(a);
    l2.setdata(b);
    l3.setdata(c);
    l1.largest(l2,l3);
    return 0;

}