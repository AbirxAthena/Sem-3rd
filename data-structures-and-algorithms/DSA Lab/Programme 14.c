#include <stdio.h>
int main()
{
    int size, position, newElement, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[size + 1];
    int positionToDelete;
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 for insertion, 2 for deletion: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 2:
        printf("Enter the position to delete (1 to %d): ", size);
        scanf("%d", &positionToDelete);
        if (positionToDelete < 1 || positionToDelete > size)
        {
            printf("Invalid position to delete.\n");
            return 1;
        }
        for (int i = positionToDelete - 1; i < size - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        printf("\nArray after deletion at position %d:\n", positionToDelete);
        for (int i = 0; i < size - 1; ++i)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
        break;
    case 1:
        printf("Enter the new element to be inserted: ");
        scanf("%d", &newElement);
        printf("Enter the position of insertion (1 to %d): ", size + 1);
        scanf("%d", &position);
        if (position < 1 || position > size + 1)
        {
            printf("Invalid position of insertion.\n");
            return 1;
        }
        for (int i = size; i >= position; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = newElement;
        printf("\nArray after insertion at position %d:\n", position);
        for (int i = 0; i <= size; ++i)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    default:
        printf("Invalid Choice...");
      break;
}
}
