//code written by Emmanuel Owusu-Ampaw
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cassert>

using namespace std;

int main(void)
{
  string inputfileName;
  string s;
  ifstream fileIn;
  int count = 0;


  cout<< "Enter name of file of characters: ";      
  cin>>inputfileName;
  cout<<"\n";
  fileIn.open(inputfileName.data());                  assert(fileIn.is_open());                         


    while(fileIn>>s)
    {

     if(s[0]=='d'){
        s.erase();
     }
     if(s[0]=='D'){
        s.erase();

     }
     else
        count++;
    }

    cout << "The number of words that do not begin with D or d is  " << count<<"\n";
	fileIn.close();

    return 0;
}







