#include "./Headers/Page.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>

// constructores

// cosntructor vacio
Page::Page() : values() {}


// consrtructor de paginas con elementos
Page::Page(std::vector<long long> values) : values(values) {}

// Metodos

// insertar un elemento dentro de la pagina
void Page::insert(long long value) {
    if (values.size() > max_size) {
        // crear una nueva pagina deberia ser responsabilidad de HashTable
        return;
    }
    values.push_back(value);
}

long long Page::pop() {
    long long lastElement = values.back();
    values.pop_back();
    return lastElement;
}
