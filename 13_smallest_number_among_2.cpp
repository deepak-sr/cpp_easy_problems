#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout << "ENTER THE FIRST NUMBER : " << endl;
    cin>>num1;
    cout << "ENTER THE SECOND NUMBER : " << endl;
    cin>>num2;
    if(num1<num2)
        cout <<num1<< " IS LESS THAN " <<num2<< endl;
    else if(num2<num1)
        cout <<num2<< " IS LESS THAN " <<num1<< endl;
    else
        cout << "THE NUMBERS ARE EQUAL" << endl;

    return 0;
}
