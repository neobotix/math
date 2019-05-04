
#ifndef INCLUDE_AUTOMY_MATH_MATRIX4D_H_
#define INCLUDE_AUTOMY_MATH_MATRIX4D_H_

#include "Matrix.h"


namespace automy {
namespace math {

class Matrix4d : public Matrix<double, 4, 4> {
public:
	Matrix4d() {}
	
	Matrix4d(const Matrix<double, 4, 4>& mat) : Matrix(mat) {}
	
};


} // math
} // automy


namespace vnx {

inline void read(TypeInput& in, ::automy::math::Matrix4d& value, const TypeCode* type_code, const uint16_t* code) {
	value.read(in, type_code, code);
}

inline void write(TypeOutput& out, const ::automy::math::Matrix4d& value, const TypeCode* type_code, const uint16_t* code) {
	value.write(out, type_code, code);
}

inline void read(std::istream& in, ::automy::math::Matrix4d& value) {
	value.read(in);
}

inline void write(std::ostream& out, const ::automy::math::Matrix4d& value) {
	value.write(out);
}

inline void accept(Visitor& visitor, const ::automy::math::Matrix4d& value) {
	value.accept(visitor);
}


} // vnx

#endif /* MATH_INCLUDE_MATH_MATRIX4D_H_ */
