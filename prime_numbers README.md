Sieve of Eratosthenes (Prime Number Checker)

This program implements the Sieve of Eratosthenes algorithm to check if a given number is prime.
Instead of checking each number one by one, the algorithm efficiently marks all non-prime numbers in advance using a boolean array.

How It Works

A boolean vector isPrime of size n + 1 is created and initialized with true.

isPrime[0] and isPrime[1] are set to false because 0 and 1 are not prime.

Starting from i = 2, the algorithm iterates until i * i <= n.

For every i which is still marked as true, it marks all of its multiples (starting from i × i) as false.

After preprocessing, the function simply returns whether isPrime[n] is true or false.

Time Complexity

O(n log log n), which is much faster than checking divisibility for each number individually.

What the Program Does

In the main function, the program checks if 217 is a prime number and prints the result as 1 (true) or 0 (false).

Example output:
Is 217 a prime? Ans: 0