<div align="center">

# sum_array_equals_s
</div>

Nhập vào số nguyên dương N và một mảng N số nguyên. <br>
Đếm và in ra số lượng tất cả dãy con liên tiếp trong dãy có tổng bằng S.<br>

Input:<br>
    - Dòng đầu tiên là 2 số nguyên dương N và số nguyên S (1 <= N <= 10^6 | |S| <= 10^9)<br>
    - Dòng tiếp theo là N số nguyên. Giữa 2 số cách nhau bởi một khoảng trắng.<br>
Output:<br>
    - Một dòng là kết quả cần tìm<br>
Giới hạn thời gian 3000ms<br>

Test case mẫu:<br>
Input:<br>
7 6<br>
0 1 2 3 4 -7 4<br>
Output:<br>
3<br>
<br>
Giải thích:<br>
Có 3 dãy con có tổng bằng 6 đó là<br>
0 1 2 3<br>
1 2 3<br>
2 3 4 -7 4<br>