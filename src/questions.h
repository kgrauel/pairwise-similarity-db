#include <cstdint>
#include <vector>
#include <string>
#include <array>

constexpr size_t MAX_DIMENSIONS_PER_QUESTION = 4;
constexpr size_t MAX_QUESTIONS = 256;
constexpr size_t MAX_ANSWERS = 6;

// Models the fact that a Question has an effect on a Dimension.
// The `dimension_idx` identifies which Dimension we're talking about;
// `weight` indicates how much effect the answer to the question might
// have on that Dimension. 
struct DimensionEffect {
    DimensionEffect (
        uint32_t dimension_idx,
        float proportion,
        float weight = 1.0f// 0 to infinity, 1 default
    ) :
        dimension(dimension_idx),
        proportion(proportion),
        weight(weight)
    { }

    uint32_t dimension;
    float proportion;
    float weight;
};



class Question {
public:
    Question();

private:
    // effects[a][n] = the nth effect of the ath multiple-choice answer
    std::vector<std::vector<DimensionEffect>> effects; 
};