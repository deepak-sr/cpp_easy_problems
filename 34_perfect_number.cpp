#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout << "ENTER THE NUMBER :" << endl;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
          sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<n<<" IS A PERFECT NUMBER"<<endl;
    }
    else
    {
        cout<<n<<" IS NOT A PERFECT NUMBER"<<endl;

    }
    return 0;
}
