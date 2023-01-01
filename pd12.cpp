# include <iostream>
using namespace std;

void calculate();

main()
{
  float red;
  float white;
  float tulip;
  float price;
  float discount;
  while(true)
 {
  calculate();
 }
}

void calculate()
{
 float red;
 float white;
 float tulip;
 float price;
 float discount;

 cout<< "Red Rose: ";
 cin>> red;
 
 cout<< "White rose: ";
 cin>> white;

 cout<< "Tulip: ";
 cin>> tulip;

 cout<< "Price: ";
 price=red*2+white*4.10+tulip*2.50;
 cout<< price << endl;

 if(price > 200)
 {
  cout<< "Discounted price: ";
  discount=price*0.8;
  cout<< discount << endl;
 }
 
}