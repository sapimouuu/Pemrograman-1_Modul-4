#include<stdio.h>

int main(){
int i=1,j,n,r,hasil=0,baris;
scanf("%d %d",&n,&r);

while(i<=n){
    baris=0;
    j=1;
    while(j<=i){
        printf("(%d * %d)",j,r);
        baris+=j*r;
        if(j!=i){
            printf(" + ");
        }
        j+=1;
    }
    printf(" = %d\n",baris);
    hasil += baris;
    i+=1;
}
printf("%d",hasil);
return 0;
}