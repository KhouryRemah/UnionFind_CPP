#include <iostream>
#include "UnionFind.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void testUnionFind() {
    UnionFind<double> uf(5);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(-1, 4);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(1, 5);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(0, 4);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(3, 2);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(2, 1);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(4, 1);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;
    uf.Union(4, 1);
    std::cout << uf.Find(0) << " ";
    std::cout << uf.Find(1) << " ";
    std::cout << uf.Find(2) << " ";
    std::cout << uf.Find(3) << " ";
    std::cout << uf.Find(4) << " ";
    std::cout << uf.Find(5) << " ";
    std::cout << uf.Find(-1) << std::endl;

}

int main(int argc, const char** argv) {
    testUnionFind();
    return 0;
}
