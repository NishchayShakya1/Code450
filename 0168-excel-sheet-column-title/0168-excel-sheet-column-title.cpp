class Solution {
public:
    string convertToTitle(int columnNumber) {
    string res;

    string tmp;

    while(columnNumber){

        columnNumber -= 1;

        tmp = 'A' + columnNumber % 26;

        res = tmp + res;

        columnNumber /= 26;

    }

    return res;
    }
};