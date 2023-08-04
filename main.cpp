#include <stdio.h>

// Function to insert an element into the array
void insert(int arr[], int size, int pos, int value) {
    if (pos < 0 || pos > size) {
        printf("Invalid position for insertion!\n");
        return;
    }

    // Shift elements to the right to make space for the new value
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value at the specified position
    arr[pos] = value;
}

// Function to delete an element from the array
void delete(int arr[], int size, int pos) {
    if (pos < 0 || pos >= size) {
        printf("Invalid position for deletion!\n");
        return;
    }

    // Shift elements to the left to remove the element at the specified position
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int arr[100], size, pos, value;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position for insertion: ");
    scanf("%d", &pos);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    insert(arr, size, pos, value);

    printf("Array after insertion:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position for deletion: ");
    scanf("%d", &pos);
    delete(arr, size + 1, pos);

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
