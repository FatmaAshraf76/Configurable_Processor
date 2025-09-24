#include "Configuration.hpp"
#include "Utilities.hpp"  
#include <fstream>
#include <stdexcept>

using namespace std;

//Configuration
Configuration::Configuration(const string& filename) 
{
    ifstream inputfile(filename);
    if (!inputfile.is_open()) 
    {
        throw runtime_error("Error: could not open file: " + filename);
    }

    string line;
    while (getline(inputfile, line)) 
    {
        if (line.empty() || line[0] == '#')
            continue;

        auto index = line.find('=');
        if (index == -1)
            continue;

        string key = trimSpaces(line.substr(0, index));
        string value = trimSpaces(line.substr(index + 1));

        options[key] = value;
    }
    inputfile.close();
}


//getters
string Configuration::getOption(const string& key) const 
{
    auto it = options.find(key);
    if (it == options.end())
    {
        throw std::runtime_error("Option not found: " + key);
    }
    return it->second;
}

Configuration::~Configuration(){} //distructor