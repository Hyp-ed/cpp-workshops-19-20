namespace hyped {

namespace data {

struct Sensor {
  bool operational;
};

typedef float NavigationType;
struct ImuData : Sensor {
  NavigationType timestamp;
  NavigationType x_acc;
  NavigationType y_acc;
  NavigationType z_acc;
};
}}