#pragma once
#include "AssetFactory.h"
#include "../Assets/BaseAsset.h"
#include "../Assets/Shaders/FragShader.h"

class FragShaderFactory : public AssetFactory {
public:
	BaseAsset* load(std::vector<char>& data) override {
		return new FragShader(data);
	}
};