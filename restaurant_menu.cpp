#include<iostream>
enum food {luchi=1, alur_dom=2, pantua=3, matar_paneer=4,chena_poda=5};
 int main()
 {
     int choice;
     std::cout<<"what do you want to eat?\n Menu :\n-----\n luchi : press 1\n alur_dom : press 2\n pantua : press 3\nmatar_paneer : press 4\nchena_poda : press 5\n";
     std::cin>>choice;
     food forMe = static_cast<food>(choice) ;
     switch(forMe)
     {
         case 1:std::cout<<"you choose luchi\n";
         break;
         case 2:std::cout<<"you choose alur dom\n";
         break;
         case 3:std::cout<<"you choose pantua\n";
         break;
         case 4:std::cout<<"you choose matar paneer\n";
         break;
         case 5:std::cout<<"you choose chena poda\n";
         break;
         default:std::cout<<"no valid option\n";
     }
     
 }
 