#include <stdio.h>

void main() {
    int array[100];
    int i, j, N, temp;

    int find_max(int b[10], int k);
    void exchange(int b[10], int k);

    printf("\nInput number of values in the array: ");
    scanf("%d", &N);
        printf("\nInput the elements one by one: ");

    for(i=0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    //Selection sorting
    exchange(array, N);
    printf("Sorted array: \n");

    for(i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }
}
    //Function to find the maximum value
int find_max(int b[10], int k)
{
    int max = 0, j;
    for(j = 1; j <= k; j++)
    {
        if(b[j] > b[max])
        {
            max = j;
        }
    }
    return(max);
}

void exchange(int b[10], int k)
{
    int temp, big, j;

    for(j = k - 1; j >= 1; j--) {
        big = find_max(b, j);
        temp = b[big];
        b[big] = b[j];
        b[j] = temp;
    }
}