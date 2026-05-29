#include<iostream>
#include<cmath>

double calc()
{
        double perpendicular,hypotenuse,base;
        std::cout<<"enter the value of perpendicular : \n";
        std::cin>>perpendicular;
        std::cout<<"enter the value of base : \n";
        std::cin>>base;
        hypotenuse = sqrt(pow(perpendicular,2) + pow(base,2));
        std::cout<<"value of hypotenuse is : ";
        return(hypotenuse);
}

int main()
{
        double x(calc());
        std::cout<<x;
}