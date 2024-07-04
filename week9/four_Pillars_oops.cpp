#include<bits/stdc++.h>
using namespace std;

class Daddy
{
  public :
  int age;
 
  string name;
  private:
  void job()
  {
    cout<<"he goes to office "<<endl;
  }
  
};  

class me:public Daddy
{

};

int main()
{
   me Jhanu;
   cout<<Jhanu.name<<endl;

}

