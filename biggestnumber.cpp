//Author:Sunny Vang
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
 int numbone;
 int numbtwo;
 int biggest;

  cout<<"Please enter a whole number:\n";
  cin>> numbone;
  
  cout<<"Please enter another whole number:\n";
  cin>> numbtwo;
if(numbone > numbtwo)
{

biggest = numbone;


}
else

{

biggest = numbtwo;


}
  cout<<"Of those two numbers, the biggest is: "<< biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
