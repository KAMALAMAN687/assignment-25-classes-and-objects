#include<iostream>
using namespace std;
class Greatest
{
    private  :
    int a ,b,c,max;
    public:
    void set (int x,  int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void showgreatest()
    {
        if(a>=b)
        {
           cout<<a<<" is a greatest number";
        }
        else
        {
            if(b>=c)
            {
                cout<<b<< " is a greatest number";

            }
            else
            cout<<c << " is a greatest number";
        }

    }

};
int main()
{
    int a,b,c;
    cout<<"enter three numbers: ";
cin>>a>>b>>c;

Greatest g1;
g1.set(a,b,c);
g1.showgreatest();
return 0;

}