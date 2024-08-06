#include <stdio.h>
#include <stdbool.h>

// Function to print the subset
void printSubset(int subset[], int subsetSize)
{
    printf("Subset: ");
    for (int i = 0; i < subsetSize; i++)
    {
        printf("%d ", subset[i]);
    }
    printf("\n");
}

// Recursive function to find and print all subsets with the given sum
void findSubsets(int arr[], int n, int sum, int subset[], int subsetSize)
{
    // Base Cases
    if (sum == 0)
    {
        printSubset(subset, subsetSize);
        return;
    }
    if (n == 0)
        return;

    // Include the last element and check for remaining sum
    subset[subsetSize] = arr[n - 1];
    findSubsets(arr, n - 1, sum - arr[n - 1], subset, subsetSize + 1);

    // Exclude the last element and check for remaining sum
    findSubsets(arr, n - 1, sum, subset, subsetSize);
}

int main()
{
    int n, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the sum to check for: ");
    scanf("%d", &sum);

    int subset[n];

    printf("All subsets with sum %d are:\n", sum);
    findSubsets(arr, n, sum, subset, 0);

    return 0;
}