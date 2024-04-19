#include "challenge.h" 
using namespace std;
#ifndef DISASTER_H
#define DISASTER_H
class disaster : public challenge{
    private:
        bool ans;
    public:
        bool quiz1();
        bool quiz2();
        void randomquiz();
        bool returnans();
};

#endif
