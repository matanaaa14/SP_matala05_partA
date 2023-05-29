#ifndef MAGICALCONTAINER
#define MAGICALCONTAINER
#include <iostream>
#include <vector>
using namespace std;

namespace ariel{}
class MagicalContainer{
    public:
    vector<int> myVector;
    void addElement(int element);
    int size();
    void removeElement(int element);
    MagicalContainer();
    class AscendingIterator{
        AscendingIterator();
        AscendingIterator(const MagicalContainer& other);
        ~AscendingIterator();
        AscendingIterator& operator=(const AscendingIterator& other);
        bool operator==(const AscendingIterator& other);
        bool operator!=(const AscendingIterator& other);

    };
};
#endif