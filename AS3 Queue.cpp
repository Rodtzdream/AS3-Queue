#include "QUEUE.h"
#include <ctime>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int SIZE = rand() % 5 + 5;
	QUEUE S(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		S.ENQUEUE(rand() % 50);
	}

	std::cout << "Вміст черги:" << std::endl;
	S.PRINT();

	S.DEQUEUE();

	std::cout << std::endl << "Вміст черги (DEQUEUE):" << std::endl;
	S.PRINT();

	std::cout << std::endl << "Перший елемент (FRONT): " << S.FRONT() << std::endl;

	std::cout << "ЧЕРГА: ";
	if (S.EMPTY())
		std::cout << "порожня!" << std::endl;
	else
		std::cout << "не порожня.." << std::endl;

	std::cout << std::endl << "Очищення черги! (MAKENULL)" << std::endl;
	S.MAKENULL();

	std::cout << "ЧЕРГА: ";
	if (S.EMPTY())
		std::cout << "порожня!" << std::endl;
	else
		std::cout << "не порожня.." << std::endl;
}