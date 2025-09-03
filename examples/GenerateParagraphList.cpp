#define LIPSUM_IMPLEMENTATION //not necessary for static library builds
#include "lipsum.hpp"
int main()
{
    //generate 5 paragraphs of 5-8 sentences and 4-12 words per sentence
    std::cout << lipsum::GenerateParagraphList();
    //generate 100 paragraphs of 7-10 sentences and 8-20 words per sentence
    std::cout << lipsum::GenerateParagraphList(100, 7, 10, 8, 20);
    return 0;
}
