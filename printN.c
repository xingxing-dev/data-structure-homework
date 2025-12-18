#include <stdio.h>
void printN_1(int N){
    for(int i=1;i<=N;i++){
        printf("%d\n",i);
    }
    return ;
}
void printN_2(int N){
    if(N){
        printN_2(N-1);
        printf("%d\n",N);
    }
    return;
}

int main (){
    int n=0;
    scanf("%d",&n);
    printN_1(n);
    return 0;
   
}