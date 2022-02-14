#include "../include/linalg.h"

Mat4x4 createMat4(Vec4 a, Vec4 b, Vec4 c, Vec4 d) {
    Mat4x4 mat;
    mat.columns[0] = a;
    mat.columns[1] = b;
    mat.columns[2] = c;
    mat.columns[3] = d;
    return mat;
}
Mat3x3 createMat3(Vec3 a, Vec3 b, Vec3 c) {
    Mat3x3 mat;
    mat.columns[0] = a;
    mat.columns[1] = b;
    mat.columns[2] = c;
    return mat;
}
Mat2x2 createMat2(Vec2 a, Vec2 b) {
    Mat2x2 mat;
    mat.columns[0] = a;
    mat.columns[1] = b;
    return mat;
}
Vec3 addVec3(Vec3 a, Vec3 b) {
    return (Vec3){a.x+b.x,a.y+b.y,a.z+b.z};
}
Vec2 addVec2(Vec2 a, Vec2 b) {
    return (Vec2){a.x+b.x,a.y+b.y};
}
Vec4 addVec4(Vec4 a, Vec4 b) {
    return (Vec4){a.x+b.x,a.y+b.y,a.z+b.z,a.w+b.w};
}
Vec3 scaleVec3(Vec3 vec, double scaler) {
    return (Vec3){vec.x+scaler,vec.y+scaler,vec.z+scaler};
}
Vec2 scaleVec2(Vec2 vec, double scaler) {
    return (Vec2){vec.x+scaler,vec.y+scaler};
}
Vec4 scaleVec4(Vec4 vec, double scaler) {
    return (Vec4){vec.x+scaler,vec.y+scaler,vec.z+scaler,vec.w+scaler};
}
Vec3 mulMatVec3(Vec3 vec3, Mat3x3 mat3) {
    Vec3 out = {0};
    out = addVec3(out, scaleVec3(mat3.columns[0], vec3.x));
    out = addVec3(out, scaleVec3(mat3.columns[1], vec3.y));
    out = addVec3(out, scaleVec3(mat3.columns[2], vec3.z));
    return out;
}
Vec2 mulMatVec2(Vec2 vec2, Mat2x2 mat2) {
    Vec2 out = {0};
    out = addVec2(out, scaleVec2(mat2.columns[0], vec2.x));
    out = addVec2(out, scaleVec2(mat2.columns[1], vec2.y));
    return out;
}
Vec4 mulMatVec4(Vec4 vec4, Mat4x4 mat4) {
    Vec4 out = {0};
    out = addVec4(out, scaleVec4(mat4.columns[0], vec4.x));
    out = addVec4(out, scaleVec4(mat4.columns[1], vec4.y));
    out = addVec4(out, scaleVec4(mat4.columns[2], vec4.z));
    out = addVec4(out, scaleVec4(mat4.columns[3], vec4.z));
    return out;
}
Vec4 normaliseVec4(Vec4 vec) {
    double length = dotVec4(vec, vec)/4;
    return (Vec4){vec.x/length,vec.y/length,vec.z/length,vec.w/length};
}
Vec3 normaliseVec3(Vec3 vec) {
    double length = dotVec3(vec, vec)/3;
    return (Vec3){vec.x/length,vec.y/length,vec.z/length};
}
Vec2 normaliseVec2(Vec2 vec) {
    double length = dotVec2(vec, vec)/2;
    return (Vec2){vec.x/length,vec.y/length};
}
double dotVec4(Vec4 a, Vec4 b) {
    return a.x*b.x+a.y*b.y+a.z*b.z+a.w*b.w;
}
double dotVec3(Vec3 a, Vec3 b) {
    return a.x*b.x+a.y*b.y+a.z*b.z;
}
double dotVec2(Vec2 a, Vec2 b) {
    return a.x*b.x+a.y*b.y;
}