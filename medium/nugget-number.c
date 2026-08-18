#include<stdio.h>
int n,t;
int main(){
    scanf("%d",&n);
    if(n<6){
        printf("no");
        return 0;
    }
    for(int i=1; i<=n; i++){
        t=0;
        for(int a=0; 6*a<=i; a++){
            for(int b=0; 9*b<=i; b++){
                for(int c=0; 20*c<=i; c++){
                    if(6*a+9*b+20*c==i) t=1;
                }
            }
        }
        if(t) printf("%d\n",i);
    }
}