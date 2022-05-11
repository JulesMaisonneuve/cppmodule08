#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <set>
# include <algorithm>

class Span
{
	private:
		std::list<int> intList;
		unsigned int tab_size;
	public:
		Span(void);
		Span(unsigned int N);
		Span &operator=(const Span &other);
		Span(const Span &other);
		void addNumber(int nb);
		int shortestSpan(void);
		~Span(void);
};

#endif
