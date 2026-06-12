#include <iostream>
int function(int &x, int &y);
int main()
{
    int x = 9;
    int y = 8;
    std::cout<<"value of x is "<<x;
    std::cout<<"\nvalue of y is "<<y;
    function(x,y);
    std::cout<<"\nvalue of x is "<<x;
    std::cout<<"\nvalue of y is "<<y;
    return(0);
}
int function(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}