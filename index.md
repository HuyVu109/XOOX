# 8.1.1.
Các mệnh đề: f <= g, X > 0, M, e < d + c.

# 8.1.2.
Các mệnh đề: G, m > a, s <= o + n, U.

# 8.1.3.
((mouseT ype = wireless) ∧ ((retail > 100) ∨ (stock > 20))) ∨ (¬(mouseT ype = wireless) ∧ (retail > 50))

# 8.1.4.
# 8.2.1.
## a. Draw the Karnaugh maps for f and -f
### i. f = ab(-c) + (-a)b(-c)

Sơ đồ Karnaugh cho f:  

| c \ ab | 00 | 01 | 11 | 10 |
|--------|----|----|----|----|
| **0** | | 1 | 1 | |
| **1** | | | | |

Karnaugh map for -f: 

| c \ ab | 00 | 01 | 11 | 10 |
|--------|----|----|----|----|
| **0** | 1 | | | 1 |
| **1** | 1 | 1 | 1 | 1 |

### ii. f = (-a)(-b)(-c)(-d) + abcd 

Sơ đồ Karnaugh cho f:  

| cd \ ab | 00 | 01 | 11 | 10 |
|---------|----|----|----|----|
| **00** | 1 | | | |
| **01** | | | | |
| **11** | | | 1 | |
| **10** | | | | |

Sơ đồ Karnaugh cho -f: 

| cd \ ab | 00 | 01 | 11 | 10 |
|---------|----|----|----|----|
| **00** | | 1 | 1 | 1 |
| **01** | 1 | 1 | 1 | 1 |
| **11** | 1 | 1 | | 1 |
| **10** | 1 | 1 | 1 | 1 |

### iii. f = ab + a(-b)c + (-a)(-b)c   

Sơ đồ Karnaugh cho f:  

|  c\ab | 00 | 01 | 11 | 10 |
|-------|----|----|----|----|
| **0** |    |    | 1  |   	|
| **1** | 1  |    | 1  | 1  |    

Sơ đồ Karnaugh cho (-f):

|  c\ab | 00 | 01 | 11 | 10 |
|-------|----|----|----|----|
| **0** | 1  | 1  |    | 1  |
| **1** |    | 1  |    |    |

### iv. f = (-a)(-c)(-d) + (-c)d + bcd  

Sơ đồ Karnaugh cho f:

|    | 00 | 01 | 11 | 10 |
|----|----|----|----|----|
| 00 | 1  | 1  |    |    |
| 01 | 1  | 1  | 1  | 1  |
| 11 |    | 1  | 1  |    |
| 10 |    |    |    |    |  

Sơ đồ Karnaugh cho (-f):

|    | 00 | 01 | 11 | 10 |
|----|----|----|----|----|
| 00 |    |    | 1  | 1  |
| 01 |    |    |    |    |
| 11 | 1  |    |    | 1  |
| 10 | 1  | 1  | 1  | 1  |

## b.
### i. f = ab(-c) + (-a)b(-c)
- f: f = b(-c)  
- (-f): -f = (-b) + c  

### ii. f = (-a)(-b)(-c)(-d) + abcd 
- (f): f = (-a)(-b)(-c)(-d) + abcd  
- (-f): -f = (-a)d + c(-d) + b(-c) + a(-b)

### iii. f = ab + a(-b)c + (-a)(-b)c 
- f : ab + (-b)c
- (-f): (-a)b + (-b)(-c)

### iv. f = (-a)(-c)(-d) + (-c)d + bcd 
- f : (-a)(-c) + bd + (-c)d
- (-f) : a(-d) + c(-d) + (-b)c 

## c. 
### i. f = ab(-c) + (-a)b(-c)
Implicants: {(-b), c, b(-c)}  
T = { xTF, xFT }

### ii. f = (-a)(-b)(-c)(-d) + abcd 
Implicants: {(-a)(-b)(-c)(-d), abcd, (-a)d, c(-d), b(-c), a(-b)}  
T = {FFFF, TTTT, FTFT, TFTF}

### iii. f = ab + a(-b)c + (-a)(-b)c 
Implicants: (-b)c, (-a)b, (-b)(-c)}  
T = {TT-, -FT, FT-, -FF }

### iv. f = (-a)(-c)(-d) + (-c)d + bcd 
Implicants: {(-a)(-c), bd, (-c)d, a(-d), c(-d), (-b)c}  
T = {FTFT, TFTF}


## d.
### i. f = ab(-c) + (-a)b(-c)
T = {-TF,-FF,-TT}

### ii. f = (-a)(-b)(-c)(-d) + abcd  
T = {FFFF, TTTT, FFTT, FTTF, FTFT, TFFT}

### iii. f = ab + a(-b)c + (-a)(-b)c 
T = {TT-, -FT, FT-, -FF}

### iv. f = (-a)(-c)(-d) + (-c)d + bcd 
T = {F-FF, -TTT, TFFT, T-FF, FTTF, -FTT}

## e.
### i. f = ab(-c) + (-a)b(-c)

UTPs: {-TF}  
NFPs: {-TT, -FF}  
Test set {-TF, -TT, -FF} cũng có thể thỏa mãn CUTPNFP.

### ii. f = (-a)(-b)(-c)(-d) + abcd 
UTPs: {FFFF, TTTT, FFTT, FTTF, FTFT, TFFT}

### iii. f = ab + a(-b)c + (-a)(-b)c 
UTPs: {TTF, FFT}  
NFPs: {FTF,TFF}, {FFF,FTT}   
{TTF, FTF, TFF} and {FFT, FFF, FTT} có thể thỏa mãn CUTPNFP.  

### iv. f = (-a)(-c)(-d) + (-c)d + bcd 
UTPs: {FFFF, TTTT, TFFT}  
NFPs: {TFFF,FFTF}, {TFTT,TTTF}, {TFTT,TFFF}  
{FFF,TFFF,FFTF}, {TTTT,TFTT,TTTF} and {TFFT,TFTT,TFFF} thỏa mãn CUTPNFP 

# 8.1.6.

p = (a v b) ^ c

```
type(x) = type(y) = 'int'
type(done) = 'bool'
type(list) = 'list of strings'
type(str) = 'string'

p = (x < y v done) ^ list.contain(str)
```

TR bao phủ mệnh đề:
- x < y = true
- x < y = false
- done = true
- done = false
- list.contain(str) = true
- list.contain(str) = false

Giá trị:
- x = 3, y = 4
- x = 4, y = 3
- done = true
- done = false
- ['a', 'b', 'c'].contain('a')
- ['a', 'b', 'c'].contain('d')


# 8.1.11.
Ta giả định p là vị từ, ci là mệnh đề chính, cj là mệnh đề phụ (j != i), và pci là điều kiện mà ci quyết định p.
Với mỗi i, GACC có 2 TR: ci = T ∧ pci = T và ci = F ∧ pci = T. Giá trị của các mệnh đề phụ cj có thể khác giữa 2 test.  
Với mỗi i, CACC có 2 TR: ci = T ∧ pci = T và ci = F ∧ pci = T. Ngoài ra, giá trị của p từ test thứ nhất phải khác với giá trị của p ở cái thứ 2. Giá trị của các mệnh đề phụ cj có thể khác giữa 2 test.    
Với mỗi i, RACC có 2 TR: ci = T ∧ pci = T and ci = F ∧ pci = T. Ngoài ra, ci là khác biệt duy nhất giữa 2 test. Giá trị của mệnh đề phụ cj phải giống nhau ở 2 test.  
Với mỗi i, GICC có 2 cặp TR:  
Cặp 1: ci = T ∧ pci = F ∧ p = T. ci = F ∧ pci = F ∧ p = T.  
Cặp 2: ci = T ∧ pci = F ∧ p = F. ci = F ∧ pci = F ∧ p = F. 
Mệnh đề phụ cj có thể khác giữa 2 test. Thường thì 1 trong 2 cặp sẽ không khả thi.  
Với mỗi i, RICC có 2 cặp TR:  
Cặp 1: ci = T ∧ pci = F ∧ p = T. ci = F ∧ pci = F ∧ p = T.  
Cặp 2: ci = T ∧ pci = F ∧ p = F. ci = F ∧ pci = F ∧ p = F.  
Ngoải ra, ci là khác biệt duy nhất giữa 2 test ở cặp 1 và cặp 2. Giá trị của các mệnh đề phụ cj phải giống nhau cho 2 test ở cặp 1 và 2. Và 1 trong 2 cặp thường sẽ không khả thi.  

# 8.3.2.
Nhìn chung thì bài này tương tự 8.3.1. Tuy nhiên ta phải đánh giá từng mệnh đề thành false để test có thể đầy đủ, vì một số mệnh đề có thể không được đánh giá nếu như một mệnh đề khác được đặt thành false (nếu b false thì c sẽ không quan trọng và không được đánh giá).




