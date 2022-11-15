#include "../inc/Span.hpp"

Span::Span() : _content(), _size(0) {} 

Span::Span(unsigned size_content) : _content(), _size(size_content) {}

Span::Span(const Span &other): _size(other.size()) {
    for (unsigned i = 0; i < _size; i++) {
        _content.push_back(other[i]);
    }
}

Span::~Span() {}

Span &Span::operator=(const Span &other) {
    _content.erase(_content.begin(), _content.end());
    _size = other.size();
    for (unsigned i = 0; i < other.size(); i++) {
        _content.push_back(other[i]);
    }
    return *this;
}

int Span::operator[](unsigned int pos) const {
    if (pos >= _size) {
        throw Span::OutOfBound();
    }
    return this->_content[pos];
}

unsigned Span::size() const { return _size; }

void Span::addNumber(int new_number) {
    if (_content.size() >= _size) {
        throw Span::SpanFull();
    }
    _content.push_back(new_number);
}

int Span::shortestSpan() {
    std::sort( _content.begin(), _content.end() );
    return ( _content[_size / 2 + 1] - _content[_size / 2] );
}

int Span::longestSpan() {
    std::sort( _content.begin(), _content.end() );
    return ( _content.back() - _content.front() );
}

const char* Span::OutOfBound::what() const throw() {
    return "position out of bound!";
}

const char* Span::SpanFull::what() const throw() {
    return "span is full!";
}

std::ostream &operator<<(std::ostream &out, const Span &val) {
    for (unsigned i = 0; i < val.size(); i++) {
        out << std::setw(2) << std::right << val[i] << ' ';
    }
    return out;
}
