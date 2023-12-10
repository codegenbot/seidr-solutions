Snow Day
========

Description: Given an integer representing a number of hours and three floats representing how much snow is on the ground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process..

Input Format: A single line with 4 space-separated values:

1. An integer representing the number of hours.
2. A float representing the amount of snow on the ground at the beginning.
3. A float representing the rate of snow fall per hour.
4. A float representing the proportion of snow melting per hour.

Output Format: The amount of snow on the ground after the given number of hours, rounded to 9 decimal places.

Sample Input 1:
```
2 30 5 0.5
```
Sample Output 1:
```
34.875000000
```
Explanation:
The amount of snow on the ground is 30 kg at the beginning. In the first hour, 5 kg of snow falls, and 2.5 kg melts (50% of the new snow). So, the total amount of snow after one hour is 30 + 5 - 2.5 = 34.875 kg.
In the second hour, 5 kg of snow falls again, but this time only 1.67 kg melts (33.33% of the new snow). So, the total amount of snow after two hours is 34.875 + 5 - 1.67 = 39.20833333 kg.

Constraints:
All inputs are integers or floats in the range [-10^9, 10^9].
The proportion of snow melting per hour is always between 0 and 1.

Sample Input 2:
```
4 50 8 0.3
```
Sample Output 2:
```
76.600000000
```