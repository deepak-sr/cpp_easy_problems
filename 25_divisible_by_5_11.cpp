#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "ENTER THE NUMBER : " << endl;
    cin>>n;
    if(n%5==0)
    {
        cout <<n<< " IS DIVISIBLE BY 5" << endl;
    }
    else if(n%11==0)
    {
        cout <<n<< " IS DIVISIBLE BY 11" << endl;
    }
    else
    {
        cout <<n<< " IS NOT DIVISIBLE BY 5 0R 11" << endl;
    }
    return 0;
}
