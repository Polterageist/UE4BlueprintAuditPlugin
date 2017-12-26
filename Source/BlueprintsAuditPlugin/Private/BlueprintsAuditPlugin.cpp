// Copyright (c) 2017 Aleksandr Rybalka. Protected by MIT License. See LICENSE file for details.

#include "BlueprintsAuditPlugin.h"

#define LOCTEXT_NAMESPACE "FBlueprintsAuditPluginModule"

void FBlueprintsAuditPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FBlueprintsAuditPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlueprintsAuditPluginModule, BlueprintsAuditPlugin)