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
        public:
        AscendingIterator();
        AscendingIterator(const MagicalContainer& other);
        ~AscendingIterator();
        AscendingIterator& operator=(const AscendingIterator& other);
        bool operator==(const AscendingIterator& other);
        bool operator!=(const AscendingIterator& other);
        bool operator<(const AscendingIterator& other);
        bool operator>(const AscendingIterator& other);
        string operator*();
        bool operator++();
        AscendingIterator& begin();
        AscendingIterator& end();
    };
    class PrimeIterator{
        public:
        PrimeIterator();
        PrimeIterator(const MagicalContainer& other);
        ~PrimeIterator();
        PrimeIterator& operator=(const PrimeIterator& other);
        bool operator==(const PrimeIterator& other);
        bool operator!=(const PrimeIterator& other);
        bool operator<(const PrimeIterator& other);
        bool operator>(const PrimeIterator& other);
        string operator*();
        bool operator++();
        PrimeIterator& begin();
        PrimeIterator& end();
    };
    class SideCrossIterator{
        public:
        SideCrossIterator();
        SideCrossIterator(const MagicalContainer& other);
        ~SideCrossIterator();
        SideCrossIterator& operator=(const SideCrossIterator& other);
        bool operator==(const SideCrossIterator& other);
        bool operator!=(const SideCrossIterator& other);
        bool operator<(const SideCrossIterator& other);
        bool operator>(const SideCrossIterator& other);
        string operator*();
        bool operator++();
        SideCrossIterator& begin();
        SideCrossIterator& end();
    };
};
#endif