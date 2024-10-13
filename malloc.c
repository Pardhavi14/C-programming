#include <stdio.h>
#include <stdlib.h>

int main(){
    float n,sum=0;
    int i;
    printf("enter the number of float values:");
    scanf("%f",&n);
    float *ptr=(float*)malloc(n*sizeof(float));
    
    if(ptr==NULL){
        printf("memory is not allocated");
        exit(0);
    }else{
        for(i=0;i<n;i++){
            printf("enter the float number%d:",i+1);
            scanf("%f",ptr+i);
        }
        for(i=0;i<n;i++){
            sum += *(ptr+i);
        }
        printf("the sum of given float values are:%.2f",sum);
    }
    return 0;
}