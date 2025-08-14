#include "ColorManual.h"
#include "ColorMapping.h"
#include <ostream>
#include <sstream>

namespace TelCoColorCoder {

std::string FormatReferenceManual() {
    std::ostringstream out;
    out << "25-Pair Color Code Reference\n";
    out << "Pair Number\tColor Pair\n";
    for (int pairNum = 1; pairNum <= 25; ++pairNum) {
        ColorPair pair = GetColorFromPairNumber(pairNum);
        out << pairNum << "\t\t" << pair.ToString() << "\n";
    }
    return out.str();
}

void PrintReferenceManual(std::ostream& os) {
    os << FormatReferenceManual();
}

}  
