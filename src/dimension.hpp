#pragma once

#include <cstdint>
#include <string>
#include <vector>



class Dimension {
public:
    Dimension(
        const std::string &abbreviation, 
        const std::string &fullName, 
        const std::string &description
    );

    const std::string & getAbbreviation() const;
    const std::string & getFullName() const;
    const std::string & getDescription() const;

private:
    std::string abbreviation;
    std::string fullName;
    std::string description;
};

extern const std::vector<Dimension> DIMENSIONS;