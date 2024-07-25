#include<bits/stdc++.h>
using namespace std;

class Daddy
{
  private:
  int age;
 
  string name="dad";
 
  void job()
  {
    cout<<"he goes to office "<<endl;
  }
  
};  

class me:public Daddy
{
    public :
    void print()
    {  
      job();
    }
};

int main()
{
   me Jhanu;
   cout<<Jhanu.age;
   //Jhanu.print();

}

