<div align="center">
# rectangle_one
</div>

Nhập vào một ma trận kích thước M x N gồm các số 0 hoặc 1 <br>
Bạn có thể hoán vị các cột của ma trân với nhau.<br>
Tìm diện tích lớn nhất của hình chữ nhất toàn số 0.<br>
<br>
Input:<br>
    - Dòng đầu tiên là 2 số nguyên dương M, N (1 <= M, N <= 100)<br>
    - M dòng tiếp theo, mỗi dòng chứa N số nguyên 0 hoặc 1<br>
Output:<br>
    - Một dòng là kết quả cần tìm.<br>
Giới hạn thời gian 3000ms<br>

Test case mẫu:<br>
Input:<br>
3 5<br>
0 1 0 1 0<br>
0 1 0 1 1<br>
1 1 0 1 0<br>
Output:<br>
6<br>

Giải thích:<br>
Ta hoán vị cột chỉ số 0 và 3 cho nhau lúc đó ma trận sẽ thành<br>
1 1 0 0 0<br>
1 1 0 0 1<br>
1 1 0 1 0<br>
Lúc này diện tích hình chữ nhật toàn số 0 nhiều nhất sẽ là 6.<br>
