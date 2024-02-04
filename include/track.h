#ifndef INCLUDE_TRACK_H
#define INCLUDE_TRACK_H

#include "glyph.h"
#include <vector>

class Word;

class Track
{
public:
    void ReceiveGlyph(Glyph gl);

private:
    using WordVec = std::vector<Word>;
    WordVec words;
    WordVec::size_type current_word;
};

#endif  // end of include guard: INCLUDE_TRACK_H
