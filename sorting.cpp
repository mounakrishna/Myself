// Mouna 107117060
#include <stdio.h>
    int main()
    {
 
        int i, j, t, n, A[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &A[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (A[i] > A[j]) 
                {
 
                    t =  A[i];
                    A[i] = A[j];
                    A[j] = t;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", A[i]);
 return 0;
    }
