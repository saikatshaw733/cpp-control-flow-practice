#include <iostream>
#include <string>

int main() 
{
    std::string word;
    std::cout<<"what's your name\n"; 
    std::cin>> word;
    std::cout<<"press enter\n";
    std::cin.ignore();
    std::cin.get();
    std::cout<<"hello there "<<word;
    
    return 0;
}
