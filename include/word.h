#ifndef INCLUDE_WORD_H
#define INCLUDE_WORD_H

#include "glyph.h"
#include <vector>

enum class GlyphState
{
    virgin,
    correct,
    incorrect
};

class Word
{
public:
    void ReceiveGlyph(Glyph gl);

private:
    struct GlyphWrap
    {
        Glyph glyph;
        GlyphState state = GlyphState::virgin;
    };
    using GlyphVec = std::vector<GlyphWrap>;
    GlyphVec glyphs;
    GlyphVec::size_type current_glyph;
};

#endif  // end of include guard: INCLUDE_WORD_H
