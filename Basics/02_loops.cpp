#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    // for (int i = 1; i <= n; i++){

    //     // to get sum of all numbers
    //     // sum = sum + i

    //     // to get sum of all even numbers | for odd user !=
    //     if (i % 2 == 0){
    //         sum = sum + i;
    //     }

    // }
    // cout << "Sum: " << sum << endl;

    // check prime or not
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;
    // bool isPrime = true;
    // for (int i = 2; i < number; i++){
    //     if(number%i == 0) {
    //         isPrime = false;
    //         break;
    //     } else {
    //         continue;
    //     }
    // }
    // if (isPrime){
    //     cout << number  << " is a prime number!" << endl;
    // } else {
    //     cout << number  << " is not a prime number." << endl;
    // }

    // there are other 2 loops in cpp while and do while
    // sum of n numbers using while
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "sum: " << sum;
}

// to accept space, tab and /n as input you can use cin.get()