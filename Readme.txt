This console C++ program accepts mathematical expressions, and will calculate its value. 

Parentheses, +, -, *, /, x log y (= log base-x y), n root x (= n'th root of x), sqrt (square root), ** or ^, %, and // are supported. If omitted, default log base is 2, i.e. log x = log base-2 x.

** or ^ represent the operator of power, e.g. 2 ^ 3 = 8, 2 ** 3 = 8.  

"//" represents floor division - division that results into whole number adjusted to the left in the number line

% represents modulation, e.g. 5 % 3 = 2. 

Support for imaginary numbers remain to be added

All syntaxes are non-case-sensitive.

Example:
Input: 
-48*(191.9-16.166)-(-16.156/1.16)
output:
-8421.304413793103

Input: 
-6418.16*Log161/551.16+Sqrt(164.61-16.8)
Output:
-73.20950729770351

Input:
2^3^4
Output:
2.417851639229258e+24 

Input:
0.25 * 5 + 0.25 * 8 + 0.25 * (3 + (0.25 * 5 + 0.25 * 8 + 0.25 * (2 + 0.25 * 5 + 0.25 * 8))) +  0.25 * (2 + (0.25 * 5 + 0.25 * 8 + 0.25 * (3 + 0.25 * 5 + 0.25 * 8)))
Output: 
6.84375