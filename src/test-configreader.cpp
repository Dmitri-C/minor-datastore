#include "../include/test-configreader.hpp"


int test_configreader::test1_create() {
    std::cout << "test configreader" << std::endl;
    return 0;
}

int run_test_configreader() {
    test_configreader test;
    std::cout << "running configreader test" << std::endl;
    test.test1_create();
    return 0;
}