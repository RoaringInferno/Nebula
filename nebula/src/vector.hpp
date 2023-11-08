#ifndef vector_hpp
#define vector_hpp

/*
 * Stores vector class and operations.
 */
namespace vector
{
    template <unsigned char dimension> // Dimensions of vector. Limits 1 - 255 inc.

    /*
     * Vector class
     * Stores vector components as unsigned int.
     * Component limits 0-2e9 inc.
     */
    class Vector
    {
    public:
        unsigned int component[dimension]; // Vector component array.

        // Constructors
        /*
         * Constructs a Vector with provided component array.
         */
        Vector(unsigned int components[dimension])
        {
            for (unsigned char coord_num = 0; coord_num < dimension; ++coord_num)
            { // Dimension iterable. Unsigned char instead of size_t because of bound dimension limit (saves memory).
                component[coord_num] = components[coord_num];
            }
        };

        // Destructors
        /*
         * Destructs Vector
         */
        ~Vector(){};
    };
};

#endif