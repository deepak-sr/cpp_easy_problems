#include <iostream>
#include <cctype>

using namespace std;

int main()
{


    char c;
    cout << "ENTER A CHARACTER : " << endl;
    cin>>c;
    if(isalpha(c))
    {
    cout <<c<< " IS AN ALPHABET" << endl;

    }
    else
    {
        cout<<c<<" IS NOT AN ALPHABET"<<endl;
    }
    return 0;
}
