#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept> 
# include <algorithm>

template <typename T>
void easyfind(T &c, const int &nb)
{
    typename T::iterator it = std::find(c.begin(), c.end(), nb);
    if (it == c.end())
        throw std::exception();
    else
        std::cout << *it << std::endl;
}

#endif
