#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP
#include "./Headers/Page.hpp"

class HashTable {
public:
    // fields
    long long size;
    std::vector<std::vector<Page*>> table;
    //          implementacion alternativa               //
    // std::vector<std::vector<Page*>> lista_de_rebalse; //
    // std::vector<Page*> table;                         //
    int max_depth;
    // methods
    void insertElement(long long value, long long h);
    HashTable(long long size);
};


#endif