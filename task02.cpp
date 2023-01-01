# include <iostream>
using namespace std;

void showresult(int marks);

main(){

int marks;

while(true){
cout<< "Enter your marks: ";
cin>> marks;
showresult(marks);
cout<< endl;

}

}


void showresult(int marks)
{

if(marks== 50)
{

cout<< "work hard";

}

if(marks> 50)
{

cout<< "pass";

}

if(marks< 50)
{

cout<< "fail";
}

}