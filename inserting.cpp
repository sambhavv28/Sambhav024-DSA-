#include <stdio.h>

int main()
{
    int array[50], pos, i, n, value;
    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter elements of array \n");
    
    for (i = 0; i < n; i++)    
        scanf("%d", &array[i]);
    
    printf("Enter the location where you want to insert an new element\n");
    scanf("%d", &pos);
    
    printf(" Enter the new value\n");
    scanf("%d", &value);
    
    for (i = n - 1; i >= pos-1; i--)    
        array[i+1] = array[i];
    
    array[pos-1] = value;
    
    printf("New array is\n");
    
    for (i=0; i<= n; i++)    
        printf("%d\n", array[i]);    
    }
