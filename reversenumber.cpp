#include<iostream>
using namespace std;
class reversenumber
{
    private :
    int r;
    public :
    void reverse()
    {
      int a,b=0;
      while(r)
      {
      a=r%10;
      r=r/10;
      b=b*10+a;
      }
      cout<<b <<" is a reverse number.";


    }
    void setdata(int c)
    {
        r=c;
    }


};
int main()
{
    int a;
    cout<<"enter a number : ";
    cin>>a;
    reversenumber r1;
    r1.setdata(a);
    r1.reverse();
    return 0;
}