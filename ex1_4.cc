#include <iostream>

int main(){
    std::cout << "input two numbers:" << std::endl;
    int a=0, b=0;
    std::cin >> a >> b;
    std::cout << "The product of " << a << " and " << b 
        << " is " << a*b << std::endl;

    return 0;
}

