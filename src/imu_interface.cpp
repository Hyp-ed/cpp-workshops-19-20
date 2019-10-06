#include "data/data.hpp"

namespace hyped {

using data::ImuData;

class ImuInterface {
 public:
  /**
   * @brief Check if sensor is responding, i.e. connected to the system
   * @return true - if sensor is online
   */
  virtual bool isOnline() = 0;

  /**
   * @brief Get IMU data
   * @param imu - output pointer to be filled by this sensor
   */
  virtual void getData(ImuData* imu) = 0;
};

}  // namespace hypedg
