#include <stdio.h>
#include <conio.h>
main()
{
    int i;
    float B[7], W[7], ASFR[7], sumASFR = 0, TFR;
    clrscr();
    printf("\nWomen	Births\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%f %f", &W[i], &B[i]);
        ASFR[i] = (B[i] / W[i]) * 1000;
    }
    for (i = 1; i <= 70; i++)
    {
        printf("_");
    }
    printf("\nAge Group	No of Women		No of Births		ASFR\n");
    for (i = 1; i <= 70; i++)
    {
        printf("_");
    }
    for (i = 0; i < 7; i++)
    {
        printf("\n%d-%d		%f		%f		%f\n", (i + 3) * 5, (i + 3) * 5 + 4, W[i], B[i], ASFR[i]);
    }
    for (i = 1; i <= 70; i++)
    {
        printf("_");
    }
    for (i = 0; i < 7; i++)
    {
        sumASFR = sumASFR + ASFR[i];
    }
    TFR = 5 * sumASFR;
    printf("\nTFR=%f", TFR);
    getch();
    return 0;
}