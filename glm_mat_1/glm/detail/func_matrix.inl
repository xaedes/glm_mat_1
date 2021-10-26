#include <glm/geometric.hpp>
#include <limits>

namespace glm{
namespace detail
{

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<1, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<1, 1, T, Q> call(mat<1, 1, T, Q> const& m)
		{
			mat<1, 1, T, Q> Result;
			Result[0][0] = m[0][0];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<1, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<2, 1, T, Q> call(mat<1, 2, T, Q> const& m)
		{
			mat<2, 1, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[1][0] = m[0][1];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<1, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<3, 1, T, Q> call(mat<1, 3, T, Q> const& m)
		{
			mat<3, 1, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[1][0] = m[0][1];
			Result[2][0] = m[0][2];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<1, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<4, 1, T, Q> call(mat<1, 4, T, Q> const& m)
		{
			mat<4, 1, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[1][0] = m[0][1];
			Result[2][0] = m[0][2];
			Result[3][0] = m[0][3];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<2, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<1, 2, T, Q> call(mat<2, 1, T, Q> const& m)
		{
			mat<1, 2, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<3, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<1, 3, T, Q> call(mat<3, 1, T, Q> const& m)
		{
			mat<1, 3, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<4, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<1, 4, T, Q> call(mat<4, 1, T, Q> const& m)
		{
			mat<1, 4, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[0][3] = m[3][0];
			return Result;
		}
	};


	template<typename T, qualifier Q, bool Aligned>
	struct compute_determinant<1, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(mat<1, 1, T, Q> const& m)
		{
			return m[0][0];
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_inverse<1, 1, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<1, 1, T, Q> call(mat<1, 1, T, Q> const& m)
		{
			mat<1, 1, T, Q> Inverse(static_cast<T>(1) / m[0][0]);
			return Inverse;
		}
	};

}//namespace detail


}//namespace glm


