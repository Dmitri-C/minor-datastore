#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include <stdlib.h>
#include <string>

class Config_reader {
    private:

    public:
        Config_reader();

        int get_mode();
        std::string get_string(std::string filename);
        Json::Value get_json(std::string filename);
        

};