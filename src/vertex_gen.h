#ifndef CUBIC_VERTGEN_H__
#define CUBIC_VERTGEN_H__

#include <vector>
namespace cubicoid {

    float x_paramaterized(float u, float v, float w);
    float y_paramaterized(float u, float v, float w);
    float z_paramaterized(float u, float v, float w);

    float u_transform(int i);
    float v_transform(int j);
    float w_transform(int k);

    std::vector<float> gen_vertices();
}

#endif