#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <functional>
#include <optional>
#include <cstdint>
#include <array>
#include <sstream>
#include <thread>

#include "dimension.hpp"

int main() {
    for (const auto &d: DIMENSIONS) {
        std::cout << d.getAbbreviation() << std::endl;
    }
    return 0;
}
