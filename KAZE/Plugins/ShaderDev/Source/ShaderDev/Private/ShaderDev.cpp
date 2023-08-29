// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderDev.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FShaderDevModule"

void FShaderDevModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Start ShaderDev plugin"));

	
	FString PluginBaseDirectory = IPluginManager::Get().FindPlugin(TEXT("ShaderDev"))->GetBaseDir();
	FString ShaderDirectory = FPaths::Combine(PluginBaseDirectory, TEXT("Shaders"));


	UE_LOG(LogTemp, Warning, TEXT("Plugin Base Directory: %s"), *PluginBaseDirectory);
	UE_LOG(LogTemp, Warning, TEXT("Shader Directory: %s"), *ShaderDirectory);

	FString VirtualShaderDirectory = FString::Printf(TEXT("/Plugin/%s"), TEXT("ShaderDev"));
	// Create a mapping to the virtual shader directory shorthand.
	AddShaderSourceDirectoryMapping(VirtualShaderDirectory, ShaderDirectory);


	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FShaderDevModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Shutdown ShaderDev plugin"));
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShaderDevModule, ShaderDev)