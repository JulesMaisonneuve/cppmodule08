#include "Span.hpp"

int main(void)
{
	Span test(8);
	test.addNumber(85);
	test.addNumber(84);
	test.addNumber(-121);
	test.addNumber(15);
	test.addNumber(-5);
	test.addNumber(24);
	test.addNumber(2);
	// test.addNumber(17);
	// test.addNumber(12);
	std::cout << "shortest span: " << test.shortestSpan() << std::endl;
	return (0);
}
