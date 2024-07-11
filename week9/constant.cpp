#include<bits/stdc++.h>
using namespace std;

class hello
  {
      mutable int x;
      int *y;
     const int z;
      
      public :
      //this is old style of creating a ctor
      /* hello(int _x,int _y,int _z=0,int _v=9) //default arguments int _z=0,int _v=9
      {
        x=_x;
        y=new int(_y);
        z=_z;
         
      }*/
      //new style:initialization list
      hello(int _x,int _y,int _z=99):x(_x),y(new int(_y)),z(_z){
      //we can print here
      //z=_z;//it wont work
      }
      //getter
      
      int getX() const
      {
       //x=90; //we cant do this ,if we make it a const method
        return x;
      }
      int getY() const
      {
        return *y;
      }
      int getZ() const
      {
        return z;
      }
      
      void setX(int xval) const
      {
        // x=xval; if we want to change this value ,then mark this as mutable
      }
      void setY(int yval)
      {
         y=&yval;
      }   
      
 };
 
 void print(const hello &a)
 {
   cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ();
 }
 
int main()
{
  
  /*int *a=new int;
  *a=9;
  cout<<*a<<endl;
  int b=6;
  a=&b;
  cout<<*a<<endl;
  */
  
  //2.const with pointers
  
  //CONST DATA,NON-CONST POINTER
  //const int *a=new int(7);
  //int const *a=new int(17);// (line 17===line 18) 
  //*a=9;  //we cannot reassign the data,we cant change the content
  //cout<<*a<<endl;
  //int b=6;
  //a=&b;pointer itself can be reassigned
  //cout<<*a<<endl;
  
  
  //3.CONST POINTER,BUT NON-CONST DATA
  //int *const a=new int(8);
  //cout<<*a<<endl;
  //*a=9;
  //int b=4;
  //a=&b;//this gives us error
  //cout<<*a<<endl;
  
  
  //4.CONST DATA-CONST POINTER
  /*
  const int *const a=new int(8);
  cout<<*a<<endl;
  //*a=7;//it wont work
  int b=90;
  a=&b;
  */
  
  
  
  //making a method as const
  
   hello a(1,2,9);
   //cout<<a.getX()<<endl;
   //cout<<a.getY()<<endl;
   print(a);
   
  
}
