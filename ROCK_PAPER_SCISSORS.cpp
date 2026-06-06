#include <iostream>
#include <ctime>
char userchoice();
int computerchoice();
char showchoice(char player,int y);
void winner(char player,char cpu);

int main()
{
    char player = userchoice();
    int computer=computerchoice();
    char cpu=showchoice(player,computer);
     winner(player,cpu);
}
char userchoice()
{
 char choice;
    do{
    std::cout<<"******* ROCK-PAPER-SCISSORS*******\n\n";
    std::cout<<"choose one of the following\n";
    std::cout<<"r for ROCK\n";
    std::cout<<"p for PAPER\n";
    std::cout<<"s for SCISSORS\n";
    std::cin>>choice;
    }while(choice != 'r' && choice != 'p' && choice != 's' );
    return choice;
}
int computerchoice()
{
    int x;
    srand(time(0));
    x=rand() % 3 + 1;
    
    return (x);
}
char showchoice(char player,int y)
{
   if(player == 'r') std::cout<<"you have chosen rock\n";
   if(player == 'p') std::cout<<"you have chosen paper\n";
   if(player == 's') std::cout<<"you have chosen scissor\n";
    y=computerchoice();
    switch(y)
    {
       case 1: std::cout<<"computer has choosen ROCK\n";
       return('r');
       
       case 2:std::cout<<"computer has choosen PAPER\n";
       return('p');
       
       case 3:std::cout<<"computer has choosen SCISSOR\n";
       return('s');
    }
    return(0);
}
void winner(char player,char cpu)
{
    
       if(player == 'r')
        {
           if(cpu == 'r')
           std::cout<<"it's a tie";
           if(cpu == 'p')
           std::cout<<"you lose";
           if(cpu == 's')
           std::cout<<"you win";
        }
       if(player == 's')
        {
           if(cpu == 's')
           std::cout<<"it's a tie";
           if(cpu == 'p')
           std::cout<<"you win";
           if(cpu == 'r')
           std::cout<<"you lose";
        }
       if(player == 'p')
       {
           if(cpu == 'p')
           std::cout<<"it's a tie";
           if(cpu == 'r')
           std::cout<<"you win";
           if(cpu == 's')
           std::cout<<"you lose";
       }
    
}