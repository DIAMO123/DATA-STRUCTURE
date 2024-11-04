#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER THE NUMBER OF ELEMENTS - ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cout<<i+1<<" ELEMENT - ";
        cin>>arr[i];
        cout<<endl;
    }


    int count=0;
    int count2=0;
    int sum = 0;
    int sum2 = 0;
    for(int i=0;i<a;i++)
    {
       if(arr[i]%2==0)
       {
           count++;
        sum=sum +arr[i];
       }
       else{
            count2++;
            sum2=sum2 +arr[i];
       };
    }

    cout<<"total even numbers = "<<count<<endl;
    cout<<"total odd numbers = "<<count2<<endl;
    cout<<"sum of even numbers = "<<sum<<endl;
    cout<<"sum of odd numbers = "<<sum2;


}
