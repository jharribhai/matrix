# matrix
C++ Matrix header file

Matrix Library Project
______________________

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Compiling:
The code was compiled and coded in C++. The code can be compiled using GNU compiler as follows:
$ g++ -std=c++11 main.cpp Matrix.cpp –o main
And to run:
$ ./main

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
The following function can be executed by the library. 
-	matrix.read( row, col) – create a matrix of size row x col and enter each element.
-	matrix.display() – displays every element in the matrix.
-	matrix.multi( matA , mat B) – performs the matrix multiplication given two already filled matrices. Does an internal check if the dimensions do not agree to perform this operation.
-	matrix.transp( matA ) – performs the transpose of a given filled matrix.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
The expected output is as follows:

Enter rows and columns for matrix A: 2 2
Enter rows and columns for matrix B: 2 2

Enter elements of matrix A:
Enter element11 : 2  
Enter element12 : 4
Enter element21 : 8
Enter element22 : 6

Enter elements of matrix B:
Enter element11 : 4
Enter element12 : 7
Enter element21 : 4
Enter element22 : 3

Matrix A:
 2 4
 8 6

Matrix B:
 4 7
 4 3

Result from multiplication of matrices:
 24 26
 56 74

Result from Transpose of matrix:
 2 8
 4 6
