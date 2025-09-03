#define LIPSUM_IMPLEMENTATION //not necessary for static library builds
#include "lipsum.hpp"

int main()
{
    //generate a sentence with 4-12 words (default)
    std::cout << lipsum::GenerateSentence() << '\n';
    //generate a sentence with 8-20 words
    std::cout << lipsum::GenerateSentence(8, 20) << '\n';
    return 0;
}
