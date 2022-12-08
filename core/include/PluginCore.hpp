#pragma once

#include <polymorph/api/plugin/APlugin.hpp>
#include <polymorph/config/XmlComponent.hpp>

namespace polymorph::engine::api
{
    class PluginCore : public APlugin
    {
        public:
            ~PluginCore() override = default;

            void preUpdateInternalSystems(std::shared_ptr<Scene> &scene) override;

            void updateInternalSystems(std::shared_ptr<Scene> &scene) override;

            void postUpdateInternalSystems(std::shared_ptr<Scene> &scene) override;

            void startScripts(std::shared_ptr<Scene> &scene) override;

            void endScripts(std::shared_ptr<Scene> &scene) override;

            void createConfig(std::vector<std::shared_ptr<APluginConfig>> &configs) override;

            std::unique_ptr<AComponentFactory> createComponentFactory() override;

            std::unique_ptr<ASerializableObjectFactory> createSerializableObjectFactory() override;
    };

} // namespace polymorph::engine::api