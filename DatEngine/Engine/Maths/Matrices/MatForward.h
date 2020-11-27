#pragma once

#include <Maths/CommonMaths.h>

#include "../Vectors/VecForward.h"


template<int rows, int columns, typename MatType> 
struct Mat {
	typedef Mat<rows, columns, MatType> type;
	typedef MatType rowType[rows], columnType[columns];

	MatType cells[rows][columns];

	// Set cell values
	// Set specific cells
	void set(int Row, int Column, MatType Value);

	// Set Column
	void setColumn(int ColumnIndex, columnType Column);

	// Set Row
	void setRow(int RowIndex, rowType Row);

	// Set all cells
	void set(MatType Value);

	// Constructors
	// Empty constructor
	Mat();

	// Single value
	Mat(MatType Value);

	// 2D Array
	Mat(MatType Cells[rows][columns]);

	// 1D Array
	Mat(const MatType Cells[rows*columns]);

	// Copy Constructor
	Mat(const type &OtherMat);

	// Conversion Constructor
	template <int Columns, int Rows, typename OtherType> 
	explicit Mat(const Mat<Columns, Rows, OtherType>& OtherMat);

	explicit Mat(const Vec<columns, MatType>& OtherVec);

	// Vector Conversion
	explicit operator Vec<columns, MatType>();

	// Identity Matrix
	static type identity();

	// Transpose
	Mat<columns, rows, MatType> transpose() const;

	// Subscript
	MatType* operator[](const size_t rowIndex);

	MatType const* operator[](const size_t rowIndex) const;


	// Maths
	// Addition
	type operator+(const type& otherMat) const;

	// Single value addition
	type operator+(MatType Value) const;

	// In place addition
	type& operator+=(const type& otherMat);

	// Single value in place addition
	type& operator+=(MatType Value);

	// Precrement
	type& operator++();

	// Postcrement
	type operator++(int);

	// Negation
	type operator-() const;

	// Subtraction
	type operator-(const type& otherMat) const;

	// Single value Subtraction
	type operator-(MatType Value) const;

	// In place Subtraction
	type& operator-=(const type& otherMat);

	// Single value in place Subtraction
	type& operator-=(MatType Value);

	// Predecrement
	type& operator--();

	// Postdecrement
	type operator--(int);

	// Multiplication
	template <int Columns>
	Mat<rows, Columns, MatType> operator*(const Mat<columns, Columns, MatType>& OtherMat) const;

	// Vector Multiplication
	Vec<columns, MatType> operator*(const Vec<columns, MatType>& OtherVec) const;

	// Single value Multiplication
	type operator*(MatType Value) const;

	// In place Multiplication
	type& operator*=(const type& OtherMat);

	// Single value in place Multiplication
	type& operator*=(MatType Value);

	// Single value Division
	type operator/(MatType Value) const;

	// Single value in place Division
	type& operator/=(MatType Value);

	// Bitwise Maths
	// And
	type operator&(const type& otherMat) const;

	// Single Value And
	type operator&(MatType Value) const;

	// In Place And
	type& operator&=(const type& otherMat);

	// Single Value In Place And
	type& operator&=(MatType Value);

	// Or
	type operator|(const type& otherMat) const;

	// Single Value Or
	type operator|(MatType Value) const;

	// In Place Or
	type& operator|=(const type& otherMat);

	// Single Value In Place Or
	type& operator|=(MatType Value);

	// XOR
	type operator^(const type& otherMat) const;

	// Single Value XOR
	type operator^(MatType Value) const;

	// In Place XOR
	type& operator^=(const type& otherMat);

	// Single Value In Place XOR
	type& operator^=(MatType Value);

	// Comparisons
	// Equal
	bool operator==(const type& otherMat);

	// Not Equal
	bool operator!=(const type& otherMat);
};

#include "Source/Matrix.inl"