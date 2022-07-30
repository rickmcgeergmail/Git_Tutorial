# Git_Tutorial


Bubble sort function:
```c
void sort_array(int nums[], int n) {
    int swap;
    for (int i = 0 ; i < n - 1; i++) {
        for (int j = 0 ; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = swap;
            }
        }
    }
    printf("Sorted list in ascending order:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\n");
}
```


Quicksort function:
```c
void quicksort(int number[], int first, int last){
    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while(i < j) {
            while(number[i] <= number[pivot] && i < last)
                i++;
            while(number[j] > number[pivot])
                j--;
            if (i < j) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first,j - 1);
        quicksort(number,j + 1, last);
    }
}


void sort_array(int nums[], int n) {
    quicksort(nums, 0, n - 1);
    printf("Sorted list in ascending order:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\n");
}
```