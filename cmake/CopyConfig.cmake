# if not inside the plugin project but rather inside a project using the plugin
if (NOT "${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    # set the install path by default if it does not exists
    if (NOT POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH)
        set(POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH ${CMAKE_SOURCE_DIR})
    endif()

    # creating a Plugins folder if not created already
    if (NOT EXISTS "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/")
        file(MAKE_DIRECTORY "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/")
    endif()
    
    # copying the plugin files to the project
    if (NOT EXISTS "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/${PROJECT_NAME}")
        file(MAKE_DIRECTORY "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/${PROJECT_NAME}/")
        file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/Assets" DESTINATION "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/${PROJECT_NAME}")
        file(COPY_FILE "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pcf.plugin" "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/${PROJECT_NAME}/${PROJECT_NAME}.pcf.plugin")
        file(COPY_FILE "${CMAKE_CURRENT_SOURCE_DIR}/README.md" "${POLYMORPH_ENGINE_PLUGINS_CONFIG_PATH}/Plugins/${PROJECT_NAME}/README.md")
    endif()    

    # creating main plugin config files
    # if not inside a project using the plugin but rather the plugin project itself
elseif(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pcf.plugin")
    file(RENAME plugin-template.pcf.plugin ${PROJECT_NAME}.pcf.plugin RESULT 0)
    file(RENAME IncludeExport/polymorph IncludeExport/${NAMESPACE} RESULT 0)
    file(RENAME IncludeExport/polymorph/plugin-template.hpp IncludeExport/${NAMESPACE}/${PROJECT_NAME}.hpp RESULT 0)
endif()