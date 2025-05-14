# Why Binary Exponentiation?
 binary exponentiation is used to optimise exponent calculations. 
 If we had to calculate 2^8, we'll have to multiply 2 eight times.

 But we can optimise this calculation, how?... using binary exponentiation algo.
# Working of the algorithm
 we simply square the base and divide the power by 2 and we do it until power/exponent is 0.
 To resolve the issue we face in odd exponents we initialise a variable res and store the odd power of base in that variable (work out an example to understand this , try calculating 2^5).