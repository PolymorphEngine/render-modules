/*
** EPITECH PROJECT, 2020
** ICursorModule
** File description:
** header for ICursorModule.cpp
*/

#pragma once
#include <string>
#include <polymorph/api/plugin/Symbols.hpp>

namespace polymorph::graphical
{
    class ICursor
    {
        public:
            virtual ~ICursor() = default;

            virtual bool isOnScreen() = 0;

            virtual int getMouseX() = 0;

            virtual int getMouseY() = 0;
    };

}

SYMBOL_EXPORT(polymorph::graphical, Cursor, ICursor, ())
