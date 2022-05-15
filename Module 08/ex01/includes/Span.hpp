#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <numeric>
# include <limits.h>

class Span {
public:
	Span(unsigned int n);
	Span(const Span& orig);
	Span &operator=(const Span& orig);
	virtual ~Span();

	unsigned int getDataSize();

	void addNumber(int num);
	void addMultipleNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e);
	int shortestSpan(void);
	int longestSpan(void);
private:
	Span();
	unsigned int		size;
	std::vector<int>	data;
};

#endif