#include <iostream>

using namespace std;

int main()
{
    int n,product=1;
    cout<<"ENTER VALUE OF N : "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        product=product*i;

    }
    cout<<"product = "<<product<<endl;
    return 0;
}
