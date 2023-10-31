/******************************************************************************

                             PASS BY ADDRESS

*******************************************************************************/
#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    //Pass by ADDRESS
    
    int a=10, b=20;
    swap(&a,&b);
    printf("%d  %d",a,b);
    
    
    return 0;
}
