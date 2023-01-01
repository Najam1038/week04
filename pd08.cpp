# include <iostream>
using namespace std;

void isequal(int num1,int num2);

main()
{ 
  int num1;
  int num2;
 while(true)
 {
  isequal(num1 , num2);
 }
}

void isequal(int num1, int num2)
{
  
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter Second number: ";
  cin >> num2;

  if(num1 == num2)
  {
    cout<< "True";
    cout<< endl;
  }

  if(num1 != num2)
  {
    cout<< "False";
    cout<< endl;
  }
}


