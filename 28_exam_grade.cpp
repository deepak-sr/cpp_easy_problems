#include <iostream>

using namespace std;

int main()
{
    int mark;
    cout << "ENTER YOUR MARK OUT OF 100 : " << endl;
    cin>>mark;
    if((mark>=90)&&(mark<=100))
    {
        cout<< "YOUR GRADE IS A+" << endl;
    }
    else if((mark>=80) && (mark<90))
    {
        cout<< "YOUR GRADE IS A" << endl;
    }
    else if((mark>=70) && (mark<80))
    {
        cout<< "YOUR GRADE IS B+" << endl;
    }
    else if((mark>=60) && (mark<70))
    {
        cout<< "YOUR GRADE IS B" << endl;
    }
    else if((mark>=50) && (mark<60))
    {
        cout<< "YOUR GRADE IS C+" << endl;
    }
    else if((mark>=40) && (mark<50))
    {
        cout<< "YOUR GRADE IS C" << endl;
    }
    else if((mark>=0) && (mark<40))
    {
        cout<< "FAILED" << endl;
    }
    else
    {
        cout<< "ERROR" << endl;

    }


    return 0;
}
