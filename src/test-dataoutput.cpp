#include "../include/test-dataoutput.hpp"
#include "../include/dataoutput.hpp"


int test_dataoutput::test1_create() {
    Data_output* doutput = new Data_output();
    cout << "test1_create succes" << std::endl;
    return 0;
}

int test_dataoutput::test2_acces_send() {
    Data_output* doutput = new Data_output();

    if (doutput->send("tag", "data") == 1){
        cout << "test2_acces_send succes" << std::endl;
        return 0;
    };

    cout << "test2_acces_send fail" << std::endl;
    return 1;
}

int run_test_dataoutput(){
    std::cout << "running test dataoutput" << std::endl;
    test_dataoutput test;
    test.test1_create();
    test.test2_acces_send();
    return 0;
};

