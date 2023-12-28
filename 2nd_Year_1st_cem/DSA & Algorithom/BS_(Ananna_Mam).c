#include <stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of element:");
    scanf("%d", &n);
    printf("Enter %d integer:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter value to find:");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] < key)
            low = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list", key);
    return 0;
}