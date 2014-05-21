#ifndef __SRC_APPS_TERRAINEXPLORE_GLWRAPPERS_GLVERTEXARRAY_HPP
#define __SRC_APPS_TERRAINEXPLORE_GLWRAPPERS_GLVERTEXARRAY_HPP

#include <GL/glew.h>
#include <boost/shared_array.hpp>

class GLVertexArray
{
public:
    GLVertexArray();
    ~GLVertexArray();

    void create(GLsizei count = 1);
    void bind(int idx = 0);
    static void unbindAll();
protected:
    void removeBeforeDelete();

    boost::shared_array<GLuint> m_vao;
    GLsizei                     m_count;
};

#endif // __SRC_APPS_TERRAINEXPLORE_GLWRAPPERS_GLVERTEXARRAY_HPP

