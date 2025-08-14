#ifndef TELCO_COLORMAPPING_H_
#define TELCO_COLORMAPPING_H_

#include <string>

namespace TelCoColorCoder {

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

class ColorPair {
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor);

   
    MajorColor getMajor() const;
    MinorColor getMinor() const;
    std::string ToString() const;
};


ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);

}  

#endif  
