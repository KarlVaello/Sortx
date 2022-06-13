#include "sortx.h"
namespace sortx {

	void swap(std::vector<int>* vct, size_t a, size_t b) {
	
		int aux = vct->at(b);
		vct->at(b) = vct->at(a);
		vct->at(a) = aux;

	}

	void buble(std::vector<int>* vct) {

		for (size_t i = 0; i < vct->size(); i++)
		{
			for (size_t j = 0; j < vct->size() - 1; j++)
			{
				if (vct->at(j) > vct->at(j + 1))
				{
					swap(vct, j, j + 1);
				}
			}
		}



	}

}