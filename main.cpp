// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "elevator.h"

int main()
{
	building thebuilding;
	while (true)
	{
		thebuilding.mastertick();
		wait(1000);
		thebuilding.record_floor_reqs();
	}
    return 0;
}

