# Description
Write a program to compute the number of sudoku solutions (fill the zero elements of a given partial sudoku table)

Fill numbers from 1, 2, 3, .., 9 to 9 x 9 table so that:

- Numbers of each row are distinct
- Numbers of each column are distinct
- Numbers on each sub-square 3 x 3 are distinct
## Input
Each line i (i = 1, 2, ..., 9) contains elements of the i
th
 row of the Sudoku table: elements are numbers from 0 to 9 (value 0 means the empty cell of the table)
## Output
Write the number of solutions found

## Example
    Input
    0 0 3 4 0 0 0 8 9
    0 0 6 7 8 9 0 2 3
    0 8 0 0 2 3 4 5 6
    0 0 4 0 6 5 0 9 7
    0 6 0 0 9 0 0 1 4
    0 0 7 2 0 4 3 6 5
    0 3 0 6 0 2 0 7 8
    0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0
    Output
    64

    Input
    1 0 3 4 0 0 0 8 9
    4 0 6 7 8 9 0 2 3
    7 8 0 0 2 3 4 5 6
    2 0 4 0 6 5 0 9 7
    3 6 0 0 9 0 0 1 4
    8 0 7 0 0 4 3 0 0
    5 3 0 6 0 2 0 7 8
    0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0
    Output
    8