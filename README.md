<div align="center">

# Algotithm Training
</div>

## 1. Cấu trúc mỗi đề thi

Mỗi folder sẽ là mỗi bài tập, trong đó:
  
- problem.txt là đề bài.
- testcase
  - tc01
    - input.txt: đầu vào của test 1
    - output.txt: đầu ra của test 2
  - tc02
    - input.txt
    - output.txt
  - ...
  - .testcase: File test đùng cho estension CPH trong VSCode. (1)
- suggest.txt: Gợi ý (thường sẽ không có)

## 2. Extension Competitive Programming Helper trên Visual studio code

### 2.1 Giới thiếu Competitive Programming Helper

Bạn có thể thử từng input để biết được bài làm của mình có vượt quá được các test (do mình tự ra) đối với problem đó hay không. Nhưng vấn đề này có thể sẽ bất khả thi vì có một số test có input cũng như output rất dài, và việc để test từng test case rất là mất thời gian. Để khắc phục vấn đề này mình sẽ hướng dẫn các bạn một cách có thể chạy 1 lần được tất cả các test case của đề.

### 2.2 Cài đặt Competitive Programming Helper
Đầu tiên bạn cần chạy được ngôn ngữ mà bạn sử dụng (C/C++, Python, Java, RS,...) ở trên Visual studio code (VSC)
Sau khi xong phần này các bạn cài đặt extension Competitive Programming Helper (CPH) vào VSC.

<div align = "center">
  <img align="center" src= "https://raw.githubusercontent.com/zukahai/HaiZuka/master/Images/cph.png" />
</div>

### 2.3 Sử dụng Competitive Programming Helper
Sau khi giải quyết xong vấn đề của đề bài và bạn muốn thử xem bài làm của mình có đúng hay không. Bạn cần test trên bộ testcase của đề.
Cách bước để test như sau.

#### Bước 1:
Copy nội dung của file ./testcase/.testcase ở (1)

#### Bước 2:
Mở file bài làm của bạn sau đó click và icon CPH:

<div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp3.png" />
</div>
<br>
 Tiếp theo sẽ mở ra giao diện này. Chọn Create problem
 <div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp4.png" />
</div>
<br>
Trở về giao diện chính:
<div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp5.png" />
</div>

#### Bước 3:
Lúc này hãy thống sẽ tự tạo cho bạn một file prob ở .chp/xxxxxxxxxx.prob ngang hàng với file bài làm của bạn.
 <div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp6.png" />
</div>
Mở file đó lên và tìm đoạn "Test":....,
<div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp7.png" />
</div>
Bôi đen và dán nội dung bạn đã copy ở bước 1 vào. Sau đó lưu file lại.

#### Bước 4
Trở lại file bài làm của bạn, lúc này chờ một lúc để cửa số CPH hiện thị đầy đủ các testcase của đề.

<div align = "center">
  <img align="center" src= "https://github.com/zukahai/HaiZuka/blob/master/Images/chp2.png" />
</div>

Bạn có thể chọn chạy thử từng test hoặc chạy hết tất cả các test (Run All)

Như thế là các bạn đã biết các chạy thử các testcase của từng bài. Nếu gặp phải khó khăn và góp ý có thể liên hệ mình.<br>
Chúc các bạn thành công.
