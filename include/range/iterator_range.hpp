#ifndef ITERATOR_RANGE_HPP
#define ITERATOR_RANGE_HPP

namespace range
{
    template<typename Iterator>
    class iterator_range
    {
    public:
        iterator_range(Iterator begin, Iterator end)
            : begin_{begin}, end_{end}
        {
        }

        Iterator begin() const
        {
            return begin_;
        }

        Iterator end() const
        {
            return end_;
        }

    private:
        Iterator begin_;
        Iterator end_;
    };
}

#endif
