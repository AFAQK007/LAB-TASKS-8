#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter Number of Rows : "<<endl;
    cin>>n;
     cout<<endl;
    char c ;
for( int i =1;i<=n;i++){
    c = 'A';
    for(int j = 1;j<=i;j++){
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
}
    return 0;
}