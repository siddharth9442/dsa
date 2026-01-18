#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // int row = 1;

    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << i;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << j;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << n - j + 1;
    //         j++;3
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // int num = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << num << " ";
    //         num++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    /*
        the same pattern  can be printed using formula (n * i) + j
        here, initially keep i = 0, and j = 1
    */

    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= row) {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // int count = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= row) {
    //         cout << count;
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     int count = row;
    //     while(col <= row) {
    //         // cout << col + row - 1;
    //         cout << count;
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
   
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     // int count = row;
    //     while(col <= row) {
    //         // cout << count;
    //         // count--;
    //         cout << row - col + 1;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // char count = 65;    // A
    // cout << "count: " << count << endl;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         // char ch =  'A' + row - 1;
    //         cout << count;
    //         // cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     count++;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         char ch = 'A' + col - 1;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // char ch = 65;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         cout << ch;
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    int row = 1;
    while(row <= n) {
        int col = 1;
        while(col <= n) {
            char ch = 'A' + col + row - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    
    

    return 0;
}