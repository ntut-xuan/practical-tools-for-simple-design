#include "Util/TransformUtils.hpp"

namespace Util {

glm::mat4 TransformToMat4(const Transform &transform, const float zIndex) {
    constexpr glm::mat4 eye(1.F);

    // TODO: TRS comment
    return glm::translate(eye, {transform.translation, zIndex}) *
           glm::rotate(eye, transform.rotation, glm::vec3(0, 0, 1)) *
           glm::scale(eye, {transform.scale, 1});
}

} // namespace Util