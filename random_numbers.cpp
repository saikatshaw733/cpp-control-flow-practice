#include<iostream>
#include<ctime>
int main()
{
    srand(time(NULL));
    int number=rand();
    int x;
    std::cout<<"design a dice for any game\n";
    std::cout<<"how many faces you will have in your dice\n";
    std::cin>>x;
    std::cout<<"press enter to throw dice";
    std::cin.ignore();
    std::cin.get();
    int number=rand();
    std::cout<<( number % x ) + 1<<'\n';

}