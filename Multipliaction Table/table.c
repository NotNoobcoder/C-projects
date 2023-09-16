#include <stdio.h>

int main()
{
    int num_you_enter, total;
    printf("Enter Your Number\n");
    scanf("%d", &num_you_enter);
    total = num_you_enter;
    printf("%d x 1 = %d\n", total, num_you_enter * 1);
    return 0;
}
