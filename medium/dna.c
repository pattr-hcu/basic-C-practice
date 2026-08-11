#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char f[209];
char s[209];

int main()
{
    scanf("%s%s", f, s);

    int n = strlen(f);
    int m = strlen(s);

    int pic[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            pic[i][j] = 0;
        }
    }

    int mx = 0;
    int x, y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (f[i - 1] == s[j - 1])
            {
                pic[i][j] = pic[i - 1][j - 1] + 1;
            }
            if (pic[i][j] > mx)
            {
                mx = pic[i][j];
                x = i;
                y = j;
            }
        }
    }
    for (int i = x - mx + 1; i <= x; i++)
    {
        printf("%c", f[i - 1]);
    }
}