#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec2 aTexCoord;

out vec2 TexCoord;
out vec4 PColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform vec3 sizes;

void main()
{
	gl_Position = projection * view * model * vec4(aPos, 1.0f);
	TexCoord = vec2(aTexCoord.x, aTexCoord.y);
	PColor = vec4(aPos.x/sizes.x, aPos.z/sizes.z, aPos.y/sizes.y, 1.0f);
}