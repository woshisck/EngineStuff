#pragma once

#include "Application.h"

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 44444;

	HZ_INFO("HELLO Var = {0}!", a);
	//Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	//Hazel::Log::GetClientLogger()->info("Initialized Log!");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif