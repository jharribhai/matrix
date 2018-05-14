/*
 * Matrix.h
 *
 *  Created on: 05 Apr 2018
 *      Author: Jatin Harribhai
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <string>

// define the class Matrix and it's operations
class Matrix
{
	int a[100][100];
	int row, col;

public:
		Matrix () : row(0), col(0)
		{}
		void read(int r, int c);
		void display();
		Matrix multi(Matrix a, Matrix b);
		Matrix transp(Matrix a);
};




#endif /* MATRIX_H_ */
