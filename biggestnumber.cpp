//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  
  cout<<"Please enter a whole number:\n";

  int WholeNumber1;
   cin>> WholeNumber1;

  cout<<"Please enter another whole number:\n";

  int WholeNumber2;
  cin>> WholeNumber2;	

  int biggest;

 if(WholeNumber1>=WholeNumber2)
   {biggest=WholeNumber1;} 
 else {biggest= WholeNumber2;}


  cout<<"Of those two numbers, the biggest is: "<<biggest<<endl;
  
  cout<<"Thank you for playing.\n";

  return 0;
}
