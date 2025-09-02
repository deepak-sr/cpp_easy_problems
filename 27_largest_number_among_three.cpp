#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "ENTER NUMBER 1 : " << endl;
    cin>>num1;
    cout << "ENTER NUMBER 2 : " << endl;
    cin>>num2;
    cout << "ENTER NUMBER 3 : " << endl;
    cin>>num3;
    if((num1>num2) && (num1>num3))
    {
        cout <<num1<< " IS GREATEST" << endl;
    }
    else if((num2>num1) && (num2>num3))
    {
        cout <<num2<< " IS GREATEST" << endl;
    }
    else
        cout <<num3<< " IS GREATEST" << endl;
    return 0;
}
