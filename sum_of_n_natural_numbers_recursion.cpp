#include<iostream>
using namespace std;
int n;
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+fun(n-1);
}
int main()
{
    cin>>n;
    cout<<fun(n);
    return 0;
}