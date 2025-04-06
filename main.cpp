#include <iostream>
using namespace std;
int main()
{
    // prob1a
    //  int n, sum = 0, i=1;
    //  cout << "Enter a positive  integer: ";
    //
    //  cin >> n;
    //  while (i <= n)
    //  {
    //   sum += i;
    //   i++;
    //  }
    //  cout << "Sum of natural numbers up to " << n<< ": " << sum << endl;
    // }
    // b
    // int n, sum = 0, i=1;
    // cout << "Enter a positive  integer: ";
    //
    // cin >> n;
    //  for(int i=1; i<=100; i++)
    // {
    //  sum += i;
    //
    // }
    // cout << "Sum of natural numbers up to " << n<< ": " << sum << endl;
    // }


    // bool isPrime(int num);

    //  int n, count = 0, num = 2;
    //
    //  cout << "Enter how many prime numbers to display: ";
    //  cin >> n;
    //
    //  cout << "First " << n << " prime numbers: ";
    //  while (count < n) {
    //   if (isPrime(num)) {
    //    cout << num << " ";
    //    count++;
    //   }
    //   num++;
    //  }
    //
    //  cout << endl;
    //  return 0;
    // }
    //
    // bool isPrime(int num) {
    //  if (num < 2) return false;
    //  for (int i = 2; i * i <= num; i++) {
    //   if (num % i == 0) return false;
    //  }
    //  return true;
    // }


    // bool isPrime(int num);
    //
    //
    //  int  count = 0, num = 2;
    //
    //
    //
    //
    //  cout << "First " << 10 << " prime numbers: ";
    //  for (int i = 0; i <= 10; ) {
    //   if (isPrime(num)) {
    //    cout << num << " ";
    //    i++;
    //   }
    //   num++;
    //  }
    //
    //  cout << endl;
    //  return 0;
    // }
    //
    // bool isPrime(int num) {
    //  if (num < 2) return false;
    //  for (int i = 2; i * i <= num; i++) {
    //   if (num % i == 0) return false;
    //  }
    //  return true;
    // }
    // prob3
    //  int n;
    //  cout << "Enter a positive integer: ";
    //  cin>> n;
    //  if (n <= 0)
    //  {
    //   cout << "Please enter a positive integer less than zero";
    //  } cout << "Collatz sequence: ";
    //  while (n !=1) {
    //   cout << n <<" ";
    //   if ( n % 2 == 0)
    //   {
    //    n /=2;
    //   } else
    //   {
    //    n = 3*n +1;
    //   }
    //  }
    //  cout << "1" << endl;
    // }
    //  int   n, count = 0;
    //
    //  cout << "Enter a positive integer: ";
    //  cin >> n;
    //  if ( n <= 0)
    //  {
    //   cout << "Please enter a positive integer more than zero";
    //  }
    //  while ( n !=0){
    //   n  /=10;
    //  count++;
    // }
    // cout << "Number of digits: "<< count  << endl;
    // }
    //  int   n, count = 0;
    //
    //  cout << "Enter a positive integer: ";
    //  cin >> n;
    //  if ( n <= 0)
    //  {
    //   cout << "Please enter a positive integer more than zero";
    //  }
    // cout << "Digits from right to left: ";
    //  while ( n !=0){
    //   int digit = n%10;
    //   cout << digit << " ";
    //   n  /=10;
    //
    // }
    // cout <<  endl;
    // }
//     int a,b;
//     cout << "Please enter two integers: ";
//     cin >> a >> b;
//     if (   a<=0 || b<=0)
//     {
//         cout << " Please enter numbers more than zero:: ";
//     }
//     while (b !=0)
//     {
//         int r = a%b;
//         a = b;
//         b=r;
//     }
//     cout << " GCD : " << a << endl;
// }

// prob 7

// #include <iostream>
// using namespace std;
// int main() {
//     int total_sum = 0;
//     int count = 0;
//     int number;
//
//     while (total_sum <= 100) {
//         cout << "Enter a number: ";
//         cin >> number;
//
//         total_sum += number;
//         count++;
//
//         if (total_sum >= 100) {
//             break;
//         }
//     }
//
//     cout << "Sum exceeded 100! Total sum: " << total_sum << count << endl;
//     cout << "Total numbers entered: " << count << endl;
//     return 0;
// }

//prob8
// #include <iostream>
// using namespace std;
// int main() {
//     double balance = 500;
//     double withdrawal;
//     cout << "Your balance: $" << balance << endl;
//
//     while (balance > 0) {
//
//         cout << "Enter withdrawal amount (or 0 to cancel): ";
//         cin >> withdrawal;
//
//         if (withdrawal == 0) {
//             break;
//         }
//
//         if (withdrawal > balance) {
//             cout << "Insufficient funds!" << endl;
//         } else {
//             balance -= withdrawal;
//             cout << "Remaining balance: $" << balance << endl;
//         }
//         if (balance == 0) {
//             cout << "Remaining balance: $0" << endl;
//             break;
//         }
//     }
//     return 0;
// }
