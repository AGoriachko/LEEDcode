#include "Beam.h"


Beam::Beam(float k1, float k2, float k3, float ampltd, float phase, int u, int v, int w, unsigned int nmbr)
	: kx ( k1 ), ky (k2), kz (k3), A (ampltd), phi (phase), indx (u), indy (v), indz (w), atcnt (nmbr)
{
}
