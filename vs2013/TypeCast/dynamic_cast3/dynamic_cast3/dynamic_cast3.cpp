// dynamic_cast3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

class Base
{
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {
    }
    virtual ~Base() {}
};

class Derived : public Base
{
protected:
    std::string m_name;

public:
    Derived(int value, std::string name)
        : Base(value), m_name(name)
    {
    }

    const std::string& getName() { return m_name; }
};

Base* getObject(bool bReturnDerived)
{
    if (bReturnDerived)
        return new Derived(1, "Apple");
    else
        return new Base(2);
}

int main()
{
    Base *b = getObject(false);

    try {
        Derived &d = dynamic_cast<Derived&>(*b); // use dynamic cast to convert Base reference into Derived reference
        std::cout << "The name of the Derived is: " << d.getName() << '\n';
    }
    catch (std::bad_cast) {
        std::cout << "bad cast from Base to Derived" << std::endl;
    }

    delete b;

    return 0;
}


