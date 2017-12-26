// Copyright (c) 2017 Aleksandr Rybalka. Protected by MIT License. See LICENSE file for details.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FBlueprintsAuditPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};