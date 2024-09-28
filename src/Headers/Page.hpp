#ifndef PAGE_HPP
#define PAGE_HPP
#include <vector>

class Page {
public:
    // fields
    std::vector<long long> values;
    static const int max_size = 128;
    // constructor
    Page();
    Page(std::vector<long long> values) ;

    //methods
    void insert(long long value);
    long long pop();

};


#endif