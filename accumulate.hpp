namespace itertools
{
    class accumulate
    {
    private:
        int _begin, _end;

    public:
        //Constructors
        template <class T>
        accumulate(T)
        {
        }
        template <class T1, typename T2>
        accumulate(T1, T2)
        {
        }

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
                iterator tmp = *this;
                thisObj += 1;
                return tmp;
            }
            //Decrement
            iterator &operator--()
            {
                thisObj -= 1;
                return *this;
            }
            const iterator operator--(int)
            {
                iterator tmp = *this;
                thisObj -= 1;
                return tmp;
            }
            bool operator==(const iterator &i) const
            {
                return thisObj == i.thisObj;
            }

            bool operator!=(const iterator &i) const
            {
                return thisObj != i.thisObj;
            }

            int operator*()
            {
                return thisObj;
            }
        };
        iterator begin()
        {
            return iterator(2);
        }
        iterator end()
        {
            return iterator(2);
        }
    };
} // namespace itertools