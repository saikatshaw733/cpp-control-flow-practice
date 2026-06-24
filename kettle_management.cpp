#include <iostream>
class dog{
    public:
        std::string name;
        std::string color;
        int age;
        
        void bark()
        {
            std::cout<<"the dog is barking";
        }
        void lick()
        {
            std::cout<<"the dog is barking";

        }
};
int main() {
   dog kutta;
   std::cout<<"dog's name : ";
   std::cin>>kutta.name;
   std::cout<<'\n'<<kutta.name<<'\n';
   std::cout<<"color of the dog : ";
   std::cin>>kutta.color;
   std::cout<<'\n'<<kutta.color<<'\n';
   std::cout<<"dog's age : ";
   std::cin>>kutta.age;
   std::cout<<'\n'<<kutta.age<<'\n';
   kutta.bark();
    return 0;
}