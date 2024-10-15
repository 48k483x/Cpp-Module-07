#pragma once

# include <iostream>
# include <string>

template <typename T>
void printElement(const T& element);

template <typename T>
void square(const T& element);


template <typename T, typename Func>
void iter(T* arr, size_t length, Func func);