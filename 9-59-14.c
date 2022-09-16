#include <stdio.h>
#include <stdlib.h>
int main()
{
    float temperature[3][4] = {{18.2, 17.3, 15.0, 13.4},
                               {23.8, 25.1, 20.6, 17.8},
                               {20.6, 21.5, 18.4, 15.7}};
    int i, j, a, m, n, g;
    int max_t, min_t, max_d, min_d;
    float day_average[4] = {0, 0, 0, 0};
    float time_average[3] = {0, 0, 0};
    float MAX_T, min_T, MAX_D, min_D;

    for (m = 0; m < 3; m++)
    {
        for (n = 0; n < 4; n++)
        {
            time_average[m] += temperature[m][n];
            printf("%4.1f ", temperature[m][n]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            day_average[i] += temperature[j][i];
        }
    }
    printf("\n");

    MAX_D = min_D = day_average[0];
    for (a = 0; a < 4; a++)
    {
        printf("W%d average temerature = %4.2f\n", a + 1, day_average[a] / 3);
        if (day_average[a] > MAX_D)
            max_d = a + 1;
        if (day_average[a] < min_D)
            min_d = a + 1;
    }

    MAX_T = min_T = time_average[0];
    for (g = 0; g < 3; g++)
    {
        printf("Time %d average temperature = %4.2f\n", g + 1, time_average[g] / 4);
        if (time_average[g] > MAX_T)
            max_t = g + 1;

        if (time_average[g] < min_T)
            min_t = g + 1;
    }
    printf("max_t = %d\n", max_t);
    printf("min_t = %d\n", min_t);
    printf("The highest temperature day is W%d\n", max_d);
    printf("The lowest temperature day is W%d\n", min_d);
    printf("The highest temperature time is %d\n", max_t);
    printf("The lowest temperature time is %d\n", min_t);

    system("pause");
    return 0;
}