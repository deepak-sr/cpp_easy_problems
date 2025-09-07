#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3;
    cout << "ENTER 3 SIDES OF A TRIANGLE :" << endl;
    cin>>a1>>a2>>a3;
    if((a1==a2) && (a2==a3))
    {
        cout<<"THIS IS AN EQUILATERAL TRIANGLE"<<endl;
    }
    else if((a1!=a2) && (a1!=a3)&&(a2!=a3))
    {
        cout<<"THIS IS A SCALENE TRIANGLE"<<endl;
    }

    else
    {
        cout<<"THIS IS AN ISOSCELES TRIANGLE"<<endl;
    }
    return 0;
}
