#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

int run_test_configreader();

struct test_configreader {
    int test1_create();
    int test2_return_string();
    int test3_read_from_file();
    int test4_read_json();
};