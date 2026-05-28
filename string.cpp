#include <iostream>


int main() 
{
    std::string word;
    std::cout<<"what's your name\n"; 
    std::getline(std::cin , word);
    std::cout<<"press enter";
    std::cin.ignore();
    std::cin.get();
    std::cout<<"hello there "<<word;
    
    return 0;
}
