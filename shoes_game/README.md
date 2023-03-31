<div align="center">

# Shoes Game

</div>

Trong một trò chơi, có N đôi dày được trưng bày<br>
Ở mỗi đôi dày, 2 chiêcss dày có giá trị trái ngược nhau. Nếu chiếc dày bên trái mang giá trị -K thì chiếc dày bên phải mang giá trị K.<br>
Có đúng một chiếc dày bị thiếu, bạn hãy tìm ra giá trị của chiếc dày bị thiếu từ danh sách giá trị của các chiếc dày còn lại.<br>

Input:<br>
    Dòng đầu tiên gồm số nguyên dương N (1 <= N <= 10^5)<br>
    Dòng thứ 2 gồm 2 * N - 1 phần tử cách nhau bởi một dấu cách (1 <= |a[i]| <= 10^9)<br>
Output:<br>
    Một dòng duy nhất là kết quả cần tìm.<br>


### Testcase 1:
|Input| Output|
|-----|:-----:|
|3<br>-1 3 -3 1 5 | -5|

Giải thích: Có 3 đôi dày mang các cặp giá trị là (-1, 1), (-3, 3), (-5, 5)<br>
Chiếc còn thiếu mang giá trị -5.<br>

