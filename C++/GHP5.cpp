//code written by Emmanuel Owusu-Ampaw
#include <iostream>
#include <stack>
#include <queue>
#include <fstream>
#include <cassert>

using namespace std;
void push(string input, const stack<string>&s, const queue<string>&q);
int main()
{
  string input;
  ifstream fileIn;
  stack<char>s;
  queue<char>q;
  int i, count=0, countp=0, isp;

  cout<< "Enter name of file of characters: ";      
for file name
  cin>>input;
  cout<<"\n";
  fileIn.open(input.data());                
  assert(fileIn.is_open());

  while(getline(fileIn,input)){
    count++;                                       
    for(i=0; i<=input.length()-1; i++){
        s.push(input[i]);
        q.push(input[i]);
    }

    isp=0;
    do
    {
        if(s.top() != q.front())
        isp++;
        s.pop();
        q.pop();

    }while(s.empty()==false);

    if(isp==0){
        countp++;           
        cout<<input<<endl;  
    }
  }
cout<<"Total number of original input: "<<count<<endl;            

cout<<"Total number of palindromes: "<<countp<<endl;              
    return 0;
}

