#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   int mimo[100];
   srand(time(0));
   int n,i;
   cout<<"enter the number you want to search - ";
   cin>>n;

   for(int i=0;i<100;i++)
   {
       mimo[i]=rand()%100;
       cout<<mimo[i]<<endl;

       // int flag=0;
        if (n == mimo[i])
        {
            //flag =1;
          cout<<"Now "<<n<<" was found in index "<<i+1<<" of the array."<<endl;
break;

        }
}

}
