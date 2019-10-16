//
//  VAO.cpp
//  GLBootstrap
//
//  Created by apple on 2019/9/24.
//  Copyright © 2019 aiofwa. All rights reserved.
//

#include "VAO.hpp"


VAO::VAO() {
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
}

void VAO::bind() { 
    glBindVertexArray(vao);
}

void VAO::bufferData(std::size_t size, const void *data) {
    glBindVertexArray(vao);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 3, nullptr);
}

void VAO::vertexAttribPointer(GLuint p1, GLuint p2, GLuint p3, GLboolean p4, GLint p5, const void *p6) {
    bind();
    glEnableVertexAttribArray(p1);
    glVertexAttribPointer(p1, p2, p3, p4, p5, p6);
}


