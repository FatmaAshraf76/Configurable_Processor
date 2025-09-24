#include "Processor.hpp"
#include "ProcessorFactory.hpp"
using namespace std; 

Processor* ProcessorFactory::createProcessor(const string& type)
{
    if (type == "Text") 
    {
        return new TextProcessor();
    } 
    else if (type == "Numeric") 
    {
        return new NumericProcessor();
    } 
    else if (type == "Image") 
    {
        return new ImageProcessor();
    } 
    else if (type == "Audio") 
    {
        return new AudioProcessor();
    } 
    throw runtime_error("Unknown processor type: " + type);
}

