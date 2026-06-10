#include <iostream>
double gettotal(double prices[],int size)
{
    double total=0; 
    for(int i=0; i<size; i++){
    total=total + prices[i];
   
}
return total;
}
int main() {
    double prices[]={1,2,3,4,5,6};
    int size = sizeof(prices)/sizeof(double);
    double total = gettotal(prices,size);
    std::cout<<"the total price is "<<total;
    return(0);
}
