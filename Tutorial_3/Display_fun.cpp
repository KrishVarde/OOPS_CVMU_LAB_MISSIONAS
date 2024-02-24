#include <iostream>
//important note: function can't count the correct size of an arrey inside them.
int display(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    return 1;
}

int main() {
    int a[7] = {12, 1, 21, 112, 1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]); // Calculate the size of the array
    display(a, size); // Pass the array and its size to the display function
    return 0;
}
