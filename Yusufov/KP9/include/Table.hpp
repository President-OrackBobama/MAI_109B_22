#ifndef TABLE_HPP
#define TABLE_HPP
#include "../../KP7/include/Vector.hpp"
#include "TableEntry.hpp"

class Table {
public:
    Vector<TableEntry> entries;
    void addEntry(int key);
    void quickSort(int low, int high);
    int searchByKey(int key) const;
    friend std::ostream& operator<<(std::ostream& os, const Table& table);

private:
    int partition(int low, int high);
};

#include "../src/Table.cpp"
#endif
