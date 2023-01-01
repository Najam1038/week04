# include <iostream>
# include <windows.h>
using namespace std;

void tomsleep();

main()
{
 int workingdays;
 int holidays;
 int game;
 int difference;

 tomsleep();
}


void tomsleep()
{
 int workingdays;
 int holidays;
 int game;
 int difference;
 
 cout<< "Enter holidays: ";
 cin>> holidays;

 workingdays=365-holidays;
 game=workingdays*63+holidays*127;
 difference=30000-game;

 if(difference >= 0)
 {
  cout<< "Tom sleeps well" << endl;
  cout<< difference << "less for play";
  cout<< endl;
 }

 if(difference < 0)
 {
  cout<< "Tom will run away";
  cout<< difference << "for play";
  cout<< endl;
 }
}
