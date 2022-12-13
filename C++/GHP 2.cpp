//code written by Emmanuel Owusu-Ampaw
#include<iostream>


using namespace std;

void gms(int n);
int main(void){
int n;
cout<<"Enter an odd number from 1 to 100: ";   
cin>>n;

if(n%2 == 0 || n>=101)                            
 cout<<"Invalid number";
else                                         
   gms(n);
}

void gms(int n){

  int matrix[100][100];

  int ms = n * n;
  int i=0, j=n/2;

  for (int k=1; k<=ms; ++k)
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0)
    {
      i += 2;
      --j;
    }
    else
    {
      if (j==n)
        j -= n;
      else if (i<0)
        i += n;
    }
  }
for(i=0; i<n; i++){
  for(j=0; j<n; j++)
    cout<<" " <<matrix[i][j] <<"   ";                       
    cout<<"\n";
}
}


