#include<iostream>
int sort(int array[],int size);
int main()
{
    int array[]={3,5,6,1,78,3,4,9,10};
    int size = sizeof(array)/sizeof(int);
    sort(array,size);
    
    
}
int sort(int array[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
        
    }
   for(int i=0;i<size;i++)
   {
       std::cout<<array[i]<<" ";
   }
   return(0);
}