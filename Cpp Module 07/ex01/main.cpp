# include "iter.hpp"

template <typename T>
void printElement(const T& element)
{
  std::cout << element << " ";
}

template <typename T, typename Func>
void iter(T* arr, size_t length, Func func)
{
  for (size_t i = 0; i < length; i++)
  {
    func(arr[i]);
  }
}

template <typename T>
void square(const T& element)
{
    std::cout << element * element << " ";
}

int main()
{
    // Test with integers
    int intArr[] = {1, 2, 3, 4, 5};
    std::cout << "Printing int array: ";
    iter(intArr, 5, printElement<int>);
    std::cout << "\nSquaring int array: ";
    iter(intArr, 5, square<int>);
    std::cout << "\n\n";

    // Test with floats
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    std::cout << "Printing float array: ";
    iter(floatArr, 5, printElement<float>);
    std::cout << "\n\n";

    // Test with strings
    std::string strArr[] = {"Hello", "World", "C++", "Templates"};
    std::cout << "Printing string array: ";
    iter(strArr, 4, printElement<std::string>);
    std::cout << "\n\n";

    // Test with characters
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Printing char array: ";
    iter(charArr, 5, printElement<char>);
    std::cout << "\n";

    return 0;
}