#include "colorcoder.hpp"
#include <string>

namespace TelCoColorCoder {


constexpr int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
constexpr int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

ColorPair::ColorPair(MajorColor major, MinorColor minor)
    : majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() const { return majorColor; }
MinorColor ColorPair::getMinor() const { return minorColor; }

std::string ColorPair::ToString() const {
    return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBased = pairNumber - 1;
    MajorColor major = static_cast<MajorColor>(zeroBased / numberOfMinorColors);
    MinorColor minor = static_cast<MinorColor>(zeroBased % numberOfMinorColors);
    return ColorPair(major, minor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}

}  
