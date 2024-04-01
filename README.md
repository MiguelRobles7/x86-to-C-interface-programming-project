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
  - 2^30 = 1073741824
- Number of iterations for averaging each test case: 30
- Compiler optimization settings:
  - Debug mode
  - Release mode

## Results


## Debug Mode
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/bd998b77-84dd-4178-ac4d-80fd2f2f8904" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/86dff322-631a-4479-b6d3-7814e4c41096" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/553d824a-de4c-4f51-aaca-6b2943f3799b" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.003300
  - C Average Time: 0.004167
<hr>
    
### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/5b21f20e-13c2-4d46-b4db-a9d27f524b4b" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/44743ebb-5415-4db0-aff9-0c222c77f14e" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/e28a987d-c8b2-4181-8dee-952fcb260c50" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.050133
  - C Average Time: 0.065233
<hr>

### **Vector Size  2^30** 
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/fc82bab3-cf2b-46ba-ac20-392ce6329fa4" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/17579ed8-ae6a-4792-889d-8b24f979afe2" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/c97ff705-26df-44f1-b582-fa8c38a4abf8" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 3.278633
  - C Average Time: 4.246267
 <hr>

## Release Mode
### **Vector Size  2^20**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/6f0b9ea1-48df-4188-908b-0848acef6d4a" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/ead4ed0f-9eaa-4ae9-bf41-65cd339bf780" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/06942830-5daf-4f42-ae65-95a5c66fd820" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 0.001533
  - C Average Time: 0.001900
<hr>

### **Vector Size  2^24**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/77b06f2b-2496-4483-b9bd-c8f91eb5e1c0" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/148d62c6-ac64-429d-8cc1-ea96be4c4596" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/bc27a83b-1225-4488-b487-477b014d52d3" style="width: 78.17px; height: 200px;">
</div>
  
  - Assembly Average Time: 0.021233
  - C Average Time: 0.025300
<hr>

### **Vector Size  2^30**
<div style="display: flex;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/83a01390-4e54-4e61-a0f5-3d79e72a2467" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/0fffe8c6-6ff0-4e80-874b-bff0547e53f3" style="width: 78.17px; height: 200px;">
    <img src="https://github.com/MiguelRobles7/Assembly-to-C-Interface-Programming-Project/assets/132888676/47b19061-32fb-4b88-9ddd-cc57c2fdc502" style="width: 78.17px; height: 200px;">
</div>

  - Assembly Average Time: 1.404767
  - C Average Time:  1.624933
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
