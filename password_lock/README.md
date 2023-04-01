<div align="center">

# Password Lock

</div>

Nhà Nam có một ổ khoá số. Trên ổ khoá gồm N con số. Mỗi con số từ 0 đến 9 và có thể thay đổi thành số khác bằng cách xoay lên hoặc xuống.<br>
Ví dụ số 5 có thể xoay thành số 6 hoặc số 4 chỉ trong 1 bước xoay, phía sau số 9 sẽ là số 0.<br>
Cho chuỗi S gồm các con số là password của ổ khoá. Chuỗi P gồm các con số là tình trạng ổ khoá hiên tại.<br>
Hãy tim ra số bước ít nhất để Nam có thể mở ổ khoá của mình<br>
<br>
Input:<br>
    Dòng đầu tiên gồm số chuỗi S (1 <= |S| <= 10^5)<br>
    Dòng thứ 2 gồm chuỗi số P (|P| = |S|)<br>
Output:<br>
    Số bước xoay để có thể mở khoá<br>

Ví dụ mẫu:<br>

### Testcase 1:
|Input| Output|
|-----|:-----:|
|1234<br>1354 | 3|

Giải thích:<br>
Cần 1 bước xoay để biến đổi 3 thành 2<br>
Cần 2 bước xoay để biến đổi  5 thành 3<br>