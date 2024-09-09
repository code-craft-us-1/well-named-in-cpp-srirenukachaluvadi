#include "PrintColorPair.h"

#include "ColorPair.h"
#include <iostream>
namespace TelCoColorCoder
{
    PrintColorPair:: PrintColorPair(){}
    std::string header = "PairNumber Major Minor";
    void PrintColorPair:: printManual()
    {
        std::cout << header<< std::endl;
        std::cout << populateManual();
        
    }

    std::string PrintColorPair::populateManual()
    {
        std::string s = "";
        for (int i = 1; i <= 25; i++) {
            TelCoColorCoder::ColorPair cp = TelCoColorCoder::GetColorFromPairNumber(1);
            s += "\t" + std::to_string(i) + "\t" + cp.ToString() + "\n";
        }
        return s;
    }
}