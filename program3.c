#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter a number");
    scanf("%d",&n);
    do{
        if(n%2==0)
        n--;
        for(i=1;j=1;i<=n;i++;j+=2){
            printf("%d",&j);

        }
        printf("enter a num");
        scanf("%d",&n)
        
    }
    while(n!=0);
    return 0;

}
