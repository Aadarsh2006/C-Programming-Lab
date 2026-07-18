#include <stdio.h>

void address();
void dereference();
void swap();
void traverse();
void arithmetic();

int main()
{
    int choice;

    do
    {
        printf("\n----- POINTER PLAYGROUND -----\n");
        printf("1. Display Memory Address\n");
        printf("2. Dereference Pointer\n");
        printf("3. Swap Two Numbers\n");
        printf("4. Traverse Array\n");
        printf("5. Pointer Arithmetic\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                address();
                break;

            case 2:
                dereference();
                break;

            case 3:
                swap();
                break;

            case 4:
                traverse();
                break;

            case 5:
                arithmetic();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=6);

    return 0;
}

void address()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Value = %d\n",a);
    printf("Address = %p\n",(void*)&a);
}

void dereference()
{
    int a;
    int *p;

    printf("Enter a number: ");
    scanf("%d",&a);

    p=&a;

    printf("Pointer Address = %p\n",(void*)p);
    printf("Value using Pointer = %d\n",*p);
}

void swap()
{
    int a,b,temp;
    int *p,*q;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("After Swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}

void traverse()
{
    int arr[5];
    int *p;
    int i;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    p=arr;

    printf("Array Elements:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ", *p);
        p++;
    }

    printf("\n");
}

void arithmetic()
{
    int arr[5]={10,20,30,40,50};
    int *p;
    int i;

    p=arr;

    printf("Pointer Arithmetic:\n");

    for(i=0;i<5;i++)
    {
        printf("Address = %p\tValue = %d\n",(void*)p, *p);
        p++;
    }
}