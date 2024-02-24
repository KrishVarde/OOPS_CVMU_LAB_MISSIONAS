#include <iostream>

class Memory {
private:
    int *arr;
    int size;
public:
    Memory() : arr(nullptr), size(0) {} // Constructor to initialize arr to nullptr

    ~Memory() { // Destructor to deallocate memory
        delete[] arr;
    }

    void create(){
        std::cout << "Please enter array size: ";
        std::cin >> size;
        
        // Allocate memory for the array
        arr = new int[size];

        std::cout << "Please enter the elements:" << std::endl;
        for (int i = 0; i < size; ++i)
        {
            std::cin >> arr[i];
        }

        std::cout << "Array size: " << size << std::endl;

        // Display the elements
        std::cout << "Array elements: ";
        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main(){
    Memory m1;
    m1.create();
    return 0;
}
