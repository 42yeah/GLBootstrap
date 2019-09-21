//
//  main.cpp
//  GLBootstrap
//
//  Created by apple on 2019/9/22.
//  Copyright © 2019 aiofwa. All rights reserved.
//

#include <iostream>
#include "../Ext/glad/glad.h"
#include <GLFW/glfw3.h>


int main(int argc, const char * argv[]) {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    GLFWwindow *win = glfwCreateWindow(800, 600, "Win", nullptr, nullptr);
    glfwMakeContextCurrent(win);
    gladLoadGL();
    
    // init GL parameters...
    glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
    
    while (!glfwWindowShouldClose(win)) {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glfwSwapBuffers(win);
    }
    return 0;
}
