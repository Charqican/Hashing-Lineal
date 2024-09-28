#include "./Headers/HashTable.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>

// constructores
HashTable::HashTable(long long size) : size(size), table(size), max_depth(0) {}

// metodos

void HashTable::insertElement(long long value, long long h) {
    std::vector<Page*> pages = table[h];

    //if (pages[pages.size()].size() < Pages::max_size)
    //pages->insert()
}