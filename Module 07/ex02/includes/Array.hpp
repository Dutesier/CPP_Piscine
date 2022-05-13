#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array {
public:
    Array():
        data(new T[0]),
        len(0)
    {}

    Array(unsigned int n):
        data(new T[n]),
        len(n)
    {
        for (unsigned int i = 0; i < n; i++) {
            data[i] = 0;
        }
    }

    Array(const Array& orig) {
        len = orig.len;
        data = new T[len];
        for (unsigned int i = 0; i < len; i++) {
            data[i] = orig.data[i];
        }
    }

    Array& operator= (const Array& orig) {
        delete[] data; // The one we allocated on construction
        len = orig.len;
        data = new T[len];
        for (unsigned int i = 0; i < len; i++) {
            data[i] = orig.data[i];
        }
        return (*this);
    }

    ~Array(){
        delete[] data;
    }

    T& operator[](int i) const throw(std::exception) {
        if (i < 0 || i >= static_cast<int>(len)) {
            throw OutOfBounds();
        }
        return data[i];
    }

    unsigned int size()const {
        return len;
    }

    class OutOfBounds : public std::exception {
	public:
		const char* what(void) const throw () {
            return ("Index out of range");
        }
	};

private:
    T* data;
    unsigned int len;
};

#endif