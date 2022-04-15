#include "bsp.hpp"

static Fixed get_triangle_double_area(const Point& a, const Point& b, const Point& c) {
    Fixed ret;

    ret = (
            a.getX() * (b.getY() - c.getY())
            +
            b.getX() * (c.getY() - a.getY())
            +
            c.getX() * (a.getY() - b.getY())
            );
    if (ret < 0)
        ret = ret * -1;
    return (ret);
} 

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed abc_area;
    Fixed abp_area;
    Fixed acp_area;
    Fixed bcp_area;

    abc_area = get_triangle_double_area(a, b, c);
    abp_area = get_triangle_double_area(a, b, point);
    acp_area = get_triangle_double_area(a, c, point);
    bcp_area = get_triangle_double_area(b, c, point);
    if (abc_area == 0 || abp_area == 0 || acp_area == 0 || bcp_area == 0) {
        return (0);
    }
    return (abc_area == abp_area + acp_area + bcp_area);
}
