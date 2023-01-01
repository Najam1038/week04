# include <iostream>
using namespace std;

void vote();

main()
{
 int age;

 while(true)
{
 vote();

 if(age>=18)
 {
 cout<< "you are eligible to vote";
 cout<< endl;
 }

 if(age< 18)
 {
 cout<< "you are not eligible to vote";
 cout<< endl;
 }
 }
}



void vote()
{
int age;
cout<< "Enter your age : ";
cin>> age;


}