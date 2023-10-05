// Print n to 1 using recursion
#include <iostream>
using namespace std;
int fun(int n)
{   
    if(n==1){
        cout<<1;
        return 0;
    }
    else
      cout<<n;
      return fun(n-1);
}
int main()
{
    int n;
  cout<<"please any number";
  cin>>n;
  fun(n);
}