#include <stdlib.h>
#include <stdio.h>

int *pointer(int start, int end)
{
    int len;
    int *arr;
    int k;

    len = (end - start);
    k = 0;
    arr = (int *) malloc(sizeof(int) * len);
    if (arr == NULL)
        return(NULL);
    while (k <= len)
    {
        arr[k] = end - k;
       
        printf("%d", arr[k]);
        printf("%c", '\n');

         k++;
        
    }

    return (arr);

    
}

int main(void)
{
    pointer(1, 5);
}