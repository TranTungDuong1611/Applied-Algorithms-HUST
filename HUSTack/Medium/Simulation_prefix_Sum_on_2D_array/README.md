# Description
Given a table of n rows (1, 2, ..., n) and m columns (1, 2, ..., m). Each cell (i,j) has a non-negative integer a(i,j).
Perform a sequence of queries (r1, c1, r2, c2) which returns the sum of elements of the sub-table from row r1 to row r2 and from column c1 to column c2 (1 <= r1 <= r2 <= n, 1 <= c1 <= c2 <= m).

## Input
Line 1: contains n and m (1 <= n, m <= 1000)

Line i+1(i = 1, 2, ..., n): contains the elements on row i of the table

Line n+2: contains a positive integer Q (1 <= Q <= 100000) which is the number of queries 
Line q+n+2 (q = 1, 2, ..., Q): contains r1, c1, r2, c2 (1 <= r1 <= r2 <= n, 1 <= c1 <= c2 <= m)

## Output
Write in each line the result of the corresponding query read from the input

## Example 1
    Input
    3 4
    1 1 0 1 
    1 1 1 0 
    0 1 0 0 
    3
    2 3 3 4
    1 3 3 4
    2 2 3 4

    Output 
    1
    2
    3

## Example 2
    Input
    10 10
    0 0 1 0 0 0 1 0 1 0 
    1 1 0 0 1 0 0 1 1 1 
    0 1 1 1 0 1 0 0 0 1 
    0 1 1 1 1 0 0 0 0 0 
    0 1 1 1 1 1 0 0 0 0 
    1 0 1 0 1 0 1 0 0 1 
    1 1 0 0 1 1 0 1 0 1 
    0 1 1 1 0 0 0 1 0 1 
    0 1 0 1 0 0 0 1 1 0 
    0 0 1 0 1 1 1 1 1 0 
    10
    2 8 5 10
    1 9 8 10
    2 4 10 6
    3 5 4 10
    8 5 9 8
    9 5 10 7
    4 8 10 10
    3 9 8 10
    8 8 9 9
    3 1 10 9

    Output
    4
    7
    15
    3
    2
    3
    9
    4
    3
    36

