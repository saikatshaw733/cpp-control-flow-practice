#include <iostream>
double gettotal(double prices[],int size)
{
    double total=0; 
    for(int i=0; i<size; i++){
    total=total + prices[i];
   
}
return total;
}
double find(double prices[],int size)
{
    
    double x;
    std::cout<<"\nwhat is the number you want to find? ";
    std::cin>>x;
    for(int i=0; i<size;i++)
    {
        if(x == prices[i])
        {
            std::cout<<"\nthe number "<<x<<" is located in "<<i+1<<" position\n";
            break;}
        else std::cout<<"not in the array\n";
        break;
    }

}

int main() {
    double prices[]={1,2,3,4,5,6};
    int size = sizeof(prices)/sizeof(double);
    double total = gettotal(prices,size);
    std::cout<<"the total price is "<<total;
    double find_num = find(prices,size);

    return(0);
}
