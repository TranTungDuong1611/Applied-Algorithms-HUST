# Description
Given a sequence of positive integers a
1
, a
2
, . . ., a
n
. Perform a sequence of actions of following types:
update  i  v : assign a
i
 = v
get-max  i  j : return the maximum value of the subsequence a
i
, a
i
+1
, . . ., aj

## Input
Line 1: contains a positive integer n (1 <= n <= 100000)

Line 2: contains a
1
, a
2
, . . ., a
n
. (1 <= a
i
 <= 10000)

Line 3: contains a positive integer m (1 <= m <= 100000) which is the number of actions
Line i + 3 (i = 1, 2, . . ., m): contains an action described above
Output
Write in each line the result of the corresponding action of type get-max
## Example 1
    Input
    10
    1 10 9 7 1 4 2 4 8 10 
    5
    get-max 5 8
    get-max 5 9
    get-max 3 8
    update 9 20
    get-max 4 10

    Ouput
    4
    8
    9
    20

# Example 2
    Input
    100
    59 65 28 99 43 7 49 56 63 94 83 94 92 92 95 7 71 30 85 91 79 73 51 73 27 38 22 42 10 70 30 6 35 61 22 83 55 21 100 17 49 61 42 63 24 58 63 88 87 66 20 14 57 63 45 65 78 94 22 3 62 33 45 38 9 2 27 32 94 29 43 95 87 100 30 79 54 68 36 79 81 83 49 93 51 64 43 51 14 42 51 55 71 37 66 63 88 93 54 96 
    100
    update 56 158
    get-max 10 74
    get-max 16 93
    get-max 66 94
    update 30 188
    update 92 136
    get-max 21 97
    get-max 21 64
    update 50 84
    get-max 58 62
    get-max 41 54
    update 44 138
    update 33 111
    update 79 80
    get-max 14 20
    update 99 97
    get-max 33 42
    get-max 29 73
    get-max 6 36
    update 52 93
    get-max 65 73
    update 3 24
    update 64 147
    update 28 8
    get-max 52 53
    get-max 30 69
    update 74 75
    get-max 49 51
    update 73 9
    update 28 46
    get-max 7 28
    update 12 24
    get-max 31 38
    get-max 2 34
    get-max 21 37
    get-max 31 51
    get-max 54 86
    update 9 4
    update 66 45
    get-max 20 90
    update 77 125
    update 76 159
    update 46 89
    get-max 8 39
    update 8 108
    get-max 21 64
    get-max 19 68
    get-max 16 24
    get-max 3 52
    get-max 39 84
    get-max 15 53
    update 49 150
    get-max 29 84
    get-max 23 83
    update 86 160
    get-max 7 26
    get-max 72 78
    get-max 20 27
    update 17 39
    update 39 172
    get-max 48 85
    update 7 133
    update 22 198
    get-max 7 40
    update 96 179
    update 63 147
    update 82 185
    update 6 1
    update 14 148
    update 54 117
    get-max 12 75
    get-max 89 91
    update 91 143
    update 89 45
    update 98 171
    update 86 34
    get-max 51 97
    get-max 22 46
    get-max 1 43
    update 77 165
    get-max 65 76
    update 48 182
    get-max 84 97
    update 76 168
    update 19 185
    update 82 97
    update 32 193
    get-max 11 40
    update 75 179
    get-max 13 51
    update 7 110
    update 2 64
    get-max 9 28
    get-max 73 95
    update 90 187
    get-max 35 97
    get-max 3 65
    update 80 27
    update 43 165
    get-max 27 61

    Output
    158
    158
    100
    188
    188
    94
    88
    95
    111
    188
    188
    95
    93
    188
    87
    95
    111
    188
    188
    138
    158
    188
    188
    188
    188
    91
    188
    159
    188
    188
    188
    108
    159
    91
    159
    198
    198
    51
    185
    198
    198
    159
    179
    198
    198
    198
    179
    187
    198
    193
