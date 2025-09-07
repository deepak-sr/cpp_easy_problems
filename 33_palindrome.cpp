#include <iostream>

using namespace std;

int main()
{
    int num,i,digit,temp;
    int reverse=0;
    cout << "ENTER A NUMBER : " << endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;

    }

    if(temp==reverse)
    {
        cout<<temp<<" IS A PALINDROME"<<endl;

    }
    else
    {
        cout<<temp<<" IS NOT A PALINDROME"<<endl;

    }
    return 0;
}
