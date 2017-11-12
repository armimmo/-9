#include <stdio.h>
int x[5][4] = {{4,5,6,7},{1,2,3,4},{1,3,3,4},{1,2,3,4},{1,2,3,4}};
int i , j;
int max (int x[i][j])
{
    int i,MAX=0, j;
    for (i=0; i<5; i++)
    {
        for (j=0; j<4; j++)
        {
            if (x[i][j] > MAX)
            MAX = x[i][j];
        }
        printf ("%d\n" , MAX);
    }
    return 0;
}

void drawmatrix (int x[i][j])
{
    int i ,j;
    for (i = 0; i< 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("%d " , x[i][j]);
            
            if (j == 3)
            printf ("\n");
        }
    }
    
}
int main()
{
    drawmatrix (x);
}


