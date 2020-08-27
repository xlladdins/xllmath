// xll_math.cpp - Excel add-in for functions in the math category.
// Uncomment to build for pre 2007 Excel
//#define XLOPERX XLOPER
#include <cmath>
#include "xll/xll/xll.h"

using namespace xll;
	
AddIn xai_abs(
	Function(XLL_LONG, "xll_math_abs", "MATH.ABS")
	.Args({
		Arg(XLL_LONG, "n", "Numeric value.")
	})
	.FunctionHelp("Calculates the absolute value of the argument.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/abs-labs-llabs-abs64.md")
);
int WINAPI xll_math_abs(int n)
{
#pragma XLLEXPORT

	return abs(n);
}
	
AddIn xai_acos(
	Function(XLL_DOUBLE, "xll_math_acos", "MATH.ACOS")
	.Args({
		Arg(XLL_DOUBLE, "x", "Value between -1 and 1, for which to calculate the arccosine (the inverse cosine).")
	})
	.FunctionHelp("Calculates the arccosine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/acos-acosf-acosl.md")
);
double WINAPI xll_math_acos(double x)
{
#pragma XLLEXPORT

	return acos(x);
}
	
AddIn xai_acosh(
	Function(XLL_DOUBLE, "xll_math_acosh", "MATH.ACOSH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the inverse hyperbolic cosine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/acosh-acoshf-acoshl.md")
);
double WINAPI xll_math_acosh(double x)
{
#pragma XLLEXPORT

	return acosh(x);
}
	
AddIn xai_asin(
	Function(XLL_DOUBLE, "xll_math_asin", "MATH.ASIN")
	.Args({
		Arg(XLL_DOUBLE, "x", "Value whose arcsine is to be calculated.")
	})
	.FunctionHelp("Calculates the arcsine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/asin-asinf-asinl.md")
);
double WINAPI xll_math_asin(double x)
{
#pragma XLLEXPORT

	return asin(x);
}
	
AddIn xai_asinh(
	Function(XLL_DOUBLE, "xll_math_asinh", "MATH.ASINH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the inverse hyperbolic sine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/asinh-asinhf-asinhl.md")
);
double WINAPI xll_math_asinh(double x)
{
#pragma XLLEXPORT

	return asinh(x);
}
	
AddIn xai_atan(
	Function(XLL_DOUBLE, "xll_math_atan", "MATH.ATAN")
	.Args({
		Arg(XLL_DOUBLE, "x", "Any numbers.")
	})
	.FunctionHelp("Calculates the arctangent of x (atan, atanf, and atanl) or the arctangent of y/x (atan2, atan2f, and atan2l).")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md")
);
double WINAPI xll_math_atan(double x)
{
#pragma XLLEXPORT

	return atan(x);
}
	
AddIn xai_atanh(
	Function(XLL_DOUBLE, "xll_math_atanh", "MATH.ATANH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the inverse hyperbolic tangent.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/atanh-atanhf-atanhl.md")
);
double WINAPI xll_math_atanh(double x)
{
#pragma XLLEXPORT

	return atanh(x);
}
	
AddIn xai_cbrt(
	Function(XLL_DOUBLE, "xll_math_cbrt", "MATH.CBRT")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value")
	})
	.FunctionHelp("Calculates the cube root.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/cbrt-cbrtf-cbrtl.md")
);
double WINAPI xll_math_cbrt(double x)
{
#pragma XLLEXPORT

	return cbrt(x);
}
	
AddIn xai_ceil(
	Function(XLL_DOUBLE, "xll_math_ceil", "MATH.CEIL")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the ceiling of a value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/ceil-ceilf-ceill.md")
);
double WINAPI xll_math_ceil(double x)
{
#pragma XLLEXPORT

	return ceil(x);
}
	
AddIn xai__chgsign(
	Function(XLL_DOUBLE, "xll_math__chgsign", "MATH._CHGSIGN")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to be changed.")
	})
	.FunctionHelp("Reverses the sign of a floating-point argument.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/chgsign-chgsignf-chgsignl.md")
);
double WINAPI xll_math__chgsign(double x)
{
#pragma XLLEXPORT

	return _chgsign(x);
}
	
AddIn xai_copysign(
	Function(XLL_DOUBLE, "xll_math_copysign", "MATH.COPYSIGN")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value that's returned as the magnitude of the result."),
		Arg(XLL_DOUBLE, "y", "The floating-point value that's returned as the sign of the result.")
	})
	.FunctionHelp("Returns a value that has the magnitude of one argument and the sign of another.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md")
);
double WINAPI xll_math_copysign(double x, double y)
{
#pragma XLLEXPORT

	return copysign(x, y);
}
	
AddIn xai_cos(
	Function(XLL_DOUBLE, "xll_math_cos", "MATH.COS")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the cosine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/cos-cosf-cosl.md")
);
double WINAPI xll_math_cos(double x)
{
#pragma XLLEXPORT

	return cos(x);
}
	
AddIn xai_cosh(
	Function(XLL_DOUBLE, "xll_math_cosh", "MATH.COSH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the hyperbolic cosine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/cosh-coshf-coshl.md")
);
double WINAPI xll_math_cosh(double x)
{
#pragma XLLEXPORT

	return cosh(x);
}
	
AddIn xai_erf(
	Function(XLL_DOUBLE, "xll_math_erf", "MATH.ERF")
	.Args({
		Arg(XLL_DOUBLE, "x", "A floating-point value.")
	})
	.FunctionHelp("Computes the error function or the complementary error function of a value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/erf-erff-erfl-erfc-erfcf-erfcl.md")
);
double WINAPI xll_math_erf(double x)
{
#pragma XLLEXPORT

	return erf(x);
}
	
AddIn xai_exp(
	Function(XLL_DOUBLE, "xll_math_exp", "MATH.EXP")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to exponentiate the natural logarithm base")
	})
	.FunctionHelp("Calculates the exponential.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/exp-expf.md")
);
double WINAPI xll_math_exp(double x)
{
#pragma XLLEXPORT

	return exp(x);
}
	
AddIn xai_exp2(
	Function(XLL_DOUBLE, "xll_math_exp2", "MATH.EXP2")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value of the exponent.")
	})
	.FunctionHelp("Computes 2 raised to the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/exp2-exp2f-exp2l.md")
);
double WINAPI xll_math_exp2(double x)
{
#pragma XLLEXPORT

	return exp2(x);
}
	
AddIn xai_expm1(
	Function(XLL_DOUBLE, "xll_math_expm1", "MATH.EXPM1")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point exponential value.")
	})
	.FunctionHelp("Computes the base-e exponential of a value, minus one.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/expm1-expm1f-expm1l.md")
);
double WINAPI xll_math_expm1(double x)
{
#pragma XLLEXPORT

	return expm1(x);
}
	
AddIn xai_fabs(
	Function(XLL_DOUBLE, "xll_math_fabs", "MATH.FABS")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the absolute value of the floating-point argument.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fabs-fabsf-fabsl.md")
);
double WINAPI xll_math_fabs(double x)
{
#pragma XLLEXPORT

	return fabs(x);
}
	
AddIn xai_fdim(
	Function(XLL_DOUBLE, "xll_math_fdim", "MATH.FDIM")
	.Args({
		Arg(XLL_DOUBLE, "x", "The first value."),
		Arg(XLL_DOUBLE, "y", "The second value.")
	})
	.FunctionHelp("Determines the positive difference between the first and second values.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fdim-fdimf-fdiml.md")
);
double WINAPI xll_math_fdim(double x, double y)
{
#pragma XLLEXPORT

	return fdim(x, y);
}
	
AddIn xai_floor(
	Function(XLL_DOUBLE, "xll_math_floor", "MATH.FLOOR")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Calculates the floor of a value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/floor-floorf-floorl.md")
);
double WINAPI xll_math_floor(double x)
{
#pragma XLLEXPORT

	return floor(x);
}
	
AddIn xai_fma(
	Function(XLL_DOUBLE, "xll_math_fma", "MATH.FMA")
	.Args({
		Arg(XLL_DOUBLE, "x", "The first value to multiply."),
		Arg(XLL_DOUBLE, "y", "The second value to multiply."),
		Arg(XLL_DOUBLE, "z", "The value to add.")
	})
	.FunctionHelp("Multiplies two values together,  adds a third value, and then rounds the result, without losing any precision due to intermediary rounding.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fma-fmaf-fmal.md")
);
double WINAPI xll_math_fma(double x, double y, double z)
{
#pragma XLLEXPORT

	return fma(x, y, z);
}
	
AddIn xai_fmax(
	Function(XLL_DOUBLE, "xll_math_fmax", "MATH.FMAX")
	.Args({
		Arg(XLL_DOUBLE, "x", "The first value to compare."),
		Arg(XLL_DOUBLE, "y", "The second value to compare.")
	})
	.FunctionHelp("Determine the larger of two specified numeric values.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fmax-fmaxf-fmaxl.md")
);
double WINAPI xll_math_fmax(double x, double y)
{
#pragma XLLEXPORT

	return fmax(x, y);
}
	
AddIn xai_fmin(
	Function(XLL_DOUBLE, "xll_math_fmin", "MATH.FMIN")
	.Args({
		Arg(XLL_DOUBLE, "x", "The first value to compare."),
		Arg(XLL_DOUBLE, "y", "The second value to compare.")
	})
	.FunctionHelp("Determines the smaller of the two specified values.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fmin-fminf-fminl.md")
);
double WINAPI xll_math_fmin(double x, double y)
{
#pragma XLLEXPORT

	return fmin(x, y);
}
	
AddIn xai_fmod(
	Function(XLL_DOUBLE, "xll_math_fmod", "MATH.FMOD")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point values."),
		Arg(XLL_DOUBLE, "y", "Floating-point values.")
	})
	.FunctionHelp("Calculates the floating-point remainder.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fmod-fmodf.md")
);
double WINAPI xll_math_fmod(double x, double y)
{
#pragma XLLEXPORT

	return fmod(x, y);
}
	
AddIn xai__fpclass(
	Function(XLL_LONG, "xll_math__fpclass", "MATH._FPCLASS")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to test.")
	})
	.FunctionHelp("Returns a value indicating the floating-point classification of the argument.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/fpclass-fpclassf.md")
);
int WINAPI xll_math__fpclass(double x)
{
#pragma XLLEXPORT

	return _fpclass(x);
}
	
AddIn xai_frexp(
	Function(XLL_DOUBLE, "xll_math_frexp", "MATH.FREXP")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value."),
		Arg(XLL_LONG_, "expptr", "Pointer to stored integer exponent.")
	})
	.FunctionHelp("Gets the mantissa and exponent of a floating-point number.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/frexp.md")
);
double WINAPI xll_math_frexp(double x, int* expptr)
{
#pragma XLLEXPORT

	return frexp(x, expptr);
}
	
AddIn xai_hypot(
	Function(XLL_DOUBLE, "xll_math_hypot", "MATH.HYPOT")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point values."),
		Arg(XLL_DOUBLE, "y", "Floating-point values.")
	})
	.FunctionHelp("Calculates the hypotenuse.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md")
);
double WINAPI xll_math_hypot(double x, double y)
{
#pragma XLLEXPORT

	return hypot(x, y);
}
	
AddIn xai_ilogb(
	Function(XLL_LONG, "xll_math_ilogb", "MATH.ILOGB")
	.Args({
		Arg(XLL_DOUBLE, "x", "The specified value.")
	})
	.FunctionHelp("Retrieves an integer that represents the unbiased base-2 exponent of the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/ilogb-ilogbf-ilogbl2.md")
);
int WINAPI xll_math_ilogb(double x)
{
#pragma XLLEXPORT

	return ilogb(x);
}
	
AddIn xai_ldexp(
	Function(XLL_DOUBLE, "xll_math_ldexp", "MATH.LDEXP")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value."),
		Arg(XLL_LONG, "exp", "Integer exponent.")
	})
	.FunctionHelp("Multiplies a floating-point number by an integral power of two.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/ldexp.md")
);
double WINAPI xll_math_ldexp(double x, int exp)
{
#pragma XLLEXPORT

	return ldexp(x, exp);
}
	
AddIn xai_lgamma(
	Function(XLL_DOUBLE, "xll_math_lgamma", "MATH.LGAMMA")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value to compute.")
	})
	.FunctionHelp("Determines the natural logarithm of the absolute value of the gamma function of the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/lgamma-lgammaf-lgammal.md")
);
double WINAPI xll_math_lgamma(double x)
{
#pragma XLLEXPORT

	return lgamma(x);
}
	
AddIn xai_log(
	Function(XLL_DOUBLE, "xll_math_log", "MATH.LOG")
	.Args({
		Arg(XLL_DOUBLE, "x", "Value whose logarithm is to be found.")
	})
	.FunctionHelp("Calculates logarithms.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/log-logf-log10-log10f.md")
);
double WINAPI xll_math_log(double x)
{
#pragma XLLEXPORT

	return log(x);
}
	
AddIn xai_log1p(
	Function(XLL_DOUBLE, "xll_math_log1p", "MATH.LOG1P")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point argument.")
	})
	.FunctionHelp("Computes the natural logarithm of 1 plus the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/log1p-log1pf-log1pl2.md")
);
double WINAPI xll_math_log1p(double x)
{
#pragma XLLEXPORT

	return log1p(x);
}
	
AddIn xai_log2(
	Function(XLL_DOUBLE, "xll_math_log2", "MATH.LOG2")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value to determine the base-2 logarithm of.")
	})
	.FunctionHelp("Determines the binary (base-2) logarithm of the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/log2-log2f-log2l.md")
);
double WINAPI xll_math_log2(double x)
{
#pragma XLLEXPORT

	return log2(x);
}
	
AddIn xai_logb(
	Function(XLL_DOUBLE, "xll_math_logb", "MATH.LOGB")
	.Args({
		Arg(XLL_DOUBLE, "x", "A floating-point value.")
	})
	.FunctionHelp("Extracts the exponent value of a floating-point argument.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md")
);
double WINAPI xll_math_logb(double x)
{
#pragma XLLEXPORT

	return logb(x);
}
	
AddIn xai_modf(
	Function(XLL_DOUBLE, "xll_math_modf", "MATH.MODF")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value."),
		Arg(XLL_DOUBLE_, "intptr", "Pointer to stored integer portion.")
	})
	.FunctionHelp("Splits a floating-point value into fractional and integer parts.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/modf-modff-modfl.md")
);
double WINAPI xll_math_modf(double x, double* intptr)
{
#pragma XLLEXPORT

	return modf(x, intptr);
}
	
AddIn xai_nan(
	Function(XLL_DOUBLE, "xll_math_nan", "MATH.NAN")
	.Args({
		Arg(XLL_CSTRING, "input", "A string value.")
	})
	.FunctionHelp("Returns a quiet NaN value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/nan-nanf-nanl.md")
);
double WINAPI xll_math_nan(const char* input)
{
#pragma XLLEXPORT

	return nan(input);
}
	
AddIn xai_nearbyint(
	Function(XLL_DOUBLE, "xll_math_nearbyint", "MATH.NEARBYINT")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value to round.")
	})
	.FunctionHelp("Rounds the specified floating-point value to an integer, and returns that value in a floating-point format.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1.md")
);
double WINAPI xll_math_nearbyint(double x)
{
#pragma XLLEXPORT

	return nearbyint(x);
}
	
AddIn xai_nextafter(
	Function(XLL_DOUBLE, "xll_math_nextafter", "MATH.NEXTAFTER")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to start from."),
		Arg(XLL_DOUBLE, "y", "The floating-point value to go towards.")
	})
	.FunctionHelp("Returns the next representable floating-point value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/nextafter-functions.md")
);
double WINAPI xll_math_nextafter(double x, double y)
{
#pragma XLLEXPORT

	return nextafter(x, y);
}
	
AddIn xai_pow(
	Function(XLL_DOUBLE, "xll_math_pow", "MATH.POW")
	.Args({
		Arg(XLL_DOUBLE, "x", "Base."),
		Arg(XLL_DOUBLE, "y", "Exponent.")
	})
	.FunctionHelp("Calculates x raised to the power of y.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/pow-powf-powl.md")
);
double WINAPI xll_math_pow(double x, double y)
{
#pragma XLLEXPORT

	return pow(x, y);
}
	
AddIn xai_remainder(
	Function(XLL_DOUBLE, "xll_math_remainder", "MATH.REMAINDER")
	.Args({
		Arg(XLL_DOUBLE, "x", "The numerator."),
		Arg(XLL_DOUBLE, "y", "The denominator.")
	})
	.FunctionHelp("Computes the remainder of the quotient of two floating-point values, rounded to the nearest integral value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/remainder-remainderf-remainderl.md")
);
double WINAPI xll_math_remainder(double x, double y)
{
#pragma XLLEXPORT

	return remainder(x, y);
}
	
AddIn xai_remquo(
	Function(XLL_DOUBLE, "xll_math_remquo", "MATH.REMQUO")
	.Args({
		Arg(XLL_DOUBLE, "numer", "The numerator."),
		Arg(XLL_DOUBLE, "denom", "The denominator."),
		Arg(XLL_LONG_, "quo", "A pointer to an integer to store a value that has the sign and approximate magnitude of the quotient.")
	})
	.FunctionHelp("Computes the remainder of two integer values, and stores an integer value with the sign and approximate magnitude of the quotient in a location that's specified in a parameter.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/remquo-remquof-remquol.md")
);
double WINAPI xll_math_remquo(double numer, double denom, int* quo)
{
#pragma XLLEXPORT

	return remquo(numer, denom, quo);
}
	
AddIn xai_rint(
	Function(XLL_DOUBLE, "xll_math_rint", "MATH.RINT")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to round.")
	})
	.FunctionHelp("Rounds a floating-point value to the nearest integer in floating-point format.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/rint-rintf-rintl.md")
);
double WINAPI xll_math_rint(double x)
{
#pragma XLLEXPORT

	return rint(x);
}
	
AddIn xai__rotl(
	Function(XLL_LONG, "xll_math__rotl", "MATH._ROTL")
	.Args({
		Arg(XLL_LONG, "value", "Value to be rotated."),
		Arg(XLL_LONG, "shift", "Number of bits to shift.")
	})
	.FunctionHelp("Rotates bits to the left (_rotl) or right (_rotr).")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md")
);
unsigned int WINAPI xll_math__rotl(unsigned int value, int shift)
{
#pragma XLLEXPORT

	return _rotl(value, shift);
}
	
AddIn xai_round(
	Function(XLL_DOUBLE, "xll_math_round", "MATH.ROUND")
	.Args({
		Arg(XLL_DOUBLE, "x", "The floating-point value to round.")
	})
	.FunctionHelp("Rounds a floating-point value to the nearest integer.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/round-roundf-roundl.md")
);
double WINAPI xll_math_round(double x)
{
#pragma XLLEXPORT

	return round(x);
}
	
AddIn xai__scalb(
	Function(XLL_DOUBLE, "xll_math__scalb", "MATH._SCALB")
	.Args({
		Arg(XLL_DOUBLE, "x", "Double-precision, floating-point value."),
		Arg(XLL_LONG, "exp", "Long integer exponent.")
	})
	.FunctionHelp("Scales argument by a power of 2.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/scalb.md")
);
double WINAPI xll_math__scalb(double x, long exp)
{
#pragma XLLEXPORT

	return _scalb(x, exp);
}
	
AddIn xai_scalbn(
	Function(XLL_DOUBLE, "xll_math_scalbn", "MATH.SCALBN")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value."),
		Arg(XLL_LONG, "exp", "Integer exponent.")
	})
	.FunctionHelp("Multiplies a floating-point number by an integral power of FLT_RADIX.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md")
);
double WINAPI xll_math_scalbn(double x, int exp)
{
#pragma XLLEXPORT

	return scalbn(x, exp);
}
	
AddIn xai_sin(
	Function(XLL_DOUBLE, "xll_math_sin", "MATH.SIN")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the sine of a floating-point value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/sin-sinf-sinl.md")
);
double WINAPI xll_math_sin(double x)
{
#pragma XLLEXPORT

	return sin(x);
}
	
AddIn xai_sinh(
	Function(XLL_DOUBLE, "xll_math_sinh", "MATH.SINH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the hyperbolic sine.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/sinh-sinhf-sinhl.md")
);
double WINAPI xll_math_sinh(double x)
{
#pragma XLLEXPORT

	return sinh(x);
}
	
AddIn xai_sqrt(
	Function(XLL_DOUBLE, "xll_math_sqrt", "MATH.SQRT")
	.Args({
		Arg(XLL_DOUBLE, "x", "Non-negative floating-point value")
	})
	.FunctionHelp("Calculates the square root.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/sqrt-sqrtf-sqrtl.md")
);
double WINAPI xll_math_sqrt(double x)
{
#pragma XLLEXPORT

	return sqrt(x);
}
	
AddIn xai_tan(
	Function(XLL_DOUBLE, "xll_math_tan", "MATH.TAN")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the tangent.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/tan-tanf-tanl.md")
);
double WINAPI xll_math_tan(double x)
{
#pragma XLLEXPORT

	return tan(x);
}
	
AddIn xai_tanh(
	Function(XLL_DOUBLE, "xll_math_tanh", "MATH.TANH")
	.Args({
		Arg(XLL_DOUBLE, "x", "Angle in radians.")
	})
	.FunctionHelp("Calculates the hyperbolic tangent.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/tanh-tanhf-tanhl.md")
);
double WINAPI xll_math_tanh(double x)
{
#pragma XLLEXPORT

	return tanh(x);
}
	
AddIn xai_tgamma(
	Function(XLL_DOUBLE, "xll_math_tgamma", "MATH.TGAMMA")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value to find the gamma of.")
	})
	.FunctionHelp("Determines the gamma function of the specified value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/tgamma-tgammaf-tgammal.md")
);
double WINAPI xll_math_tgamma(double x)
{
#pragma XLLEXPORT

	return tgamma(x);
}
	
AddIn xai_trunc(
	Function(XLL_DOUBLE, "xll_math_trunc", "MATH.TRUNC")
	.Args({
		Arg(XLL_DOUBLE, "x", "The value to truncate.")
	})
	.FunctionHelp("Determines the nearest integer that is less than or equal to the specified floating-point value.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/trunc-truncf-truncl.md")
);
double WINAPI xll_math_trunc(double x)
{
#pragma XLLEXPORT

	return trunc(x);
}
	
AddIn xai__j0(
	Function(XLL_DOUBLE, "xll_math__j0", "MATH._J0")
	.Args({
		Arg(XLL_DOUBLE, "x", "Floating-point value.")
	})
	.FunctionHelp("Computes the Bessel function of the first or second kind, of orders 0, 1, or n. The Bessel functions are commonly used in the mathematics of electromagnetic wave theory.")
	.Category("MATH")
	.HelpTopic("https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md")
);
double WINAPI xll_math__j0(double x)
{
#pragma XLLEXPORT

	return _j0(x);
}
	