#ifndef INTEGRAL_RANGE_HPP
#define INTEGRAL_RANGE_HPP

#include "integral_iterator.hpp"


namespace range
{
    template<typename T>
    class integral_range
    {
    public:
        integral_range(T begin, T end)
            : begin_{begin}, end_{end}
        {
        }

        integral_iterator<T> begin() const
        {
            return integral_iterator<T>{begin_};
        }

        integral_iterator<T> end() const
        {
            return integral_iterator<T>{end_};
        }

    private:
        T begin_;
        T end_;
    };
}

#endif
