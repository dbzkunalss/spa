#include <stdio.h>

int binary_search(int arr[], int target)
{
    int low = 0, high = 10 - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target > arr[mid])
        {
            low = mid + 1;
        }

        else if (target < arr[mid])
        {
            high = mid - 1;
        }

        else if (target == arr[mid])
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target;
    int index;

    printf("Enter the number to be searched:");
    scanf("%d", &target);

    index = binary_search(arr, target);

    if (index != -1)
    {
        printf("Item %d found at index %d.", target, index);
    }
    else
    {
        printf("Item %d not found.", target);
    }

    return 0;
}
