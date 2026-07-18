#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

struct Product p[100];
int n = 0;

void menu();
void addProduct();
void displayProducts();
void searchProduct();
void updateProduct();
void sortProducts();
void totalValue();

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
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                sortProducts();
                break;

            case 6:
                totalValue();
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
    printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
    printf("1. Add Product\n");
    printf("2. Display Products\n");
    printf("3. Search Product\n");
    printf("4. Update Product\n");
    printf("5. Sort by Price\n");
    printf("6. Total Inventory Value\n");
    printf("7. Exit\n");
}

void addProduct()
{
    printf("Enter Product ID: ");
    scanf("%d", &p[n].id);

    printf("Enter Product Name: ");
    scanf(" %49[^\n]", p[n].name);

    printf("Enter Price: ");
    scanf("%f", &p[n].price);

    printf("Enter Quantity: ");
    scanf("%d", &p[n].quantity);

    n++;

    printf("Product Added Successfully.\n");
}

void displayProducts()
{
    int i;

    if(n == 0)
    {
        printf("No Products Found.\n");
        return;
    }

    printf("\nProduct Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("ID       : %d\n", p[i].id);
        printf("Name     : %s\n", p[i].name);
        printf("Price    : %.2f\n", p[i].price);
        printf("Quantity : %d\n", p[i].quantity);
    }
}

void searchProduct()
{
    int id, i, found = 0;

    printf("Enter Product ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("\nProduct Found\n");
            printf("ID       : %d\n", p[i].id);
            printf("Name     : %s\n", p[i].name);
            printf("Price    : %.2f\n", p[i].price);
            printf("Quantity : %d\n", p[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Product Not Found.\n");
}

void updateProduct()
{
    int id, i, found = 0;

    printf("Enter Product ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %49[^\n]", p[i].name);

            printf("Enter New Price: ");
            scanf("%f", &p[i].price);

            printf("Enter New Quantity: ");
            scanf("%d", &p[i].quantity);

            printf("Product Updated Successfully.\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Product Not Found.\n");
}

void sortProducts()
{
    int i, j;
    struct Product temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(p[j].price > p[j + 1].price)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Products Sorted by Price Successfully.\n");
}

void totalValue()
{
    int i;
    float total = 0;

    for(i = 0; i < n; i++)
    {
        total = total + (p[i].price * p[i].quantity);
    }

    printf("Total Inventory Value = %.2f\n", total);
}