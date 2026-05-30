#include <iostream>
bool machine_t()
{
    int mode;
    std::cout<<"\n------industrial machine controller terminal------\n";
    std::cout << "1. Idle Mode (Low Power)\n\n";
    std::cout << "2. Calibration Mode (Sensor Check)\n\n";
    std::cout << "3. Production Mode (Motors Active)\n\n";
    std::cout << "4. Emergency Shutdown (Stop System)\n\n";
    std::cout << "Enter system mode choice (1-4): "\n;
    std::cin >> mode;
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(100000,'\n');
        std::cout << "Invalid input! Please enter a number.\n"; 
        return true;
    }
    switch(mode)
    {
        case 1:
        std::cout<<"switching to idle mode.\ndisabling high power machinery\n";
        return true;
        break;
        case 2:
        std::cout<<"switching to CALIBRATION.\nreading all the sensors\n";
        return true;
        break;
        case 3:
        std::cout<<"switching to PRODUCTION mode.\nall high power machinery working\n";
        return true;
        break;
        case 4:
        std::cout<<"switching to EMERGENCY SYSTEM SHUTDOWN.\ndisabling all machineries\nswitching off all censors\n";
        return false;
        break;
        default: std::cout<<"\nplease enter valid digit(1-4)\n";
        return true;
        break;
    }
    
}
int main()
{
bool run;
do 
{
    run=machine_t();
    
}while(run == true);
}