#include<stdio.h>
char a[30005][1005];
int q,n;
int main(){
    scanf("%d%d",&n,&q);
    for(int i=0; i<q; i++) scanf("%s",a[i]);
    for(int i=0; i<q; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(a[i][j]!=a[i+1][j]) c++;
        }
        if(c>2){
            printf("%s",a[i]);
            return 0;
        }
    }
}