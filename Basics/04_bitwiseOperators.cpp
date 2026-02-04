#include <iostream>
using namespace std;

int main() {

    // int a = 4;
    // int b = 6;

    // cout << "a&b: " << (a&b) << endl;  // and(&)
    // cout << "a|b: " << (a|b) << endl;  // or(|)
    // cout << "~a: " << ~a << endl;  // negation(~)
    // cout << "a^b: " << (a^b) << endl;  // xor(^)

    // // left shift operator
    // cout << "5<<1: " << (5 << 1) << endl;   // multiply 5 bye 2
    // cout << "5<<2: " << (5 << 2) << endl;   // multiply 5 by 2 two times
    

    // // right shift operator
    // cout << "5>>1: " << (5 >> 1) << endl;  // divide five by 2 one time
    // cout << "5>>2: " << (5 >> 2) << endl;  // divede five by 2 two times

    // cout << "5/2: " << 5/2 << endl; 
    // cout << "5/4: " << 5/4 << endl;


    // cout << "17 >> 1: " << (17>>1) << endl;
    // cout << "17 >> 2: " << (17>>2) << endl;
    // cout << "19 << 1: " << (19<<1) << endl;
    // cout << "19 << 2: " << (19<<2) << endl;


    // for loop: fibonacci series  0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
    // int n;
    // int a = 0;
    // int b = 1;
    // cout << "Enter a number: ";
    // cin >> n;

    // cout << a << " " << b << " ";
    // for(int i = 1; i <= n; i++) {
    //     int num = a + b;
    //     cout << num << " ";
    //     a = b;
    //     b = num;
    // }


    // problem: subtract the product and sum of digits of an integer
    // given an integer number n, return the difference between the product of its digit and the sum of its digits.

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // 234 -> 24 - 9 = 15

    int product = 1;
    int sum = 0;
    while (n != 0) {
        int lastDigit = n % 10;
        product = product * lastDigit;
        sum = sum + lastDigit;
        n = n / 10;
    }

    int ans = product - sum;

    cout << "ans: " << ans;


    // number of 1 bits

    return 0;
}