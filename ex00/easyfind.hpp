#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
T easyfind(T a, int nb)
{
    typename T::iterator it;
    typename T::iterator ite = a.begin();
    for (; it != ite; it++)
    {
        if (*it == nb)
            return (*it);
    }
    return (NULL);
}

#endif