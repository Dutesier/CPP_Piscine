#ifndef AMATERIAARRAY_HPP
# define AMATERIAARRAY_HPP

# include "AMateria.hpp"

class AMateriaArray {
public:
	AMateriaArray();
	AMateriaArray(const AMateriaArray& orig);
	AMateriaArray &operator=(const AMateriaArray& orig);
	virtual ~AMateriaArray();

	int getSize(void);
	void addElement(AMateria *new_elem);
	void freeAll(void);
private:
	int size;
	void **array;
	
};

#endif