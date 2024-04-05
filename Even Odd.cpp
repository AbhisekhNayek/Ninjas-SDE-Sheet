#include<iostream>
using namespace std;


int main() {

    int num;

    std::cin >> num;
    // Use bitwise AND operator to check the least significant bit

    // If the least significant bit is 0, the number is even; otherwise, it's odd

    if (num & 1) {

        std::cout << "Odd"<< std::endl;

    } else {

        std::cout << "Even" << std::endl;
    }
    return 0;
}
