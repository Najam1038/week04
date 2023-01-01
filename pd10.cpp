# include <iostream>
using namespace std;

void airline();

main()
{
  string name;
  float dollars;
  float price;
 while(true)
 {
   airline();
 }
}

void airline()
{
  float price;
  string name;
  float dollars;

  cout<< "Enter country name: ";
  cin>> name;

  cout<< "Enter price in dollars: ";
  cin>>  dollars;
   
  cout<< "Price is: ";
  
  if (name == "pakistan")
  {
    price=dollars*0.95;
    cout<< price;
    cout<< endl;
  }

  if (name == "ireland")
  {  
   price=dollars*0.9; 
    cout<< price;
    cout<< endl; 
  }

  if (name == "india")
  {
   price= dollars*0.8;
    cout<< price;
    cout<< endl;
  } 
 
  if (name == "england")
  {
    price= dollars*0.7;
    cout<< price;
    cout<< endl;
  }
  
  if (name == "canada")
  {
   price= dollars*0.55;
    cout<< price;
    cout<< endl;
  }

}







