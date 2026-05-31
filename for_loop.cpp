#include<iostream>
#include<limits>

int sum()
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
    std::cout<<"sum of "<<a<< " consecutive natural numbers\n"<<result<<'\n';
    return(0);
}
int prime()
{
    int i=0,n,x=0;
    char ch;
    std::cout<<"----find whether a number is prime number----\n\n";
   
    std::cout<<"enter a number to find whether the number is prime number or not : ";
    while(!(std::cin>>n))
    {
        std::cout<<"invalid responce.\n please enter a digit";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');
        
    }
    for( i=1; i<=n; i++ )
    {
        if( n%i==0 )
        x++;
        
    }
    if ( x == 2 )
    std::cout<<"the number "<<n<<" is a prime number\n";
    else 
        std::cout<<"the number "<<n<<" is not a prime number because it can be divided by "<<x<<" numbers\n\n";
        

  return 0;  
}

int main()
{ 
    int x;
    char ch;
    do{
    std::cout<<"\n-----choose an operation by digit-----\n";
    std::cout<<"1 . sum of n consecutive natural numbers \n";
    std::cout<<"2 . find whether a number is prime number \n";
    while(!(std::cin>>x))
    {
        std::cout<<"enter digits only";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }   
    if( x == 1 )
    sum();
    if( x == 2 )
    prime();
    std::cout<<" do you want to continue ? y|n\n";
    std::cin>>ch;
    }while( ch == 'y' || ch == 'Y');
    return(0);
}