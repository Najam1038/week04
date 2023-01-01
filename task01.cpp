#include <iostream>
using namespace std;
void add(int num1,int num2);
void product(int num1,int num2);
void subtract(int num1,int num2);
void division(int num1,int num2);

main()
{
 int num1;
 int num2;
 char operation;
 while(true){
 cout<< "Enter first number: ";
 cin>> num1;
 cout<< "Enter second number: ";
 cin>> num2;
 cout<< "Enter operator: ";
 cin>> operation;
 if(operation=='+')
 {

 add(num1,num2);

 }

 if(operation=='-')
 {

 subtract(num1,num2);

 }

 if(operation=='/')
 {

 division(num1,num2);

 }

 if(operation=='*')
 {

 product(num1,num2);

 }

 }
}
void add(int num1,int num2)
{


int sum1;
sum1 = num1 + num2;
cout << "Sum: " << sum1;
cout<< endl;
}

void subtract(int num1,int num2)
{
int subtracts;
subtracts=num1-num2;
cout<< "subtract: " << subtracts;
cout<< endl;
}

void division(int num1,int num2){

int divide;
divide=num1/num2;
cout<< "division: " << divide;
cout<< endl;
}

void product(int num1,int num2){

int products;
products=num1*num2;
cout<< "product is" << products;
cout << endl;



}





 

