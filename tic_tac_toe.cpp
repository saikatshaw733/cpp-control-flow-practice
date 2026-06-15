#include<iostream>
#include<ctime>
void gameboard(char space[], char player);
void userInput(char space[], char player);
void computerInput(char *space, char computer);
int main()
{
    char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'x';
    char computer = 'o';
    bool running= true;
    std::cout<<"you will be using numbers to put x in a specific spot chosen by numbers(1-9)\n";
     std::cout<<"computer will use o. \n";
    gameboard(space,player);
   
    while(running)
    {
        userInput(space, player);
        gameboard(space,player);
        std::cout<<"***************************************\n";
        computerInput(space,computer);
        gameboard(space,player);
    }
}

void gameboard(char space[] ,char player)
{
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  \n";
    
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  \n";
    
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  \n";
    
    std::cout<<"     |     |     \n";
}

void userInput(char space[], char player)
{
    int i=0;
    do
    {
        std::cout<<"at what place do you want to put x : ";
        std::cin>>i;
        i--;
        if(space[i]== ' ')
        space[i]= player;
        break;
        
    }while(i <=8 && i>=0);
}
    

void computerInput(char *space, char computer)
{
    srand(time(NULL));
    do
    {
        int x = rand();
        int cpu = (x%9);
        if(space[cpu] == ' ')
        {
            space[cpu] = computer;
            break;
        }
        
    }while(true);
}
