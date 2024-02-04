#include "glyph.h"

Glyph::Glyph(CodeType code, ModKey key)
: code(code)
, modKey(key)
{}

Glyph::CodeType Glyph::GetCode() const
{
    return code;
}

ModKey Glyph::GetModKey() const
{
    return modKey;
}
