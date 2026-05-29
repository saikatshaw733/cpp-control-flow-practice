#include <iostream>
#include <cmath>

double calculator()
{
    double num1,num2,result;
    char ch;
    std::string x;
    std::cout<<"what function do you want to perform ?\n";
    std::cout<<"choose from addidtion, subtraction, multiplication, division, power, remainder, root \n\n";
    std::cin>>x;
    if(x=="addition")
    {
    std::cout<<"enter 1st value ?\n";
    std::cin>>num1;
    std::cout<<"enter 2nd value ?\n";
    std::cin>>num2;
    result=num1 + num2;
    std::cout<<"answer will be ?"<<result<<'\n';
    }
    else if(x=="subtraction")
    {
    std::cout<<"enter 1st value ?\n";
    std::cin>>num1;
    std::cout<<"enter 2nd value ?\n";
    std::cin>>num2;
    result=num1 - num2;
    std::cout<<"answer will be ?"<<result<<'\n';
    }
    else if(x=="multiplication")
    {
    std::cout<<"enter 1st value ?\n";
    std::cin>>num1;
    std::cout<<"enter 2nd value ?\n";
    std::cin>>num2;
    result=num1 * num2;
    std::cout<<"answer will be ?"<<result<<'\n';
    }
    else if(x=="division")
    {
    std::cout<<"enter 1st value ?\n";
    std::cin>>num1;
    std::cout<<"enter 2nd value ?\n";
    std::cin>>num2;
        if(num2==0)
        {
            std::cout<<"division by 0 is not allowed";
        }
        if(num2!=0)
    {result=num1 / num2;
    std::cout<<"answer will be ?"<<result<<'\n';
    }
    }
    else if(x=="power")
    {
    std::cout<<"enter the base ?\n";
    std::cin>>num1;
    std::cout<<"enter the power of the base ?\n";
    std::cin>>num2;
    result=pow(num1,num2);
    std::cout<<"answer will be "<<result<<'\n';
    }
    else if(x=="remainder")
    {
    std::cout<<"enter 1st value ?\n";
    std::cin>>num1;
    std::cout<<"enter 2nd value ?\n";
    std::cin>>num2;
    result=(int)num1 % (int)num2;
    std::cout<<"answer will be "<<result<<'\n';
    }
    else if(x=="root")
    {
    std::cout<<"enter the value ?\n";
    std::cin>>num1;
    if (num1 < 0) {
    std::cout << "Error! Cannot calculate square root of a negative number.\n";}
    if (num1 >= 0)
        {
    result=sqrt(num1);
    std::cout<<"answer will be "<<result<<'\n';
        }
    }
    else std::cout<<"please choose from above options";
    
}
int main()
{
    char x;
    
    do {
        calculator();
        std::cout << "\ndo you want to use calculator again ? press y/n: ";
        std::cin >> x;
    } while (x == 'y' || x == 'Y');
    
    std::cout << "Goodbye!\n\n";
    return 0;
}