#pragma once
const double nested_mul(const int aFirstOperand, const int aSecondOperand);

inline const double inl_mul(const int aFirstOperand, const int aSecondOperand)
{
	return (double)aFirstOperand * aSecondOperand;
}