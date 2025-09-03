# lipsum-cpp

Simple single-header library for generating sample Lorem Ipsum text in C++.

## Usage

Copy `lipsum.hpp` and `lipsum.inl` into your project's source code, or alternatively include it in CMake.

## Example

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
    return 0;
}

```
