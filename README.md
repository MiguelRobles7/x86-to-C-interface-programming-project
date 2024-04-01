x86-to-C interface programming project
ROBLES, DONNALD MIGUEL L. & SALES, LIAM MIGUEL V. - S17
LBYARCH GROUP 6 MCO2

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

### Debug Mode
- **Vector Size  2^20**
  - Assembly Average Time: 0.003300
  - C Average Time: 0.004167
- **Vector Size  2^24**
  - Assembly Average Time: 0.050133
  - C Average Time: 0.065233
- **Vector Size  2^30**
  - Assembly Average Time: (still processing ill add when its done)
  - C Average Time:
 
### Release Mode
- **Vector Size  2^20**
  - Assembly Average Time: 
  - C Average Time: 
- **Vector Size  2^24**
  - Assembly Average Time: 
  - C Average Time: 
- **Vector Size  2^30**
  - Assembly Average Time: 
  - C Average Time: 

## Analysis

### Performance Comparison
- For both vector sizes, the assembly implementation consistently outperforms the C implementation in terms of execution time.
- The difference in performance becomes more pronounced as the size of the vectors increases.
- This suggests that the use of functional scalar SIMD registers and floating-point instructions in assembly language provides significant performance benefits over pure C implementation, particularly for computationally intensive tasks like dot product computation.
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