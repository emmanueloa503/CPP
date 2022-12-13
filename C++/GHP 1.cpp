//code written by Emmanuel Owusu-Ampaw
#include <iostream>
using namespace std;

int lsearch(int a[2][2], int n);
int main(void)
{
  int a[2][2];     
  int n, f;
  a[0][0]=3;       
  a[0][1]=4;       
  a[1][0]=6;       
  a[1][1]=10;       
    cout<< "Entering two by two matrix\n";
    cout<<"[" <<a[0][0] <<" " << a[0][1] <<"]" <<endl;
    cout<<"[" <<a[1][0] <<" " << a[1][1] <<"]"<<endl;

    cout<<"Search for Value: ";
    cin>>n;


lsearch(a, n);
f=lsearch(a, n);

if(f==1)
  cout<<"\nValue Found";
else
  cout<<"\nValue not Found";

    return 0;
}

int lsearch(int a[2][2], int n){
    int row, col;
    int result=0;
    for(int row=0; row<2; row++)
        for(int col=0; col<2; col++)
           if( n == a[row][col] )
                 result=1;


return result;
}
