// #include "Vector.h"  //it will go in infinite loop
class Vector{
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem;
        int sz;
};
