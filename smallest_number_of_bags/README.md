<div align="center">

# Smallest number of bags

</div>

Một công nhân làm việc ở bằng chuyền trong một công ty.<br>
Việc của công nhân là đưa nhưng tui hàng vào những chiếc túi.<br>
Một chiếc túi có sức chứa là K, Nghĩa là nó chỉ được được tối đã khối lượng là K.<br>
Các sản phẩm sẽ được chạy trong bằng chuyền theo thứ tự, công nhân không được phép bỏ qua sản phẩm nào.<br>
Có thể cho nhiều sản phẩm vào cùng một túi miễn sao không vượt quá sức chứa K.<br>
Tính số lượng túi ít nhất mà công nhân đó phải dùng cho N sản phẩm, mỗi sản phẩm có khối lượng là a[i].<br>

Input:<br>
    Dòng đầu tiên gồm 2 số nguyên dương N và K (1 <= N, K <= 10^5)<br>
    Dòng thứ 2 gồm N phần tử cách nhau bởi một dấu cách (1 <= |a[i]| <= K)<br>
Output:<br>
    Một dòng duy nhất là kết quả cần tìm.<br>

### Testcase 1:
|Input| Output|
|-----|:-----:|
|5 4<br>1 2 3 2 2 | 3|

Giải thích:<br>
Túi 1 đựng 2 phần tử đầu là 1 và 2<br>
Túi 2 đựng 1 phần tử tiếp theo là 3<br>
Túi 3 đựng 2 phần tử cuối là 2 và 2<br>

