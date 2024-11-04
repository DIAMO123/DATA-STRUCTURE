#include <iostream>
#include <string>
using namespace std;


struct rectangle {

    int height;
    int width;


    rectangle()
{
    this->height=height;
    this->width=width;



}
int area(int height,int width)
{

    cout<<"area - "<<height*width<<endl;

}
int perimeter(int height,int width)
{

    cout<<"perimeter - "<<2*(height+width);

}


};


int main() {


cout<<"enter height and width - "<<endl;
int height;
int width;
cin>>height;
cin>>width;
   rectangle ob;
   ob. area(height,width);
   ob.perimeter(height,width);



}


