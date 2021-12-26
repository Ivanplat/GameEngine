#pragma once
#include "pch.h"

class Window
{
public:
	explicit Window() noexcept;
	virtual ~Window() noexcept;
public:
	virtual void Init();
	virtual HWND GetMainWindow();
private:
	void CreateWindowsClass();
	void CreateApplicationWindow();
private:
	HWND MainWindow;
	WNDCLASSEX WndClass;
	WCHAR WindowName[MAX_STRING_LENGH];
	WCHAR WindowClassName[MAX_STRING_LENGH];
};