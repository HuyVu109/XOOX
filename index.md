# Câu 1. 
- Các nhà kiểm thử sử dụng kiểm thử tự động là vì nó có thể giảm được chi phí và giảm các lỗi do con người gây ra. Ngoài ra nó còn giảm sự khác nhau về chất lượng kiểm thử từ những cá nhân khác nhau và giảm đáng kể chi phí của kiểm thử hồi quy
- Những hạn chế:
 >-  Phải liên tục chỉnh sửa mã thử nghiệm
 > - Không thể dùng để kiểm thử UX
 > - Độ tin cậy của tập lệnh phụ thuộc vào lập trình viên

# Câu 2. 
- Kế thừa phân cấp có thể gây ra sự phức tạp khi kiểm thử, vì các lớp con phụ thuộc vào lớp cha của nó nên khi chúng ta sửa đổi gì đó ở một lớp cha, nó sẽ ảnh hưởng đến tất cả các lớp con tương ứng, nghĩa là mọi thử nghiệm bị ảnh hưởng bởi sự sửa đổi đều phải được cập nhật cho các lớp con. Điều này ảnh hưởng đến khả năng kiểm soát, vì nếu có một cây kế thừa sâu, nó sẽ rất phức tạp
- Nó còn ảnh hưởng đến tính khả quan sát, vì chúng ta cần quan sát một số lượng lớn các lớp con mà thực ra đang hoạt động công việc giống như lớp cha của nó. 

# Câu 4.
Nếu ta xóa dòng code 
 `if (result == null) throw new NullPointerException ("Min.min");`
chúng ta sẽ thấy thử nghiệm `testForSoloNullElement()` sẽ thất bại

# Câu 6.
## a,
```
@Test
 void testComputePrimesA() {
     PrimeNumbers primeNumbers = new PrimeNumbers();
     primeNumbers.computePrimes(0);
 
     assertEquals("[]", primeNumbers.toString());
     }
```
## b,
```@Test
 void testComputePrimesB() {
     PrimeNumbers primeNumbers = new PrimeNumbers();
     primeNumbers.computePrimes(7);
 
     assertEquals("[2, 3, 5, 7, 11, 13, 17]",
          primeNumbers.toString());
 } 
 ```
 ## c,
 ```
  @Test
 void testComputePrimesC() {
     PrimeNumbers primeNumbers = new PrimeNumbers();
     primeNumbers.computePrimes(8);
 
     assertEquals("[2, 3, 5, 7, 11, 13, 17, 19]", 
         primeNumbers.toString());

}
```

## d, 
Trường hợp này không khả thi vì lỗi bắt đầu ở 19 (bỏ qua 9 vì 9 không là số nguyên tố), tất cả các số nguyên tố tiếp theo kết thúc bằng '9' sẽ không ở trong giá trị kết quả

## e,
``` @Test
 void testComputePrimesE() {
     PrimeNumbers primeNumbers = new PrimeNumbers();
     primeNumbers.computePrimes(8);
 
     assertEquals("[2, 3, 5, 7, 11, 13, 17, 19]",
         primeNumbers.toString());
 } 
 ```
 
 # Câu 7.
 ```public void computePrimes(int n){
    boolean[] isPrime = new boolean[N + 1];
    
    for (int i = 2; i <= N; i++) {
      isPrime[i] = true;
    }
 
    
    for (int i = 2; i*i <= N; i++) {
      if (isPrime[i]) {
        for (int j = i * i; j <= N; j += i) {
          isPrime[j] = false;
        }
      }
  
  }

    for (int i=2; i<=n; i++){
 	if (isPrime[i] && (i % 10 != 9)){
  		primes.add(i);
	}
    }
}
```
- Lỗi sai xác thực(false positive) đầu tiên là 9.
- Ca kiểm thử phải tạo ra 7 số nguyên tố trước khi gặp nó
- Mô hình RIPR nên được sử dụng để biết được khi có lỗi ở trong hệ thống, và ngược lại, chúng ta có thể nghĩ rằng chương trình của mình đang chạy đúng, nhưng lại có quá nhiều lỗi sai xác thực đang chờ để được lan truyền(propagate) 
 
 # Câu 10.
 - Lý thuyết kết quả này sẽ không hợp lệ vì thứ tự rất quan trọng ở trong danh sách. Do đó, lý thuyết JUnit thất bại.
