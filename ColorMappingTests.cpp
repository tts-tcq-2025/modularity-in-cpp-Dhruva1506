#include <cassert>
#include <iostream>
#include "colorcoder.hpp"

using namespace TelCoColorCoder;

static void testNumberToPair(int pairNumber,
                             MajorColor expectedMajor,
                             MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Pair Number " << pairNumber << ": " << colorPair.ToString() << "\n";
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

static void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Colors " << colorPairToString(major, minor) << " -> Pair Number " << pairNumber << "\n";
    assert(pairNumber == expectedPairNumber);
}

// Helper to print color pair from enums (added for cleaner output)
std::string colorPairToString(MajorColor major, MinorColor minor) {
    return std::string(MajorColorNames[major]) + " " + MinorColorNames[minor];
}

void RunAllTests() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    std::cout << "All tests passed successfully!\n";
}
