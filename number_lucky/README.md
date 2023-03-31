<div align="center">

# Number lucky

</div>

Theo quan điểm ngày xưa, số 4 và số 7 sẽ đưa lại may mắn.<br>
Một số được gọi là number lucky khi tất cả nhưng chữ số trong nó đều là 4 hoặc 7.<br>
Nhập vào một số nguyên N, kiểm tra xem N có phải number lucky hay không.<br>
Nếu N là number lucky thì in ra YES, ngược lại in ra NO.<br>

Input:<br>
    - Dòng duy nhất gồm số nguyên N (|N| <= 10^1000)<br>
Output:<br>
    YES hoặc NO là kết quả cần tìm<br>
<br>
Giới hạn thời gian 1000ms<br>

### Testcase 1:
|Input| Output|
|-----|:-----:|
|447774| YES|

Giải thích:<br>
Ta sẽ chia thành 2 bên, 1 bên là 1 và 4, 1 bên là 2 và 3. Tổng cân nặng 2 bên đều bằng 5.<br>

### Testcase 2:
|Input| Output|
|-----|:-----:|
|44723 | NO|