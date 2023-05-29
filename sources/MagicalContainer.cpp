#include "MagicalContainer.hpp"
#include <iostream>

    MagicalContainer::MagicalContainer(){}
    void MagicalContainer::addElement(int element){}
    int MagicalContainer::size(){return 0;}
    void  MagicalContainer::removeElement(int element){}

    MagicalContainer::AscendingIterator::AscendingIterator(){}
    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer& other){}
    MagicalContainer::AscendingIterator::~AscendingIterator(){}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other){return *this;}
    bool MagicalContainer::AscendingIterator::operator==(const MagicalContainer::AscendingIterator& other) const{return false;}
    bool MagicalContainer::AscendingIterator::operator!=(const MagicalContainer::AscendingIterator& other) const{return false;}
    bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator& other){return false;}
    bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator& other){return false;}
    string MagicalContainer::AscendingIterator::operator*(){return "";}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){return *this;}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::begin(){return *this;}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::end(){return *this;}
    
    MagicalContainer::PrimeIterator::PrimeIterator(){}
    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer& other){}
    MagicalContainer::PrimeIterator::~PrimeIterator(){}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other){return *this;}
    bool MagicalContainer::PrimeIterator::operator==(const MagicalContainer::PrimeIterator& other) const{return false;}
    bool MagicalContainer::PrimeIterator::operator!=(const MagicalContainer::PrimeIterator& other) const{return false;}
    bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator& other){return false;}
    bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator& other){return false;}
    string MagicalContainer::PrimeIterator::operator*(){return "";}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++(){return *this;}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::begin(){return *this;}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::end(){return *this;}
    
    MagicalContainer::SideCrossIterator::SideCrossIterator(){}
    MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer& other){}
    MagicalContainer::SideCrossIterator::~SideCrossIterator(){}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other){return *this;}
    bool MagicalContainer::SideCrossIterator::operator==(const MagicalContainer::SideCrossIterator& other) const{return false;}
    bool MagicalContainer::SideCrossIterator::operator!=(const MagicalContainer::SideCrossIterator& other) const{return false;}
    bool MagicalContainer::SideCrossIterator::operator<(const MagicalContainer::SideCrossIterator& other){return false;}
    bool MagicalContainer::SideCrossIterator::operator>(const MagicalContainer::SideCrossIterator& other){return false;}
    string MagicalContainer::SideCrossIterator::operator*(){return "";}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++(){return *this;}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::begin(){return *this;}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::end(){return *this;}
    