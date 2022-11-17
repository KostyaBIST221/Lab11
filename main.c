#include <stdio.h>
#define N 10

void task2(){
    float A[10],B[10];
    float s = 0;
    for(int i=0; i<10; i++)
    {
        float temp;
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);
        A[i]=temp;
    }
    
    for(int i=0; i<10; i++)
    {
        if (A[i]==0){
            B[i]=i;
        }else{
            B[i]=A[i];
        }
        s+=B[i];
    }
    
    for(int i=0; i<10; i++)
    {
        printf("| %i | %5.0f | %5.0f |\n",i, A[i], B[i]);
    }
    printf("Ср. знач = %.2f\n",s/N);
}


void main() {
    
    int x;
    printf("Введите кол-во элементов массива\n");
    scanf("%i",&x);
    float a[x];
    float temp;
    int cnt=0;
    for (int i = 0; i<x; i++){
        printf("a[%i]=",i);
        scanf("%f",&temp);
        a[i]=temp;
    }
    
    for (int i = 0; i<x; i+=2) {
        if (a[i]>=10){
            cnt++;
        }
    }
    
    printf("Количество элементов массива значение которых больше 10, находящийся на четных позициях = %i\n",cnt);
}
