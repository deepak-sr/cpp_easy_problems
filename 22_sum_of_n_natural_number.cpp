#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"ENTER VALUE OF N : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}
