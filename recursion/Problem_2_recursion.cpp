//print 1 to n using recursion
#include <iostream>
using namespace std;

void fun(int n)
{
    if(n==0)
    {
    return ;
    }
    else
        {
            return fun(n-1);
            cout<<n<<endl;
        }
}

int main()
{
    int n;
    cout<<"Please enter any number"<<endl;
    cin>>n;
    fun(n);
    return 0;
}