//code written by Emmanuel Owusu-Ampaw
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include "stack.h"


int main()
{
    Stack primef;                                                int n, d;
    cout << "Enter positive integer greater than 1:     cin>> n;

arranges numbers in descending order.
for ( d=2; d>1; d++)
{
 while(n % d == 0)
 {

      n /= d;
      primef.push(d);            
 }
}
while (!primef.empty()){
    cout<<primef.top()<<" ";    
    primef .pop();              
(if any).

}

    return 0;
}


