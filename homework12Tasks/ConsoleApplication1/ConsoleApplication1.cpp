#include <iostream>
using namespace std;

int main() {
    // Task 1: Program to compute the sum of integers from a to 500 (a is input by the user).
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }
    cout << "Sum of integers from " << a << " to 500: " << sum << endl;

    // Task 2: Program to compute x raised to the power y.
    int x, y;
    cout << "Enter two integers x and y: ";
    cin >> x >> y;
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    cout << x << " raised to the power " << y << " is: " << result << endl;

    // Task 3: Finding the average of all integers from 1 to 1000.
    int sum3 = 0;
    for (int i = 1; i <= 1000; ++i) {
        sum3 += i;
    }
    double average = static_cast<double>(sum3) / 1000;
    cout << "Average of integers from 1 to 1000: " << average << endl;

    // Task 4: Finding the product of all integers from a to 20 (a is input by the user: 1 <= a <= 20).
    int a4;
    cout << "Enter the value of a (1 <= a <= 20): ";
    cin >> a4;
    int product4 = 1;
    for (int i = a4; i <= 20; ++i) {
        product4 *= i;
    }
    cout << "Product of integers from " << a4 << " to 20: " << product4 << endl;

    // Task 5: Program to print the multiplication table for k.
    int k5;
    cout << "Enter the value of k: ";
    cin >> k5;
    for (int i = 2; i <= 10; ++i) {
        cout << k5 << " x " << i << " = " << k5 * i << endl;
    }

    // Task 6: Count the number of integers in the range from 100 to 999 that have two identical digits.
    int count6 = 0;
    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;
        if (hundreds == tens || tens == units || units == hundreds) {
            ++count6;
        }
    }
    cout << "Number of integers with two identical digits: " << count6 << endl;

    // Task 7: Count the number of integers in the range from 100 to 999 that have all distinct digits.
    int count7 = 0;
    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;
        if (hundreds != tens && tens != units && units != hundreds) {
            ++count7;
        }
    }
    cout << "Number of integers with all distinct digits: " << count7 << endl;

    // Task 8: Remove all occurrences of digits 3 and 6 from a given integer.
    int number8;
    cout << "Enter an integer: ";
    cin >> number8;
    int result8 = 0;
    int multiplier = 1;
    while (number8 != 0) {
        int digit = number8 % 10;
        number8 /= 10;
        if (digit != 3 && digit != 6) {
            result8 += digit * multiplier;
            multiplier *= 10;
        }
    }
    cout << "Result after removing 3s and 6s: " << result8 << endl;

    // Task 9: Print all integers B for which A is divisible by B*B but not by B*B*B.
    int A9;
    cout << "Enter an integer A: ";
    cin >> A9;
    cout << "Integers B for which A is divisible by B*B but not by B*B*B: ";
    for (int B = 1; B * B <= A9; ++B) {
        if (A9 % (B * B) == 0 && A9 % (B * B * B) != 0) {
            cout << B << " ";
        }
    }
    cout << endl;

    // Task 10: Determine if the cube of the sum of digits of a number equals the square of the number.
    int num10;
    cout << "Enter an integer: ";
    cin >> num10;
    int sum10 = 0;
    int temp10 = num10;
    while (temp10 != 0) {
        sum10 += temp10 % 10;
        temp10 /= 10;
    }
    int cubeSum = sum10 * sum10 * sum10;
    int squareNum = num10 * num10;
    if (cubeSum == squareNum) {
        cout << "Cube of sum of digits equals square of the number." << endl;
    }
    else {
        cout << "Cube of sum of digits does not equal square of the number." << endl;
    }

    // Task 11: Print all integers by which a given number is divisible without remainder.
    int num11;
    cout << "Enter an integer: ";
    cin >> num11;
    cout << "Integers by which " << num11 << " is divisible without remainder: ";
    for (int i = 1; i <= num11; ++i) {
        if (num11 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Task 12: Print all integers that both of two given numbers are divisible by without remainder.
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Integers by which both " << num1 << " and " << num2 << " are divisible without remainder: ";
    int smaller = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= smaller; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
