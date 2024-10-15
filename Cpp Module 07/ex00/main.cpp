# include "whatever.hpp"

template <typename T>
void  swap(T &a, T &b)
{
  T c = a;
  a = b;
  b = c;
}

template <typename T>
const T & min(const T &a, const T &b)
{
  if (a < b) return a;
  return b;
}

template <typename T>
const T & max(const T &a, const T &b)
{
  if (a > b) return a;
  return b;
}

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}



// int main(void)
// {
//     // Test swap function
//     {
//         int a = 5;
//         int b = 10;
//         std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
//         swap(a, b);
//         std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
//     }

//     // Test min function
//     {
//         int a = 5;
//         int b = 10;
//         std::cout << "Min of " << a << " and " << b << " is " << min(a, b) << std::endl;

//         // Edge case: equal values
//         a = 7;
//         b = 7;
//         std::cout << "Min of " << a << " and " << b << " is " << min(a, b) << std::endl;

//         // Test with floating-point numbers
//         float f1 = 3.14f;
//         float f2 = 2.71f;
//         std::cout << "Min of " << f1 << " and " << f2 << " is " << min(f1, f2) << std::endl;
//     }

//     // Test max function
//     {
//         int a = 5;
//         int b = 10;
//         std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;

//         // Edge case: equal values
//         a = 7;
//         b = 7;
//         std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;

//         // Test with double precision floating-point numbers
//         double d1 = 3.14159265359;
//         double d2 = 2.71828182846;
//         std::cout << "Max of " << d1 << " and " << d2 << " is " << max(d1, d2) << std::endl;
//     }

//     return 0;
// }