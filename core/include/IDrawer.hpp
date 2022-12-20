/*
** EPITECH PROJECT, 2020
** IDrawing
** File description:
** header for IDrawing.cpp
*/

#pragma once
#include <string>
#include <polymorph/api/plugin/Symbols.hpp>

namespace polymorph::graphical
{
    class IDrawer
    {
        public:
            virtual ~IDrawer() = default;

            virtual void
            clear(unsigned char r, unsigned char g, unsigned char b,
                  unsigned char a) = 0;

            virtual void beginDrawing() = 0;

            virtual void endDrawing() = 0;
    };

}

SYMBOL_EXPORT(polymorph::graphical, Drawer, IDrawer, ())
