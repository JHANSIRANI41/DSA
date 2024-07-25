#include<bits/stdc++.h>
using namespace std;
class Animal
{
    //properties/state
   private:
   int weight;
   
   public:
   int age;
   string name;
   
   
   //constuctor
   Animal()
   {
    cout<<"constructor called"<<endl;
   }
   
   //parameterized constructor
   
   Animal(int age)
   {
      this->age=age;
      cout<<"parameterized constructor 1"<<endl;
   }
   
    Animal(int age,string name,int weight)
   {
      this->weight=weight;
      this->name=name;
      this->age=age;
      cout<<"parameterized constructor 2"<<endl;
   }
   
   //copy constructor
   Animal(Animal &obj)
   {
     this->weight=obj.weight;
     this->age=obj.age;
     this->name=obj.name;
     cout<<"inside the copy constructor"<<endl;
   }
   
   
   
   
   
   //behaviour/method
   void sleep()
   {
     cout<<"sleeping"<<endl;
   }
   void eat()
   {
   cout<<"eating"<<endl;
   }
   int getWeight()
   {
     return weight;
   }
   
   void setWeight(int weight)
   {
     //weight=weight;
     //to make differntiation between class parameter and function parameter
     //we use this keyword 
     this->weight=weight;
   }
   
   
   //DESTRUCTOR
   ~Animal()
   {
     cout<<"Inside the Destructor"<<endl;
   }
   
};
int main()
{

cout<<sizeof(Animal)<<endl;
//size of empty class is 1

//object creation

//STATIC CREATION:
Animal Ramesh;

//to set values to public 
Ramesh.age=56;
Ramesh.name="lion";

cout<<"age of Ramesh "<<Ramesh.age<<endl;
cout<<"name of Ramesh "<<Ramesh.name<<endl;

Ramesh.eat();
Ramesh.sleep();

//here we cannot access ramesh because, weight is private member so we need get it by using getter and setter functions

//cout<<"weight of ramesh"<<Ramesh.weight<<endl;

//private member accessing 
Ramesh.setWeight(23);

cout<<"weight of Ramesh: "<<Ramesh.getWeight()<<endl;


//DYNAMIC MEMORY ALLOCATION:

Animal *Abhi=new Animal;

//accessing the properties 
//cout<<Abhi.name<<endl;
//error because here abhi stores the address

(*Abhi).age=12;
(*Abhi).name="rahul";
cout<<(*Abhi).age<<endl;
cout<<(*Abhi).name<<endl;

//alternate way :

Abhi->age=45;
Abhi->name="ram";
cout<<Abhi->age<<endl;
cout<<Abhi->name<<endl;

//Animal b;
Animal c(13);
//Animal d(14,"shiv",35);

//for copying objects

Animal b=Ramesh;
Animal Animal1(b);
Animal Animal2(*Abhi);


cout<<"rohit created"<<endl;
Animal rohit;
rohit.name="world cup";

cout<<"virat created"<<endl;
Animal *virat=new Animal;
virat->name="world cup";


//deep copy
Animal deep=Ramesh;
Ramesh.name="ramesh";
cout<<Ramesh.name<<endl;
cout<<deep.name<<endl;


//shallow copy
Animal*shallow=Abhi;
cout<<"Abhi.name :"<<Abhi->name<<endl;
cout<<"shallow.name :"<<shallow->name<<endl;
Abhi->name="Krish";
cout<<"shallow.name :"<<shallow->name<<endl;

//manually
//delete virat;











}

