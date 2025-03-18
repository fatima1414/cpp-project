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
// 28 → 2 + 8 = 10  10 → 1 + 0 = 1 ✅ (Magic Number)
// 777 → 7 + 7 + 7 = 21  21 → 2 + 1 = 3 ❌ (Not a Magic Number)
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

// int main()
// {
//     int num;
//     cout << "Enter number:";
//     cin >> num;

//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         cout << "prime num" << endl;
//     }
//     else
//     {
//         cout << "not prime!" << endl;
//     }
// }


// 12 find the factorial of a number
// #include <iostream>
// using namespace std;

// int main() {
//   int number, factorial=1 ;
//   cout<<"enter the number :";
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

// void fibonacci(int n)
// {
//     int a = 0, b = 1, nextTerm;

//     cout << "Fibonacci Series up to " << n << " terms: ";

//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " ";
//         nextTerm = a + b; // Compute next term
//         a = b;            // Move first term to second
//         b = nextTerm;     // Move second term to next
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Please enter a positive number." << endl;
//     }
//     else
//     {
//         fibonacci(n);
//     }

//     return 0;
// }


// 14  write a table
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (int i = 1; i <= 10; i++)
//     {
//         cout << num << " * " << i << " = " << num * i << "  ";
//     }
//     cout << endl;

//     return 0;
// }



//  16. WAP to find sum of all array values and find Average of array

// The sum of the array values (10 + 20 + 30 + 40 + 50) is 150.
// The average of the array values (150 ÷ 5) is 30.

// #include <iostream>
// using namespace std;

// int main() {
//     // Define the array and its size
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     // Initialize sum variable
//     int sum = 0;

//     // Calculate the sum of the array elements
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }

//     // Calculate the average
//     double average = static_cast<double>(sum) / size;

//     // Output the results
//     cout << "Sum of all array values: " << sum << endl;
//     cout << "Average of array values: " << average << endl;

//     return 0;
// }


// 17. WAP to find maximum and minimum values in Array

// #include <iostream>
// using namespace std;

// int main() {
//     // Define the array
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     // Initialize variables for max and min
//     int max_val = arr[0];
//     int min_val = arr[0];

//     // Loop through the array to find max and min values
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max_val) {
//             max_val = arr[i];  // Update max value if current element is larger
//         }
//         if (arr[i] < min_val) {
//             min_val = arr[i];  // Update min value if current element is smaller
//         }
//     }

//     // Output the results
//     cout << "Maximum value in the array: " << max_val << endl;
//     cout << "Minimum value in the array: " << min_val << endl;

//     return 0;
// }


// 18.  WAP to make Reverse array of given array

// #include <iostream>
// using namespace std;

// int main() {
//     // Define the array
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Print the original array
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Reverse the array
//     for (int i = 0; i < size / 2; i++) {
//         // Swap the elements
//         int temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }

//     // Print the reversed array
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 19. WAP to check Array is Palindrome or not

// Enter the size of the array: 5
// Enter the elements of the array: 10 20 30 20 10
// The array is a palindrome.

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
    
//     // Ask user for the size of the array
//     cout << "Enter the size of the array: ";
//     cin >> size;
    
//     // Declare an array based on the size
//     int arr[size];
    
//     // Input array elements from the user
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
    
//     // Check if the array is a palindrome
//     bool isPalindrome = true;
//     for (int i = 0; i < size / 2; i++) {
//         if (arr[i] != arr[size - 1 - i]) {
//             isPalindrome = false;  // If any pair doesn't match, it's not a palindrome
//             break;
//         }
//     }

//     // Output the result
//     if (isPalindrome) {
//         cout << "The array is a palindrome." << endl;
//     } else {
//         cout << "The array is not a palindrome." << endl;
//     }

//     return 0;
// }


// 20. WAP to sort the array in ascending order and descending order using bubble sort.



// 21. WAP to insert one element on particular position in given array 

// Enter the size of the array: 4
// Enter the elements of the array: 5 10 15 20
// Enter the position to insert the element (0 to 4): 0
// Enter the element to insert: 3

// postion=index as same

// #include <iostream>
// using namespace std;

// int main() {
//     int size, pos, element;

//     // Ask the user for the size of the array
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     // Declare the array with the given size
//     int arr[size + 1];  // +1 to accommodate the new element

//     // Ask the user to input the elements of the array
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Ask the user for the position and element to insert
//     cout << "Enter the position to insert the element (0 to " << size << "): ";
//     cin >> pos;
//     cout << "Enter the element to insert: ";
//     cin >> element;

//     // Shift elements to the right to make space for the new element
//     for (int i = size; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }

//     // Insert the element at the specified position
//     arr[pos] = element;

//     // Output the updated array
//     cout << "Array after insertion: ";
//     for (int i = 0; i <= size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 22. WAP to delete one element in given array using position and Values 

// position,index= 0 1 2 3

// #include <iostream>
// using namespace std;

// int main() {
//     int size = 5;  // Original size of the array
//     int arr[] = {10, 20, 30, 40, 50};  // The array

//     int pos = 2;  // We want to delete the element at position 2

//     // Shift elements to the left to fill the space of the deleted element
//     for (int i = pos; i < size - 1; i++) {
//         arr[i] = arr[i + 1];  // Move each element one position to the left
//     }
//     size--;  // Decrease the size of the array

//     // Print the updated array
//     cout << "Updated array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";  // Print the updated array
//     }
//     cout << endl;

//     return 0;
// }


// value = koy 10 20 30 40 koy pn lai sako
// #include <iostream>
// using namespace std;

// int main() {
//     int size = 5;  // Original size of the array
//     int arr[] = {10, 20, 30, 40, 50};  // The array

//     int value = 30;  // We want to delete the value 30
//     bool found = false;

//     // Search for the value in the array
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == value) {  // If we find the value
//             // Shift elements to the left to remove the value
//             for (int j = i; j < size - 1; j++) {
//                 arr[j] = arr[j + 1];  // Move each element one position to the left
//             }
//             size--;  // Decrease the size of the array
//             found = true;
//             break;  // Exit the loop once the element is deleted
//         }
//     }

//     if (found) {
//         // Print the updated array
//         cout << "Updated array: ";
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";  // Print the updated array
//         }
//         cout << endl;
//     } else {
//         cout << "Value not found in the array!" << endl;  // If the value is not found
//     }

//     return 0;
// }

// 23.  WAP to find unique values in given array

// 1 2 2  3 4 4 5
// its unique values
// 1 3 5 
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// void findUniqueNumbers(int arr[], int n) {
//     unordered_map<int, int> countMap;  // To store the count of each element

//     // Count the frequency of each element in the array
//     for(int i = 0; i < n; i++) {
//         countMap[arr[i]]++;
//     }

//     // Find elements that appear only once and print them
//     cout << "Unique values in the array: ";
//     for(auto& entry : countMap) {
//         if(entry.second == 1) {
//             cout << entry.first << " ";  // If the element appears once, print it
//         }
//     }
//     cout << endl;
// }

// int main() {
//     // Input array and its size
//     int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    
//     // Call the function to find unique numbers
//     findUniqueNumbers(arr, n);
    
//     return 0;
// }