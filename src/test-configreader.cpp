#include "../include/test-configreader.hpp"
#include "../include/configreader.hpp"


int test_configreader::test1_create() {
    std::cout << "t1 test configreader" << std::endl;
    return 0;
}

int test_configreader::test2_return_string() {
    std::string succes = "succes";
    Config_reader* cread = new Config_reader();
    std::string output = cread->get_string("succes.txt");
    if (output == succes) {
        std::cout << "t2 string succes" << std::endl;
        return 0;
    }
    std::cout << "t2 string fail" << std::endl;
    return 1;
}

int test_configreader::test3_read_from_file() {
    std::string succes = "reading_succes";
    std::string filename = "read_test.txt";
    std::ofstream ostream;
    ostream.open(filename);
    ostream << succes;
    ostream.close();
    Config_reader* cread = new Config_reader();
    std::string output = cread->get_string(filename);
    if (output == succes) {
        std::cout << "t3 read succes" << std::endl;
        return 0;
    }
    std::cout << "t3 read fail" << std::endl;
    return 1;
}

int test_configreader::test4_read_json() {
    std::string succes = "succes";
    std::string filename = "succes.json";

    Config_reader* cread = new Config_reader();
    Json::Value output = cread->get_json(filename);

    if (output == succes) {
        std::cout << "t4 read succes" << std::endl;
        return 0;
    }
    
    std::cout << "t4 read fail" << std::endl;
    return 1;
}

int run_test_configreader() {
    test_configreader test;
    std::cout << "running configreader test" << std::endl;
    test.test1_create();
    test.test2_return_string();
    test.test3_read_from_file();
    test.test4_read_json();
    return 0;
}