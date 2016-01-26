#include "icartdaq-core/Overlays/CAEN2795Fragment.hh"

#include "cetlib/exception.h"

#if 0
namespace {
  unsigned int pop_count (unsigned int n) {
    unsigned int c; 
    for (c = 0; n; c++) n &= n - 1; 
    return c;
  }
}
#endif


std::ostream & demo::operator << (std::ostream & os, CAEN2795Fragment const & f) {
  os << "CAEN2795Fragment event size: "
     << f.hdr_event_size()
     << ", run number: "
     << f.hdr_run_number()
     << "\n";

  return os;
}
