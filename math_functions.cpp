#include <iostream>
#include <cmath>
int main()
{
    double x=5;
    double y=7;
    double min,max,power,root,ceiling,floorr,absolute;
    min=std::min(x,y);
    max=std::max(x,y);
    power = pow(x,2);
    root=sqrt(25);
    ceiling = ceil(3.34);
    floorr = floor(3.2);
    absolute = abs(-x);
    
    std::cout<<min<<'\n';
    std::cout<<max<<'\n';
    std::cout<<power<<'\n';
    std::cout<<root<<'\n';
    std::cout<<ceiling<<'\n';
    std::cout<<floorr<<'\n';
    std::cout<<absolute<<'\n';
    return(0);
}