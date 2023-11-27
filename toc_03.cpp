#include <iostream>
#include <string>
void countOnesAndZeros(const std::string &input) {
 int ones = 0, zeros = 0;
 
 for (char c : input) {
 if (c == '0') {
 zeros++;
 } else if (c == '1') {
 ones++;
 }
 }
 
 std::cout << "Number of 0's: " << zeros << std::endl;
 std::cout << "Number of 1's: " << ones << std::endl;
}
int main() {
 std::string input;
 std::cout << "Enter a binary string: ";
 std::cin >> input;
 
 countOnesAndZeros(input);
 
 return 0;
}