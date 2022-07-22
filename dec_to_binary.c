
#include <stdio.h>
#include <math.h>
int main()
{   unsigned long long int dec,rest;
    int i;
    scanf("%llu",&dec);
    if (dec<0||dec>65535){
        printf("Wrong Input");
    }
    else{
        rest=dec;
        for(i=16;i>=0;i-=1){
            if(rest>=(int)(pow(2,i))){
                printf("1");
                rest=rest-(int)(pow(2,i));
            }
            else if(rest<dec && rest<(int)(pow(2,i))){
                printf("0");
            }
        }
    }

    return 0;
}
