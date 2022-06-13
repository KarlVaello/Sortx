#include <iostream>
#include <vector>

#include "sortx.h"

void print_vector(std::vector<int>* vct) {

	for (auto &s : *vct)
	{
		std::cout << s << ",";
	}
	std::cout << std::endl;
}



int main() {

	std::vector<int> listToSort {10, 123, 0, -45, 78, 7890, 2, -142, 10, 642, 4, 807, 854, -917 };
	print_vector(&listToSort);
	
	sortx::buble(&listToSort);
	print_vector(&listToSort);


	return 0;
}


