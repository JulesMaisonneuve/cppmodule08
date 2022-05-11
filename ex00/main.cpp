#include "easyfind.hpp"
#include <list>

// void list_display(std::list <int> list)
// {
// 	for ()
// 		std::cout << elem << " ";
// 	std::cout << "\n";
// }

int main(void)
{
	try
	{
		std::list<int> list1;
		list1.push_back(42);
		list1.push_back(5);
		list1.push_back(71);
		easyfind(list1, 5);
		easyfind(list1, 58);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return (0);
}
