#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,sum,average;
    cout << "ENTER THE FIRST NUMBER : " << endl;
    cin>>num1;
    cout << "ENTER THE SECOND NUMBER : " << endl;
    cin >> num2;
    cout << "ENTER THE THIRD NUMBER : " << endl;
    cin >> num3;
    sum=num1+num2+num3;
    average=sum/3;
    cout << "AVERAGE = " <<average<< endl;

}
