#include "VitraePluginFormGeneration/Setup.hpp"

#include "VitraePluginFormGeneration/generators/meshNormals.hpp"
#include "VitraePluginFormGeneration/generators/meshTangents.hpp"
#include "VitraePluginFormGeneration/generators/modelSilhouette.hpp"

namespace VitraePluginFormGeneration
{

void setup(Vitrae::ComponentRoot &root)
{
    setupMeshNormalGenerator(root);
    setupMeshTangentGenerator(root);
    setupModelSilhouetteGenerator(root);
}

} // namespace VitraePluginFormGeneration