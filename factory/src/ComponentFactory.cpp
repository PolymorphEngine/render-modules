/*
** EPITECH PROJECT, 2022
** ComponentFactory.cpp
** File description:
** ComponentFactory.cpp
*/

#include "../include/ComponentFactory.hpp"

polymorph::engine::api::ComponentFactory::ComponentFactory() : AComponentFactory()
{
}

void polymorph::engine::api::ComponentFactory::_registerBuildables(
        std::unordered_map<std::string, polymorph::engine::api::AComponentFactory::FactoryLambda> &buildables)
{

}