# x86-to-C interface programming project - kernel performance analysis
Major Course Output for LBYARCH (Laboratory for Computer Organization and Architecture) course at De La Salle University.

Passed by Robles, Donnald Miguel & Sales, Liam Miguel - LBYARCH S17 Group 6 MCO2

## Introduction
In this analysis, we compare the performance of the dot product kernel implemented in both C and x86-64 assembly language. The kernel utilizes functional scalar SIMD registers and floating-point instructions to compute the dot product of two single-precision float vectors.

## Experimental Setup
- Vector size (n):
  - 2<sup>20</sup> = 1048576
  - 2<sup>24</sup> = 16777216
  - 2<sup>26</sup> = 67108864
- Number of iterations for averaging each test case - 30
- Compiler optimization settings
  - Debug mode
  - Release mode

A vector size of 2<sup>30</sup> is not possible for the group because of machine limitations 

## Results
The table below summarizes the average time for the program to run for all modes

| Vector Size    | Assembly - Debug Mode | C - Debug Mode | Assembly - Release Mode | C - Release Mode |
| :------------: | :-------------------: | :------------: | :---------------------: | :--------------: |
| 2<sup>20</sup> | 0.003200              | 0.003967       | 0.001433                | 0.001833         |
| 2<sup>24</sup> | 0.049567              | 0.064467       | 0.020833                | 0.025033         |
| 2<sup>26</sup> | 0.193867              | 0.257567       | 0.082667                | 0.098900         |

Screenshots for these can be found in the bottom

## Analysis
- For both vector sizes, the assembly implementation consistently outperforms the C implementation in terms of execution time.
- The difference in performance becomes more pronounced as the size of the vectors increases.
- This suggests that the use of functional scalar SIMD registers and floating-point instructions in assembly language provides significant performance benefits over pure C implementation, particularly for computationally intensive tasks like dot product   
  computation.
- The assembly implementation allows for fine-grained control over optimization strategies, potentially enabling more efficient use of hardware resources compared to compiler optimizations applied to C code.
- NASM allows developers to exploit parallelism at a lower level, potentially achieving better performance through optimized instruction scheduling and resource utilization.
- Assembly code can be optimized for cache efficiency and reduced memory access, which can lead to improved performance, especially for large datasets.

## Conclusion
In conclusion, the dot product kernel's x86-64 assembly implementation performs better than its C counterpart, especially for large vector sizes. Utilizing floating-point instructions with functional scalar SIMD registers makes it possible to compute dot products more effectively, which leads to faster execution times. But in contrast to the C code, the assembly implementation is more complex and less readable, highlighting the trade-off between maintainability and performance in software development. These empirical results demonstrate the usefulness of functional scalar SIMD registers and floating-point instructions in speeding up dot product computation, and they offer verifiable proof of the assembly implementation's improved performance over the C implementation. Moreover, the ability to optimize for cache efficiency and minimize memory access further contributes to the overall performance gain observed in the assembly implementation.

## Screenshots
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture1.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture2.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture3.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time: 0.003200
  - C Average Time: 0.003967
<hr>
    
### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture4.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture5.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture6.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time:  0.049567
  - C Average Time:  0.064467
<hr>

### **Vector Size  2^26** 
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture7.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture8.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture9.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time: 0.193867
  - C Average Time: 0.257567
 <hr>

## Release Mode
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture10.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture11.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture12.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time:0.001433
  - C Average Time:  0.001833
<hr>

### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture13.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture14.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture15.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time: 0.020833
  - C Average Time:  0.025033
<hr>

### **Vector Size  2^26**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture16.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture17.png" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/x86-to-C-interface-programming-project/blob/main/screenshots/Picture18.png" style="width: 78.17px; height: 200px;">
</div>
  - Assembly Average Time: 0.082667
  - C Average Time: 0.098900
<hr>
