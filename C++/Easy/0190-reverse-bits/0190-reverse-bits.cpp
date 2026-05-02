#include <bits/stdc++.h>
class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary(n);
        cout << binary << endl;

        int left = 0;
        int right = binary.size() - 1;

        while (left < right) {
            int temp = binary[left];
            binary[left] = binary[right];
            binary[right] = temp;
            left++;
            right--;
        }
        cout << binary;
        long ans=binary.to_ulong();
        return ans;
    }
};