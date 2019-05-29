#include <iostream>
#include "OList.h"

using namespace std;

int main() {
	OList matrixA(10, 1, 1);
	matrixA.insert(23, 1, 2);
	matrixA.insert(19, 1, 7);
	matrixA.insert(45, 2, 1);
	matrixA.insert(5, 2, 2);
	matrixA.insert(93, 2, 4);
	matrixA.insert(40, 5, 1);
	matrixA.insert(32, 8, 2);
	matrixA.insert(12, 8, 4);
	matrixA.insert(7, 8, 7);
	//myList.insert(38, 10, 10);

	OList matrixB(32, 8, 7);
	matrixB.insert(15, 3, 3);
	matrixB.insert(36, 5, 5);
	matrixB.insert(17, 2, 2);
	matrixB.insert(7, 1, 2);
	
	cout << "Matrix A" << endl;
	matrixA.printMatrix();
	cout << endl << endl;

	cout << "Matrix B" << endl;
	matrixB.printMatrix();
	cout << endl << endl;


	cout << matrixA.deleteElement(2,2) << endl;

	matrixA.printMatrix();
	cout << endl << endl;

	cout << "The value at location (8,4) is: ";
	cout << matrixA.findElement(8, 4)->value << endl;

	cout << "Adding MatrixA + MatrixB, the result is:" << endl;
	matrixA.addMatrix(matrixB);

	matrixA.printMatrix();
	cout << endl << endl;
	
	cout << "Transposed Matrix" << endl;
	matrixA.transpose();
	matrixA.printMatrix();
	cout << endl << endl;

	cout << "Transposed back" << endl;
	matrixA.transpose();
	matrixA.printMatrix();
	cout << endl << endl;

	cout << "Matrix C is defined as: " << endl;
	OList matrixC(2, 7, 1);
	matrixC.insert(4, 4, 2);
	matrixC.insert(5, 5, 1);
	matrixC.insert(3, 1, 8);
	matrixC.insert(2, 4, 7);
	matrixC.insert(10, 7, 7);
	matrixC.printMatrix();
	cout << endl << endl;

	cout << "We can multiply matrix A * matrix C to get:" << endl;
	matrixB = matrixA.multMatrix(matrixC);
	matrixB.printMatrix();
	cout << endl << endl;
}