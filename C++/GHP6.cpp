//code written by Emmanuel Owusu-Ampaw
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int prices, i;

    vector <int> a;
    vector <int> b(15);
    vector <int>::iterator i1;
    cout<<"Enter fifteen prices: "<<endl;

    prices= 0;
    for(i=0; i<15; i++)
    {
    cin>>prices;
    a.push_back(prices);
    }
    cout<<endl;

    
    cout<<endl<<"Highest trading price: ";
    i1=max_element(a.begin(), a.end());
    cout<<*i1<<endl;

    cout<<endl<<"Lowest trading price: ";
    i1=min_element(a.begin(), a.end());
    cout<<*i1<<endl;

    cout<<endl;

cout<<"Adjacent differces="<<endl;
    adjacent_difference(a.begin(), a.end(), b.begin());
    for(i=0; i<15; i++)
        cout<<b[i]<<endl;
    cout<<endl<<endl;


    sort(a.begin(), a.end());
    cout<<"Sorted: "<<endl;
    for(i=0; i<15; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
