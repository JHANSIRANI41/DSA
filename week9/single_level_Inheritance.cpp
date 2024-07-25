#include<bits/stdc++.h>
using namespace std;

class car
{
  public:
  int age;
  string name;
  int speed;
  
  void color()
  {
    cout<<"black"<<endl;
    
  }
  
};

class fortuner: public car
{

};

int main()
{
  fortuner f;
  f.color();
  }
  
