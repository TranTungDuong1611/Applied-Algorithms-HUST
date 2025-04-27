# Description
Given a sequence of n integers a=a
1
, . . ., a
n
. A subsequence of a consists of contiguous elements of a (for example, a
i
, a
i+1
, . . . ,a
j
). The weight of a subsequence is defined to be the sum of its elements. A subsequence is called even-subsequnce if its weight is even. Find the even-subsequence of a having largest weight.
## Input
Line 1: contains a positive integer n (1 <= n <= 10
6
)

Line 2: contains a
1
, . . ., a
n
 (-10
6
 <= a
i
 <= 10
6
)
## Output
The weight of the largest even-subsequence found, or write NOT_FOUND if no solution found.
## Example 1
    Input
    4
    1  2  -3  4
    Output
    4

## Example 2
    Input
    100
    9 -17 16 50 -19 26 -28 -8 -12 -14 45 5 -31 23 -11 -41 -45 8 23 14 -41 46 48 -3 -42 -32 29 34 32 -45 3 24 -21 12 -19 38 -17 -49 15 -44 47 39 28 17 -23 -14 9 39 -3 -18 3 6 -12 -7 13 -9 27 9 21 -28 34 15 -40 8 -38 44 10 8 -14 2 4 45 -40 21 -20 0 44 49 -43 2 21 27 -34 -4 -6 10 -16 -26 19 42 6 11 24 27 13 12 32 -32 21 9 

    Output
    406
