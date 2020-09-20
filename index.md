# 1. Why do testers automate tests? What are the limitations of automation?
- Các nhà kiểm thử sử dụng kiểm thử tự động là vì nó có thể giảm được chi phí và giảm các lỗi do con người gây ra. Ngoài ra nó còn giảm sự khác nhau về chất lượng kiểm thử từ những cá nhân khác nhau và giảm đáng kể chi phí của kiểm thử hồi quy
- Những hạn chế:
 + Phải liên tục chỉnh sửa mã thử nghiệm
 + Không thể dùng để kiểm thử UX
 + Độ tin cậy của tập lệnh phụ thuộc vào lập trình viên

# 2. How the inheritance hierarchy can affect controllability and observability.
- Kế thừa phân cấp có thể gây ra sự phức tạp khi kiểm thử, vì các lớp con phụ thuộc vào lớp cha của nó nên khi chúng ta sửa đổi gì đó ở một lớp cha, nó sẽ ảnh hưởng đến tất cả các lớp con tương ứng, nghĩa là mọi thử nghiệm bị ảnh hưởng bởi sự sửa đổi đều phải được cập nhật cho các lớp con. Điều này ảnh hưởng đến khả năng kiểm soát, vì nếu có một cây kế thừa sâu, nó sẽ rất phức tạp
- Nó còn ảnh hưởng đến tính khả quan sát, vì chúng ta cần quan sát một số lượng lớn các lớp con mà thực ra đang hoạt động công việc giống như lớp cha của nó. 

# 4. Delete the explict throw of NullPointerException in the Min program (figure 3.2). Verify that the JUnit test for a list with a single null element now fails.

- Nếu ta xóa dòng code 
 `if (result == null) throw new NullPointerException ("Min.min");`
chúng ta sẽ thấy thử nghiệm testForSoloNullElement() sẽ thất bại
