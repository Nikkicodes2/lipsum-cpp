//C wrapper
#include "lipsum.h"
#include "lipsum.hpp"
const char* lpsm_GenerateSentence(int minWord, int maxWord)
{
    return lipsum::GenerateSentence(minWord, maxWord).c_str();
}
const char* lpsm_GenerateParagraph(int minSent, int maxSent, int minWord, int maxWord)
{
    return lipsum::GenerateParagraph(minSent, maxSent, minWord, maxWord).c_str();
}
const char* lpsm_GenerateParagraphList(int paraCount, int minSent, int maxSent, int minWord, int maxWord)
{
    return lipsum::GenerateParagraphList(paraCount, minSent, maxSent, minWord, maxWord).c_str();
}
