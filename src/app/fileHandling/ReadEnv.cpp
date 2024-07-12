#include <iostream>
#include <string>
#include <fstream>
#include "IO.hpp"
#include <sstream>
using namespace std;

class ReadEnv{
    public:
        string getEnv(){
            string env_path = ".env";
            IO io(env_path);
            fstream f_stream = io.getFileStream();
            stringstream buffer;
            buffer << f_stream.rdbuf();
            string content = buffer.str();
            return content;
        }
        
};