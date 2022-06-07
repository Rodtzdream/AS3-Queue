#include "QUEUE.h"

QUEUE::QUEUE(int size)
{
	data = new int[size];
	SIZE = size;
	front = 0;
	rear = 0;
}

QUEUE::~QUEUE()
{
	delete[] data;
}

void QUEUE::MAKENULL()
{
	front = 0;
	rear = 0;
}

void QUEUE::ENQUEUE(int data)
{
	if (SIZE == rear)
		std::cout << "Черга повна!" << std::endl;
	else
	{
		for (int i = rear; i > front; i--)
		{
			this->data[i] = this->data[i - 1];
		}
		this->data[front] = data;
		rear++;
	}
}

void QUEUE::DEQUEUE()
{
	if (EMPTY())
		std::cout << "Черга порожня!";
	else
		rear--;
}

int QUEUE::FRONT()
{
	if (EMPTY())
		std::cout << "Черга порожня!";
	else
		return data[front];
}


bool QUEUE::EMPTY()
{
	if (rear == 0)
		return true;
	return false;
}

void QUEUE::PRINT()
{
	if (EMPTY())
		std::cout << "Черга порожня!" << std::endl;
	else
		for (int i = front; i < rear; i++)
		{
			std::cout << "[" << i + 1 << "] = " << data[i] << std::endl;
		}
}