#include<iostream>
#include<limits>

int main()
{
    int n=0,result=0,a=0;
    std::cout<<"----------sum of n consecutive natural numbers----------\n\n";
    std::cout<<"enter the value of n\n";
    while(!(std::cin>>n))
    {
        std::cout<<"enter digits only";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout<<"enter the the starting number\n";
 while(!(std::cin>>a))
    {
        std::cout<<"enter digits only";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }    
    for(int i = a; i <= n+a-1; i++)
    {
        result=result + i;
    }
    std::cout<<"sum of "<<a<< " consecutive natural numbers\n"<<result;
    return(0);
}