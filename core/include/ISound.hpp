/*
** EPITECH PROJECT, 2020
** ISoundModule.hpp
** File description:
** header for ISoundModule.c
*/

#pragma once
#include <string>
#include <polymorph/api/plugin/Symbols.hpp>

namespace polymorph::audio
{
    class ISound
    {
        public:
            virtual ~ISound(void) = default;

            virtual void play(void) = 0;

            virtual void playMulti(void) = 0;

            virtual void pause(void) = 0;

            virtual void stop(void) = 0;

            virtual void resume(void) = 0;

            virtual void setVolume(float volume) = 0;

            virtual bool isSoundPlaying(void) = 0;
    };
}

SYMBOL_EXPORT(polymorph::audio, Sound, ISound, (std::string filepath))