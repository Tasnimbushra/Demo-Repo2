#include<stdio.h>
int main()
{
    int N;
     scanf("%d",&N);
    int i=1;
    while(i<=N){
        if((i%3==0)&&(i%7==0)){
            printf("%d\n",i);
        }
        i++;
    }





    return 0;
}
