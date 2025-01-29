
// QUESTION 1

// NEGATIVE NUMBER

// #include <iostream>

// using namespace std;

// int main() {
//     int n, arr[10];

//     cout << "Enter the array size: ";
//     cin >> n;

//     cout << "Enter array elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Negative elements: ";
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// QUESTION 2

// largest element in a 2D array

// #include <iostream>

// using namespace std;

// int main() {
//     int arr[3][3] = {{2, 7, 1}, {3, 5, 4}, {8, 9, 6}};
//     int maxNum = arr[0][0];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (arr[i][j] > maxNum) {
//                 maxNum = arr[i][j];
//             }
//         }
//     }

//     cout << "Largest element: " << maxNum;
//     return 0;
// }

// // QUESTON 3

// transpose  of 2d array

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int n = 3;
//     int arr[n][n] = {{1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}};

//     cout << "Original Matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Transpose of the Matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// SUM OF 2D  ARRAY

// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int arr[2][4] = {{10, 20, 30, 40},
//                      {50, 60, 70, 80}};

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             sum += arr[i][j];
//             cout << "Current sum: " << sum << endl;
//         }
//     }

//     cout << "Total sum: " << sum << endl;
//     return 0;
// }
