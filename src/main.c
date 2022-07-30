#include <stdio.h>


float get_array_average(const int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    return (float) sum / n;
}



void run_demo() {
    int nums[100], n, i;
    float avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &nums[i]);
    }

    avg = get_array_average(nums, n);
    printf("Average = %.2f\n", avg);
}

int main() {
    run_demo();
    return 0;
}
