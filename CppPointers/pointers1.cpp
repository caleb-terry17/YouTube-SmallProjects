#include <bits/stdc++.h>

int main() {
    // int vs int*
    int var1 = 1;
    int* ptr1 = &var1;

    std::cout << "var1: " << var1 << std::endl;  // 1 or value
    std::cout << "ptr1: " << ptr1 << std::endl;  // 0x... or memory address

    // the value of ptr1 should be the memory address of var1
    std::cout << "&var1: " << &var1 << std::endl;

    // dereference the pointer to see if it stores what is stored in var1
    std::cout << "*ptr1: " << *ptr1 << std::endl;

    // change var1 and see how it changes ptr1
    var1++;  // now 2
    std::cout << "var1: " << var1 << std::endl;
    std::cout << "ptr1: " << ptr1 << std::endl;
    std::cout << "*ptr1: " << *ptr1 << std::endl;
}