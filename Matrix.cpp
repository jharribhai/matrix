/*
 * Matrix.cpp
 *
 *  Created on: 05 Apr 2018
 *      Author: Jatin Harribhai
 *
 * The operations for the Matrix class
 */

#include <iostream>
#include "Matrix.h"
using namespace std;


// Reads in each element of a matrix
void Matrix::read(int r, int c)
{
	row = r;
	col = c;

	for (int i=0; i < row; ++i)
	{
		for (int j=0; j < col; ++j)
		{
			cout << "Enter element" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
			// Checks if it is an integer
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256,'\n');
				cout << endl << "Error: Please enter a numbers" << endl;
				cout << "Enter element " << i + 1 << j + 1 << " : ";
				cin >> a[i][j];
			}
		}
	}
}

// Prints the matrix
void Matrix::display()
{
	for (int i=0; i < row; ++i)
	{
		for (int j=0; j < col; ++j)
		{
			cout << " " << a[i][j];
			if ( j == (col-1))
				cout << endl;
		}
	}

}

// Multiplies the two input matrices
Matrix Matrix::multi( Matrix a, Matrix b)
{
	// Initialize the output matrix (mult)
	Matrix mult;
	mult.row = a.row;
	mult.col = b.col;

	//If a check is not done in the main code a second check is done to ensure the column of A is equal to row of B
	if (a.col == b.row)
	{
		// Multiply elements
		for (int i=0; i < a.row; ++i)
		{
			for (int j=0; j < b.col; ++j)
			{
				mult.a[i][j] = 0;
				for (int k =0; k < a.col; ++k)
				{
					mult.a[i][j] = (a.a[i][k] * b.a[k][j]) + mult.a[i][j];
				}
			}
		}
	}
	else
	{
		cout << endl <<"Error! cannot perform the multiply the internal dimensions don't match" << endl;
	}

	return mult;

}

// Performs the Transpose of the input matrix
Matrix Matrix::transp( Matrix a)
{
	Matrix trans;
	trans.row = a.col;
	trans.col = a.row;

	// Transpose
	for (int i=0; i < a.row; ++i)
		{
			for (int j=0; j < a.col; ++j)
			{
				trans.a[j][i] = a.a[i][j];
			}
		}
	return trans;
}



