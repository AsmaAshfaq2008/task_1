#include <stdio.h>
int main()
{
    int number[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;
    float avg;

    for (i = 0; i < 5; i++)
    {
        sum = sum + number[i];
    }
    avg = sum / 5.0;

    printf("Numbers :[%d,%d,%d,%d,%d]\n",number[0],number[1],number[2],number[3],number[4]);
    printf("\nSum: %d\n", sum);
    printf("Average: %.1f\n", avg);

    return 0 ;
}
