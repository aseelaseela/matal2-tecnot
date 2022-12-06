#include <stdio.h>
#include "my_mat.h"
#define size 10
int main()
 {
    char yourchoice = 1;
    int mat[size][size];

    while (yourchoice != 'D')
    {
        scanf("%c", &yourchoice);

        if (yourchoice == 'A')
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    scanf("%d", &mat[i][j]);
                }
            }

            floyd_Warshall(mat);
        }
        else if (yourchoice == 'B')
        {
          int i, j;
          scanf("%d%d", &i, &j);
          func2(mat,i,j);
        }
        else if (yourchoice == 'C')
        {
          int i, j;
          scanf("%d%d", &i, &j);
          func3(mat,i,j);
        }
    }

    return 0;
}