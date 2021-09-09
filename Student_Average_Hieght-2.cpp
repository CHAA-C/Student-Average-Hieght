#include<stdio.h>

int main()
{
    int i;
    float hieght, sum=0, avg;
    printf("Enter hieght obtained in 10 Student: ");
    for(i=0; i<10; i++)
    {
        scanf("%f", &hieght);
        sum = sum+hieght;
    }
    avg = sum/10;
    
    printf("\nAll hieght sum = %.2f CM.", sum);
    
    printf("\n\nAverage hieght = %.2f CM.", avg);
   
    return 0;
}
