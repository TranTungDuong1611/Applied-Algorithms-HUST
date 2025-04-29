# Description

Cho dãy a = a1, a2, ..., an. Một dãy con của dãy a được định nghĩa là 1 dãy gồm các phần tử liên tiếp đứng cạnh nhau của a (ai, ai+1,..., aj). Hãy tìm dãy con tăng dần có số phần tử lớn nhất.

## Input
Dòng 1: số nguyên dương n (2 <= n <= 100000)

Dòng 2: dãy a1, a2, . . ., an (1 <= ai <= 1000000)

## Output
Ghi ra số phần tử của dãy con tìm được.

### Example
    Input 
    10
    10 2 3 4 5 9 8 5 8 10 

    Output 
    5
    ------
    Input
    20
    1 2 16 17 16 20 8 9 17 6 8 3 17 4 19 20 16 12 5 11 

    Output
    4
    -----
    Input
    100
    1 2 21 4 72 14 3 19 17 33 46 13 92 9 26 60 36 70 85 47 84 42 19 84 16 47 19 26 96 85 19 58 66 20 45 35 6 29 15 57 56 48 64 67 69 82 60 59 17 20 74 58 100 40 55 63 83 18 86 21 57 74 90 97 87 80 48 72 72 60 13 65 33 83 14 94 84 93 38 20 69 96 92 12 53 5 2 35 67 94 37 57 33 8 94 90 12 98 64 1 

    Output
    5