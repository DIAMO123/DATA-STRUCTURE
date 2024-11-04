#include <iostream>
using namespace std;

void evenodd(int minrng, int maxrng)
{
    cout<<"THE EVEN NUMBERS ARE : ";
    for(int i=minrng;i<=maxrng;i++)
    {
        if(i%2==0)
            {
               cout<<i<<" ";

            }

   }
   cout<<endl;
   cout<<"THE ODD NUMBERS ARE : ";
   for(int i=minrng;i<=maxrng;i++)
    {
        if(i%2!=0)
            {

               cout<<i<<" " ;
            }

   }
}







int main()
{
    int minrng,maxrng;

    cout<<"ENTER THE MINIMUM RANGE - ";
    cin>>minrng;
    cout<<"ENTER THE MAXIMUM RANGE - ";
    cin>>maxrng;
    evenodd(minrng,maxrng);




}
