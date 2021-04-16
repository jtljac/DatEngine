#pragma once
#include <iostream>
#include <DatVFS/DataPtr.h>
#include "../BaseAsset.h"

class VertShader : public BaseAsset {
public:
	std::vector<char> byteCode;
	VertShader(std::vector<char> Data) : BaseAsset(true), byteCode(Data) {}
};