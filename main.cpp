#include <cstdlib>
#include <iostream>

int addTwoNumbers(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{

    int a = 7;
	
	int anewvar = 0;

    int b = 1;

    std::cout << "Adding " << a << " to " << b << " = " << addTwoNumbers(a,b) << std::endl;

    return 0;
}
