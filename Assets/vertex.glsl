#version 330 core

uniform float time;

layout (location = 0) in vec3 aPos;


void main() {
    vec3 pos = aPos;
    pos.x = pos.x * sin(time) + tan(time) * 0.1;
    pos.y = pos.y * cos(time) + cos(time) * 0.1;
    gl_Position = vec4(pos, 1.0);
}
