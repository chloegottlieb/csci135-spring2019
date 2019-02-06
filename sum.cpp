#include <iostream>

int main() {
    float num, sum; //initializing variables as floats
    sum = 0; //setting sum equal to zero, to be added onto later
    while(std::cin >> num) { // While the reading operation is a success
        //std::cout << num << std::endl;  // print the read word
        sum += num; // add number from txt file to total sum
        
    }
    //end of while loop
    std::cout << sum << std::endl; //print final sum
}
