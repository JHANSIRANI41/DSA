#include<bits/stdc++.h>
using namespace std;


class addtosub
{
   public:
   int val;
   
   void operator+(addtosub & object2)
   {
     int value1=this->val;
     int value2=object2.val;
     cout<<value2-value1<<endl;
   }
   
   
};


int main()
{
  addtosub object1,object2;
  object1.val=9;
  object2.val=5;
  object1+object2;
  
}
