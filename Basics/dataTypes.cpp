#include<iostream>
#include<limits>
using namespace std;

int main() {
    // data types
    // i byte = 8 bits
    
    /*
    int a = 34;
    cout << "Size of a is: " << sizeof(a) << endl; // 4 bytes

    char b = 'b';
    cout << "Size of b is: " << sizeof(b) << endl;  // 1 byte

    float f = 1.2;
    cout << "Size of f is: " << sizeof(f) << endl; // 4 bytes

    double d = 1.234;
    cout << "Size of d is: " << sizeof(d) << endl;  // 8 bytes

    int c = 'c';
    cout << "ascii code of a is: " << c << endl;

    int n = -5;
    cout << "n: " << n << endl;

    bool bo = true;
    cout << "size of bo is: " << bo << endl;  // 1 bytes

    unsigned int u = -2;
    unsigned int g = -3;
    cout << "u: " << u << endl;
    cout << "g: " << g << endl;

    */

    // cout << "int ranges between: " << numeric_limits<int>:: min() << " to " << numeric_limits<int>:: max() << endl;
    // cout << "float ranges between: " << numeric_limits<float>:: min() << " to " << numeric_limits<float>:: max() << endl;
    // cout << "double ranges between: " << numeric_limits<double>:: min() << " to " << numeric_limits<double>:: max() << endl;

    // operators
    // arithmetic operators +,-,*,/
    /* int a = 2/5;
    cout << "a: " << a << endl;

    float b = 2.0/5;
    cout << "b: " << b << endl;
    
    cout << "size if a: " << sizeof(a) << endl; // int
    cout << "size if b: " << sizeof(b) << endl; // float

    int add = 2 + 3;
    cout << "add: " << add << endl;
    cout << "add: " << add << endl;
    cout << "add: " << add + 3 << " Size: " << sizeof(add) << endl;
    
    int sub = 4 - 3;
    cout << "sub: " << sub << " Size: " << sizeof(sub) << endl;

    float mult = 2 * 3;
    cout << "mult: " << mult << " Size: " << sizeof(mult) << endl;

    int div = 8 / 2;
    cout << "div: " << div + 3 << " Size: " << sizeof(div) << endl;
    */
    
    

    // float/int = float
    // double/int = double

    // relational operators
    int a = 5;
    int b = 10;

    bool isEqual = a == b;
    cout << "isEqual: " << isEqual << endl;
    // == equal to  1: true, 0: false
    cout << (a == b) << endl;  // equal to
    cout << (a != b) << endl;  // not equal to
    cout << (a > b) << endl;   // greater that
    cout << (a < b) << endl;    // less than
    cout << (a >= b) << endl;   // greater than equal to
    cout << (a <= b) << endl;   // less than equal to

    // logical operators ->  to run multiple conditions
    //  &&: -> and, || -> or, ! -> negation

    bool check = (a==5) && (a > 3); // true as both conditions satisfies
    cout << check << endl; // true

    bool valid = (a == 5) || (a > 3);  // true as one condition satisfies
    // bool valid = (a != 5) || (a < 3);  // false as one condition satisfies
    cout << valid << endl;  // true

    cout << !a << endl;  // false as 5 is positive integer and its a true value


}