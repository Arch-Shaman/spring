#include "SystemUtils.h"

#include "Sim/Ecs/Systems/BuildSystem.h"
#include "Sim/Ecs/Systems/EnvEconomySystem.h"
#include "Sim/Ecs/Systems/EnvResourceSystem.h"
#include "Sim/Ecs/Systems/FlowEconomySystem.h"
#include "Sim/Ecs/Systems/FluxEconomySystem.h"
#include "Sim/Ecs/Systems/UnitEconomyReportSystem.h"

namespace SystemUtils {

SystemUtils systemUtils;

void SystemUtils::InitSystems() {
    FlowEconomySystem::Init();
	FluxEconomySystem::Init();
	EnvResourceSystem::Init();
	EnvEconomySystem::Init();
	BuildSystem::Init();
	UnitEconomyReportSystem::Init();
}

}