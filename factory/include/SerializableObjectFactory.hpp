/*
** EPITECH PROJECT, 2020
** SerializableObjectFactory.hpp
** File description:
** header for SerializableObjectFactory.c
*/


#pragma once

#include <unordered_map>
#include "polymorph/api/scripting/ASerializableObjectFactory.hpp"

namespace polymorph::engine::api
{
    class SerializableObjectFactory : public ASerializableObjectFactory
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

    public:
        SerializableObjectFactory();

        ~SerializableObjectFactory() override = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
    public:
    protected:
        void _registerEmptyBuildables(
                std::unordered_map<std::string, EmptyFactoryLambda> &emptyBuildables) override;

        void _registerCObjectBuildables(
                std::unordered_map<std::string, CObjectFactoryLambda> &componentBuildables) override;

        void _registerPObjectBuildables(
                std::unordered_map<std::string, PObjectFactoryLambda> &configBuildables) override;


    private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
    public:


    private:


//////////////////////--------------------------/////////////////////////

    };

}