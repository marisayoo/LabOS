#include <stdio.h>
int main() {
        int a = 1, sum = 0;
        double count;
        while (a > 0) {
                printf("enter a number : ");
                scanf("%d",&a);
                if (a > 0) {
                        sum += a;
                        count++;
                }
        }
        printf("summation : %d\n",sum);
        printf("average : %f\n",sum/count);
}
