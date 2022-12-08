#include "../include/PluginCore.hpp"
#include "../../factory/include/ComponentFactory.hpp"
#include "../../factory/include/SerializableObjectFactory.hpp"

namespace polymorph::engine::api
{
    void PluginCore::preUpdateInternalSystems(std::shared_ptr<Scene> &scene)
    {
    }

    void PluginCore::updateInternalSystems(std::shared_ptr<Scene> &scene)
    {
    }

    void PluginCore::postUpdateInternalSystems(std::shared_ptr<Scene> &scene)
    {
    }

    void PluginCore::startScripts(std::shared_ptr<Scene> &scene)
    {
    }

    void PluginCore::endScripts(std::shared_ptr<Scene> &scene)
    {
    }

    void PluginCore::createConfig(std::vector<std::shared_ptr<APluginConfig>> &configs)
    {
    }

    std::unique_ptr<AComponentFactory> PluginCore::createComponentFactory()
    {
        return std::unique_ptr<AComponentFactory>(new ComponentFactory());
    }

    std::unique_ptr<ASerializableObjectFactory> PluginCore::createSerializableObjectFactory()
    {
        return std::unique_ptr<ASerializableObjectFactory>(new SerializableObjectFactory());
    }
}