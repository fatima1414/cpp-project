// 1 Swaping of two Number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int temp;

//     cout << "Before swapping: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "After swapping: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
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

// // 3 find Rupees and Paisa from any rupees of 12.50
//(Input: 12.50 Output: 12 Rupees 50 Paisa)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int totalPaisa, rupees, paisa;
//     cout << "Enter Total Paisa : ";
//     cin >> totalPaisa;
//     rupees = totalPaisa / 100;
//     paisa = totalPaisa % 100;
//     cout << "Total Paisa = " << totalPaisa << endl;
//     cout << "Converted Paisa in Rs = " << rupees << "." << paisa << endl;
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

// 5 Print sum of first and last digit of given number
// #include<iostream>

// using namespace std;
// int main()
// {
//    int num, temp=0, last, rem, sum=0;
//    cout<<"Enter a Number: ";
//    cin>>num;
//    while(num!=0)
//    {
//       if(temp==0)
//       {
//          last = num%10;
//          temp++;
//       }
//       rem = num%10;
//       num = num/10;
//    }
//    sum = rem + last;
//    cout<<"\nSum of First ("<<rem<<") and Last ("<<last<<") Digit = "<<sum;
//    cout<<endl;
//    return 0;
// }

// 6 to print sum of middle of digits of given number
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     string numStr = to_string(num);
//     int numLength = numStr.length();

//     if (numLength % 2 == 0) {
//         // Even number of digits
//         int mid1 = numStr[numLength / 2 - 1] - '0';
//         int mid2 = numStr[numLength / 2] - '0';
//         cout << "Sum of middle digits: " << mid1 + mid2 << endl;
//     } else {
//         // Odd number of digits
//         int mid = numStr[numLength / 2] - '0';
//         cout << "Middle digit: " << mid << endl;
//     }

//     return 0;
// }

// 7 Reverse a Number
// #include <iostream>
// using namespace std;

// int main() {

//   int n, reversed_number = 0, remainder;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

//   return 0;
// }

// 8 Number is Palindrome or Not
// #include <iostream>
// using namespace std;

// int main()
// {
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev and n > 0)  // Negative numbers are not palindromic
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";

//     return 0;
// }

// 9 Armstrong Number
// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, remainder, result = 0;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//     originalNum = num;

//     while (originalNum != 0) {
//         // remainder contains the last digit
//         remainder = originalNum % 10;
        
//         result += remainder * remainder * remainder;
        
//         // removing last digit from the original number
//         originalNum /= 10;
//     }

//     if (result == num)
//         cout << num << " is an Armstrong number.";
//     else
//         cout << num << " is not an Armstrong number.";

//     return 0;
// }


// 10  Magic number
// #include <iostream>
// using namespace std;
// int isMagicNumber(int n) {
//    int digit_sum = 0;
//    while (n > 0 || digit_sum > 9) {
//       if (n == 0) {
//          n = digit_sum;
//          digit_sum = 0;
//       }
//       digit_sum += n % 10;
//       n /= 10;
//    }
//    return (digit_sum == 1);
// }
// int main() {
//    int number = 50311;
//    if(isMagicNumber(number)){
//       cout << number << " is magic number";
//    } else {
//       cout << number << " is not magic number";
//    }
// }

// 11 Number is Prime or Not
// #include <iostream>
// using namespace std;

// int main() {

//   int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   // loop to check if n is prime
//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   if (is_prime)
//     cout << n << " is a prime number";
//   else
//     cout << n << " is not a prime number";+

//   return 0;
// }

// 12 find the factorial of a number
// #include <iostream>
// using namespace std;

// int main() {
//   int number, factorial=1 ;
//   cin >> number;
//   for (int i = number; i >= 1 ; i--)
//   {
//     factorial = factorial * i;
//   }
//   cout << "The factorial of the given number is: " << factorial << endl;
//   return 0;
// }

// 13 fibonacci series upto nth term
// #include <iostream>
// using namespace std;


// void fibonacci(int n) {
//     int a = 0, b = 1, nextTerm;

//     cout << "Fibonacci Series up to " << n << " terms: ";

//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         nextTerm = a + b;  // Compute next term
//         a = b;             // Move first term to second
//         b = nextTerm;      // Move second term to next
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Please enter a positive number." << endl;
//     } else {
//         fibonacci(n);
//     }

//     return 0;
// }

// 14  write a table 
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
    
//     for (int i = 1; i <= 10; i++) {
//         cout << num << " * " << i << " = " << num * i << "  ";
//     }
//     cout << endl;
    
//     return 0;
// }