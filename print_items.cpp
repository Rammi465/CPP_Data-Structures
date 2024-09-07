#include<iostream>


void printItems(int n)
{
    for(int i=0;i < n;i++)
    {
        for(int j=0;j < n;j++)
        {
            for(int k=0;k < n;k++)
            {
                std::cout << i << j << k <<  std::endl;
            }
                
        }
        
    }


}
int main()
{
    printItems(10);
}
