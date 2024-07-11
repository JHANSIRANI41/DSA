#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
#define MAXX(x,y) (x>y?x:y)

void areaCircle(int r)
{
   cout<<PI*r*r;
}

void fun()
{
  int a=9;
  int b=8;
  int c=MAXX(a,b);
  cout<<"c "<<c<<endl;
}
int main()
{
  areaCircle(2);
  fun();
}
