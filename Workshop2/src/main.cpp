#include "utils/logger.hpp"
#include "data/data.hpp"
// #include "imu_data_reader.hpp"
// #include "imu_offline_reader.hpp"

using hyped::utils::Logger;
using hyped::data::ImuData;
using hyped::data::NavigationType;

int main() {
  Logger log_(true, 3);

  // test your imu_data_reader.cpp file
  log_.INFO("MAIN", "Reading from fake_imu_data.txt...");
  // call function that reads text file into vector
  // call function that iterates through vector and prints values

  // test your imu_offline_reader.cpp file
  log_.INFO("MAIN", "Reading from fake_imu_offline.txt...");
  // call function that reads text file into vector, changing offline to online
  // call function that iterates through vector and prints values

  return 0;
}