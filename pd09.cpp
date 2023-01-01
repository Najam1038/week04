# include <iostream>
using namespace std;

void isequal(string word1,string word2);

main()
{ 
  string word1;
  string word2;
 while(true)
 {
  isequal(word1 , word2);
 }
}

void isequal(string word1, string word2)
{
  
  cout << "Enter first word: ";
  cin >> word1;
  cout << "Enter Second word: ";
  cin >> word2;

  if(word1 == word2)
  {
    cout<< "False";
    cout<< endl;
  }

  if(word1 != word2)
  {
    cout<< "True";
    cout<< endl;
  }
}


