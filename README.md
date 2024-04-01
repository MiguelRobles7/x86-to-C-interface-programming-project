## x86-to-C interface programming project
### ROBLES, DONNALD MIGUEL L. & SALES, LIAM MIGUEL V. - S17
### LBYARCH GROUP 6 MCO2



# Kernel Performance Analysis

## Introduction
In this analysis, we compare the performance of the dot product kernel implemented in both C and x86-64 assembly language. The kernel utilizes functional scalar SIMD registers and floating-point instructions to compute the dot product of two single-precision float vectors.

## Experimental Setup
- Vector size (n):
  - 2^20 = 1048576
  - 2^24 = 16777216
  - 2^26 = 67108864
- Number of iterations for averaging each test case: 30
- Compiler optimization settings:
  - Debug mode
  - Release mode

## Results


## Debug Mode
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/c3b970a8-9b97-49d9-9282-14ae77cb3548" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/e4580436-24b2-4463-bc9c-187075d2cad7" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/c828b2c5-a0c4-4b6c-93df-18c4a8afe99b" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.003200
  - C Average Time: 0.003967
<hr>
    
### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/e2517139-83db-483f-a1fd-78363198707a" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/b4196356-7a64-4d05-ad1d-316170b9ecb7" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/8a034f35-db93-41d3-b15f-37bf2e16158e" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time:  0.049567
  - C Average Time:  0.064467
<hr>

### **Vector Size  2^26** 
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/2c269891-0e62-4b4b-a195-7315f566685d" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/7d3265df-b67c-48d3-8534-a932d5327d39" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/4fd9f8c1-306c-4b4a-8c47-f90c3d090fc8" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.193867
  - C Average Time: 0.257567
 <hr>

## Release Mode
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/4056ca74-640e-413d-89f1-c95126886f19" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/909ab5b4-ee1c-4e90-8935-3bd9c7a42729" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/edf878e4-abe4-4cd2-858a-70431f44605d" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time:0.001433
  - C Average Time:  0.001833
<hr>

### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/de45a7b4-5665-4df7-a0e2-ad310c586317" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/b4eec4e0-800a-45dc-9532-52b1ae2a810b" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/75222dbb-b5da-4a65-8557-2be038b4558e" style="width: 78.17px; height: 200px;">
</div>
  
  - Assembly Average Time: 0.020833
  - C Average Time:  0.025033
<hr>

### **Vector Size  2^26**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/96caaacf-a04a-4b03-abe8-93124a8065cc" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/bba5508a-2dd5-4327-8e68-7a6458baf516" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/276f98c1-a4de-465b-91c2-1fd518f1b9d5" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.082667
  - C Average Time: 0.098900
<hr>

## Analysis

### Performance Comparison
- For both vector sizes, the assembly implementation consistently outperforms the C implementation in terms of execution time.
- The difference in performance becomes more pronounced as the size of the vectors increases.
- This suggests that the use of functional scalar SIMD registers and floating-point instructions in assembly language provides significant performance benefits over pure C implementation, particularly for computationally intensive tasks like dot product   
  computation.
- The assembly implementation allows for fine-grained control over optimization strategies, potentially enabling more efficient use of hardware resources compared to compiler optimizations applied to C code.
- NASM allows developers to exploit parallelism at a lower level, potentially achieving better performance through optimized instruction scheduling and resource utilization.
- Assembly code can be optimized for cache efficiency and reduced memory access, which can lead to improved performance, especially for large datasets.


## Conclusion
In conclusion, the dot product kernel's x86-64 assembly implementation performs better than its C counterpart, especially for large vector sizes.
Utilizing floating-point instructions with functional scalar SIMD registers makes it possible to compute dot products more effectively, which leads to faster execution times.
But in contrast to the C code, the assembly implementation is more complex and less readable, highlighting the trade-off between maintainability and performance in software development.
These empirical results demonstrate the usefulness of functional scalar SIMD registers and floating-point instructions in speeding up dot product computation,
and they offer verifiable proof of the assembly implementation's improved performance over the C implementation.
Moreover, the ability to optimize for cache efficiency and minimize memory access further contributes to the overall performance gain observed in the assembly implementation.
