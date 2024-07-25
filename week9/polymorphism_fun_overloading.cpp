#include<bits/stdc++.h>
using namespace std;
class maths
{
  public:
  int sum(int a,int b)
  {
    return a+b;
  }
  
  int sum(int a,int b,int c)
  {
    return a+b+c;
  }
  
  double sum(int a,float b)
  {
    return a+b;
  }

};
int main()
{
   maths m;
    cout<<m.sum(1,8)<<endl;
    cout<<m.sum(1,2,3)<<endl;
    cout<<m.sum(1,2.9f)<<endl;
}
