#pragma once

#include "Vitrae/Data/LevelOfDetail.hpp"
#include "Vitrae/Data/Typedefs.hpp"
#include "Vitrae/Params/ParamSpec.hpp"
#include "Vitrae/Params/Standard.hpp"
#include "dynasma/pointer.hpp"

namespace VitraePluginFormGeneration
{
    /**
     * Namespace containing commonly used ParamSpecs, identifiable by their string names
     */
    namespace StandardParam
    {
        using namespace Vitrae::StandardParam;

        // clang-format off

        /// @subsection Vertex properties
        inline const Vitrae::ParamSpec tangent   = {"tangent",   Vitrae::TYPE_INFO<glm::vec3>};
        inline const Vitrae::ParamSpec bitangent = {"bitangent", Vitrae::TYPE_INFO<glm::vec3>};

        // clang-format on

    } // namespace StandardParam
} // namespace Vitrae