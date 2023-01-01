# include <iostream>
using namespace std;
void calculatedis();

main()
{
 while(true)
 {
 calculatedis();
 }
}



void calculatedis()
{
 string days;
 float amount;
 float discount;
 float discount2;
  cout<< "Enter day: ";
  cin>> days;
  
  cout<< "Total purchase: ";
  cin>> amount;
 if(days == "sunday")
 {
  discount=amount*0.9;
  cout<< "Your bill is : ";
  cout<< discount;
  cout<< endl;
 } 
 
 if(days != "sunday")
 {
   discount2 = amount*0.95 
   cout<< "your bill is : ";
   cout<< discount2;
   cout<< endl;
 }

}
