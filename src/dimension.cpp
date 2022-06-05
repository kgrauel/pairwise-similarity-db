#include "dimension.hpp"

Dimension::Dimension(
    const std::string &abbreviation, 
    const std::string &fullName, 
    const std::string &description
) 
    : abbreviation(abbreviation), fullName(fullName), description(description)
{

}

const std::string & Dimension::getAbbreviation() const {
    return abbreviation;
}

const std::string & Dimension::getFullName() const {
    return fullName;
}

const std::string & Dimension::getDescription() const {
    return description;
}

const std::vector<Dimension> DIMENSIONS = {
    Dimension("O", "Openness", ""), 
    Dimension("C", "Conscientiousness", ""),
    Dimension("E", "Extroversion", ""),
    Dimension("A", "Agreeableness", ""),
    Dimension("N", "Neuroticism", "")
};