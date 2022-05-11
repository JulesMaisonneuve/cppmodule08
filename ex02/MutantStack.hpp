#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack()
		{
			return ;
		};
		MutantStack<T> (const MutantStack<T> &other)
		{
			*this = other;
		};
		MutantStack<T> &operator=(const MutantStack<T> &other)
		{
			if (*this == other)
				return (*this);
			std::stack<T>::operator=(other);
			return (*this);
		};
		~MutantStack(void)
		{

		};

};

#endif
