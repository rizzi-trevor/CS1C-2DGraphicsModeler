#ifndef VECTOR_H
#define VECTOR_H

using namespace std;
#include <algorithm>
#include "QDebug"

namespace myVec{
    template<class T>
    class vector
    {
        int size_v;
        T *elem;
        int space;
    public:
        vector() : size_v{0}, elem{nullptr}, space{0} {}

        explicit vector(int s) : size_v{s}, elem{new T[s]}, space{s}
        {
            for (int i = 0; i< size_v; ++i)
                elem[i] = 0;
        }

        vector(const vector &src) : size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space}
        {
            copy(src.elem, src.elem + size_v, elem);
        }

        vector &operator=(const vector &src)
        {
            T *p = new T[src.size_v];
            copy(src.elem, src.elem + size_v, elem);
            delete[] elem;
            elem = p;
            size_v = src.size_v;
            return *this;
        }

        ~vector()
        {
            delete[] elem;
        }

        T &operator[](int n)
        {
            return elem[n];
        }

    //cannot overload function with just a different return value!!!!
    /*const T &operator[](int n) {
        return elem[n];
    }*/

        int size() const
        {
            return size_v;
        }

        int capacity() const {
            return space;
        }

        void resize(int newsize) {
            reserve(newsize);
            for(int i = size_v; i< newsize; ++i)
                elem[i] =0;
            size_v = newsize;
        }

        void push_back(T d)
        {
            if(space == 0)
                reserve(8);
            else if(size_v == space)
                reserve(2 * space);

            elem[size_v] = d;
            ++size_v;
        }

        void reserve(int newalloc)
        {
            if ( newalloc <= space) return;
            T* p = new T[newalloc];
            for ( int i = 0; i < size_v; ++i)
                p[i] = elem[i];
            delete[] elem;
            elem = p;
            space = newalloc;
        }

        using iterator = T*;
        using const_iterator = const T*;

        iterator begin()
        {
            if (size_v ==0)
                return nullptr;
            return &elem[0];
        }

        const_iterator begin() const
        {
            if (size_v == 0)
                return nullptr;
            return &elem[size_v];
        }

        iterator end()
        {
            if (size_v == 0)
                return nullptr;
            return &elem[size_v];
        }

        const_iterator end() const
        {
            if (size_v ==0)
                return nullptr;
            return &elem[size_v];
        }

        iterator insert(iterator p, const T &val)
        {
            int index = p - begin();
            if (size() == capacity())
                reserve(size()==0 ? 8 : 2*size());
            ++size_v;
            iterator pp = begin() + index;
        }
    };
}



#endif // VECTOR_H
