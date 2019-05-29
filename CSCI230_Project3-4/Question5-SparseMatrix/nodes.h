#include <cstddef>
#pragma once

struct internalNode {
public:
	void copy(internalNode temp) {
		row = temp.row;
		column = temp.column;
		value = temp.value;
		up = temp.up;
		down = temp.down;
		right = temp.right;
		left = temp.right;
	}
	int row = 0;
	int column = 0;
	int value = 0;
	internalNode* up = NULL;
	internalNode* down = NULL;
	internalNode* right = NULL;
	internalNode* left = NULL;
};

struct headNode {
public:
	int key = 0;
	internalNode* toInternal = NULL;
	headNode* next = NULL;
};