#include <iostream>

using namespace std;

int main()
{
    int flag=0;
    char c;
    cout<<"ENTER A CHARACTER : "<<endl;
    cin>>c;
    char vowels[]={'A','E','I','O','U','a','e','i','o','u'};
    for(int i=0;i<10;i++)
    {
            if(c==vowels[i])
                {
                    flag=1;
                }
    }
    if(flag==1)
    {
        cout <<c<< " IS A VOWEL" << endl;
    }
    else{
        cout <<c<< " IS A CONSONANT " << endl;
    }
    return 0;
}
