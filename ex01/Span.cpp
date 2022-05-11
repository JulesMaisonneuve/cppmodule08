#include "Span.hpp"

Span::Span(void) : tab_size(0)
{
	return ;
}

Span::Span(unsigned int N) : tab_size(N)
{
	return ;
}

Span& Span::operator=(const Span &other)
{
	this->tab_size = other.tab_size;
	this->intList = other.intList;
	return (*this);
}


Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span(void)
{
	return ;
}

void Span::addNumber(int nb)
{
	if (this->intList.size() >= this->tab_size)
		throw std::exception();
	this->intList.push_back(nb);
}

int Span::shortestSpan(void)
{
	std::list<int> tmp(this->intList);
	int actual_diff;
	int new_diff;

	if (this->intList.size() <= 1)
		throw std::exception();
	std::list<int>::iterator x;
	tmp.sort();
	x = tmp.begin();
	std::list<int>::iterator y = ++tmp.begin();
	actual_diff = *y - *x;
	while (y != tmp.end())
	{
		new_diff = *y - *x;
		if (new_diff < actual_diff)
			actual_diff = new_diff;
		x++;
		y++;
	}
	return (actual_diff);
}

int Span::longestSpan(void)
{
	int min;
	int max;

	if (this->intList.size() <= 1)
		throw std::exception();
	min = *std::min_element(this->intList.begin(), this->intList.end());
	max = *std::max_element(this->intList.begin(), this->intList.end());
	if (min == max)
		throw std::exception();
	return (max - min);
}

void Span::list_display()
{
	std::list<int>::iterator it = this->intList.begin();
	for (; it != this->intList.end(); it++)
		std::cout << *it << std::endl;
}
