#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP
#include <map>
#include <string>
using namespace std;

class Configuration
{
    private:
           map<string,string> options;
    public:
           //constructor
           Configuration(const string& filename);

           //getters
           string getOption(const string& key) const;

           //distructor
           ~Configuration();
};
#endif
