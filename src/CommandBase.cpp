#include "CommandBase.h"
//#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
//ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::pOI = NULL;
DriveTrain* CommandBase::pDriveTrain = NULL;
BIOS* CommandBase::pBIOS = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	pDriveTrain = new DriveTrain();
	pBIOS = new BIOS();
	pOI = new OI();
}
