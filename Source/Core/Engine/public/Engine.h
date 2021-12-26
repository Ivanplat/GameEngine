#pragma once
#include "pch.h"
#include "Core/Windows/public/WindowsAPI.h"

class Engine
{
public:
	explicit Engine() noexcept;
	virtual ~Engine() noexcept;
public:
	virtual void StartupEngine();
	virtual void ShutdownEngine();
private:
	Window* WindowRef;
};