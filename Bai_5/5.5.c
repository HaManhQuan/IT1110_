#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int n;
    int *A;
};

int main()
{
    int n, i = 0, j = 0, temp = 0;
    struct Array arr;

    scanf("%d", &n);
    if (2 <= n && 10 >= n)
    {
        arr.A = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr.A[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {   // tại sao lại có -i?
                // vì sau mỗi lần lặp, số cặp cần so sánh lại giảm đi 1, do phần tử cuối cùng đã nằm đúng vị trí
                if (arr.A[j] + arr.A[j + 1] >= temp)
                {
                    temp = arr.A[j] + arr.A[j + 1];
                }
            }
        }
        if (temp < 0)
        {
            printf("0");
            exit(0);
        }

        printf("%d ", temp);
    }
    else if (n == 1)
    {
        printf("0");
        exit(0);
    }
}