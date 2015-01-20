#include <cstdlib>
#include <iostream>

int addTwoNumbers(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{

    int a = 5;
    int b = 2;

    std::cout << "Adding " << a << " to " << b << " = " << addTwoNumbers(a,b) << std::endl;

    return 0;
}
