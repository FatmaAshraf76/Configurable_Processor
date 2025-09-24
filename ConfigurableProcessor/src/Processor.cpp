#include <iostream>
#include "Processor.hpp"

using namespace std;

//TextProcessor
TextProcessor::TextProcessor() {} //constructor
void TextProcessor::process(const vector<string>& data)  // override virtual function 
{
    cout << "TextProcessor processing:\n";
    for (auto& d : data) 
    {
        cout << d << "(as text)\n";
    }
}
TextProcessor::~TextProcessor() {} // destructor

//NumericProcessor
NumericProcessor::NumericProcessor() {} //constructor
void NumericProcessor::process(const vector<string>& data)  // override virtual function 
{
    cout << "NumericProcessor processing:\n";
    for (auto& d : data) 
    {
        cout << d << "(as number)\n";
    }
}
NumericProcessor::~NumericProcessor() {} // destructor

//ImageProcessor
ImageProcessor::ImageProcessor() {} //constructor
void ImageProcessor::process(const vector<string>& data)  // override virtual function 
{
    cout << "ImageProcessor processing:\n";
    for (auto& d : data) 
    {
        cout << d << " (interpreted as image data)\n";
    }
}
ImageProcessor::~ImageProcessor() {} // destructor

//AudioProcessor
AudioProcessor::AudioProcessor() {} //constructor
void AudioProcessor::process(const vector<string>& data)  // override virtual function 
{
    cout << "AudioProcessor processing:\n";
    for (auto& d : data) 
    {
        cout << d << " (interpreted as audio data)\n";
    }
}
AudioProcessor::~AudioProcessor() {} // destructor