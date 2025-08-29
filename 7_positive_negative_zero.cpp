#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "ENTER THE NUMBER : " << endl;
    cin>>num;
    if(num>0)
        cout << "THE NUMBER IS POSITIVE" << endl;
    else if(num<0)
        cout << "THE NUMBER IS NEGATIVE" << endl;
    else
        cout << "THE NUMBER IS ZERO" << endl;

    return 0;
}
