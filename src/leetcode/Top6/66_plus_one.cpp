//
// Created by ccb on 2020/10/6.
// https://leetcode-cn.com/problems/plus-one/
#include <vector>
#include <iostream>

vector<int> plusOne(vector<int>& digits) {
    if(digits.empty()) return digits;
    for(int i =digits.size()-1;i>=0;i--)
    {
        digits[i] ++;
        digits[i] %= 10;
        // NOTE:如果产生进位，这里应该是0,10%10=0,没有产生进位就提前退出
        if(digits[i] != 0)
            return digits;
    }
    digits.insert(digits.begin(),1);
    return digits;
}

