#include "palindrome.h"

bool stringPalindrome(const string val) {

    for (int i = 0; i < (int)val.length() / 2; i++)
    {
        if (!(val[i] == val[val.length() - i - 1]))
        {
            return false;
        }
    }

    return true;
}

bool intPalindrome(int x) {

    if (x < 0) return false;

    int original = x;
    long long reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }

    return original == reversed;
}





void palindrome() {

    print("\n");

    bool val = stringPalindrome("awwa");
    print(" is 'awwa' strPalindrome: ", val);

    print("\n");

    val = intPalindrome(-121);
    print(" is '-121' intPalindrome: ", val);

    print("\n");
}
