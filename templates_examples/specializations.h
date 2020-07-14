#ifndef SPECIALIZATIONS_H
#define SPECIALIZATIONS_H

#include <iostream>

template <typename T1, typename T2>
class holder
{
public:
    holder(const T1& v1, const T2& v2) :
        _v1(v1), _v2(v2)
    {}

    const T1& get_v1() const {
        return _v1;
    }

    const T2& get_v2() const {
        return _v2;
    }

    void print_self() {
        std::cout << "common template" << std::endl;
    }

private:
    T1 _v1;
    T2 _v2;
};

// full specialization for ints
template <>
class holder<int, int>
{
public:
    holder(int v1, int v2) :
        _v1(v1), _v2(v2)
    {}

    int get_v1() const {
        return _v1;
    }

    int get_v2() const {
        return _v2;
    }

    void print_self() {
        std::cout << "full specialization for ints" << std::endl;
    }
private:
    int _v1;
    int _v2;
};

// partial specialization for pointers
template <typename T1, typename T2>
class holder<T1*, T2*>
{
public:
    holder(T1* v1, T2* v2) :
        _v1(v1), _v2(v2)
    {}

    T1* get_v1() const {
        return _v1;
    }

    T2* get_v2() const {
        return _v2;
    }

    void print_self() {
        std::cout << "partial specialization for pointers" << std::endl;
    }
private:
    T1* _v1;
    T2* _v2;
};

// partial specialization for one int
template <typename T1>
class holder<T1, int>
{
public:
    holder(const T1& v1, int v2) :
        _v1(v1), _v2(v2)
    {}

    const T1& get_v1() const {
        return _v1;
    }

    int get_v2() const {
        return _v2;
    }

    void print_self() {
        std::cout << "partial specialization for one int" << std::endl;
    }
private:
    T1 _v1;
    int _v2;
};

#endif // SPECIALIZATIONS_H
