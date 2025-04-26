*Some necessary information of RMQ in [here](https://wiki.vnoi.info/algo/data-structures/rmq)*

# Description
Given a sequence of n integers a
0
,. . .,a
n-1
. We denote rmq(i,j) the minimum element of the sequence a
i
, a
i+1
, . . .,a
j
. Given m pairs (i
1
, j
1
),. . .,(i
m
, j
m
), compute the sum Q = rmq(i
1
,j
1
) + . . . + rmq(i
m
, j
m
)
## Input
Line 1: n (1 <=  n <= 10
6
)

Line 2: a
0
, . . . ,a
n-1
 ( 1  <=  ai <= 10
6
)

line 3: m (1  <= m <= 10
6
)

Line k+3 (k=1, . . ., m): i
k
, j
k 
 (0  <=  i
k
 < j
k
 < n)

## Output
Write the value Q

### Example
    Input
    16
    2 4 6 1 6 8 7 3 3 5 8 9 1 2 6 4
    4
    1 5
    0 9
    1 15
    6 10

    Output
    6