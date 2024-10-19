#include <iostream>
#include "Array.hpp"

int main()
{
    try {
        // Test default constructor
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // Test parameterized constructor
        Array<int> intArray(5);
        std::cout << "Int array size: " << intArray.size() << std::endl;

        // Test element assignment and access
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }

        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Test copy constructor
        Array<int> copiedArray(intArray);
        std::cout << "Copied array size: " << copiedArray.size() << std::endl;

        // Modify original array
        intArray[0] = 100;

        // Check if the copied array is unaffected
        std::cout << "Original intArray[0]: " << intArray[0] << std::endl;
        std::cout << "Copied copiedArray[0]: " << copiedArray[0] << std::endl;

        // Test out-of-bounds exception
        try {
            std::cout << intArray[10] << std::endl; // This should throw an exception
        } catch (const std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}