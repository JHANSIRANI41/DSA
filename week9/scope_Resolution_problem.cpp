#include<bits/stdc++.h>
using namespace std;

class lion 
{
   public:
   int age;
   
   lion()
   {
     age=90;
   }
   
 
};
class tiger
{
   public:
   int age;
   tiger()
   {
    age=23;
   }
    
};

class liger:public lion,public tiger
{
  
};
int main()
{
  liger L;
  cout<<L.lion::age<<" "<<L.tiger::age<<endl;
  
}
