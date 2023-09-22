#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int size_of_array(int arr[])
{
    return sizeof(arr) / sizeof(arr[0]);
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int nums[] = {9, 4, 2, 1, 5, 6, 7, 3, 0, 8};
    int size = sizeof(nums) / sizeof(nums[0]);
    sort(nums, size);
    print_array(nums, size);
}