#ifndef INCLUDE_GLYPH_H
#define INCLUDE_GLYPH_H

#include <cstdint>

enum class ModKey
{
    none,
    l_shift,
    r_shift,
    l_meta,
    r_meta,
    l_ctrl,
    r_ctrl
};

class Glyph
{
public:
    using CodeType = std::uint32_t;
    Glyph(CodeType code, ModKey key = ModKey::none);
    CodeType GetCode() const;
    ModKey GetModKey() const;

private:
    CodeType code;
    ModKey modKey;
};

#endif  // end of include guard: INCLUDE_GLYPH_H
