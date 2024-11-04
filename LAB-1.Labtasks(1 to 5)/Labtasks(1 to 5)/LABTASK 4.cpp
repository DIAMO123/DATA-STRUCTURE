#include <iostream>
using namespace std;

int main()
{

    int a;
    int c = 0;
    int fact = 1;


    cout << "ENTER ANY INTEGER NUMBER - ";
    cin>>a;


    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
        for(int i=1;i<=a;i++)
            {
              fact=fact*i;
            }
            cout<<a<<" IS A PRIME NUMBER AND IT'S FACTORIAL IS = "<<fact;
    }
    else
    {
         cout << a<< " IS NOT A PRIME NUMBER" << endl;
    }

}
