#pragma once
#include <iostream>
#include <DatVFS/DataPtr.h>
#include "../BaseAsset.h"

class FragShader : public BaseAsset {
public:
	std::vector<char> byteCode;
	FragShader(std::vector<char> Data) : BaseAsset(true), byteCode(Data) {}
};