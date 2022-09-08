#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\nElement arr\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n ", arr.A[i]);
    }
}
void Append(struct array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}
void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {

        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
            arr->A[index] = x;
            arr->length++;
        }
    }
}
int Delete(struct array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array arr;
    int n, i;

    printf("Enter size of an array");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int)); // array initiallise the array in heap
    arr.length = 0;
    printf("enter number of number:-");
    scanf("%d", &n);

    printf("enter all element:-");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
        arr.length = n;
    }
    display(arr);
    Append(&arr, 5);
    display(arr);
    
    Delete(&arr, 3);
    display(arr);
    insert(&arr, 5, 50);
    display(arr);

    return 0;
}