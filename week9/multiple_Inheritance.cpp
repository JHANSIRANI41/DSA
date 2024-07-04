#include<bits/stdc++.h>
using namespace std;

class lion 
{
   public:
   int age;
   string color;
 
};
class tiger
{
   public:
   int ageOfTiger;
   int legs;  
};

class liger:public lion,public tiger
{
  public:
  int age=90;
};
int main()
{
  liger L;
  cout<<L.age<<" "<<L.color<<" "<<L.ageOfTiger<<" "<<L.legs<<" "<<endl;
  
}
