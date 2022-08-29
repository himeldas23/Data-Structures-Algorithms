#include<stdio.h>

int main()
{
    int item,temp,i,j,arraySize;

    printf("Enter the size of array\n");
    scanf("%d",&arraySize);

    int arrayMain[arraySize];
    printf("Enter the elements of the array\n");

    for(i=0; i<arraySize; i++)
    {
        scanf("%d",&arrayMain[i]);
    }

    for(i=1; i<arraySize; i++)
    {

        item = arrayMain[i];
        j = i-1;
        while(j >= 0 && arrayMain[j] > item)
        {
            arrayMain[j+1] = arrayMain[j];
            j = j-1;
        }

        arrayMain[j+1] = item;

    }

    printf("After sorting array elements are\n");

    for(i=0; i<arraySize; i++)
    {
        printf("%d ",arrayMain[i]);
    }

    return 0;
}
