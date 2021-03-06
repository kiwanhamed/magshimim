// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "queue.h"
#include <iostream>


void initQueue(queue* q, unsigned int size) {
	q->_elements = new unsigned int[size];
	q->_maxSize = size;
	q->_count = 0;
}
void cleanQueue(queue* q) {
	delete[] q->_elements;

}
void enqueue(queue* q, unsigned int newValue) {
	for (int i = 0;i < q->_maxSize;i++) {
		if (q->_elements[i] == NULL) {
			q->_elements[i] = newValue;
		}
	}
}
int dequeue(queue* q) {
	for (int i = 0; i < q->_maxSize;i++) {
		if (q->_elements[i] == NULL) {
			if (i == 0) {
				return 0;
			}
		}
		else {
			q->_elements[i] = NULL;
		}
	}
}
