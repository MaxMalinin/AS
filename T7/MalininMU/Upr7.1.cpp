#include <iostream>
#include <queue>
#include "stdafx.h"

int main() {
	std::queue <int> q;
	std::queue <int> a, b;
	for (int i = 0; i < 10; i++) {
		q.push(rand());
	}
	for (int i = 0; i < 10; i++) {
		if (q.front() % 2)
			b.push(q.front());
		else
			a.push(q.front());
		q.pop();

	}
	std::cout << "First even element: " << a.front() << "Last even element: " << a.back()
		<< "First element: " << b.front() 
		<< "Last element: " << b.back();
	return 0;
}
