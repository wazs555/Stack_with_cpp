#include <stdio.h>

typedef struct Stack {
	int data[100];
	int len = 0;
	int capacity = 0;

	void create(int y)
	{
		capacity = y;

	}

	void push(int y)
	{
		if (len >= capacity)
		{
			printf("Stack overflow!\n");
		}
		else {
			data[len++] = y;
		}

	}
	void pop()
	{
		if (len <= 0)
		{
			printf("Stack underflow!\n");
		}
		else
		{
			data[len - 1] = 0;
			len--;
		}
	}
	int top()
	{
		return data[len - 1];
	}

	int size()
	{
		return len;
	}
}S;
int main()
{
	S s1;
	s1.create(5);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	printf("%d\n", s1.size());
	printf("%d\n", s1.top());
	s1.pop();
	printf("%d\n", s1.size());
	printf("%d\n", s1.top());

	return 0;
}