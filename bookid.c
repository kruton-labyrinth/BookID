#include <stdio.h>

int main()
{
    int n, key, low, high, mid, found = -1;

    printf("Enter number of books: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of books.\n");
        return 0;
    }

    int a[n];

    printf("Enter %d sorted book IDs: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter book ID to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Book found at position %d\n", found + 1);
    }
    else
    {
        printf("Book not found\n");
    }

    return 0;
}