#include <stdio.h>
#include <string.h>

void menu();
int length(char str[]);
void reverse(char str[]);
void palindrome(char str[]);
void count(char str[]);
void frequency(char str[]);

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do
    {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", length(str));
                break;

            case 2:
                reverse(str);
                break;

            case 3:
                palindrome(str);
                break;

            case 4:
                count(str);
                break;

            case 5:
                frequency(str);
                break;

            case 6:
                printf("Enter a new string: ");
                scanf(" %[^\n]", str);
                break;

            case 7:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

void menu()
{
    printf("\n------ STRING UTILITY TOOLKIT ------\n");
    printf("1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Check Palindrome\n");
    printf("4. Count Vowels, Digits and Spaces\n");
    printf("5. Character Frequency\n");
    printf("6. Enter New String\n");
    printf("7. Exit\n");
}

int length(char str[])
{
    return strlen(str);
}

void reverse(char str[])
{
    int i, n = strlen(str);

    printf("Reversed String: ");

    for(i = n - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
}

void palindrome(char str[])
{
    int i, n = strlen(str), flag = 1;

    for(i = 0; i < n / 2; i++)
    {
        if(str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
}

void count(char str[])
{
    int i;
    int vowels = 0, digits = 0, spaces = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
}

void frequency(char str[])
{
    int i, j, count;
    int visited[100] = {0};

    printf("\nCharacter Frequency:\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(str[i] == ' ')
            printf("' ' : %d\n", count);
        else
            printf("%c : %d\n", str[i], count);
    }
}
