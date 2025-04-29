# Description

Cho một dãy số nguyên A gồm n số a1, a2, …, an. Một dãy con của dãy A là dãy thu được bằng cách xoá không hoặc một số phần tử của dãy A. Hãy tìm dãy con dài nhất có các phần tử tăng ngặt và có tính “chẵn lẻ” xen kẽ nhau, nghĩa là tổng hai phần tử liên tiếp nhau bất kỳ luôn không chia hết cho 2.

## Dữ liệu vào:
Dòng thứ nhất chứa một số nguyên T là số bộ testcase (1 <= T <= 10).
Mỗi nhóm dòng trong T nhóm dòng tiếp theo có cấu trúc như sau:

- Dòng thứ nhất chứa số nguyên n là số phần tử của dãy A (1 <= n <= 10^5)

- Dòng thứ hai chứa n số nguyên ai cách nhau bởi dấu cách (|ai| <= 10^9)

## Kết quả:
In ra T dòng, mỗi dòng chứa một số nguyên duy nhất là độ dài của dãy con dài nhất thoả mãn yêu cầu bài toán ứng với từng testcase.

## Ví dụ:
    Dữ liệu vào
    2
    10
    -22 -7 -5 17 41 -9 -44 14 107 -249
    15
    19 -17 5 39 -19 -15 -32 7 6 -155 69 104 -27 39 155
    Kết quả
    4
    5

    Dữ liệu vào
    3
    191
    -23 -11 35 -11 -12 36 -8 24 -31 32 -5 -34 -14 20 -43 37 -33 29 -26 -18 27 12 -40 -31 0 27 -9 -14 -30 49 -38 9 6 40 2 -2 -36 -6 -32 8 -8 -8 53 -31 46 -19 -32 32 -23 -1 38 -9 9 43 -8 -43 47 13 -44 -12 52 -50 -8 -49 -44 -48 -62 48 -22 52 57 26 -54 -35 30 4 27 11 11 33 -49 70 30 -65 -20 4 -13 19 -6 -39 52 22 10 32 -70 4 -68 -31 61 -2 -5 25 81 -48 45 -5 -39 19 -59 -68 -18 -31 45 11 -42 70 -13 43 33 -48 -39 -76 -100 80 78 -43 -77 -2 -86 -55 -38 9 -90 -51 93 -85 -70 118 -70 10 -91 -100 -54 26 101 -124 84 -92 89 62 4 73 -25 165 -18 -5 88 137 -108 133 64 -121 28 -80 -156 75 -24 -134 77 -90 -98 23 11 -240 90 228 -250 144 -243 -94 -199 36 181 -206 -11 26 -166 2 -142 -236 204 
    29
    -34 -5 8 -3 -26 -7 -35 0 -14 -10 -24 -24 40 0 -44 -31 54 -54 53 -1 88 119 5 91 -48 -102 -47 159 -183 
    35
    -16 19 36 44 16 17 -40 -47 -3 12 55 -17 -1 62 62 -50 47 -25 -5 -79 2 -3 -11 -54 -10 -14 -13 88 -90 -129 95 -84 71 -37 -122 
    Kết quả
    18
    6
    6


## Giải thích:
Với testcase 1, dãy con dài nhất có độ dài là 4, chẳng hạn dãy -22 -9 14 107. 

Với testcase thứ 2, dãy con dài nhất có độ dài bằng 5 có thể là -15 6 69 104 155.