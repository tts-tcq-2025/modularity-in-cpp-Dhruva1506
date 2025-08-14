#include <fstream>
#include <iostream>
#include "ColorManual.h"

void RunAllTests();

int main() {
  RunAllTests();
  std::cout << "\n";
  TelCoColorCoder::PrintReferenceManual(std::cout);

  // Optional: also write to a file for printing
  std::ofstream f("color_code_manual.txt");
  f << TelCoColorCoder::FormatReferenceManual();
  return 0;
}
