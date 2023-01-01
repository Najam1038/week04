# include <iostream>
using namespace std;

void iseven(int num2);



main()
{
 int num2;
 
 while(true)
 {
  cout<< "enter number: "; 
  cin >> num2;
  iseven(num2);
  
 } 
}


void iseven(int num2)
{
if(num2%2 ==0)
 {

 cout<< "Number is even";
 cout<< endl;

 }

 if(num2%2 != 0)
 {

 cout<< "Number is odd";
 cout<< endl;
 }
 
}


