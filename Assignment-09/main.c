#include <stdio.h>
#include <stdlib.h>

int *arr;
int n = 0;

void menu();
void insertElement();
void displayArray();
void updateElement();
void deleteElement();
void sortArray();
void linearSearch();
void binarySearch();

int main()
{
    int choice;

    printf("Enter initial size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insertElement();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                updateElement();
                break;

            case 4:
                linearSearch();
                break;

            case 5:
                sortArray();
                break;

            case 6:
                binarySearch();
                break;

            case 7:
                displayArray();
                break;

            case 8:
                free(arr);
                printf("Memory Released.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}

void menu()
{
    printf("\n----- DYNAMIC ARRAY OPERATIONS -----\n");
    printf("1. Insert Element\n");
    printf("2. Delete Element\n");
    printf("3. Update Element\n");
    printf("4. Linear Search\n");
    printf("5. Sort Array\n");
    printf("6. Binary Search\n");
    printf("7. Display Array\n");
    printf("8. Exit\n");
}

void displayArray()
{
    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Array Elements: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insertElement()
{
    int value;

    printf("Enter element to insert: ");
    scanf("%d", &value);

    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    arr[n] = value;
    n++;

    printf("Element Inserted Successfully.\n");
}

void deleteElement()
{
    int value, i, found = 0;

    printf("Enter element to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            found = 1;

            for(int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            n--;

            arr = (int *)realloc(arr, n * sizeof(int));

            printf("Element Deleted Successfully.\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found.\n");
    }
}

void updateElement()
{
    int oldValue, newValue, i, found = 0;

    printf("Enter element to update: ");
    scanf("%d", &oldValue);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == oldValue)
        {
            printf("Enter new value: ");
            scanf("%d", &newValue);

            arr[i] = newValue;

            printf("Element Updated Successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found.\n");
    }
}

void linearSearch()
{
    int key, i, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found.\n");
    }
}

void sortArray()
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array Sorted Successfully.\n");
}

void binarySearch()
{
    int key;
    int low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element Found at Position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found.\n");
    }
}