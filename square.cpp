#include<iostream>
using namespace std;
class square
{
  private:
  int a;
  static int b;
  public:
  void calculatesquare()
  {
    cout<<"square is "<<a*a<<endl;
    b++;
    cout<<"function is called  "<<b<< " times"; 
  }
  void setdata(int x)
  {
    a=x;
  }
};
int square::b;
int main()
{
    int a;
    cout<<"enter a number : ";
    cin>>a;
    square s1;
    s1.setdata(a);
    s1.calculatesquare();
    return 0; 
}