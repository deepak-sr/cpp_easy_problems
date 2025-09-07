#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3;
    cout << "ENTER 3 ANGLES OF A TRIANGLE :" << endl;
    cin>>a1>>a2>>a3;
    if(a1+a2+a3==180)
    {
        cout<<"THIS ANGLES CAN FORM A TRIANGLE"<<endl;
    }
    else
    {
        cout<<"THIS ANGLES CAN'T FORM A TRIANGLE"<<endl;
    }
    return 0;
}
