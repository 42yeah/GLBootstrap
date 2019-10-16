//
//  VAO.hpp
//  GLBootstrap
//
//  Created by apple on 2019/9/24.
//  Copyright © 2019 aiofwa. All rights reserved.
//

#ifndef VAO_hpp
#define VAO_hpp

#include "../Ext/glad/glad.h"
#include <iostream>


class VAO {
public:
    VAO();
    void bufferData(std::size_t size, const void *data);
    void vertexAttribPointer(GLuint p1, GLuint p2, GLuint p3, GLboolean p4, GLint p5, const void *p6);
    void bind();

    GLuint vao, vbo;
};

#endif /* VAO_hpp */
