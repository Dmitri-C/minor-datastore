#include "../include/configreader.hpp"



Config_reader::Config_reader(){};

int Config_reader::get_mode() {
    return 0;
}

//src https://www.delftstack.com/howto/cpp/read-file-into-string-cpp/#use-istreambuf-iterator-to-read-file-into-string-in-c
std::string Config_reader::get_string(std::string filename) {
    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        exit(EXIT_FAILURE);
    }
    return std::string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}

Json::Value Config_reader::get_json(std::string filename) {
    Json::Reader jreader;
    Json::Value jinput;
    std::string filecontent = this->get_string(filename);
    jreader.parse(filecontent, jinput);
    return jinput["var1"];
}