#include<iostream>
using namespace std;
int main()
{
    int n ;
    int Multi;
    int a =1;
    cout<<" Enter number you want table of : "<<endl;
    cin>>n;
    while(a<=10){
        Multi = n * a;
        cout<<"Your Table is : "<<n<<" X "<<a<<" = "<<Multi<<endl;
         a++;
    }
    cout<<" Your Table is end "<<endl;
    return 0;
}