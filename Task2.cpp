#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<" Enter a Natural Number "<<endl;
    cin>>n;
    int sum = 0;

    while(a<=n){
        sum = sum + a;
        a++;
    }
    cout<<"Sum of N numbers is : "<<sum<<endl;
    return 0;
}