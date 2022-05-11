#include "Span.hpp"


int main(void)
{
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Shortest & Longest Span*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Span test(6);
	test.addNumber(-5);
	test.addNumber(24);
	test.addNumber(2);
	test.addNumber(-42);
	test.addNumber(17);
	test.addNumber(12);
	test.list_display();
	std::cout << "shortest span: " << test.shortestSpan() << std::endl;
	std::cout << "longest span: " << test.longestSpan() << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Filling Span*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	srand(time(NULL));
	std::list<int> list;
	int rdm;
	for (int i = 0; i < 9; i++)
	{
		rdm = rand();
		list.push_back(rdm);
	}
	Span to_fill(9);
	to_fill.addNumbers(list.begin(), list.end());
	to_fill.list_display();
	return (0);
}
