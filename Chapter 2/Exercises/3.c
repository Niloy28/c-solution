#include<stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;
    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d", ((volume + 165) / 166));

    return 0;
}
