#include <system_configuration.h>
#include <unwind-cxx.h>
#include <utility.h>
#include <StandardCplusplus.h>
#include <serstream>
#include <vector>
#include <iterator>
class Hysteresis {
  public:
    std::vector<float> data;
    void insert(  float);
    bool isRising();
    float lastValue();
}; 
