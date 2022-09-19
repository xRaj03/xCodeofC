#include <stdio.h>

int main()
{
    int L, B, R;
    float AREA, PERI;
    printf("Enter the value of Length\n");
    scanf("%d", &L);
    printf(" Enter the value of breadth\n");
    scanf("%d", &B);

    AREA = L * B;
    printf("The value of area id %f ", AREA);

    return 0;
}
