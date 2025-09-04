#include <iostream>
#include <cctype>

using namespace std;

int main()
{


    char n;
    cout << "ENTER A NUMBER DIGIT : " << endl;
    cin>>n;
    if(isdigit(n))
    {
    cout <<n<< " IS A DIGIT" << endl;

    }
    else
    {
        cout<<n<<" IS NOT A DIGIT"<<endl;
    }
    return 0;
}
