# include <iostream>
# include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printn();

 main()
{
  system("cls");
  printn();

}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);


}


void printn()
{
gotoxy(15,11);
cout<< "##   #    ###     ######    ###     ##   ##        " ;
gotoxy(15,12);
cout<< "# #  #   #   #       #     #   #    # # # #        " ;
gotoxy(15,13);
cout<< "#  # #   # # #    #  #     # # #    #  #  #        " ;
gotoxy(15,14);
cout<< "#   ##   #   #     ##      #   #    #     #        " ;
}