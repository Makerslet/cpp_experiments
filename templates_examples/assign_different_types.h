#ifndef ASSIGN_DIFFERENT_TYPES_H
#define ASSIGN_DIFFERENT_TYPES_H

#include <deque>

template <typename T>
class Stack
{
public:
    void push(const T& value) {
        _elems.push_back(value);
    }

    void pop() {
        _elems.pop_back();
    }

    const T& top() const {
        _elems.back();
    }

    template<typename T2>
    Stack& operator=(const Stack<T2>& arg);

    template<typename> friend class Stack;

private:
    std::deque<T> _elems;
};

template <typename T>
template <typename T2>
Stack<T>& Stack<T>::operator=(const Stack<T2>& arg) {
    _elems.clear();
    _elems.insert(_elems.begin(), arg._elems.begin(), arg._elems.end());
    return *this;
}

#endif // ASSIGN_DIFFERENT_TYPES_H
