#include "BeamBase.h"

const float BeamBase::mfps = 1; // mean free pass of the electrons
const float BeamBase::kpx = 0; // primary electron wave vector cartesian components
const float BeamBase::kpy = 0; //...
const float BeamBase::kpz = 1; //...
size_t BeamBase::hmb = 0; // the array is initialized with only one (primary) beam in it, at element's index 0
const std::vector<unsigned int> BeamBase::atomZ({5,10,20,40,65});
const std::vector<float> BeamBase::atcorx({});
const std::vector<float> BeamBase::atcory({});
const std::vector<float> BeamBase::atcorz({});
std::vector<Beam> BeamBase::offsprings({Beam(BeamBase::kpx,BeamBase::kpy,BeamBase::kpz,1,0,0,0,0,0)});
//initialization of the flexible array of beams with one element, which is
//a primary Beam impinging with unity amplitude and null phase on a zeroth atom sitting in a (0,0,0) unit cell

size_t BeamBase::beams()
{ // this function tells you how many electron beams are currently in the array
  return BeamBase::offsprings.size();
}

void BeamBase::proliferate(Beam & beamtobranch)
{
  int prolx = beamtobranch.indx; int proly = beamtobranch.indy; int prolz = beamtobranch.indz;
  for (size_t i = 0; i < beamtobranch.atcnt; i++) {
    /* code */
  }
  for (size_t i = beamtobranch.atcnt + 1; i < (BeamBase::atomZ.size()-1); i++) {
    /* code */
  }
  //size_t aaa = beamtobranch.indx;
  //BeamBase::offsprings.push_back(beamtobranch);
}

BeamBase::BeamBase()
{ //this is a constructor, which should create a full set of multiply scattered electron beams
  do {
    size_t hmbind = BeamBase::hmb;
    BeamBase::hmb = BeamBase::offsprings.size();
    for (size_t i = hmbind; i <= (BeamBase::hmb-1); i++) BeamBase::proliferate(BeamBase::offsprings[i]);
  } while(BeamBase::offsprings.size() > BeamBase::hmb);
}
