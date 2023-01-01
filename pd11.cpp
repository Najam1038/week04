# include <iostream>
# include <windows.h>
using namespace std;

void challan(float speed);

main()
{
 float speed;
 while(true)
 {
 challan(speed);
 }
}

void challan(float speed)
{
 cout<< "Speed: ";
 cin>> speed;

 if(speed <= 100)
 {
  cout<< "Perfect!You're going good.";
  cout<< endl;
 }

 if(speed > 100)
 {
  cout<< "Halt...YOU WILL BE CHALLANGED!!!";
  cout<< endl;
 }

}