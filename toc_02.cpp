#include <iostream>
#include <string>
bool hasEqualOnesAndZeros(const std::string &input) {
 int ones = 0, zeros = 0;
 
 for (char c : input) {
 if (c == '0') {
 zeros++;
 } else if (c == '1') {
 ones++;
 }
 }
 
 return ones == zeros;
}
int main() {
 std::string input;
 std::cout << "Enter a binary string: ";
 std::cin >> input;
 
 if (hasEqualOnesAndZeros(input)) {
 std::cout << "Accepted: Equal number of 1's and 0's." << std::endl;
 } else {
 std::cout << "Rejected: Unequal number of 1's and 0's." << std::endl;
 }
 
 return 0;
}
