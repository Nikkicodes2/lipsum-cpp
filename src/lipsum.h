//C wrapper
//must be statically linked to use
#ifndef LIPSUM_H
#define LIPSUM_H
#ifndef LIPSUM_BUILD_STATIC
#error Cannot use C wrapper without building a static library.
#endif
#ifdef __cplusplus
extern "C"
{
#endif
const char* lpsm_GenerateSentence(int minWord, int maxWord);
const char* lpsm_GenerateParagraph(int minSent, int maxSent, int minWord, int maxWord);
const char* lpsm_GenerateParagraphList(int paraCount, int minSent, int maxSent, int minWord, int maxWord);
const char* lpsm_GenerateWord(void);
#ifdef __cplusplus
}
#endif
#endif
