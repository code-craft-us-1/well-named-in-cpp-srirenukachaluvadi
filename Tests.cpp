#include <iostream>
#include <assert.h>
#include "ColorPair.h"
#include "PrintColorPair.h"


namespace TelCoColorCoder
{
    void testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
    std::string getColorCodeString()
    {
        std::string s = "";
        for (int i = 1; i <= 25; i++) {
            TelCoColorCoder::ColorPair cp = TelCoColorCoder::GetColorFromPairNumber(1);
            s += "\t" + std::to_string(i) + "\t" + cp.ToString() + "\n";
        }
        return s;
    }
    void testPrint()
    {
        PrintColorPair s;
        std::string str=s.populateManual();
        assert(str == getColorCodeString());
    }   
}


int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    TelCoColorCoder::testPrint();
    return 0;
}