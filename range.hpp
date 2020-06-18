
namespace itertools
{
    class range
    {
    private:
        int _begin;
        int _end;

    public:
        //Constructor
        range(int a, int b) : _begin(a), _end(b) {}

        //public iterator
        class iterator
        {
            int thisObj;

        public:
            iterator(int value = 0) : thisObj(value) {}

            //Increment
            iterator &operator++()
            {
                thisObj += 1;
                return *this;
            }
            const iterator operator++(int)
            {
                iterator temp = *this;
                thisObj += 1;
                return temp;
            }
            //Decrement
            iterator &operator--()
            {
                thisObj -= 1;
                return *this;
            }
            const iterator operator--(int)
            {
                iterator temp = *this;
                thisObj -= 1;
                return temp;
            }
            bool operator==(const iterator &it) const
            {
                return thisObj == it.thisObj;
            }

            bool operator!=(const iterator &it) const
            {
                return thisObj != it.thisObj;
            }

            int operator*()
            {
                return thisObj;
            }
        };
        iterator begin()
        {
            return iterator(_begin);
        }
        iterator end()
        {
            return iterator(_end);
        }
    };
} // namespace itertools
