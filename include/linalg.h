#ifndef VEC2_H
#define VEC2_H

typedef struct Vec2 {
    double x;
    double y;
} Vec2;

typedef struct Vec3 {
    double x;
    double y;
    double z;
} Vec3;

typedef struct Vec4 {
    double x;
    double y;
    double z;
    double w;
} Vec4;

typedef struct Mat3x3 {
    // Each Vector will represent a column
    Vec3 columns[3];
} Mat3x3;

typedef struct Mat2x2 {
    // Each Vector will represent a column
    Vec2 columns[2];
} Mat2x2;

typedef struct Mat4x4 {
    // Each Vector will represent a column
    Vec4 columns[4];
} Mat4x4;

Mat4x4 createMat4(Vec4 a, Vec4 b, Vec4 c, Vec4 d);
Mat3x3 createMat3(Vec3 a, Vec3 b, Vec3 c);
Mat2x2 createMat2(Vec2 a, Vec2 b);
Vec3 addVec3(Vec3 a, Vec3 b);
Vec2 addVec2(Vec2 a, Vec2 b);
Vec4 addVec4(Vec4 a, Vec4 b);
Vec3 scaleVec3(Vec3 vec, double scaler);
Vec2 scaleVec2(Vec2 vec, double scaler);
Vec4 scaleVec4(Vec4 vec, double scaler);
Vec3 mulMatVec3(Vec3 vec3, Mat3x3 mat3);
Vec2 mulMatVec2(Vec2 vec2, Mat2x2 mat2);
Vec4 mulMatVec4(Vec4 vec4, Mat4x4 mat4);
Vec4 normaliseVec4(Vec4 vec);
Vec3 normaliseVec3(Vec3 vec);
Vec2 normaliseVec2(Vec2 vec);
Vec4 dotVec4(Vec4 a, Vec4 b);
Vec3 dotVec3(Vec3 a, Vec3 b);
Vec2 dotVec2(Vec2 a, Vec2 b);



#endif // VEC2_H