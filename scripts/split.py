#!/bin/python3
# Basic script that splits a source "lorem ipsum" into the unique
# words it uses. It outputs it in C++ syntax to be put in lipsum.inl.
import re
import sys
from collections import Counter

def count_unique_words(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        text = f.read()
    words = re.findall(r'\b\w+\b', text.lower())
    word_counts = Counter(words)
    unique_words = list(word_counts.keys())
    return unique_words

if __name__ == "__main__":
    unique_words = count_unique_words("lipsum.txt")
    print("std::vector<std::string> lipsumVec = {", end="")
    for word in unique_words:
        print(f"\"{word}\",")
    print("};")

