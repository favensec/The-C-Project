#include<stdio.h>

void main() {
    int array[100];
    int n = 0; //Number of elements
    int x = 0; //Value to be searched.
    int f,l,m = 0;
    int flag = 0;

    printf("Input number of elements in  an array\n");
    scanf("%d",&n);

    printf("Input  %d value in ascending order\n",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&array[i]);
        printf("Input  the value to be search : ");
        scanf("%d",&x);  
    }

    /* Binary Search  logic */
    f = 0;
    l = n-1;

    while(f<=l) {
        m=(f+l)/2;
        if(x==array[m]) {
            flag=1;
            break;
        }
        else if(x<array[m])
        l = m - 1;

        else
        f = m + 1;
    }

    if(flag==0) {
        printf("%d  value not found\n",x);
    }
    else {
        printf("%d value  found at %d position\n",x,m);
    }
}
