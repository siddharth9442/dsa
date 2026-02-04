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
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         char ch = 'A' + col + row - 2;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= row) {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // char ch = 'A';
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= row) {
    //         cout << ch;
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     char ch = 'A' + row - 1;
    //     while(col <= row) {
    //         // char ch = 'A' + row + col - 2;
    //         cout << ch;
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     char ch = 'A' + n - row;
    //     while(col <= row) {
    //         cout << ch;
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     char ch = 'A' + row - 1;
    //     while(col <= n) {
    //         cout << ch;
    //         ch++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }


    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n-row) {
    //         cout << " ";
    //         col++;
    //     }

    //     while(col <= n) {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // above problem can be solved using single inner loop
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col <= n-row) {
    //             cout << " ";
    //         } else {
    //             cout << "*";
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= (n - row + 1)) {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= row - 1) {
    //         cout << " ";
    //         col++;
    //     }
    //     while(col <= n) {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // above problem can be solved using single inner loop
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col < row) {
    //             cout << " ";
    //         } else {
    //             cout << "*";
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col < row) {
    //         cout << " ";
    //         col++;
    //     }
    //     while(col <= n) {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // same problem can be solved using one inner loop
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col < row) {
    //             cout << " ";
    //         } else {
    //             cout << row;
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n - row) {
    //         cout << " ";
    //         col++;
    //     }
    //     while(col <= n) {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // same problem can be solved using single inner loop
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col <= n - row) {
    //             cout << " ";
    //         } else {
    //             cout << row;
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col < row) {
    //         cout << " ";
    //         col++;
    //     }
    //     while(col <= n) {
    //         cout << col;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // same problem can be solved using single inner loop
    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col < row) {
    //             cout << " ";
    //         } else {
    //             cout << col;
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
     
    // int row = 1;
    // int count = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n - row) {
    //         cout << " ";
    //         col++;
    //     }
    //     while(col <= n) {
    //         cout << count;
    //         col++;
    //         count++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // same problem can be solved using single inner loop
    // int row = 1;
    // int count = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n) {
    //         if(col <= n - row) {
    //             cout << " ";
    //         } else {
    //             cout << count;
    //             count++;
    //         }
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     // space
    //     int space = n - row;
    //     while(space) {
    //         cout << " ";
    //         space--;
    //     }

    //     // first half
    //     int col = 1;
    //     while(col <= row) {
    //         cout << col;
    //         col++;
    //     }

    //     // second half
    //     int start = row - 1;
    //     while(start) {
    //         cout << start;
    //         col++;
    //         start--;
    //     }
        
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while(row <= n) {
    //     int col = 1;
    //     while(col <= n - row) {
    //         cout << " ";
    //         col++;
    //     }
    //     int count = 1;
    //     while(col <= n + row - 1) {
    //         cout << count;
    //         col++;
    //         if(col <= n) count++;
    //         if(col > n) count--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    int row = 1;
    while(row <= n) {
        int col = 1;
        while(col <= n) {
            if(col <= n - row + 1) {
                cout << col;
            } else{
                cout << "*";
            }
            col++;
        }

        int count = n + n;
        int j = n;
        while(col <= count) {
            if(col <= n + row - 1) {
                cout << "*";
            } else {
                cout << j;
            }
            j--;
            col++;
        }
        
        cout << endl;
        row++;
    }
    
    return 0;
}