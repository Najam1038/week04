# include <iostream>
# include <windows.h>
using namespace std;
void printa1();
void printa();
void printi();
void printw();
void prints();
void gotoxy(int x,int y);


main()
{
 
 printa();
 printw();
 printa1();
 printi();
 prints();


}



void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printa()
{
 gotoxy(15,1);
 cout<< "  ###  " << endl;
 gotoxy(15,2);
 cout<< " #   # " << endl;
 gotoxy(15,3);
 cout<< " # # # " << endl;
 gotoxy(15,4);
 cout<< " #   # " << endl;
 gotoxy(15,5);
 cout<< " #   # " << endl;
}

 void printw()
{
 gotoxy(15,6);
 cout<< " #      # " << endl;
 gotoxy(15,7); 
 cout<< " #      # " << endl;
 gotoxy(15,8); 
 cout<< " #      # " << endl;
 gotoxy(15,9); 
 cout<< " #  ##  # " << endl;
 gotoxy(15,10); 
 cout<< " ###  ### " << endl;
}

void printi()
{
 gotoxy(15,16);
 cout<< " #####   " << endl;
 gotoxy(15,17);
 cout<< "   #     " << endl;
 gotoxy(15,18); 
 cout<< "   #     " << endl;
 gotoxy(15,19);
 cout<< "   #     " << endl;
 gotoxy(15,20);
 cout<< " #####   " << endl;
}
 void prints()
{
 gotoxy(15,21);
 cout<< " ####  " << endl;
 gotoxy(15,22);
 cout<< "##     " << endl;
 gotoxy(15,23);
 cout<< " ###   " << endl;
 gotoxy(15,24);
 cout<< "   ##  " << endl;
 gotoxy(15,25);
 cout<< "####   " << endl;

}


void printa1()
{
 gotoxy(15,11);
 cout<< "  ###  " << endl;
 gotoxy(15,12);
 cout<< " #   # " << endl;
 gotoxy(15,13);
 cout<< " # # # " << endl;
 gotoxy(15,14);
 cout<< " #   # " << endl;
 gotoxy(15,15);
 cout<< " #   # " << endl;
}