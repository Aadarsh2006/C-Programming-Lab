#include <stdio.h>

void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
void largest(int arr[], int n);
void smallest(int arr[], int n);
void reverseArray(int arr[], int n);
void removeDuplicates(int arr[], int *n);
void frequency(int arr[], int n);
void linearSearch(int arr[], int n);
void sortArray(int arr[], int n);

int main()
{
    int arr[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);

    do
    {
        printf("\n----- ARRAY CHALLENGE -----\n");
        printf("1. Largest & Second Largest\n");
        printf("2. Smallest & Second Smallest\n");
        printf("3. Reverse Array\n");
        printf("4. Remove Duplicates\n");
        printf("5. Count Frequency\n");
        printf("6. Linear Search\n");
        printf("7. Sort Array\n");
        printf("8. Display Array\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                largest(arr, n);
                break;

            case 2:
                smallest(arr, n);
                break;

            case 3:
                reverseArray(arr, n);
                break;

            case 4:
                removeDuplicates(arr, &n);
                break;

            case 5:
                frequency(arr, n);
                break;

            case 6:
                linearSearch(arr, n);
                break;

            case 7:
                sortArray(arr, n);
                break;

            case 8:
                displayArray(arr, n);
                break;

            case 9:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}

void inputArray(int arr[], int n)
{
    int i;

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    int i;

    printf("Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void largest(int arr[], int n)
{
    int i;
    int largest = arr[0];
    int secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);
}

void smallest(int arr[], int n)
{
    int i;
    int smallest = arr[0];
    int secondSmallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);
}

void reverseArray(int arr[], int n)
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Array Reversed Successfully.\n");
}

void removeDuplicates(int arr[], int *n)
{
    int i, j, k;

    for(i = 0; i < *n; i++)
    {
        for(j = i + 1; j < *n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < *n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                (*n)--;
                j--;
            }
        }
    }

    printf("Duplicates Removed Successfully.\n");
}

void frequency(int arr[], int n)
{
    int i, j, count;
    int visited[100] = {0};

    printf("Element Frequency\n");

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }
}

void linearSearch(int arr[], int n)
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

void sortArray(int arr[], int n)
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