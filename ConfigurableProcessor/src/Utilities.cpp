#include "Utilities.hpp"
using namespace std;

string trimSpaces(string s) //to trim the spaces
{    
    while (!s.empty() && s[0] == ' ') 
    {
        s.erase(0, 1);
    }
    while (!s.empty() && s[s.size() - 1] == ' ') 
    {
        s.pop_back();
    }
    return s;
}
