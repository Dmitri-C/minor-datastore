#include "../include/test.hpp"

using namespace std;




int main(void)
{
    run_test_configreader();
    run_test_dataoutput();
    run_test_fileconn();
    run_test_dbconn();
}

//gcc main.cpp -L/usr/lib -lstdc++ -o program