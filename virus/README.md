<div align="center">

# Virus

</div>

Hải đang nghiên cứu một loại virus, virus này mỗi ngày sẽ nhân bản thành chính nó, nghĩa là nếu hôm nay có n virus thì ngày mai sẽ trở thành 2*n con virus. <br>
Mỗi ngày Hải có thể bỏ vào nhiều nhất 1 con virus. Hãy tính xem Hải cần bỏ virus vào những ngày nào, và cần bao nhiêu ngày để Hải có đúng N con virus.<br>

Input:<br>
    - Dòng duy nhất là số virus mà Hải muốn(1 <= N <= 10^18)<br>
Output:<br>
    - Dòng đầu tiên là gồm số x và y (x là số ngày mà Hải đặt được số virus, y là số virus mà Hải phải bỏ vào)<br>
    - Dòng thứ 2 gồm y phần tử là chỉ số ngày mà Hải cần bỏ virus vào.<br>
Giới hạn thời gian 1000ms<br>

Test case mẫu:<br>
Input:<br>
13<br>
Output:<br>
1101<br>
4 3<br>
1 2 4<br>

Giải thích:<br>
Hải mất 4 ngày để có 13 con virus, các ngày bỏ thêm 1 con virus là 1, 2, 4<br>
Ngày 1 Hải bỏ 1 con virus: Số virus là 1<br>
Ngày 2 số virus tăng 2 lần thành 2, Hải bỏ thêm 1 con nữa, số virus là 3<br>
Ngày 3 số virus tăng 2 lần thành 6.<br>
Ngày 4 sô virus tăng 2 lần thành 12, Hải bỏ thêm 1 con nữa, Hải có đúng 13 con virus.<br>
