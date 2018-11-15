#ifndef RANGE_INTEGRAL_ITERATOR_HPP
#define RANGE_INTEGRAL_ITERATOR_HPP

#include <iterator>


namespace range
{
    template<typename T>
    class integral_iterator
    {
    public:
        using value_type = T;
        using reference = T const&;
        using pointer = void;
        using difference_type = T;
        using iterator_category = std::forward_iterator_tag;

        integral_iterator() = default;

        explicit integral_iterator(value_type value)
            : value_{value}
        {
        }

        reference operator*() const
        {
            return value_;
        }

        integral_iterator& operator++()
        {
            ++value_;
            return *this;
        }

        integral_iterator operator++(int)
        {
            auto copy = *this;
            ++*this;
            return copy;
        }

    private:
        value_type value_ = 0;
    };

    template<typename T>
    bool operator==(integral_iterator<T> const& ia, integral_iterator<T> const& ib)
    {
        return *ia == *ib;
    }

    template<typename T>
    bool operator!=(integral_iterator<T> const& ia, integral_iterator<T> const& ib)
    {
        return !(ia == ib);
    }
}

#endif
