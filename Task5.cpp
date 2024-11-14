#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<" Enter Size "<<endl;
    cin>>n;
    int a[n];

    int i = 0;
    while(i<n)
    {
        cout<<"Enter digits : "<<endl;
        cin>>a[i];
        i++;
    }
    cout<<"Numbr of element is :  "<<i;
    return 0;
}