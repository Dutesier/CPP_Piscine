#include "bsp.hpp"

int main(void) {	
	const Point a(0, 0);
	const Point b(0, 1);
	const Point c(1, 0);
	const Point d(0, 0.5f);
	const Point e(0.5f, 0.5f);
	const Point f(0.1f, 0.2f);
	const Point g(-0.1f, 0.2f);
	const Point h(0.1f, -0.2f);
	const Point i(-0.1f, -0.2f);
	const Point j(0.1f, 0.23f);


	std::cout << "a: x(" << a.getX() << ") y(" << a.getY() << ")" << std::endl;
	std::cout << "b: x(" << b.getX() << ") y(" << b.getY() << ")" << std::endl;
	std::cout << "c: x(" << c.getX() << ") y(" << c.getY() << ")" << std::endl;
	std::cout << "d: x(" << d.getX() << ") y(" << d.getY() << ")" << std::endl;
	std::cout << "e: x(" << e.getX() << ") y(" << e.getY() << ")" << std::endl;
	std::cout << "f: x(" << f.getX() << ") y(" << f.getY() << ")" << std::endl;
	std::cout << "g: x(" << g.getX() << ") y(" << g.getY() << ")" << std::endl;
	std::cout << "h: x(" << h.getX() << ") y(" << h.getY() << ")" << std::endl;
	std::cout << "i: x(" << i.getX() << ") y(" << i.getY() << ")" << std::endl;
	std::cout << "j: x(" << j.getX() << ") y(" << j.getY() << ")" << std::endl;

	std::cout << "Is d inside abc: " << (bsp(a, b, c, d) == 1 ? "True": "False") << std::endl;
	std::cout << "Is e inside abc: " << (bsp(a, b, c, e) == 1 ? "True": "False") << std::endl;
	std::cout << "Is f inside abc: " << (bsp(a, b, c, f) == 1 ? "True": "False") << std::endl;
	std::cout << "Is g inside abc: " << (bsp(a, b, c, g) == 1 ? "True": "False") << std::endl;
	std::cout << "Is h inside abc: " << (bsp(a, b, c, h) == 1 ? "True": "False") << std::endl;
	std::cout << "Is i inside abc: " << (bsp(a, b, c, i) == 1 ? "True": "False") << std::endl;
	std::cout << "Is j inside abc: " << (bsp(a, b, c, j) == 1 ? "True": "False") << std::endl;

	return 0;
}