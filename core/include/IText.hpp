/*
** EPITECH PROJECT, 2020
** ITextModule
** File description:
** header for ITextModule.cpp
*/

#pragma once

#include <string>
#include <polymorph/api/plugin/Symbols.hpp>
#include "IFont.hpp"

namespace polymorph::graphical
{
    class IText
    {
        public:
            virtual ~IText() = default;

            virtual void setPosition(float x, float y) = 0;

            virtual void
            setColor(unsigned char r, unsigned char g, unsigned char b,
                     unsigned char a) = 0;

            virtual void setText(const std::string &text) = 0;

            virtual void
            draw(const IFont &font, float size, float spacing) = 0;
    };

}


SYMBOL_EXPORT(polymorph::graphical, Text, IText, (std::string text))
