#include <iostream>
struct employ
{
    std::string employee;
    int age;
    
};
void printdata(employ &person);
int main() 
{
    
    employ human1;
    employ human2;
    employ human3;
    employ human4;
    employ human5;

    human1.employee = "saikat";
    human1.age = 28;
    
    human2.employee = "ani";
    human2.age = 18;
    
    human3.employee = "lal mohan";
    human3.age = 218;
    
    human4.employee = "feluda";
    human4.age = 27;
    
    human5.employee = "topse";
    human5.age = 90;
    
    printdata(human5);
    return(0);
}
void printdata(employ &person)
{
    
    std::cout << "person name : " << person.employee << "\n";
    std::cout << "person age :" << person.age << "\n";
}