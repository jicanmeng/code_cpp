// function_template_specialization3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

template <class T>
class Storage
{
private:
    T m_value;
public:
    Storage(T value) {
        m_value = value;
    }

    ~Storage() {
    }

    void print() {
        std::cout << m_value << '\n';
    }
};

template <>
void Storage<double>::print() {
    std::cout << std::scientific << m_value << '\n';
}

template <class T>
class Storage<T*> // this is a partial-specialization of Storage that works with pointer types
{
private:
    T* m_value;
public:
    Storage(T* value) {
        // For pointers, we'll do a deep copy
        m_value = new T(*value);
    }

    ~Storage() {
        delete m_value; // so we use scalar delete here, not array delete
    }

    void print() {
        std::cout << *m_value << '\n';
    }
};

template <>
Storage<char *>::Storage(char *value) {
    int length = strlen(value) + 1;
    m_value = new char[length];

    // Copy the actual value string into the m_value memory we just allocated
    for (int count = 0; count < length; ++count) {
        m_value[count] = value[count];
    }
}
template <>
Storage<char*>::~Storage()
{
    if (m_value) {
        delete[] m_value;
    }
}
// Full specialization of print function for type char*
// Without this, printing a Storage<char*> would call Storage<T*>::print(), which only prints the first element
template<>
void Storage<char*>::print()
{
    std::cout << m_value;
}

int main()
{
    // 1. int * type
    int *pa = new int(3);
    Storage<int *> valueOne(pa);

    delete pa;

    valueOne.print();

    
    // 2. char * type
    // Dynamically allocate a temporary string
    char *string = new char[40];

    // Ask user for their name
    std::cout << "Enter your name: ";
    std::cin >> string;

    // Store the name
    Storage<char*> value(string);

    // Delete the temporary string
    delete[] string;

    // if we do not make a Storage<char *> instance， this will print garbage
    value.print();

}




