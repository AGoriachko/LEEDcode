#include <iostream>
#include "BeamBase.h"
using namespace std;



int main()
{
  cout << "\n" << BeamBase::beams() << "\n";
  BeamBase();
  cout << "\n" << BeamBase::beams() << "\n";
  /*Beam b1 = Beam(0,0,0,0,0,0,0,0,0);
  BeamBase::offsprings.push_back(b1);
  cout << "\n" << BeamBase::offsprings.size() << "\n";
  Beam b2 = Beam(0,0,0,0,0,0,0,0,0);
  BeamBase::offsprings.push_back(b2);
  cout << "\n" << BeamBase::offsprings.size() << "\n";*/
}
