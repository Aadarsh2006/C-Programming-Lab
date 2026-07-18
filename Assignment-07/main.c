#include <stdio.h>
#include <string.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
};

struct Patient p[100];
int n = 0;

void menu();
void registerPatient();
void displayPatients();
void searchPatient();
void updatePatient();
void deletePatient();

int main()
{
    int choice;

    do
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                registerPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void menu()
{
    printf("\n----- HOSPITAL PATIENT MANAGEMENT -----\n");
    printf("1. Register Patient\n");
    printf("2. Display Patients\n");
    printf("3. Search Patient\n");
    printf("4. Update Patient\n");
    printf("5. Delete Patient\n");
    printf("6. Exit\n");
}

void registerPatient()
{
    printf("Enter Patient ID: ");
    scanf("%d", &p[n].id);

    printf("Enter Patient Name: ");
    scanf(" %49[^\n]", p[n].name);

    printf("Enter Age: ");
    scanf("%d", &p[n].age);

    printf("Enter Disease: ");
    scanf(" %49[^\n]", p[n].disease);

    n++;

    printf("Patient Registered Successfully.\n");
}

void displayPatients()
{
    int i;

    if(n == 0)
    {
        printf("No Patient Records Found.\n");
        return;
    }

    printf("\nPatient Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID      : %d\n", p[i].id);
        printf("Name    : %s\n", p[i].name);
        printf("Age     : %d\n", p[i].age);
        printf("Disease : %s\n", p[i].disease);
    }
}

void searchPatient()
{
    int id, i, found = 0;

    printf("Enter Patient ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("\nPatient Found\n");
            printf("ID      : %d\n", p[i].id);
            printf("Name    : %s\n", p[i].name);
            printf("Age     : %d\n", p[i].age);
            printf("Disease : %s\n", p[i].disease);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found.\n");
    }
}

void updatePatient()
{
    int id, i, found = 0;

    printf("Enter Patient ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %49[^\n]", p[i].name);

            printf("Enter New Age: ");
            scanf("%d", &p[i].age);

            printf("Enter New Disease: ");
            scanf(" %49[^\n]", p[i].disease);

            printf("Patient Record Updated Successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found.\n");
    }
}

void deletePatient()
{
    int id, i, j, found = 0;

    printf("Enter Patient ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            for(j = i; j < n - 1; j++)
            {
                p[j] = p[j + 1];
            }

            n--;

            printf("Patient Record Deleted Successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found.\n");
    }
}