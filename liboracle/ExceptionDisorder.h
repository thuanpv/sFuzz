#include <iostream>
#include "Common.h"

using namespace dev;
using namespace eth;
using namespace std;

namespace fuzzer {
  class ExceptionDisorder : public Oracle {
    public:
      bool analyze(CallLog callLog);
  };
}
