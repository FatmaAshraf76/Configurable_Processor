#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Abstract Base Class
class Processor 
{
public:
    // Pure virtual function 
    virtual void process(const vector<string>& data) = 0; 
     // Virtual destructor
    virtual ~Processor() {}
};

// drived Classes
class TextProcessor :public Processor{
public:
    //constructor 
    TextProcessor();

    // override virtual function 
    void process(const vector<string>& data) override;

    // destructor
    ~TextProcessor();
};


class NumericProcessor :public Processor{
public:
    //constructor 
    NumericProcessor();

    // override virtual function 
    void process(const vector<string>& data) override; 


    // destructor
    ~NumericProcessor();
};
class ImageProcessor :public Processor{
public:
    //constructor
    ImageProcessor();

    // override virtual function 
    void process(const vector<string>& data) override; 

    // destructor
    ~ImageProcessor();
};
class AudioProcessor :public Processor{
public:
    //constructor
    AudioProcessor();

    // override virtual function 
    void process(const vector<string>& data) override; 

    // destructor
    ~AudioProcessor();
};

#endif