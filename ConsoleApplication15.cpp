#include <iostream>

int STACK(int* stack, int count)
{

	std::cout << "---- STACK ----" << std::endl;

	for (int i{ (count - 1) }; i >= 0; i--)
	{
		std::cout << stack[i] << std::endl;
	}

	int q{};
	std::cout << "push = 1, pop = 2 : ";
	std::cin >> q;

	if (q == 1)
	{
		int value{};
		std::cout << "value : ";
		std::cin >> value;

		stack[count] = value;
		count++;
	}
	else if (q == 2)
	{
		if (count > 0)
		{
			count--;
			std::cout << "pop : " << stack[count] << std::endl;
			stack[count] = {};
		}
		else
		{
			std::cout << "stack에 들어있는 원소가 없습니다" << std::endl;
		}
	}

	return count;
}

int QUEUE(int* stack, int count) 
{
	std::cout << "---- QUEUE ----" << std::endl;
	for (int i{}; i < count; i++)
	{
		std::cout << stack[i] << " ";
	}
	std::cout << std::endl;

	int q{};
	std::cout << "enqueue = 1, dequeue = 2 : ";
	std::cin >> q;
	if (q == 1) 
	{
		int value{};
		std::cout << "value : ";
		std::cin >> value;

		stack[count] = value;
		count++;
	}
	else if (q == 2) 
	{
		if (count > 0) 
		{
			count--;
			std::cout << "dequeue : " << stack[0] << std::endl;
			for (int i{}; i < count; i++)
			{
				stack[i] = stack[i + 1];
			}
		}
		else 
		{
			std::cout << "QUEUE에 들어있는 원소가 없습니다" << std::endl;
		}
	}

	return count;
}

int main()
{
	int stack[10]{};
	int count{};
	int Q{};
	std::cout << "STACK = 1, QUEUE = 2 : ";
	std::cin >> Q;
	while (Q == 1 || Q == 2) 
	{
		if (Q == 1) 
		{
			count = STACK(stack, count);
		}
		else if (Q == 2) 
		{
			count = QUEUE(stack, count);
		}
		std::cout << std::endl;
	}
}