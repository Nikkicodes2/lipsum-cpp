# lipsum-cpp

Simple single-header library for generating sample Lorem Ipsum text in C++.

## Usage

Copy `lipsum.hpp` and `lipsum.inl` into your project's source code, or alternatively include it in CMake.

For static library or C wrapper builds, it is recommended to use CMake. Build it with the option `LPSM_BUILD_STATIC` equal to **`ON`**, or for C wrapper builds set options `LSPM_BUILD_STATIC` and `LSPM_BUILD_CWRAPPER` equal to **`ON`**.

## Examples

### C++

```cpp
#define LIPSUM_IMPLEMENTATION
#include "lipsum.hpp"

int main()
{
    //Generate a sentence with 4-12 words (default)
    std::cout << lipsum::GenerateSentence() << '\n';
    //Generate a sentence with 6-20 words
    std::cout << lipsum::GenerateSentence(6, 20) << '\n';
    //Generate a paragraph with 5-8 sentences 
    //and 4-12 words per sentence (default)
    std::cout << lipsum::GenerateParagraph();
    //Generate a paragraph with 7-9 sentences and 6-20 words per sentence
    std::cout << lipsum::GenerateParagraph(7, 9, 6, 20);
    //Generate five paragraphs with 5-8 sentences
    //and 4-12 words per sentence (default)
    std::cout << lipsum::GenerateParagraphList();
    //Generate three paragraphs wih 7-9 sentences and 6-20 words per sentence
    std::cout << lipsum::GenerateParagraphList(3, 7, 9, 6, 20);
    return 0;
}

```

### C

```c
#include "lipsum.h"
#include <stdio.h>

int main(void)
{
    //Generate a sentence with 4-12 words
    printf("%s\n", lpsm_GenerateSentence(4, 12));
    //Generate a sentence with 6-20 words
    printf("%s\n", lpsm_GenerateSentence(6, 20));
    //Generate a paragraph with 5-8 sentences
    //and 4-12 words per sentence
    printf("%s", lpsm_GenerateParagraph(5, 8, 4, 12));
    //Generate a paragraph with 7-9 sentences
    //and 6-20 words per sentence
    printf("%s", lpsm_GenerateParagraph(7, 9, 6, 20));
    //Generate five paragraphs with 5-8 sentences
    //and 4-12 words per sentence
    printf("%s", lpsm_GenerateParagraphList(5, 5, 8, 4, 12));
    //Generate three paragraphs with 7-9 sentences
    //and 6-20 words per sentence
    printf("%s", lpsm_GenerateParagraphList(3, 7, 9, 6, 20));
    return 0;
}
```
