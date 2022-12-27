/*
** EPITECH PROJECT, 2020
** IFontModule
** File description:
** header for IFontModule.cpp
*/

#pragma once
#include <string>
#include <polymorph/engine/api/plugin/Symbols.hpp>

namespace polymorph::graphical
{
    class IFont
    {
        public:
            virtual ~IFont() = default;
    };

}

SYMBOL_EXPORT(polymorph::graphical, Font, IFont, (std::string filepath))
