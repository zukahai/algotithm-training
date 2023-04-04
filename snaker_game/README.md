<div align="center">

# Snaker Game (Contest 2)

</div>

NamGon là một chú rắn rất đáng yêu, qua nhiều năm tháng thì thân hình của chú đã trở nên dài hơn bào giờ hết. Vào một ngày đẹp trời chú rắn vô tình phát hiện ra M đường hầm chứa rất nhiều phần quà hấp dẫn, mỗi phần quà đều mang giá trị của nó.<br>
Tuy nhiên với thân hình quá khổ của mình nên tại mỗi đường hầm thì NamGom chỉ có thể di chuyển 1 chiều (Đã di chuyển sang trái thì không thể thể di chuyển qua phải được nữa, và tương tự), ở mỗi đương hầm, chú rắn có thể đi xuống đường hầm phía dưới nó.<br>
Chú răn có thể dừng lại bất cứ lúc nào nếu không muốn đi tiếp nữa.<br>
Chú rắn sẽ nhận được các phần quà mà nó đi qua. Hãy tìm được đi để tổng phần quà mà chú rắn nhất được là lớn nhất.<br>

Input:<br>
    - Dòng đầu tiên là 2 số nguyên dương M, N(1 <= N, M <= 10^2)<br>
    - M dòng tiếp theo, mỗi dòng gồm N số nguyên là giá trị của các phần quà ở mỗi đường hầm.<br>
Output:<br>
    - Tổng giá trị của phần quà mà chú rắn có thể nhận được.<br>
<br>
Giới hạn thời gian 1000ms<br>
<br>
Test case mẫu:

### Testcase 1:
|Input| Output|
|-----|:-----:|
|3 4<br>0 1 3 -4<br>-2 4 5 2<br>-9 4 0 5| 24|

Giải thích:<br>
Rắn di chuyển theo hình sau:<br>

<div align = "center">
  <img align="center" src= "https://github.com/zukahai/algotithm-training/blob/main/snaker_game/images/snaker.png" />
</div>