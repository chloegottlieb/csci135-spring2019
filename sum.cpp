#include <iostream>

int main() {
    float num, sum;
    sum = 0;
    while(std::cin >> num) { // While the reading operation is a success
        //std::cout << num << std::endl;  // print the read word
        sum += num; // add number from txt file to total sum
        
    }
    std::cout << sum << std::endl; //print final sum
}