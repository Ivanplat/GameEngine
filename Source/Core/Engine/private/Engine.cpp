#include "pch.h"
#include "Core/Engine/public/Engine.h"

Engine::Engine() noexcept
{
}

Engine::~Engine() noexcept
{
}

void Engine::StartupEngine()
{
	if (!WindowRef)
	{
		WindowRef = new Window();
		WindowRef->Init();
	}
}

void Engine::ShutdownEngine()
{
	if (WindowRef)
	{
		delete WindowRef;
		WindowRef = nullptr;
	}
}
