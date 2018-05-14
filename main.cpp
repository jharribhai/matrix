//============================================================================
// Name        : main.cpp
// Author      : Jatin Harribhai
// Version     :
// Copyright   : Your copyright notice
// Description : Demonstrates the Matrix library (Matrix.h)
//============================================================================

#include <iostream>
#include <string>
#include "Matrix.h"

using namespace std;


int main() {
	int r1, c1, r2, c2;

	Matrix matA, matB;

    //Input the Matrices
	// Enter the rows and columns for matrix A
	cout << "Enter rows and columns for matrix A: ";
	cin  >> r1 >> c1;
	// checks if the input is an integer
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256,'\n');
		cout << endl << "Error: Please enter a numbers" << endl;
		cout << "Enter rows and columns for matrix A: ";
		cin  >> r1 >> c1;
	}

	// Input the Matrices
	// Enter the rows and columns for matrix B
	cout << "Enter rows and columns for matrix B: ";
	cin  >> r2 >> c2;
	// checks if the input is an integer
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256,'\n');
		cout << endl << "Error: Please enter a numbers" << endl;
		cout << "Enter rows and columns for matrix B: ";
		cin  >> r2 >> c2;
	}

	// Does check if the the column in Matrix A (c1) is equal to row in Matrix B
	// If it does not match the multiplication of the matrices is undetermined
	while (c1!=r2)
	{
		cout << "Error: column in matrix A is not equal to row in matrix B" << endl;

		cout << "Enter rows and columns for matrix A: ";
		cin  >> r1 >> c1;
		// checks if the input is an integer
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256,'\n');
			cout << endl << "Error: Please enter a numbers" << endl;
			cout << "Enter rows and columns for matrix A: ";
			cin  >> r1 >> c1;
		}
		cout << "Enter rows and columns for matrix B: ";
		cin  >> r2 >> c2;
		// checks if the input is an integer
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256,'\n');
			cout << endl << "Error: Please enter a numbers" << endl;
			cout << "Enter rows and columns for matrix B: ";
			cin  >> r2 >> c2;
		}

	}

	// Read in the input matrix
	cout << endl << "Enter elements of matrix A:" <<endl;
	matA.read(r1,c1);
	cout << endl << "Enter elements of matrix B:" <<endl;
	matB.read(r2,c2);

	// Prints out the matrix
	cout << endl <<"Matrix A:" << endl;
	matA.display();

	cout << endl << "Matrix B:" << endl;
	matB.display();

	// Perform the multiplication of two matrices
	Matrix matC;
	matC = matC.multi(matA,matB);

	cout << endl << "Result from multiplication of matrices:" << endl;
	matC.display();

	// Performs the transpose of a matrix
	Matrix matD;
	matD = matD.transp(matA);

	cout << endl << "Result from Transpose of matrix:" << endl;
	matD.display();

	return 0;
}

