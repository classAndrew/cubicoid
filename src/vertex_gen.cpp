#include "vertex_gen.h"
#include <math.h>
#include <iostream>

namespace cubicoid {
    const float a = 5;
    float m =2.5, n = 2.5;
    float x_paramaterized(float u, float v, float w) {
        return a*sin(v)*(1+0.2*sin(m*u)*sin(n*v))*cos(u)+w;
    }
    float y_paramaterized(float u, float v, float w) {
        return a*sin(v)*(1+0.2*sin(m*u)*sin(n*v))*sin(u)+w;
    }
    float z_paramaterized(float u, float v, float w) {
        return a*cos(v)*(1+0.2*sin(m*u)*sin(n*v))+w;
    }

    float u_transform(int i) {
        return 2.0f*M_PI/IPRECISION*i;
    }

    float v_transform(int j) {
        return M_PI/JPRECISION*j;
    }

    float w_transform(int k) {
        return 2.0f;
    }

    std::vector<float> gen_vertices() {
        std::vector<float> vertices;
        for (int k = 0; k < KPRECISION; k++) {
            for (int i = 0; i < IPRECISION; i++) {
                for (int j = 0; j < JPRECISION; j++) {
                    float u = u_transform(i), u1 = u_transform(i+1);
                    float v = v_transform(j), v1 = v_transform(j+1);
                    float w = w_transform(k), w1 = w_transform(k+1);

                    float x = x_paramaterized(u, v, w);
                    float y = y_paramaterized(u, v, w);
                    float z = z_paramaterized(u, v, w);

                    float x1 = x_paramaterized(u1, v, w);
                    float y1 = y_paramaterized(u1, v, w);
                    float z1 = z_paramaterized(u1, v, w);

                    float x2 = x_paramaterized(u, v1, w);
                    float y2 = y_paramaterized(u, v1, w);
                    float z2 = z_paramaterized(u, v1, w);

                    float x3 = x_paramaterized(u1, v1, w);
                    float y3 = y_paramaterized(u1, v1, w);
                    float z3 = z_paramaterized(u1, v1, w);

                    vertices.push_back(x);
                    vertices.push_back(z);
                    vertices.push_back(y);
                    vertices.push_back(0.0f);
                    vertices.push_back(0.0f);

                    vertices.push_back(x1);
                    vertices.push_back(z1);
                    vertices.push_back(y1);
                    vertices.push_back(1.0f);
                    vertices.push_back(0.0f);

                    vertices.push_back(x2);
                    vertices.push_back(z2);
                    vertices.push_back(y2);
                    vertices.push_back(0.0f);
                    vertices.push_back(1.0f);

                    vertices.push_back(x3);
                    vertices.push_back(z3);
                    vertices.push_back(y3);
                    vertices.push_back(1.0f);
                    vertices.push_back(1.0f);

                }
            }
        }
        return vertices;
    }
}

