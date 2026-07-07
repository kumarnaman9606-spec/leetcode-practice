/*
Problem: 2469. Convert the Temperature
Difficulty: Easy

Approach:
- Compute the temperature in Kelvin using:
      Kelvin = Celsius + 273.15
- Compute the temperature in Fahrenheit using:
      Fahrenheit = Celsius * 1.80 + 32.00
- Allocate memory for an array of size 2.
- Store Kelvin at index 0 and Fahrenheit at index 1.
- Set the return size to 2 and return the array.

Time Complexity: O(1)
Space Complexity: O(1)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

double* convertTemperature(double celsius, int* returnSize) {

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    *returnSize = 2;

    double *arr = (double *)malloc(sizeof(double) * 2);

    arr[0] = kelvin;
    arr[1] = fahrenheit;

    return arr;
}
