#include<vector>
#include"Beam.h"
class BeamBase{
public:
  static size_t beams();
  BeamBase();
private:
  static std::vector<Beam> offsprings; //dynamic array of all the beams in the system
  static const std::vector<unsigned int> atomZ; //array of atomic numbers in the unit cell
  static const std::vector<float> atcorx; //arrays of cartezian coordinates of atoms within the unit cell relative to
  static const std::vector<float> atcory;
  static const std::vector<float> atcorz;
  static const float kpx, kpy, kpz, lmbd, mfps; //wave vector components of the primary electron wave, deBroglie wave length and mean free pass
  static size_t hmb; //variables for holding how many beams on the preceeding iterat
  void proliferate(Beam &);
};
