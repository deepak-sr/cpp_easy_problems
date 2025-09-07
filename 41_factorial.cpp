#include <iostream>

using namespace std;

int main()
{
    int i,n,factoriol;
    cout << "ENTER THE NUMBER :" << endl;
    cin>>n;
    factoriol=1;
    for(i=n;i>0;i--)
    {
        factoriol=factoriol*i;
    }
    cout<<factoriol<<" IS THE FACTORIOL OF "<<n<<endl;
    return 0;
}
