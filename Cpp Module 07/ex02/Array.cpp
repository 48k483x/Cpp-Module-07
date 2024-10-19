# include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(nullptr), _size(0){};

template <typename T>
Array<T>::Array(unsigned int n):  _array(new T[n]), _size(n){};

template <typename T>
Array<T>::Array(const Array& other): _size(other._size) {
  this->_array = new T[_size];
  for (unsigned int i = 0; i < other._size; i++)
    this->_array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array() {
  delete [] this->_array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
  if (this == &other)
    return *this;
  if (this->_size > 0)
    delete[] this->_array;

  this->_size = other._size;
  this->_array = new T[_size];
  for (unsigned int i = 0; i < _size; i++)
    this->_array[i] = other._array[i];
  return *this;
}

template <typename T>
unsigned int Array<T>::size() const {
  return this->_size;
}


template <typename T>
T&  Array<T>::operator[](unsigned int indx) {
  if (indx < 0 || indx > _size)
    throw std::overflow_error("Index out of bounds");
  return this->_array[indx];
}