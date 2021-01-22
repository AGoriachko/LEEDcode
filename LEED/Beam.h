//#include <vector>
class Beam
{
// represents an electron wave with a given wave vector impinging with ending amplitude & phase on a location containing an ending atom with ending coordinates
friend class BeamBase;
public:
  Beam (float = 0, float = 0, float = 0, float = 0, float = 0, int = 0, int = 0, int = 0, unsigned int = 0);
// constructor digests impinging wave vector components, ending amplitude and phase, indices of the ending unit cell, atom's number within the unit cell
private:
  float kx, ky, kz, A, phi;// components of an impinging wave vector, impinging amplitude and phase
  unsigned int atcnt; //atom's number within a unit cell
  int indx, indy, indz; //indices of the ending unit cell relative to the origin
};
