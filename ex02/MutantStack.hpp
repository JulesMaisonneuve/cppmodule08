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

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() {return std::stack<T>::c.begin();};
		iterator end() {return std::stack<T>::c.end();};
		const_iterator cbegin() const {return std::stack<T>::c.cbegin();};
		const_iterator cend() const {return std::stack<T>::c.cend();};
		reverse_iterator rbegin() {return std::stack<T>::c.rbegin();};
		reverse_iterator rend() {return std::stack<T>::c.rend();};
		const_reverse_iterator crbegin() const {return std::stack<T>::c.crbegin();};
		const_reverse_iterator crend() const {return std::stack<T>::c.crend();};
};

#endif
