#include "PrintColorPair.h"

#include "ColorPair.h"
#include <iostream>
namespace TelCoColorCoder
{
    PrintColorPair:: PrintColorPair(){}
    void PrintColorPair:: printManual()
    {
        std::cout << "PairNumber" << " " << "Major" << " " << "Minor" << std::endl;
        for (int i = 1; i <= 25; i++) {
            TelCoColorCoder::ColorPair cp = TelCoColorCoder::GetColorFromPairNumber(1);
            std::cout << "\t" << i << "\t" << cp.ToString() << std::endl;
        }
    }
}