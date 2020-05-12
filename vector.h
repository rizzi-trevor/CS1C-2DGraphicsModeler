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
        //! Constructs Vector
        vector() : size_v{0}, elem{nullptr}, space{0} {}

        //! Constructs Vector with params
        explicit vector(int s) : size_v{s}, elem{new T[s]}, space{s}
        {
            for (int i = 0; i< size_v; ++i)
                elem[i] = 0;
        }

        //! Constructs a vector as a copy of an existing vector
        vector(const vector &src) : size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space}
        {
            copy(src.elem, src.elem + size_v, elem);
        }

        //! Overloaded assignment operator to assign an existing vector's values to another vector
        vector &operator=(const vector &src)
        {
            T *p = new T[src.size_v];
            copy(src.elem, src.elem + size_v, elem);
            delete[] elem;
            elem = p;
            size_v = src.size_v;
            return *this;
        }

        //! Deconstructs Vector
        ~vector()
        {
            delete[] elem;
        }

        //! Gets an element from a specific spot in a vector
        T &operator[](int n)
        {
            return elem[n];
        }

    //cannot overload function with just a different return value!!!!
    /*const T &operator[](int n) {
        return elem[n];
    }*/
    
        //! Gets vector size
        int size() const
        {
            return size_v;
        }

        //! Gets vector capacity (how many elements a vector has)
        int capacity() const {
            return space;
        }

        //! Resizes the vector
        void resize(int newsize) {
            reserve(newsize);
            for(int i = size_v; i< newsize; ++i)
                elem[i] =0;
            size_v = newsize;
        }

        //! Adds a new element to the end of the vector
        void push_back(T d)
        {
            if(space == 0)
                reserve(8);
            else if(size_v == space)
                reserve(2 * space);

            elem[size_v] = d;
            ++size_v;
        }

        //! Reserves more space to the vector
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

        //! Gets front element of vector
        iterator begin()
        {
            if (size_v ==0)
                return nullptr;
            return &elem[0];
        }

        //! Gets front element of vector
        const_iterator begin() const
        {
            if (size_v == 0)
                return nullptr;
            return &elem[size_v];
        }

        //! Gets the last element of the vector
        iterator end()
        {
            if (size_v == 0)
                return nullptr;
            return &elem[size_v];
        }

        //! Gets the last element of the vector
        const_iterator end() const
        {
            if (size_v ==0)
                return nullptr;
            return &elem[size_v];
        }

        //! Inserts an element into the vector
        iterator insert(iterator p, const T &val)
        {
            int index = p - begin();
            if (size() == capacity())
                reserve(size()==0 ? 8 : 2*size());
            ++size_v;
            iterator pp = begin() + index;
        }

        //! Erases an element from the vector
        iterator erase(iterator p)
        {
            iterator returnIt = p;
            for(; p < end(); ++p)
            {
                * p = *(p + 1);

            }
            --size_v;
            return returnIt;
        }
    };
}



#endif // VECTOR_H
