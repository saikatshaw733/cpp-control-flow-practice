#include <iostream>

float calcu()
{
    float cp, sp, profit;
    std::cout << "enter cost price : ";
    std::cin >> cp;
    std::cout << '\n';
    std::cout << "enter selling price : ";
    std::cin >> sp;
    std::cout << '\n';
    profit = (sp - cp) / cp;
    return profit;
}

void asmr()
{
    float cp, sp, profit;
    std::cout << "enter cost price : ";
    std::cin >> cp;
    std::cout << '\n';
    std::cout << "enter selling price : ";
    std::cin >> sp;
    std::cout << '\n';
    profit = (sp - cp);
    
    if (profit > 0)
        std::cout << "you have made a profit of " << profit;
    else if (profit < 0) // FIX 2: Replaced 'if' with 'else if'
        std::cout << "you have made a loss of " << -profit;
    else // FIX 1: Replaced 'if (profit = 0)' with 'else'
        std::cout << "you have made neither profit nor loss";
    std::cout << '\n';
}

int main() {
    char choice; // Removed unused 'select' variable
    
    // FIX 3: Replaced the broken while-loop logic with a clean do-while loop
    do {
        std::cout << "do you want to see profit in numbers or profit in percentage\n";
        std::cout << "please select n for numbers and p for percentage\n ";
        std::cin >> choice; 
            
        if (choice == 'p' || choice == 'P')
        {
            float profit{calcu()};
            if (profit > 0)
                std::cout << "you have made a profit of " << profit * 100 << "%\n";
            else if (profit < 0)
                std::cout << "you have made a loss of " << -profit * 100 << "%\n";
            else
                std::cout << "you have made neither profit nor loss\n";
        }
        else if (choice == 'n' || choice == 'N')
        {
            asmr(); 
        }
        else 
        {
            std::cout << "invalid choice pal\n";
        }

        std::cout << "-------------------------------------------\n";
        std::cout << "do you want to calculate again? y/n\n";
        std::cin >> choice; 
        
    } while (choice == 'y' || choice == 'Y'); // Loop continues smoothly here
    
    return 0;
}
