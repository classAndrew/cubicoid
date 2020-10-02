#ifndef CUBIC_VERTGEN_H__
#define CUBIC_VERTGEN_H__

#include <vector>

#define IPRECISION 100
#define JPRECISION 100

// Typically for the third variable which is usually just a constant for f(x,y) plots
#define KPRECISION 1

namespace cubicoid {
    extern float m, n;
    float x_paramaterized(float u, float v, float w);
    float y_paramaterized(float u, float v, float w);
    float z_paramaterized(float u, float v, float w);

    float u_transform(int i);
    float v_transform(int j);
    float w_transform(int k);

    std::vector<float> gen_vertices();
}

#endif