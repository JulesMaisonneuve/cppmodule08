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
		template <typename T>
		void addNumbers(T begin, T end)
		{
			if (this->intList.size() + std::distance(begin, end) > this->tab_size)
				throw std::exception();
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		};
		void list_display();
		int shortestSpan(void);
		int longestSpan(void);
		~Span(void);
};

#endif
