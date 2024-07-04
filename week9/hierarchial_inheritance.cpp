#include<bits/stdc++.h>
using namespace std;

class car
{
   public:
   int age;
   string color;
   
   void speedUp()
   {
     cout<<" speedUp"<<endl;
   }
 
};
class fortuner:public car
{
   
};

class scorpio:public car
{
   
};
int main()
{
  fortuner f;
  f.speedUp();
  
  scorpio s;
  s.speedUp();
 
}
