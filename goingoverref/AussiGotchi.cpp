#include "AussiGotchi.h"

void feedAussio(Ausiigochi & aus)
{
	aus.hunger -= 10;
}

void waterAussio(Ausiigochi & aus)
{
	aus.thrist -= 10;
}

void abuseAussio(Ausiigochi & aus)
{
	aus.sanity += 20;
}

void cuddleAussio(Ausiigochi & aus)
{
	aus.happiness += 100;
	aus.sanity -= 5;
}
