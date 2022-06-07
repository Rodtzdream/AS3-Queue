#pragma once
#include <iostream>
#include <Windows.h>

class QUEUE
{
public:

	QUEUE(int size);
	~QUEUE();
	void MAKENULL();
	void ENQUEUE(int data);
	void DEQUEUE();
	int FRONT();
	bool EMPTY();
	void PRINT();

private:
	int* data;
	int front;
	int rear;
	int SIZE;
};