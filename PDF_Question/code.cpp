// 1 Swaping of two Number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int temp;

//     cout << "Before swapping: " <<endl;
//     cout << "a = " << a <<endl;
//     cout << "b = " << b <<endl;

//     temp = a;
//     a = b;
//     b = temp;

//    ;
//     cout << "After swapping: "<<endl;
//     cout << "a = " << a <<endl;
//     cout << "b = " << b <<endl;

//     return 0;
// }

// 2 Swap Two Numbers Without Using Third Variable
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     int b = 10;

//     cout << "Before swap: a = " << a << ", b = " << b << endl;

//     swap(a, b); // Swaps the values of a and b
//     cout << "After swap: a = " << a << ", b = " << b << endl;

//     return 0;
// }


// // 3
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int totalPaisa,rupees,paisa;
// 	cout<<"Enter Total Paisa : ";
// 	cin>>totalPaisa;
// 	rupees = totalPaisa / 100;
// 	paisa = totalPaisa % 100;
// 	cout<<"Total Paisa = "<<totalPaisa<<endl;
// 	cout<<"Converted Paisa in Rs = "<<rupees<<"."<<paisa<<endl;
//     return 0;
// }

// 4 Sum of Digits of a Number
// Iterative C++ Code to find sum of digits
// #include <iostream>
// using namespace std;

// int sumOfDigits(int n) {
//     int sum = 0;
//     while (n != 0) {

//         // Extract the last digit
//         int last = n % 10;

//         // Add last digit to sum
//         sum += last;

//         // Remove the last digit
//         n /= 10;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cout<<"enter the number "<<endl;
//     cin>>n;
//     cout << sumOfDigits(n);
//     return 0;
// }
