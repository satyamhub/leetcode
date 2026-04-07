class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned int carry = a & b; // AND gate for carry
            a = a ^ b;                  // XOR gate for sum
            b = carry << 1;             // Shift carry
        }
        return a;
    }
};