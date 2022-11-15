#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <iomanip>
# include <vector>
# include <algorithm>

typedef unsigned long size_t;

class Span {
    private:
        std::vector<int> _content;
        unsigned _size;
    public:
        Span();
        Span(unsigned size_list);
        Span(const Span &other);
        ~Span();
        Span &operator=(const Span &other);
        int operator[](unsigned pos) const;
        unsigned size() const;
        unsigned last() const;
        void addNumber(int new_number);
        int shortestSpan();
        int longestSpan();
        
        class OutOfBound : public std::exception {
            const char *what() const throw();
        };
        class SpanFull : public std::exception {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Span &val);

#endif
